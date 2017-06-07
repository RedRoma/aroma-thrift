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

import org.apache.thrift.protocol.TBinaryProtocol
import org.apache.thrift.protocol.TProtocol
import org.apache.thrift.transport.TSocket
import org.apache.thrift.transport.TTransportException
import org.slf4j.LoggerFactory
import tech.aroma.thrift.authentication.service.AuthenticationService
import tech.aroma.thrift.authentication.service.AuthenticationService.Iface
import tech.aroma.thrift.authentication.service.AuthenticationServiceConstants
import tech.aroma.thrift.endpoint.TcpEndpoint
import tech.aroma.thrift.notification.service.NotificationService
import tech.aroma.thrift.notification.service.NotificationServiceConstants
import tech.aroma.thrift.service.AromaService
import tech.aroma.thrift.service.AromaServiceConstants
import tech.sirwellington.alchemy.annotations.access.NonInstantiable
import java.util.concurrent.Callable
import java.util.concurrent.TimeUnit

/**
 * Provides clients for the Aroma Services.

 * @author SirWellington
 */
@NonInstantiable
class Clients
private constructor()
{

    init
    {
        throw IllegalAccessException("cannot instantiate")
    }

    companion object
    {
        private val LOG = LoggerFactory.getLogger(Clients::class.java)

        @Throws(TTransportException::class)
        @JvmStatic
        fun newAuthenticationServiceClient(): AuthenticationService.Client
        {
            val endpoint = AuthenticationServiceConstants.BETA_ENDPOINT

            val protocol = tryCreateProtocolAt(endpoint, "Authentication Service")
            return AuthenticationService.Client(protocol)
        }

        @Throws(TTransportException::class)
        @JvmStatic
        fun newPerRequestAuthenticationServiceClient(): AuthenticationService.Iface
        {
            val clientProvider = Callable<Iface> {

                try
                {
                    newAuthenticationServiceClient()
                }
                catch (ex: TTransportException)
                {
                    LOG.error("Failed to created new Authentication Service client.", ex)
                    throw RuntimeException("Could not create Authentication Service client", ex)
                }
            }

            val decorator = PerRequestAuthenticationService(clientProvider)

            return decorator
        }

        @Throws(TTransportException::class)
        @JvmStatic
        fun newAromaServiceClient(): AromaService.Client
        {
            val endpoint = AromaServiceConstants.BETA_ENDPOINT

            val protocol = tryCreateProtocolAt(endpoint, "Aroma Service")
            return AromaService.Client(protocol)
        }

        @Throws(TTransportException::class)
        @JvmStatic
        fun newNotificationServiceClient(): NotificationService.Client
        {
            val endpoint = NotificationServiceConstants.BETA_ENDPOINT
            val protocol = tryCreateProtocolAt(endpoint, "Notification Service")

            return NotificationService.Client(protocol)
        }

        @Throws(TTransportException::class)
        @JvmStatic
        private fun tryCreateProtocolAt(endpoint: TcpEndpoint, serviceName: String): TProtocol
        {
            val timeout = TimeUnit.SECONDS.toMillis(45)
            val transport = TSocket(endpoint.hostname, endpoint.port, timeout.toInt())
            try
            {
                transport.open()
            }
            catch (ex: TTransportException)
            {
                LOG.error("Failed to connect to {} at {}", serviceName, endpoint, ex)
                throw ex
            }

            val protocol = TBinaryProtocol(transport)
            return protocol
        }
    }
}

