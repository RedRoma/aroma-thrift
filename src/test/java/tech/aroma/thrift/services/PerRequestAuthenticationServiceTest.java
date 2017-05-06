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
import tech.aroma.thrift.authentication.service.AuthenticationService;
import tech.aroma.thrift.authentication.service.CreateTokenRequest;
import tech.aroma.thrift.authentication.service.CreateTokenResponse;
import tech.aroma.thrift.authentication.service.GetTokenInfoRequest;
import tech.aroma.thrift.authentication.service.GetTokenInfoResponse;
import tech.aroma.thrift.authentication.service.InvalidateTokenRequest;
import tech.aroma.thrift.authentication.service.InvalidateTokenResponse;
import tech.aroma.thrift.authentication.service.VerifyTokenRequest;
import tech.aroma.thrift.authentication.service.VerifyTokenResponse;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;
import tech.sirwellington.alchemy.test.junit.runners.DontRepeat;
import tech.sirwellington.alchemy.test.junit.runners.GeneratePojo;
import tech.sirwellington.alchemy.test.junit.runners.Repeat;

import static org.mockito.Mockito.atLeastOnce;
import static org.mockito.Mockito.verify;
import static org.mockito.Mockito.when;
import static tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows;

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
    @Test
    public void testConstructor() throws Exception
    {
        assertThrows(() -> new PerRequestAuthenticationService(null));
        assertThrows(() -> new PerRequestAuthenticationService(() -> null));
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
