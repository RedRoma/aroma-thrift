/*
 * Copyright 2017 RedRoma, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package tech.aroma.thrift.assertions

import tech.aroma.thrift.authentication.ApplicationToken
import tech.aroma.thrift.authentication.AuthenticationToken
import tech.aroma.thrift.authentication.UserToken
import tech.aroma.thrift.authentication.service.AuthenticationService
import tech.aroma.thrift.authentication.service.VerifyTokenRequest
import tech.aroma.thrift.exceptions.InvalidArgumentException
import tech.aroma.thrift.exceptions.InvalidTokenException
import tech.sirwellington.alchemy.annotations.access.NonInstantiable
import tech.sirwellington.alchemy.annotations.arguments.Required
import tech.sirwellington.alchemy.arguments.AlchemyAssertion
import tech.sirwellington.alchemy.arguments.ExceptionMapper
import tech.sirwellington.alchemy.arguments.FailedAssertionException
import tech.sirwellington.alchemy.arguments.assertions.*
import tech.sirwellington.alchemy.arguments.checkThat

/**
 * This class contains common Assertions made on Aroma Service requests and other data structures.

 * @author SirWellington
 */
@NonInstantiable
object AromaAssertions
{
    @JvmStatic
    fun withMessage(message: String): ExceptionMapper<InvalidArgumentException>
    {
        return ExceptionMapper { InvalidArgumentException(message) }
    }

    @JvmStatic
    @Throws(InvalidArgumentException::class)
    fun checkRequestNotNull(request: Any?)
    {
        checkNotNull(request, "missing request")
    }

    @JvmStatic
    @Throws(InvalidArgumentException::class)
    fun checkNotNull(reference: Any?, message: String)
    {
        checkThat(reference)
                .throwing(withMessage(message))
                .isA(nonNullReference())
    }

    @JvmStatic
    fun legalToken(): AlchemyAssertion<AuthenticationToken>
    {
        return AlchemyAssertion { t ->

            checkThat(t)
                    .usingMessage("token is null")
                    .isA(nonNullReference())

            checkThat(t.tokenId)
                    .usingMessage("token missing tokenId")
                    .isA(nonEmptyString())

            if (t.isSetOwnerId)
            {
                checkThat(t.ownerId)
                        .usingMessage("token missing ownerId")
                        .isA(nonEmptyString())
                        .usingMessage("token ownerId must be a UUID")
                        .isA(validUUID())
            }

        }
    }

    @JvmStatic
    fun validApplicationTokenIn(@Required authenticationService: AuthenticationService.Iface): AlchemyAssertion<ApplicationToken>
    {
        checkThat(authenticationService)
                .usingMessage("authentication service is null")
                .isA(notNull())

        return AlchemyAssertion { token ->

            checkThat(token)
                    .usingMessage("token is null")
                    .isA(notNull())

            checkThat(token.tokenId)
                    .usingMessage("token is missing tokenId")
                    .isA(nonEmptyString())

            val authToken = AuthenticationToken()
                    .setTokenId(token.tokenId)
                    .setOwnerId(token.applicationId)
                    .setOwnerName(token.applicationName)

            checkThat(authToken)
                    .isA(validTokenIn(authenticationService))
        }

    }

    @JvmStatic
    fun validUserTokenIn(@Required authenticationService: AuthenticationService.Iface): AlchemyAssertion<UserToken>
    {
        checkThat(authenticationService)
                .usingMessage("authentication service is null")
                .isA(notNull())

        return AlchemyAssertion { token ->

            checkThat(token)
                    .usingMessage("token is null")
                    .isA(notNull())

            checkThat(token.tokenId)
                    .usingMessage("token is missing tokenId")
                    .isA(nonEmptyString())

            val authToken = AuthenticationToken()
                    .setTokenId(token.tokenId)
                    .setOwnerId(token.userId)
                    .setOrganizationId(token.organization)

            checkThat(authToken)
                    .isA(validTokenIn(authenticationService))
        }
    }

    @JvmStatic
    fun validTokenIn(@Required authenticationService: AuthenticationService.Iface): AlchemyAssertion<AuthenticationToken>
    {
        checkThat(authenticationService)
                .usingMessage("authentication service is null")
                .isA(notNull())

        return AlchemyAssertion { token ->
            checkThat(token)
                    .isA(legalToken())

            val tokenId = token.getTokenId()

            checkThat(tokenId)
                    .usingMessage("tokenId is missing")
                    .isA(nonEmptyString())

            val request = VerifyTokenRequest()
                    .setTokenId(tokenId)

            if (token.isSetOwnerId)
            {
                request.setOwnerId(token.ownerId)
            }

            try
            {
                authenticationService.verifyToken(request)
            }
            catch (ex: InvalidTokenException)
            {
                throw FailedAssertionException("Token is not valid")
            }
            catch (ex: Exception)
            {
                throw FailedAssertionException("Could not contact Authentication Service", ex)
            }
        }
    }


}
