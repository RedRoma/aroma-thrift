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

package tech.aroma.thrift.services

import org.apache.thrift.TException
import org.slf4j.LoggerFactory
import tech.aroma.thrift.authentication.service.AuthenticationService
import tech.aroma.thrift.authentication.service.CreateTokenRequest
import tech.aroma.thrift.authentication.service.CreateTokenResponse
import tech.aroma.thrift.authentication.service.GetTokenInfoRequest
import tech.aroma.thrift.authentication.service.GetTokenInfoResponse
import tech.aroma.thrift.authentication.service.InvalidateTokenRequest
import tech.aroma.thrift.authentication.service.InvalidateTokenResponse
import tech.aroma.thrift.authentication.service.VerifyTokenRequest
import tech.aroma.thrift.authentication.service.VerifyTokenResponse
import tech.aroma.thrift.exceptions.InvalidArgumentException
import tech.aroma.thrift.exceptions.InvalidTokenException
import tech.aroma.thrift.exceptions.OperationFailedException
import tech.sirwellington.alchemy.annotations.access.Internal
import tech.sirwellington.alchemy.annotations.concurrency.ThreadSafe
import tech.sirwellington.alchemy.annotations.designs.patterns.DecoratorPattern
import tech.sirwellington.alchemy.annotations.designs.patterns.DecoratorPattern.Role.DECORATOR
import tech.sirwellington.alchemy.arguments.assertions.*
import tech.sirwellington.alchemy.arguments.checkThat
import tech.sirwellington.alchemy.thrift.clients.Clients.attemptClose
import java.util.function.Supplier

/**
 * This class decorated a provider of Authentication Service clients, with the intention of
 * creating a new one for each request made. This ensures that the communication pipe is never broken.

 * @author SirWellington
 */
@Internal
@ThreadSafe
@DecoratorPattern(role = DECORATOR)
internal class PerRequestAuthenticationService(private val clientProvider: Supplier<AuthenticationService.Iface>) : AuthenticationService.Iface
{

    init
    {
        checkThat(clientProvider)
                .isA(nonNullReference())

        checkThat(clientProvider.get())
                .usingMessage("clientProvider returned null")
                .isA(nonNullReference())
    }

    @Throws(TException::class)
    override fun getApiVersion(): Double
    {
        val client = clientProvider.get()

        try
        {
            return client.apiVersion
        }
        finally
        {
            attemptClose(client)
        }
    }

    @Throws(OperationFailedException::class, InvalidArgumentException::class, TException::class)
    override fun createToken(request: CreateTokenRequest): CreateTokenResponse
    {
        val client = clientProvider.get()

        try
        {
            return client.createToken(request)
        }
        finally
        {
            attemptClose(client)
        }
    }

    @Throws(OperationFailedException::class, InvalidTokenException::class, InvalidArgumentException::class, TException::class)
    override fun getTokenInfo(request: GetTokenInfoRequest): GetTokenInfoResponse
    {
        val client = clientProvider.get()

        try
        {
            return client.getTokenInfo(request)
        }
        finally
        {
            attemptClose(client)
        }
    }

    @Throws(OperationFailedException::class, InvalidTokenException::class, InvalidArgumentException::class, TException::class)
    override fun invalidateToken(request: InvalidateTokenRequest): InvalidateTokenResponse
    {
        val client = clientProvider.get()

        try
        {
            return client.invalidateToken(request)
        }
        finally
        {
            attemptClose(client)
        }
    }

    @Throws(OperationFailedException::class, InvalidTokenException::class, InvalidArgumentException::class, TException::class)
    override fun verifyToken(request: VerifyTokenRequest): VerifyTokenResponse
    {
        val client = clientProvider.get()

        try
        {
            return client.verifyToken(request)
        }
        finally
        {
            attemptClose(client)
        }
    }

    companion object
    {

        private val LOG = LoggerFactory.getLogger(PerRequestAuthenticationService::class.java)
    }

}
