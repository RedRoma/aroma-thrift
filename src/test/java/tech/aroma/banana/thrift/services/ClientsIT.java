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

import org.junit.Before;
import org.junit.Ignore;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.aroma.banana.thrift.authentication.service.AuthenticationService;
import tech.aroma.banana.thrift.notification.service.NotificationService;
import tech.aroma.banana.thrift.service.BananaService;
import tech.sirwellington.alchemy.annotations.testing.IntegrationTest;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;
import tech.sirwellington.alchemy.test.junit.runners.Repeat;

import static org.hamcrest.Matchers.*;
import static org.junit.Assert.*;

/**
 *
 * @author SirWellington
 */
@IntegrationTest
@Repeat(5)
@RunWith(AlchemyTestRunner.class)
public class ClientsIT 
{

    @Before
    public void setUp()
    {
    }

    @Test
    public void testNewAuthenticationServiceClient() throws Exception
    {
        AuthenticationService.Client client = Clients.newAuthenticationServiceClient();
        assertThat(client, notNullValue());
        
        client.getApiVersion();
    }

    @Ignore
    @Test
    public void testNewNotificationServiceClient() throws Exception
    {
        NotificationService.Client client = Clients.newNotificationServiceClient();
        assertThat(client, notNullValue());
        
        client.getApiVersion();
    }

    @Test
    public void testNewBananaServiceClient() throws Exception
    {
        BananaService.Client client = Clients.newBananaServiceClient();
        assertThat(client, notNullValue());
        
        client.getApiVersion();
    }

}