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

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.banana.thrift.authentication.ApplicationToken;
import tech.aroma.banana.thrift.authentication.AuthenticationToken;
import tech.aroma.banana.thrift.authentication.UserToken;
import tech.sirwellington.alchemy.annotations.access.NonInstantiable;
import tech.sirwellington.alchemy.annotations.arguments.Required;

import static tech.sirwellington.alchemy.arguments.Arguments.checkThat;
import static tech.sirwellington.alchemy.arguments.assertions.Assertions.notNull;
import static tech.sirwellington.alchemy.arguments.assertions.StringAssertions.nonEmptyString;

/**
 *
 * @author SirWellington
 */
@NonInstantiable
public final class TokenFunctions
{

    private final static Logger LOG = LoggerFactory.getLogger(TokenFunctions.class);

    private TokenFunctions() throws IllegalAccessException
    {
        throw new IllegalAccessException("cannot instantiate");
    }

    public static String extractTokenId(@Required AuthenticationToken token) throws IllegalArgumentException
    {
        checkThat(token).is(notNull());

        if (token.isSetApplicationToken())
        {
            ApplicationToken applicationToken = token.getApplicationToken();

            String tokenId = applicationToken.tokenId;
            checkThat(tokenId)
                .usingMessage("Application Token missing tokenId")
                .is(nonEmptyString());
            return tokenId;
        }

        if (token.isSetUserToken())
        {
            UserToken userToken = token.getUserToken();
            String tokenId = userToken.getTokenId();
            checkThat(tokenId)
                .usingMessage("User Token missing tokenId")
                .is(nonEmptyString());

            return tokenId;
        }

        throw new IllegalArgumentException("Unexpected Authentication Token Type:" + token);
    }
    
    public static String extractOwnerId(@Required AuthenticationToken token) throws IllegalArgumentException
    {
        checkThat(token).is(notNull());
        
        if (token.isSetApplicationToken())
        {
            String appId = token.getApplicationToken().getApplicationId();
            checkThat(appId)
                .usingMessage("Application Token is missing appId")
                .is(nonEmptyString());
            
            return appId;
        }
        
        if (token.isSetUserToken())
        {
            String userId = token.getUserToken().getUserId();
            checkThat(userId)
                .usingMessage("User Token is missing userId")
                .is(nonEmptyString());
            
            return userId;
        }
        
        throw new IllegalArgumentException("Unexpected Token type: " + token);
    }
}
