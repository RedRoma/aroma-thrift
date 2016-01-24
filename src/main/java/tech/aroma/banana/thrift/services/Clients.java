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

package tech.aroma.banana.thrift.services;

import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.protocol.TProtocol;
import org.apache.thrift.transport.TSocket;
import org.apache.thrift.transport.TTransport;
import org.apache.thrift.transport.TTransportException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.banana.thrift.authentication.service.AuthenticationService;
import tech.aroma.banana.thrift.authentication.service.AuthenticationServiceConstants;
import tech.aroma.banana.thrift.endpoint.TcpEndpoint;
import tech.aroma.banana.thrift.notification.service.NotificationService;
import tech.aroma.banana.thrift.notification.service.NotificationServiceConstants;
import tech.sirwellington.alchemy.annotations.access.NonInstantiable;

/**
 * Provides clients for the Banana Services.
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

        TTransport transport = new TSocket(endpoint.hostname, endpoint.port, 30);
        try
        {
            transport.open();
        }
        catch (TTransportException ex)
        {
            LOG.error("Failed to connect to Authentication Service at {}", endpoint, ex);
            throw ex;
        }

        TProtocol protocol = new TBinaryProtocol(transport);

        AuthenticationService.Client client = new AuthenticationService.Client(protocol);
        return client;
    }

    public static NotificationService.Client newNotificationServiceClient() throws TTransportException
    {
        TcpEndpoint endpoint = NotificationServiceConstants.BETA_ENDPOINT;
        TTransport transport = new TSocket(endpoint.hostname, endpoint.port, 45);
        try
        {
            transport.open();
        }
        catch (TTransportException ex)
        {
            LOG.error("Failed to connect to Notification service at {}", endpoint, ex);
            throw ex;
        }
        
        TProtocol protocol = new TBinaryProtocol(transport);
        
        NotificationService.Client client = new NotificationService.Client(protocol);
        
        return client;
    }
}
