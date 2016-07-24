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

package tech.aroma.thrift.functions;

import java.util.function.Function;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.thrift.authentication.ApplicationToken;
import tech.aroma.thrift.authentication.AuthenticationToken;
import tech.aroma.thrift.authentication.TokenType;
import tech.aroma.thrift.authentication.UserToken;
import tech.sirwellington.alchemy.annotations.access.NonInstantiable;

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
    
    public static Function<AuthenticationToken, ApplicationToken> authTokenToAppTokenFunction()
    {
        return authToken ->
        {
            ApplicationToken appToken = new ApplicationToken();
            
            if (authToken != null)
            {
                appToken
                    .setTokenId(authToken.tokenId)
                    .setApplicationId(authToken.ownerId)
                    .setOrganization(authToken.organizationId)
                    .setApplicationName(authToken.ownerName)
                    .setTimeOfExpiration(authToken.timeOfExpiration)
                    .setStatus(authToken.status);
            }
            
            return appToken;
        };
    }
    
    public static Function<ApplicationToken, AuthenticationToken> appTokenToAuthTokenFunction()
    {
        return appToken ->
        {
            AuthenticationToken authToken = new AuthenticationToken();
            
            if (appToken != null)
            {
                authToken
                    .setTokenId(appToken.tokenId)
                    .setOwnerId(appToken.applicationId)
                    .setOwnerName(appToken.applicationName)
                    .setTimeOfExpiration(appToken.timeOfExpiration)
                    .setTokenType(TokenType.APPLICATION)
                    .setOrganizationId(appToken.organization)
                    .setStatus(appToken.status);

            }
            
            return authToken;
        };
    }
    
    public static Function<AuthenticationToken, UserToken> authTokenToUserTokenFunction()
    {
        return token ->
        {
            UserToken userToken = new UserToken();
            
            if (token != null)
            {
                userToken
                    .setTokenId(token.tokenId)
                    .setUserId(token.ownerId)
                    .setOrganization(token.organizationId)
                    .setTimeOfExpiration(token.timeOfExpiration)
                    .setStatus(token.status);
            }
            
            return userToken;
        };
    }
    
    public static Function<UserToken, AuthenticationToken> userTokenToAuthTokenFunction()
    {
        return token ->
        {
            AuthenticationToken authToken = new AuthenticationToken();
         
            if (token != null)
            {
                authToken
                    .setTokenId(token.tokenId)
                    .setOwnerId(token.userId)
                    .setOrganizationId(token.organization)
                    .setTimeOfExpiration(token.timeOfExpiration)
                    .setTokenType(TokenType.USER)
                    .setStatus(token.status);
            }
            
            return authToken;
        };
    }
    
}
