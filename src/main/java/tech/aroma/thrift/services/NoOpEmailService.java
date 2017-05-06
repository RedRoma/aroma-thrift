/*
 * Copyright 2017 RedRoma.
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
import tech.aroma.thrift.email.service.EmailService;
import tech.aroma.thrift.email.service.SendEmailRequest;
import tech.aroma.thrift.email.service.SendEmailResponse;
import tech.aroma.thrift.exceptions.InvalidArgumentException;
import tech.aroma.thrift.exceptions.InvalidTokenException;
import tech.aroma.thrift.exceptions.OperationFailedException;

/**
 *
 * @author SirWellington
 */
public final class NoOpEmailService implements EmailService.Iface
{

    private final static Logger LOG = LoggerFactory.getLogger(NoOpEmailService.class);
    
    public static EmailService.Iface newInstance()
    {
        return new NoOpEmailService();
    }
    
    @Override
    public double getApiVersion() throws TException
    {
        return AromaConstants.API_VERSION;
    }
    
    @Override
    public SendEmailResponse sendEmail(SendEmailRequest request) throws InvalidArgumentException, OperationFailedException,
                                                                        InvalidTokenException, TException
    {
        LOG.info("Received request to send emai: {}", request);
        return new SendEmailResponse();
    }
    
}
