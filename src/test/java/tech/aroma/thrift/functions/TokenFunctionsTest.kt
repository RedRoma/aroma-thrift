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

package tech.aroma.thrift.functions

import org.hamcrest.Matchers.`is`
import org.hamcrest.Matchers.notNullValue
import org.junit.Assert.assertThat
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import tech.aroma.thrift.authentication.ApplicationToken
import tech.aroma.thrift.authentication.AuthenticationToken
import tech.aroma.thrift.authentication.TokenType
import tech.aroma.thrift.authentication.UserToken
import tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner
import tech.sirwellington.alchemy.test.junit.runners.DontRepeat
import tech.sirwellington.alchemy.test.junit.runners.GeneratePojo
import tech.sirwellington.alchemy.test.junit.runners.GenerateString
import tech.sirwellington.alchemy.test.junit.runners.GenerateString.Type.HEXADECIMAL
import tech.sirwellington.alchemy.test.junit.runners.GenerateString.Type.UUID
import tech.sirwellington.alchemy.test.junit.runners.Repeat

/**

 * @author SirWellington
 */
@Repeat(100)
@RunWith(AlchemyTestRunner::class)
class TokenFunctionsTest
{

    @GenerateString(HEXADECIMAL)
    private lateinit var tokenId: String

    @GenerateString(UUID)
    private lateinit var ownerId: String

    @GeneratePojo
    private lateinit var applicationToken: ApplicationToken

    @GeneratePojo
    private lateinit var userToken: UserToken

    @GeneratePojo
    private lateinit var authenticationToken: AuthenticationToken

    @Before
    fun setUp()
    {

    }

    @Test(expected = IllegalAccessException::class)
    @Throws(IllegalAccessException::class, InstantiationException::class)
    fun testConstructor()
    {
        TokenFunctions::class.java.newInstance()
    }

    @Test
    fun testAuthTokenToAppTokenFunction()
    {
        val function = TokenFunctions.authTokenToAppTokenFunction()
        assertThat(function, notNullValue())

        val result = function.apply(authenticationToken)

        assertAppTokenMatch(authenticationToken, result)
    }

    @DontRepeat
    @Test
    fun testAuthTokenToAppTokenFunctionWithEmpty()
    {
        val function = TokenFunctions.authTokenToAppTokenFunction()
        assertThat(function, notNullValue())

        val emptyToken = AuthenticationToken()
        val result = function.apply(emptyToken)

        assertAppTokenMatch(emptyToken, result)

        assertThrows { function.apply(null!!) }
    }

    @Test
    fun testAppTokenToAuthTokenFunction()
    {
        val function = TokenFunctions.appTokenToAuthTokenFunction()
        assertThat(function, notNullValue())

        val result = function.apply(applicationToken)
        assertAppTokenMatch(result, applicationToken)
        assertThat(result.tokenType, `is`(TokenType.APPLICATION))
    }

    @DontRepeat
    @Test
    fun testAppTokenToAuthTokenFunctionWithEmpty()
    {
        val function = TokenFunctions.appTokenToAuthTokenFunction()
        assertThat(function, notNullValue())

        val emptyToken = ApplicationToken()
        val result = function.apply(emptyToken)
        assertAppTokenMatch(result, emptyToken)

        assertThrows { function.apply(null!!) }

    }

    @Test
    fun testAuthTokenToUserTokenFunction()
    {
        val function = TokenFunctions.authTokenToUserTokenFunction()
        assertThat(function, notNullValue())

        val result = function.apply(authenticationToken)
        assertUserTokenMatch(authenticationToken, result)

    }

    @DontRepeat
    @Test
    fun testAuthTokenToUserTokenFunctionWithEmpty()
    {
        val function = TokenFunctions.authTokenToUserTokenFunction()
        assertThat(function, notNullValue())

        val emptyToken = AuthenticationToken()

        val result = function.apply(emptyToken)
        assertUserTokenMatch(emptyToken, result)

        assertThrows { function.apply(null!!) }
    }

    @Test
    fun testUserTokenToAuthTokenFunction()
    {
        val function = TokenFunctions.userTokenToAuthTokenFunction()
        assertThat(function, notNullValue())

        val result = function.apply(userToken)
        assertUserTokenMatch(result, userToken)
        assertThat(result.tokenType, `is`(TokenType.USER))

    }

    @DontRepeat
    @Test
    fun testUserTokenToAuthTokenFunctionWithEmpty()
    {
        val function = TokenFunctions.userTokenToAuthTokenFunction()
        assertThat(function, notNullValue())

        val emptyToken = UserToken()
        val result = function.apply(emptyToken)
        assertUserTokenMatch(result, emptyToken)

        assertThrows { function.apply(null!!) }

    }

    private fun assertAppTokenMatch(auth: AuthenticationToken, app: ApplicationToken)
    {
        assertThat(auth, notNullValue())
        assertThat(app, notNullValue())

        assertThat(auth.tokenId, `is`(app.tokenId))
        assertThat(auth.ownerId, `is`(app.applicationId))
        assertThat(auth.organizationId, `is`(app.organization))
        assertThat(auth.timeOfExpiration, `is`(app.timeOfExpiration))
        assertThat(auth.ownerName, `is`(app.applicationName))
        assertThat(auth.status, `is`(app.status))
    }

    private fun assertUserTokenMatch(auth: AuthenticationToken, user: UserToken)
    {
        assertThat(auth, notNullValue())
        assertThat(user, notNullValue())

        assertThat(auth.tokenId, `is`(user.tokenId))
        assertThat(auth.ownerId, `is`(user.userId))
        assertThat(auth.organizationId, `is`(user.organization))
        assertThat(auth.timeOfExpiration, `is`(user.timeOfExpiration))
        assertThat(auth.status, `is`(user.status))
    }

}
