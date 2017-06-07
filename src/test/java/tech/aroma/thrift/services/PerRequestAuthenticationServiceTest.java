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

import java.util.function.Supplier;

import org.apache.thrift.protocol.TProtocol;
import org.apache.thrift.transport.TTransport;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import tech.aroma.thrift.authentication.service.*;
import tech.sirwellington.alchemy.test.junit.runners.*;

import static org.mockito.Mockito.*;
import static tech.sirwellington.alchemy.test.junit.ThrowableAssertion.*;

/**
 *
 * @author SirWellington
 */
@Repeat(10)
@RunWith(AlchemyTestRunner.class)
public class PerRequestAuthenticationServiceTest
{

    @Mock
    private AuthenticationService.Client delegate;

    @Mock
    private Supplier<AuthenticationService.Iface> clientProvider;

    @Mock
    private TProtocol protocol;

    @Mock
    private TTransport transport;

    @GeneratePojo
    private CreateTokenRequest createTokenRequest;

    @GeneratePojo
    private GetTokenInfoRequest getTokenInfoRequest;

    @GeneratePojo
    private InvalidateTokenRequest invalidateTokenRequest;

    @GeneratePojo
    private VerifyTokenRequest verifyTokenRequest;

    private PerRequestAuthenticationService instance;

    @Before
    public void setUp() throws Exception
    {
        setupMocks();

        instance = new PerRequestAuthenticationService(clientProvider);
    }

    private void setupMocks() throws Exception
    {
        when(clientProvider.get()).thenReturn(delegate);

        when(delegate.getInputProtocol()).thenReturn(protocol);
        when(delegate.getOutputProtocol()).thenReturn(protocol);

        when(protocol.getTransport()).thenReturn(transport);
    }

    @DontRepeat
    @Test(expected = IllegalArgumentException.class)
    public void testConstructor1() throws Exception
    {
        new PerRequestAuthenticationService(null);
    }

    @DontRepeat
    @Test(expected = IllegalArgumentException.class)
    public void testConstructor2() throws Exception
    {
        Supplier<AuthenticationService.Iface> supplier = new Supplier<AuthenticationService.Iface>()
        {
            @Override
            public AuthenticationService.Iface get()
            {
                return null;
            }
        };

        new PerRequestAuthenticationService(supplier);
    }

    @Test
    public void testGetApiVersion() throws Exception
    {
        instance.getApiVersion();
        verify(delegate).getApiVersion();
        verifyClientClosed();
    }

    @Test
    public void testCreateToken() throws Exception
    {
        CreateTokenResponse response = instance.createToken(createTokenRequest);
        
        verify(delegate).createToken(createTokenRequest);
        verifyClientClosed();
    }

    @Test
    public void testGetTokenInfo() throws Exception
    {
        GetTokenInfoResponse response = instance.getTokenInfo(getTokenInfoRequest);
        
        verify(delegate).getTokenInfo(getTokenInfoRequest);
        verifyClientClosed();
    }

    @Test
    public void testInvalidateToken() throws Exception
    {
        InvalidateTokenResponse response = instance.invalidateToken(invalidateTokenRequest);

        verify(delegate).invalidateToken(invalidateTokenRequest);
        verifyClientClosed();
    }

    @Test
    public void testVerifyToken() throws Exception
    {
        VerifyTokenResponse repsonse = instance.verifyToken(verifyTokenRequest);
        
        verify(delegate).verifyToken(verifyTokenRequest);
        verifyClientClosed();
    }

    private void verifyClientClosed()
    {
        verify(transport, atLeastOnce()).close();
    }

}
