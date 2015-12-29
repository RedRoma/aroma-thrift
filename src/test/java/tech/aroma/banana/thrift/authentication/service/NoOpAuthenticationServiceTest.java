/*
 * Copyright 2015 Aroma Tech.
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

package tech.aroma.banana.thrift.authentication.service;

import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;

import static org.hamcrest.Matchers.*;
import static org.junit.Assert.*;

/**
 *
 * @author SirWellington
 */
@RunWith(AlchemyTestRunner.class)
public class NoOpAuthenticationServiceTest
{

    private NoOpAuthenticationService instance;

    @Before
    public void setUp()
    {
        instance = new NoOpAuthenticationService();
    }

    @Test
    public void testGetApiVersion() throws Exception
    {
        double result = instance.getApiVersion();
    }

    @Test
    public void testCreateToken() throws Exception
    {
        CreateTokenResponse response = instance.createToken(new CreateTokenRequest());
        assertThat(response, notNullValue());
    }

    @Test
    public void testGetTokenInfo() throws Exception
    {
        GetTokenInfoResponse response = instance.getTokenInfo(new GetTokenInfoRequest());
        assertThat(response, notNullValue());
    }

    @Test
    public void testInvalidateToken() throws Exception
    {
        InvalidateTokenResponse response = instance.invalidateToken(new InvalidateTokenRequest());
        assertThat(response, notNullValue());
    }

    @Test
    public void testVerifyToken() throws Exception
    {
        VerifyTokenResponse response = instance.verifyToken(new VerifyTokenRequest());
        assertThat(response, notNullValue());
    }

}
