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
import tech.aroma.thrift.exceptions.*;
import tech.aroma.thrift.notification.service.*;
import tech.sirwellington.alchemy.arguments.assertions.Assertions;

import static tech.sirwellington.alchemy.arguments.Arguments.*;
import static tech.sirwellington.alchemy.arguments.assertions.Assertions.nonNullReference;


/**
 *
 * @author SirWellington
 */
public final class NoOpNotificationService implements NotificationService.Iface
{

    private final static Logger LOG = LoggerFactory.getLogger(NoOpNotificationService.class);

    @Override
    public double getApiVersion() throws TException
    {
        return AromaConstants.API_VERSION;
    }

    @Override
    public SendNotificationResponse sendNotification(SendNotificationRequest request) throws TException
    {
        checkThat(request)
            .throwing(InvalidArgumentException.class)
            .is(Assertions.<SendNotificationRequest>notNull());

        return new SendNotificationResponse();
    }

}
