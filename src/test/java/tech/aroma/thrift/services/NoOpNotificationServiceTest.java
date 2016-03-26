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

import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.aroma.thrift.authentication.AuthenticationToken;
import tech.aroma.thrift.events.Event;
import tech.aroma.thrift.exceptions.InvalidArgumentException;
import tech.aroma.thrift.notification.service.SendNotificationRequest;
import tech.aroma.thrift.notification.service.SendNotificationResponse;
import tech.aroma.thrift.service.AromaServiceConstants;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;
import tech.sirwellington.alchemy.test.junit.runners.GeneratePojo;
import tech.sirwellington.alchemy.test.junit.runners.Repeat;

import static org.hamcrest.Matchers.*;
import static org.junit.Assert.*;
import static tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows;

/**
 *
 * @author SirWellington
 */
@Repeat(10)
@RunWith(AlchemyTestRunner.class)
public class NoOpNotificationServiceTest 
{
    
    @GeneratePojo
    private AuthenticationToken token;
    
    @GeneratePojo
    private Event event;
    
    private SendNotificationRequest request;
    
    private NoOpNotificationService instance;
    
    @Before
    public void setUp()
    {
        instance = new NoOpNotificationService();
        
        setupData();
    }

    private void setupData()
    {
        request = new SendNotificationRequest()
            .setToken(token)
            .setEvent(event);
    }
    
    @Test
    public void testGetApiVersion() throws Exception
    {
        double apiVersion = instance.getApiVersion();
        assertThat(apiVersion, is(AromaServiceConstants.API_VERSION));
    }

    @Test
    public void testSendNotification() throws Exception
    {
        SendNotificationResponse response = instance.sendNotification(request);
        assertThat(response, notNullValue());
    }
    
    @Test
    public void testSendNotificationWithBadArgs() throws Exception
    {
        assertThrows(() -> instance.sendNotification(null))
            .isInstanceOf(InvalidArgumentException.class);
    }

}