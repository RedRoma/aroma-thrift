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

package tech.aroma.thrift.assertions;

import org.apache.thrift.TException;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import tech.aroma.thrift.authentication.ApplicationToken;
import tech.aroma.thrift.authentication.AuthenticationToken;
import tech.aroma.thrift.authentication.UserToken;
import tech.aroma.thrift.authentication.service.AuthenticationService;
import tech.aroma.thrift.authentication.service.VerifyTokenRequest;
import tech.aroma.thrift.exceptions.InvalidArgumentException;
import tech.aroma.thrift.exceptions.InvalidTokenException;
import tech.sirwellington.alchemy.arguments.AlchemyAssertion;
import tech.sirwellington.alchemy.arguments.ExceptionMapper;
import tech.sirwellington.alchemy.arguments.FailedAssertionException;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;
import tech.sirwellington.alchemy.test.junit.runners.DontRepeat;
import tech.sirwellington.alchemy.test.junit.runners.GeneratePojo;
import tech.sirwellington.alchemy.test.junit.runners.GenerateString;
import tech.sirwellington.alchemy.test.junit.runners.Repeat;

import static org.hamcrest.Matchers.*;
import static org.junit.Assert.*;
import static org.mockito.Mockito.when;
import static tech.sirwellington.alchemy.generator.AlchemyGenerator.one;
import static tech.sirwellington.alchemy.generator.StringGenerators.alphabeticString;
import static tech.sirwellington.alchemy.generator.StringGenerators.strings;
import static tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows;

/**
 *
 * @author SirWellington
 */
@Repeat(50)
@RunWith(AlchemyTestRunner.class)
public class AromaAssertionsTest
{
    
    @Mock
    private AuthenticationService.Iface authenticationService;
    
    @GeneratePojo
    private ApplicationToken applicationToken;
    
    @GeneratePojo
    private UserToken userToken;

    @GeneratePojo
    private AuthenticationToken authenticationToken;

    @GenerateString
    private String tokenId;
    
    @GenerateString
    private String ownerId;
    private VerifyTokenRequest expectedRequest;
    
    @Before
    public void setUp()
    {
        authenticationToken.tokenId = tokenId;
        authenticationToken.ownerId = ownerId;
        
        applicationToken.tokenId = tokenId;
        applicationToken.applicationId = ownerId;
        
        userToken.tokenId = tokenId;
        userToken.userId = ownerId;
        
        expectedRequest = new VerifyTokenRequest()
            .setOwnerId(ownerId)
            .setTokenId(tokenId);
    }
    
    @DontRepeat
    @Test
    public void testCannotInstantiate() throws Exception
    {
        assertThrows(() -> new AromaAssertions())
            .isInstanceOf(IllegalAccessException.class);
        
        assertThrows(() -> AromaAssertions.class.newInstance())
            .isInstanceOf(IllegalAccessException.class);
    }
    
    @Test
    public void testCheckRequestNotNull() throws Exception
    {
        
        assertThrows(() -> AromaAssertions.checkRequestNotNull(null))
            .isInstanceOf(InvalidArgumentException.class);
        
        String string = one(strings());
        AromaAssertions.checkRequestNotNull(string);
    }
    
    @Test
    public void testCheckNotNull() throws Exception
    {
        String message = one(alphabeticString());
        AromaAssertions.checkNotNull(tokenId, message);
        
        assertThrows(() -> AromaAssertions.checkNotNull(null, message))
            .isInstanceOf(InvalidArgumentException.class)
            .hasMessage(message);
    }
    
    @Test
    public void testWithMessage()
    {
        
        String message = one(strings());
        ExceptionMapper<InvalidArgumentException> result = AromaAssertions.withMessage(message);
        
        InvalidArgumentException ex = result.apply(null);
        assertThat(ex, notNullValue());
        assertThat(ex.getMessage(), is(message));
    }
    
    @Test
    public void testLegalToken()
    {
        AlchemyAssertion<AuthenticationToken> instance = AromaAssertions.legalToken();
        assertThat(instance, notNullValue());
        
        assertThrows(() -> instance.check(null))
            .isInstanceOf(FailedAssertionException.class);
        
        AuthenticationToken badAuthenticationToken = new AuthenticationToken();
        assertThrows(() -> instance.check(badAuthenticationToken))
            .isInstanceOf(FailedAssertionException.class);
            
    }
    
    @Test
    public void testValidTokenIn() throws TException
    {
        
        // When Token is good
        AlchemyAssertion<AuthenticationToken> assertion = AromaAssertions.validTokenIn(authenticationService);
        assertion.check(authenticationToken);
        
        //When Token is bad
        
        
        when(authenticationService.verifyToken(expectedRequest))
            .thenThrow(new InvalidTokenException());
        
        assertThrows(() -> assertion.check(authenticationToken))
            .isInstanceOf(FailedAssertionException.class);
    }
    
    @Test
    public void testValidTokenInWithoutOwnerId() throws TException
    {
        expectedRequest.unsetOwnerId();
        authenticationToken.unsetOwnerId();
        
        // When Token is good
        AlchemyAssertion<AuthenticationToken> assertion = AromaAssertions.validTokenIn(authenticationService);
        assertion.check(authenticationToken);
        
        //When Token is bad
        when(authenticationService.verifyToken(expectedRequest))
            .thenThrow(new InvalidTokenException());
        
        assertThrows(() -> assertion.check(authenticationToken))
            .isInstanceOf(FailedAssertionException.class);
    }
    
    @Test
    public void testValidApplicationTokenIn() throws TException
    {
        AlchemyAssertion<ApplicationToken> assertion = AromaAssertions.validApplicationTokenIn(authenticationService);
        assertThat(assertion, notNullValue());
        
        //When Token is good
        assertion.check(applicationToken);
        
        //When Token is bad
        when(authenticationService.verifyToken(expectedRequest))
            .thenThrow(new InvalidTokenException());
        
        assertThrows(() -> assertion.check(applicationToken))
            .isInstanceOf(FailedAssertionException.class);
    }
    
    @Test
    public void testValidUserTokenIn() throws TException
    {
        AlchemyAssertion<UserToken> assertion = AromaAssertions.validUserTokenIn(authenticationService);
        assertThat(assertion, notNullValue());
        
        //When Token is good
        assertion.check(userToken);
        
        //When Token is bad
        when(authenticationService.verifyToken(expectedRequest))
            .thenThrow(InvalidTokenException.class);
        
        assertThrows(() -> assertion.check(userToken))
            .isInstanceOf(FailedAssertionException.class);
    }
    
}
