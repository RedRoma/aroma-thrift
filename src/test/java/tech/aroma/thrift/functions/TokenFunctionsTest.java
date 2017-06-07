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

package tech.aroma.thrift.functions;

import java.util.function.Function;

import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.aroma.thrift.authentication.*;
import tech.sirwellington.alchemy.test.junit.runners.*;

import static org.hamcrest.Matchers.is;
import static org.hamcrest.Matchers.notNullValue;
import static org.junit.Assert.assertThat;
import static tech.sirwellington.alchemy.test.junit.runners.GenerateString.Type.HEXADECIMAL;
import static tech.sirwellington.alchemy.test.junit.runners.GenerateString.Type.UUID;

/**
 *
 * @author SirWellington
 */
@Repeat(100)
@RunWith(AlchemyTestRunner.class)
public class TokenFunctionsTest
{

    @GenerateString(HEXADECIMAL)
    private String tokenId;

    @GenerateString(UUID)
    private String ownerId;

    @GeneratePojo
    private ApplicationToken applicationToken;

    @GeneratePojo
    private UserToken userToken;

    @GeneratePojo
    private AuthenticationToken authenticationToken;

    @Before
    public void setUp()
    {

    }

    @Test(expected = IllegalAccessException.class)
    public void testConstructor() throws IllegalAccessException, InstantiationException
    {
        TokenFunctions.class.newInstance();
    }

    @Test
    public void testAuthTokenToAppTokenFunction()
    {
        Function<AuthenticationToken, ApplicationToken> function = TokenFunctions.authTokenToAppTokenFunction();
        assertThat(function, notNullValue());

        ApplicationToken result = function.apply(authenticationToken);

        assertAppTokenMatch(authenticationToken, result);
    }

    @DontRepeat
    @Test
    public void testAuthTokenToAppTokenFunctionWithEmpty()
    {
        Function<AuthenticationToken, ApplicationToken> function = TokenFunctions.authTokenToAppTokenFunction();
        assertThat(function, notNullValue());

        AuthenticationToken emptyToken = new AuthenticationToken();
        ApplicationToken result = function.apply(emptyToken);

        assertAppTokenMatch(emptyToken, result);

        ApplicationToken nullResult = function.apply(null);
        assertThat(nullResult, notNullValue());
    }

    @Test
    public void testAppTokenToAuthTokenFunction()
    {
        Function<ApplicationToken, AuthenticationToken> function = TokenFunctions.appTokenToAuthTokenFunction();
        assertThat(function, notNullValue());

        AuthenticationToken result = function.apply(applicationToken);
        assertAppTokenMatch(result, applicationToken);
        assertThat(result.tokenType, is(TokenType.APPLICATION));
    }

    @DontRepeat
    @Test
    public void testAppTokenToAuthTokenFunctionWithEmpty()
    {
        Function<ApplicationToken, AuthenticationToken> function = TokenFunctions.appTokenToAuthTokenFunction();
        assertThat(function, notNullValue());

        ApplicationToken emptyToken = new ApplicationToken();
        AuthenticationToken result = function.apply(emptyToken);
        assertAppTokenMatch(result, emptyToken);

        AuthenticationToken nullResult = function.apply(null);
        assertThat(nullResult, notNullValue());
    }

    @Test
    public void testAuthTokenToUserTokenFunction()
    {
        Function<AuthenticationToken, UserToken> function = TokenFunctions.authTokenToUserTokenFunction();
        assertThat(function, notNullValue());

        UserToken result = function.apply(authenticationToken);
        assertUserTokenMatch(authenticationToken, result);

    }

    @DontRepeat
    @Test
    public void testAuthTokenToUserTokenFunctionWithEmpty()
    {
        Function<AuthenticationToken, UserToken> function = TokenFunctions.authTokenToUserTokenFunction();
        assertThat(function, notNullValue());

        AuthenticationToken emptyToken = new AuthenticationToken();

        UserToken result = function.apply(emptyToken);
        assertUserTokenMatch(emptyToken, result);

        UserToken nullResult = function.apply(null);
        assertThat(nullResult, notNullValue());

    }

    @Test
    public void testUserTokenToAuthTokenFunction()
    {
        Function<UserToken, AuthenticationToken> function = TokenFunctions.userTokenToAuthTokenFunction();
        assertThat(function, notNullValue());

        AuthenticationToken result = function.apply(userToken);
        assertUserTokenMatch(result, userToken);
        assertThat(result.tokenType, is(TokenType.USER));

    }

    @DontRepeat
    @Test
    public void testUserTokenToAuthTokenFunctionWithEmpty()
    {
        Function<UserToken, AuthenticationToken> function = TokenFunctions.userTokenToAuthTokenFunction();
        assertThat(function, notNullValue());

        UserToken emptyToken = new UserToken();
        AuthenticationToken result = function.apply(emptyToken);
        assertUserTokenMatch(result, emptyToken);

        AuthenticationToken nullResult = function.apply(null);
        assertThat(nullResult, notNullValue());
    }

    private void assertAppTokenMatch(AuthenticationToken auth, ApplicationToken app)
    {
        assertThat(auth, notNullValue());
        assertThat(app, notNullValue());

        assertThat(auth.tokenId, is(app.tokenId));
        assertThat(auth.ownerId, is(app.applicationId));
        assertThat(auth.organizationId, is(app.organization));
        assertThat(auth.timeOfExpiration, is(app.timeOfExpiration));
        assertThat(auth.ownerName, is(app.applicationName));
        assertThat(auth.status, is(app.status));
    }

    private void assertUserTokenMatch(AuthenticationToken auth, UserToken user)
    {
        assertThat(auth, notNullValue());
        assertThat(user, notNullValue());

        assertThat(auth.tokenId, is(user.tokenId));
        assertThat(auth.ownerId, is(user.userId));
        assertThat(auth.organizationId, is(user.organization));
        assertThat(auth.timeOfExpiration, is(user.timeOfExpiration));
        assertThat(auth.status, is(user.status));
    }

}
