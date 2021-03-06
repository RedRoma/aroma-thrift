/*
 * Copyright 2017 RedRoma Inc.
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
import tech.aroma.thrift.AromaConstants;
import tech.aroma.thrift.email.service.*;
import tech.sirwellington.alchemy.test.junit.runners.*;

import static org.hamcrest.Matchers.is;
import static org.hamcrest.Matchers.notNullValue;
import static org.junit.Assert.assertThat;

/**
 *
 * @author SirWellington
 */
@Repeat(10)
@RunWith(AlchemyTestRunner.class)
public class NoOpEmailServiceTest
{

    @GeneratePojo
    private SendEmailRequest request;

    private NoOpEmailService instance;

    @Before
    public void setUp() throws Exception
    {
        instance = new NoOpEmailService();
        setupData();
    }

    private void setupData() throws Exception
    {

    }

    @Test
    public void testGetApiVersion() throws Exception
    {
        double result = instance.getApiVersion();
        assertThat(result, is(AromaConstants.API_VERSION));
    }

    @Test
    public void testSendEmail() throws Exception
    {
        SendEmailResponse response = instance.sendEmail(request);
        assertThat(response, notNullValue());
    }

    @Test
    public void testNewInstance()
    {
        EmailService.Iface result = NoOpEmailService.newInstance();
        assertThat(result, notNullValue());
    }

}
