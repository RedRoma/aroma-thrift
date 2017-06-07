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

package tech.aroma.thrift.services;

import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.aroma.thrift.authentication.service.AuthenticationService;
import tech.aroma.thrift.notification.service.NotificationService;
import tech.aroma.thrift.service.AromaService;
import tech.sirwellington.alchemy.annotations.testing.IntegrationTest;
import tech.sirwellington.alchemy.annotations.testing.NetworkSensitive;
import tech.sirwellington.alchemy.test.junit.ThrowableAssertion;
import tech.sirwellington.alchemy.test.junit.runners.*;

import static org.hamcrest.Matchers.notNullValue;
import static org.junit.Assert.assertThat;

/**
 *
 * @author SirWellington
 */
@NetworkSensitive
@IntegrationTest
@Repeat(5)
@RunWith(AlchemyTestRunner.class)
public class ClientsIT 
{

    @Before
    public void setUp()
    {
    }

    @DontRepeat
    @Test(expected = IllegalAccessException.class)
    public void testConstructor() throws Exception
    {
        Clients.class.newInstance();
    }

    @Test
    public void testNewAuthenticationServiceClient() throws Exception
    {
        AuthenticationService.Client client = Clients.newAuthenticationServiceClient();
        assertThat(client, notNullValue());
        
        client.getApiVersion();
    }

    @Test
    public void testNewNotificationServiceClient() throws Exception
    {
        NotificationService.Client client = Clients.newNotificationServiceClient();
        assertThat(client, notNullValue());
        
        client.getApiVersion();
    }

    @Test
    public void testNewAromaServiceClient() throws Exception
    {
        AromaService.Client client = Clients.newAromaServiceClient();
        assertThat(client, notNullValue());
        
        client.getApiVersion();
    }

    @Test
    public void testNewPerRequestAuthenticationServiceClient() throws Exception
    {
        AuthenticationService.Iface client = Clients.newPerRequestAuthenticationServiceClient();
        assertThat(client, notNullValue());
        
        client.getApiVersion();
    }

}