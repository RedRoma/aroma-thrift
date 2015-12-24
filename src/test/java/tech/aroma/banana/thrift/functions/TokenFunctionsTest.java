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

import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.aroma.banana.thrift.authentication.ApplicationToken;
import tech.aroma.banana.thrift.authentication.UserToken;
import tech.aroma.banana.thrift.authentication.service.AuthenticationToken;
import tech.sirwellington.alchemy.generator.BooleanGenerators;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;
import tech.sirwellington.alchemy.test.junit.runners.GeneratePojo;
import tech.sirwellington.alchemy.test.junit.runners.GenerateString;
import tech.sirwellington.alchemy.test.junit.runners.Repeat;

import static org.hamcrest.Matchers.is;
import static org.junit.Assert.assertThat;
import static tech.sirwellington.alchemy.generator.AlchemyGenerator.one;
import static tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows;
import static tech.sirwellington.alchemy.test.junit.runners.GenerateString.Type.HEXADECIMAL;

/**
 *
 * @author SirWellington
 */
@RunWith(AlchemyTestRunner.class)
public class TokenFunctionsTest
{

    @GenerateString(HEXADECIMAL)
    private String tokenId;

    @GeneratePojo
    private ApplicationToken applicationToken;

    @GeneratePojo
    private UserToken userToken;

    private AuthenticationToken authenticationToken;

    @Before
    public void setUp()
    {
        authenticationToken = new AuthenticationToken();

        boolean heads = one(BooleanGenerators.booleans());

        applicationToken.setTokenId(tokenId);
        userToken.setTokenId(tokenId);

        if (heads)
        {
            authenticationToken.setApplicationToken(applicationToken);
        }
        else
        {
            authenticationToken.setUserToken(userToken);
        }
    }

    @Test
    public void testConstructor()
    {
        assertThrows(() -> TokenFunctions.class.newInstance())
            .isInstanceOf(IllegalAccessException.class);

    }

    @Repeat(100)
    @Test
    public void testExtractTokenId()
    {
        String result = TokenFunctions.extractTokenId(authenticationToken);
        assertThat(result, is(tokenId));

    }

    @Test
    public void testExtractTokenIdEdgeCases()
    {
        assertThrows(() -> TokenFunctions.extractTokenId(null))
            .isInstanceOf(IllegalArgumentException.class);

        assertThrows(() -> TokenFunctions.extractTokenId(new AuthenticationToken()))
            .isInstanceOf(IllegalArgumentException.class);
    }

}
