
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

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.thrift.authentication.ApplicationToken;
import tech.aroma.thrift.authentication.AuthenticationToken;
import tech.aroma.thrift.authentication.UserToken;
import tech.aroma.thrift.authentication.service.AuthenticationService;
import tech.aroma.thrift.authentication.service.VerifyTokenRequest;
import tech.aroma.thrift.authentication.service.VerifyTokenResponse;
import tech.aroma.thrift.exceptions.InvalidArgumentException;
import tech.aroma.thrift.exceptions.InvalidTokenException;
import tech.sirwellington.alchemy.annotations.access.NonInstantiable;
import tech.sirwellington.alchemy.annotations.arguments.Required;
import tech.sirwellington.alchemy.arguments.AlchemyAssertion;
import tech.sirwellington.alchemy.arguments.ExceptionMapper;
import tech.sirwellington.alchemy.arguments.FailedAssertionException;

import static tech.sirwellington.alchemy.arguments.Arguments.checkThat;
import static tech.sirwellington.alchemy.arguments.assertions.Assertions.notNull;
import static tech.sirwellington.alchemy.arguments.assertions.StringAssertions.nonEmptyString;
import static tech.sirwellington.alchemy.arguments.assertions.StringAssertions.validUUID;

/**
 * This class contains common Assertions made on Aroma Service requests and other data structures.
 *
 * @author SirWellington
 */
@NonInstantiable
public final class AromaAssertions
{
    
    private final static Logger LOG = LoggerFactory.getLogger(AromaAssertions.class);
    
    AromaAssertions() throws IllegalAccessException
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
            checkThat(t)
                .usingMessage("token is null")
                .is(notNull());
            
            checkThat(t.tokenId)
                .usingMessage("token missing tokenId")
                .is(nonEmptyString());

            if (t.isSetOwnerId())
            {
                checkThat(t.ownerId)
                    .usingMessage("token missing ownerId")
                    .is(nonEmptyString())
                    .usingMessage("token ownerId must be a UUID")
                    .is(validUUID());
            }

        };
    }
    
    public static AlchemyAssertion<ApplicationToken> validApplicationTokenIn(@Required AuthenticationService.Iface authenticationService)
    {
        checkThat(authenticationService)
            .usingMessage("authentication service is null")
            .is(notNull());
        
        return token ->
        {
            checkThat(token)
                .usingMessage("token is null")
                .is(notNull());
            
            checkThat(token.tokenId)
                .usingMessage("token is missing tokenId")
                .is(nonEmptyString());
            
            AuthenticationToken authToken = new AuthenticationToken()
            .setTokenId(token.tokenId)
            .setOwnerId(token.applicationId)
            .setOwnerName(token.applicationName);
            
            checkThat(authToken)
                .is(validTokenIn(authenticationService));
        };
        
    }
    
    public static AlchemyAssertion<UserToken> validUserTokenIn(@Required AuthenticationService.Iface authenticationService)
    {
        checkThat(authenticationService)
            .usingMessage("authentication service is null")
            .is(notNull());
        
        return token ->
        {
            checkThat(token)
                .usingMessage("token is null")
                .is(notNull());
            
            checkThat(token.tokenId)
                .usingMessage("token is missing tokenId")
                .is(nonEmptyString());
            
            AuthenticationToken authToken = new AuthenticationToken()
                .setTokenId(token.tokenId)
                .setOwnerId(token.userId)
                .setOrganizationId(token.organization);

            checkThat(authToken)
                .is(validTokenIn(authenticationService));
        };
    }
    
    public static AlchemyAssertion<AuthenticationToken> validTokenIn(@Required AuthenticationService.Iface authenticationService)
    {
        checkThat(authenticationService)
            .usingMessage("authentication service is null")
            .is(notNull());
        
        return token ->
        {
            checkThat(token)
                .is(legalToken());
            
            String tokenId = token.getTokenId();
            
            checkThat(tokenId)
                .usingMessage("tokenId is missing")
                .is(nonEmptyString());
            
            VerifyTokenRequest request = new VerifyTokenRequest()
                .setTokenId(tokenId);
            
            if (token.isSetOwnerId())
            {
                request.setOwnerId(token.ownerId);
            }
            
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
    
    
}
