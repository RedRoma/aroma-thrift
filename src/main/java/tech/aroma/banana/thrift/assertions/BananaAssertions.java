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

package tech.aroma.banana.thrift.assertions;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.banana.thrift.authentication.AuthenticationToken;
import tech.aroma.banana.thrift.authentication.UserToken;
import tech.aroma.banana.thrift.authentication.service.AuthenticationService;
import tech.aroma.banana.thrift.authentication.service.VerifyTokenRequest;
import tech.aroma.banana.thrift.authentication.service.VerifyTokenResponse;
import tech.aroma.banana.thrift.exceptions.InvalidArgumentException;
import tech.aroma.banana.thrift.exceptions.InvalidTokenException;
import tech.aroma.banana.thrift.functions.TokenFunctions;
import tech.sirwellington.alchemy.annotations.access.NonInstantiable;
import tech.sirwellington.alchemy.annotations.arguments.NonNull;
import tech.sirwellington.alchemy.arguments.AlchemyAssertion;
import tech.sirwellington.alchemy.arguments.ExceptionMapper;
import tech.sirwellington.alchemy.arguments.FailedAssertionException;

import static tech.sirwellington.alchemy.arguments.Arguments.checkThat;
import static tech.sirwellington.alchemy.arguments.assertions.Assertions.notNull;
import static tech.sirwellington.alchemy.arguments.assertions.StringAssertions.nonEmptyString;

/**
 * This class contains common Assertions made on Banana Service requests and
 * other data structures.
 * 
 * @author SirWellington
 */
@NonInstantiable
public final class BananaAssertions
{
    
    private final static Logger LOG = LoggerFactory.getLogger(BananaAssertions.class);
    
    private BananaAssertions() throws IllegalAccessException
    {
        throw new IllegalAccessException("cannot instantiate");
    }
    
    public static ExceptionMapper<InvalidArgumentException> withMessage(String message)
    {
        return ex -> new InvalidArgumentException(message);
    }
    
    public static void checkRequestNotNull(Object request) throws InvalidArgumentException
    {
        checkNotNull(request, "missing request");
    }
    
    public static void checkNotNull(Object reference, String message) throws InvalidArgumentException
    {
        checkThat(reference)
            .throwing(withMessage(message))
            .is(notNull());
    }
    
    public static AlchemyAssertion<AuthenticationToken> legalToken()
    {
        return t ->
        {
            checkThat(t).is(notNull());
            
            if (!isSet(t))
            {
                throw new FailedAssertionException("Token Has not been set:  " + t);
            }
        };
    }
    
    public static AlchemyAssertion<UserToken> validUserTokenIn(@NonNull AuthenticationService.Iface authenticationService)
    {
        checkThat(authenticationService)
            .usingMessage("authentication service is null")
            .is(notNull());
        
        return token ->
        {
            AuthenticationToken authToken = new AuthenticationToken();
            authToken.setUserToken(token);
            
            validTokenIn(authenticationService).check(authToken);
        };
    }
    
    public static AlchemyAssertion<AuthenticationToken> validTokenIn(@NonNull AuthenticationService.Iface authenticationService)
    {
        checkThat(authenticationService)
            .usingMessage("authentication service is null")
            .is(notNull());
        
        return token ->
        {
            checkThat(token)
                .is(legalToken());
            
            String tokenId = TokenFunctions.extractTokenId(token);
            
            checkThat(tokenId)
                .usingMessage("tokenId is missing")
                .is(nonEmptyString());
            
            VerifyTokenRequest request = new VerifyTokenRequest()
                .setTokenId(tokenId);
            
            VerifyTokenResponse response;
            try
            {
                response = authenticationService.verifyToken(request);
            }
            catch (InvalidTokenException ex)
            {
                throw new FailedAssertionException("Token is not valid");
            }
            catch (Exception ex)
            {
                throw new FailedAssertionException("Could not contact Authentication Service", ex);
            }
        };
    }
    
    private static boolean isSet(AuthenticationToken token)
    {
        if (token.isSetApplicationToken())
        {
            return true;
        }

        if (token.isSetUserToken())
        {
            return true;
        }

        return false;
    }
    
}
