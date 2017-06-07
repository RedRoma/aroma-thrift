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

package tech.aroma.thrift.assertions

import com.nhaarman.mockito_kotlin.whenever
import org.apache.thrift.TException
import org.hamcrest.Matchers
import org.hamcrest.Matchers.notNullValue
import org.junit.Assert.assertThat
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import org.mockito.Mock
import tech.aroma.thrift.authentication.ApplicationToken
import tech.aroma.thrift.authentication.AuthenticationToken
import tech.aroma.thrift.authentication.UserToken
import tech.aroma.thrift.authentication.service.AuthenticationService
import tech.aroma.thrift.authentication.service.VerifyTokenRequest
import tech.aroma.thrift.exceptions.InvalidArgumentException
import tech.aroma.thrift.exceptions.InvalidTokenException
import tech.sirwellington.alchemy.arguments.AlchemyAssertion
import tech.sirwellington.alchemy.arguments.FailedAssertionException
import tech.sirwellington.alchemy.generator.StringGenerators.Companion.strings
import tech.sirwellington.alchemy.generator.one
import tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner
import tech.sirwellington.alchemy.test.junit.runners.DontRepeat
import tech.sirwellington.alchemy.test.junit.runners.GeneratePojo
import tech.sirwellington.alchemy.test.junit.runners.GenerateString
import tech.sirwellington.alchemy.test.junit.runners.GenerateString.Type.ALPHABETIC
import tech.sirwellington.alchemy.test.junit.runners.GenerateString.Type.UUID
import tech.sirwellington.alchemy.test.junit.runners.Repeat

/**

 * @author SirWellington
 */
@Repeat(50)
@RunWith(AlchemyTestRunner::class)
class AromaAssertionsTest
{

    @Mock
    private lateinit var authenticationService: AuthenticationService.Iface

    @GeneratePojo
    private lateinit var applicationToken: ApplicationToken

    @GeneratePojo
    private lateinit var userToken: UserToken

    @GeneratePojo
    private lateinit var authenticationToken: AuthenticationToken

    @GenerateString(UUID)
    private lateinit var tokenId: String

    @GenerateString(UUID)
    private lateinit var ownerId: String

    @GenerateString(ALPHABETIC)
    private lateinit var message: String

    private lateinit var expectedRequest: VerifyTokenRequest

    @Before
    fun setUp()
    {
        authenticationToken.tokenId = tokenId
        authenticationToken.ownerId = ownerId

        applicationToken.tokenId = tokenId
        applicationToken.applicationId = ownerId

        userToken.tokenId = tokenId
        userToken.userId = ownerId

        expectedRequest = VerifyTokenRequest()
                .setOwnerId(ownerId)
                .setTokenId(tokenId)
    }

    @DontRepeat
    @Test
    @Throws(Exception::class)
    fun testCannotInstantiate()
    {
        assertThrows { AromaAssertions::class.java.newInstance() }
                .isInstanceOf(IllegalAccessException::class.java)
    }

    @Test
    @Throws(Exception::class)
    fun testCheckRequestNotNull()
    {

        assertThrows { AromaAssertions.checkRequestNotNull(null) }
                .isInstanceOf(InvalidArgumentException::class.java)

        val string = one(strings())
        AromaAssertions.checkRequestNotNull(string)
    }

    @Test
    @Throws(Exception::class)
    fun testCheckNotNull()
    {
        AromaAssertions.checkNotNull(tokenId, message)

        assertThrows { AromaAssertions.checkNotNull(null, message) }
                .isInstanceOf(InvalidArgumentException::class.java)
                .hasMessage(message)
    }

    @Test
    fun testWithMessage()
    {

        val message = one(strings())
        val result = AromaAssertions.withMessage(message)

        val ex = result.apply(null)
        assertThat(ex, notNullValue())
        assertThat(ex._message, Matchers.equalTo(message))
    }

    private val InvalidArgumentException._message: String
        get()
        {
            val field = tech.aroma.thrift.exceptions.InvalidArgumentException._Fields.MESSAGE
            return this.getFieldValue(field) as String
        }

    @Test
    fun testLegalToken()
    {
        val instance = AromaAssertions.legalToken()
        assertThat(instance, notNullValue())

        assertThrows { instance.check(null) }
                .isInstanceOf(FailedAssertionException::class.java)

        val badAuthenticationToken = AuthenticationToken()
        assertThrows { instance.check(badAuthenticationToken) }
                .isInstanceOf(FailedAssertionException::class.java)

    }

    @Test
    @Throws(TException::class)
    fun testValidTokenIn()
    {

        // When Token is good
        val assertion = AromaAssertions.validTokenIn(authenticationService)
        assertion.check(authenticationToken)

        //When Token is bad

        whenever(authenticationService.verifyToken(expectedRequest))
                .thenThrow(InvalidTokenException())

        assertThrows { assertion.check(authenticationToken) }
                .isInstanceOf(FailedAssertionException::class.java)
    }

    @Test
    @Throws(TException::class)
    fun testValidTokenInWithoutOwnerId()
    {
        expectedRequest.unsetOwnerId()
        authenticationToken.unsetOwnerId()

        // When Token is good
        val assertion = AromaAssertions.validTokenIn(authenticationService)
        assertion.check(authenticationToken)

        //When Token is bad
        whenever(authenticationService.verifyToken(expectedRequest))
                .thenThrow(InvalidTokenException())

        assertThrows { assertion.check(authenticationToken) }
                .isInstanceOf(FailedAssertionException::class.java)
    }

    @Test
    @Throws(TException::class)
    fun testValidApplicationTokenIn()
    {
        val assertion = AromaAssertions.validApplicationTokenIn(authenticationService)
        assertThat<AlchemyAssertion<ApplicationToken>>(assertion, notNullValue())

        //When Token is good
        assertion.check(applicationToken)

        //When Token is bad
        whenever(authenticationService.verifyToken(expectedRequest))
                .thenThrow(InvalidTokenException())

        assertThrows { assertion.check(applicationToken) }
                .isInstanceOf(FailedAssertionException::class.java)
    }

    @Test
    @Throws(TException::class)
    fun testValidUserTokenIn()
    {
        val assertion = AromaAssertions.validUserTokenIn(authenticationService)
        assertThat<AlchemyAssertion<UserToken>>(assertion, notNullValue())

        //When Token is good
        assertion.check(userToken)

        //When Token is bad
        whenever(authenticationService.verifyToken(expectedRequest))
                .thenThrow(InvalidTokenException::class.java)

        assertThrows { assertion.check(userToken) }
                .isInstanceOf(FailedAssertionException::class.java)
    }

}
