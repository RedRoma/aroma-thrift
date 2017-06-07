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

package tech.aroma.thrift.functions

import org.slf4j.LoggerFactory
import tech.aroma.thrift.authentication.ApplicationToken
import tech.aroma.thrift.authentication.AuthenticationToken
import tech.aroma.thrift.authentication.TokenType
import tech.aroma.thrift.authentication.UserToken
import tech.sirwellington.alchemy.annotations.access.NonInstantiable
import java.util.function.Function

/**

 * @author SirWellington
 */
@NonInstantiable
object TokenFunctions
{

    private val LOG = LoggerFactory.getLogger(TokenFunctions::class.qualifiedName)

    @JvmStatic
    fun authTokenToAppTokenFunction(): Function<AuthenticationToken, ApplicationToken>
    {
        return Function<AuthenticationToken, ApplicationToken> { authToken ->

            val appToken = ApplicationToken()

            if (authToken != null)
            {
                appToken
                        .setTokenId(authToken!!.tokenId)
                        .setApplicationId(authToken!!.ownerId)
                        .setOrganization(authToken!!.organizationId)
                        .setApplicationName(authToken!!.ownerName)
                        .setTimeOfExpiration(authToken!!.timeOfExpiration)
                        .setStatus(authToken!!.status)
            }

            appToken
        }
    }

    @JvmStatic
    fun appTokenToAuthTokenFunction(): Function<ApplicationToken, AuthenticationToken>
    {
        return Function<ApplicationToken, AuthenticationToken> { appToken ->

            val authToken = AuthenticationToken()

            if (appToken != null)
            {
                authToken
                        .setTokenId(appToken!!.tokenId)
                        .setOwnerId(appToken!!.applicationId)
                        .setOwnerName(appToken!!.applicationName)
                        .setTimeOfExpiration(appToken!!.timeOfExpiration)
                        .setTokenType(TokenType.APPLICATION)
                        .setOrganizationId(appToken!!.organization)
                        .setStatus(appToken!!.status)

            }

            authToken
        }
    }

    @JvmStatic
    fun authTokenToUserTokenFunction(): Function<AuthenticationToken, UserToken>
    {
        return Function<AuthenticationToken, UserToken> { token ->

            val userToken = UserToken()

            if (token != null)
            {
                userToken
                        .setTokenId(token!!.tokenId)
                        .setUserId(token!!.ownerId)
                        .setOrganization(token!!.organizationId)
                        .setTimeOfExpiration(token!!.timeOfExpiration)
                        .setStatus(token!!.status)
            }

            userToken
        }
    }

    @JvmStatic
    fun userTokenToAuthTokenFunction(): Function<UserToken, AuthenticationToken>
    {
        return Function<UserToken, AuthenticationToken> { token ->

            val authToken = AuthenticationToken()

            if (token != null)
            {
                authToken
                        .setTokenId(token!!.tokenId)
                        .setOwnerId(token!!.userId)
                        .setOrganizationId(token!!.organization)
                        .setTimeOfExpiration(token!!.timeOfExpiration)
                        .setTokenType(TokenType.USER)
                        .setStatus(token!!.status)
            }

            authToken
        }
    }

}
