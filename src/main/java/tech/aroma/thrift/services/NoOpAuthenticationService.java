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

 
package tech.aroma.thrift.services;


import org.apache.thrift.TException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.thrift.AromaConstants;
import tech.aroma.thrift.authentication.service.*;
import tech.aroma.thrift.exceptions.InvalidTokenException;
import tech.aroma.thrift.exceptions.OperationFailedException;

/** 
 * This is a No-Op implementation of the Authentication Service. It returns empty responses.
 * 
 * @author SirWellington
 */
public class NoOpAuthenticationService implements AuthenticationService.Iface
{
    private final static Logger LOG = LoggerFactory.getLogger(NoOpAuthenticationService.class);

    @Override
    public double getApiVersion() throws TException
    {
        return AromaConstants.API_VERSION;
    }

    @Override
    public CreateTokenResponse createToken(CreateTokenRequest request) throws OperationFailedException, 
                                                                              TException

    {
        return new CreateTokenResponse();
    }

    @Override
    public GetTokenInfoResponse getTokenInfo(GetTokenInfoRequest request) throws OperationFailedException, 
                                                                                 InvalidTokenException,
                                                                                 TException
    {
        return new GetTokenInfoResponse();
    }

    @Override
    public InvalidateTokenResponse invalidateToken(InvalidateTokenRequest request) throws OperationFailedException,
                                                                                          InvalidTokenException, 
                                                                                          TException
    {
        return new InvalidateTokenResponse();
    }

    @Override
    public VerifyTokenResponse verifyToken(VerifyTokenRequest request) throws OperationFailedException, 
                                                                              InvalidTokenException,
                                                                              TException
    {
        return new VerifyTokenResponse();
    }

}
