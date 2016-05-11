/*
 * Copyright 2016 RedRoma, Inc.
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

package tech.aroma.thrift.services;

import java.util.function.Supplier;
import org.apache.thrift.TException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.thrift.authentication.service.AuthenticationService;
import tech.aroma.thrift.authentication.service.CreateTokenRequest;
import tech.aroma.thrift.authentication.service.CreateTokenResponse;
import tech.aroma.thrift.authentication.service.GetTokenInfoRequest;
import tech.aroma.thrift.authentication.service.GetTokenInfoResponse;
import tech.aroma.thrift.authentication.service.InvalidateTokenRequest;
import tech.aroma.thrift.authentication.service.InvalidateTokenResponse;
import tech.aroma.thrift.authentication.service.VerifyTokenRequest;
import tech.aroma.thrift.authentication.service.VerifyTokenResponse;
import tech.aroma.thrift.exceptions.InvalidArgumentException;
import tech.aroma.thrift.exceptions.InvalidTokenException;
import tech.aroma.thrift.exceptions.OperationFailedException;
import tech.sirwellington.alchemy.annotations.access.Internal;
import tech.sirwellington.alchemy.annotations.concurrency.ThreadSafe;
import tech.sirwellington.alchemy.annotations.designs.patterns.DecoratorPattern;

import static tech.sirwellington.alchemy.annotations.designs.patterns.DecoratorPattern.Role.DECORATOR;
import static tech.sirwellington.alchemy.arguments.Arguments.checkThat;
import static tech.sirwellington.alchemy.arguments.assertions.Assertions.notNull;
import static tech.sirwellington.alchemy.thrift.clients.Clients.attemptClose;

/**
 * This class decorated a provider of Authentication Service clients, with the intention of
 * creating a new one for each request made. This ensures that the communication pipe is never broken.
 * 
 * @author SirWellington
 */
@Internal
@ThreadSafe
@DecoratorPattern(role = DECORATOR)
final class PerRequestAuthenticationService implements AuthenticationService.Iface
{

    private final static Logger LOG = LoggerFactory.getLogger(PerRequestAuthenticationService.class);

    private final Supplier<AuthenticationService.Iface> clientProvider;

    PerRequestAuthenticationService(Supplier<AuthenticationService.Iface> clientProvider)
    {
        checkThat(clientProvider).is(notNull());
        checkThat(clientProvider.get())
            .usingMessage("clientProvider returned null")
            .is(notNull());

        this.clientProvider = clientProvider;
    }

    @Override
    public double getApiVersion() throws TException
    {
        AuthenticationService.Iface client = clientProvider.get();

        try
        {
            return client.getApiVersion();
        }
        finally
        {
            attemptClose(client);
        }
    }

    @Override
    public CreateTokenResponse createToken(CreateTokenRequest request) throws OperationFailedException, 
                                                                              InvalidArgumentException,
                                                                              TException
    {
        AuthenticationService.Iface client = clientProvider.get();

        try
        {
            return client.createToken(request);
        }
        finally
        {
            attemptClose(client);
        }
    }

    @Override
    public GetTokenInfoResponse getTokenInfo(GetTokenInfoRequest request) throws OperationFailedException, 
                                                                                 InvalidTokenException,
                                                                                 InvalidArgumentException,
                                                                                 TException
    {
        AuthenticationService.Iface client = clientProvider.get();

        try
        {
            return client.getTokenInfo(request);
        }
        finally
        {
            attemptClose(client);
        }
    }

    @Override
    public InvalidateTokenResponse invalidateToken(InvalidateTokenRequest request) throws OperationFailedException,
                                                                                          InvalidTokenException,
                                                                                          InvalidArgumentException, 
                                                                                          TException
    {
        AuthenticationService.Iface client = clientProvider.get();

        try
        {
            return client.invalidateToken(request);
        }
        finally
        {
            attemptClose(client);
        }
    }

    @Override
    public VerifyTokenResponse verifyToken(VerifyTokenRequest request) throws OperationFailedException, 
                                                                              InvalidTokenException,
                                                                              InvalidArgumentException, 
                                                                              TException
    {
        AuthenticationService.Iface client = clientProvider.get();

        try
        {
            return client.verifyToken(request);
        }
        finally
        {
            attemptClose(client);
        }
    }

}
