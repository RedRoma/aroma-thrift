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

package tech.aroma.banana.thrift.functions;

import java.util.function.Function;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.aroma.banana.thrift.authentication.ApplicationToken;
import tech.aroma.banana.thrift.authentication.AuthenticationToken;
import tech.aroma.banana.thrift.authentication.UserToken;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;
import tech.sirwellington.alchemy.test.junit.runners.DontRepeat;
import tech.sirwellington.alchemy.test.junit.runners.GeneratePojo;
import tech.sirwellington.alchemy.test.junit.runners.GenerateString;
import tech.sirwellington.alchemy.test.junit.runners.Repeat;

import static org.hamcrest.Matchers.is;
import static org.hamcrest.Matchers.notNullValue;
import static org.junit.Assert.assertThat;
import static tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows;
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

    @Test
    public void testConstructor()
    {
        assertThrows(() -> TokenFunctions.class.newInstance())
            .isInstanceOf(IllegalAccessException.class);
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
    }

    @Test
    public void testAppTokenToAuthTokenFunction()
    {
        Function<ApplicationToken, AuthenticationToken> function = TokenFunctions.appTokenToAuthTokenFunction();
        assertThat(function, notNullValue());

        AuthenticationToken result = function.apply(applicationToken);
        assertAppTokenMatch(result, applicationToken);
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

    }

    @Test
    public void testUserTokenToAuthTokenFunction()
    {
        Function<UserToken, AuthenticationToken> function = TokenFunctions.userTokenToAuthTokenFunction();
        assertThat(function, notNullValue());

        AuthenticationToken result = function.apply(userToken);
        assertUserTokenMatch(result, userToken);
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
    }

    private void assertUserTokenMatch(AuthenticationToken auth, UserToken user)
    {
        assertThat(auth, notNullValue());
        assertThat(user, notNullValue());

        assertThat(auth.tokenId, is(user.tokenId));
        assertThat(auth.ownerId, is(user.userId));
        assertThat(auth.organizationId, is(user.organization));
        assertThat(auth.timeOfExpiration, is(user.timeOfExpiration));
    }

}
