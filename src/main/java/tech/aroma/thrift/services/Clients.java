/*
 * Copyright 2016 Aroma Tech.
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

import java.util.concurrent.TimeUnit;
import java.util.function.Supplier;
import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.protocol.TProtocol;
import org.apache.thrift.transport.TSocket;
import org.apache.thrift.transport.TTransport;
import org.apache.thrift.transport.TTransportException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.thrift.authentication.service.AuthenticationService;
import tech.aroma.thrift.authentication.service.AuthenticationServiceConstants;
import tech.aroma.thrift.endpoint.TcpEndpoint;
import tech.aroma.thrift.notification.service.NotificationService;
import tech.aroma.thrift.notification.service.NotificationServiceConstants;
import tech.aroma.thrift.service.AromaService;
import tech.aroma.thrift.service.AromaServiceConstants;
import tech.sirwellington.alchemy.annotations.access.NonInstantiable;

/**
 * Provides clients for the Aroma Services.
 *
 * @author SirWellington
 */
@NonInstantiable
public final class Clients
{

    private final static Logger LOG = LoggerFactory.getLogger(Clients.class);

    public static AuthenticationService.Client newAuthenticationServiceClient() throws TTransportException
    {
        TcpEndpoint endpoint = AuthenticationServiceConstants.BETA_ENDPOINT;

        TProtocol protocol = tryCreateProtocolAt(endpoint, "Authentication Service");
        return new AuthenticationService.Client(protocol);
    }

    public static AuthenticationService.Iface newPerRequestAuthenticationServiceClient() throws TTransportException
    {
        Supplier<AuthenticationService.Iface> clientProvider = () ->
            {
                try
                {
                    return newAuthenticationServiceClient();
                }
                catch (TTransportException ex)
                {
                    LOG.error("Failed to created new Authentication Service client.", ex);
                    throw new RuntimeException("Could not create Authentication Service client", ex);
                }
            };

        PerRequestAuthenticationService decorator = new PerRequestAuthenticationService(clientProvider);

        return decorator;
    }

    public static AromaService.Client newAromaServiceClient() throws TTransportException
    {
        TcpEndpoint endpoint = AromaServiceConstants.BETA_ENDPOINT;

        TProtocol protocol = tryCreateProtocolAt(endpoint, "Aroma Service");
        return new AromaService.Client(protocol);
    }

    public static NotificationService.Client newNotificationServiceClient() throws TTransportException
    {
        TcpEndpoint endpoint = NotificationServiceConstants.BETA_ENDPOINT;
        TProtocol protocol = tryCreateProtocolAt(endpoint, "Notification Service");

        return new NotificationService.Client(protocol);
    }

    private static TProtocol tryCreateProtocolAt(TcpEndpoint endpoint, String serviceName) throws TTransportException
    {
        long timeout = TimeUnit.SECONDS.toMillis(45);
        TTransport transport = new TSocket(endpoint.hostname, endpoint.port, (int) timeout);
        try
        {
            transport.open();
        }
        catch (TTransportException ex)
        {
            LOG.error("Failed to connect to {} at {}", serviceName, endpoint, ex);
            throw ex;
        }

        TProtocol protocol = new TBinaryProtocol(transport);
        return protocol;
    }
}
