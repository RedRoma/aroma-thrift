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


import java.time.Duration;
import java.time.temporal.ChronoUnit;
import java.util.function.Function;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import tech.aroma.banana.thrift.LengthOfTime;
import tech.aroma.banana.thrift.TimeUnit;
import tech.sirwellington.alchemy.annotations.access.NonInstantiable;

import static tech.sirwellington.alchemy.arguments.Arguments.checkThat;
import static tech.sirwellington.alchemy.arguments.assertions.Assertions.notNull;
import static tech.sirwellington.alchemy.arguments.assertions.NumberAssertions.greaterThanOrEqualTo;

/**
 *
 * @author SirWellington
 */
@NonInstantiable
public final class TimeFunctions 
{
    private final static Logger LOG = LoggerFactory.getLogger(TimeFunctions.class);
    
    private TimeFunctions() throws IllegalAccessException
    {
        throw new IllegalAccessException("cannot instantiate");
    }
    
    public static final Function<TimeUnit, ChronoUnit> TIME_UNIT_TO_CHRONO_UNIT = t ->
    {
        checkThat(t)
            .usingMessage("missing time unit")
            .is(notNull());
            
        switch (t)
        {
            case MILLIS:
                return ChronoUnit.MILLIS;
            case SECONDS:
                return ChronoUnit.SECONDS;
            case MINUTES:
                return ChronoUnit.MINUTES;
            case HOURS:
                return ChronoUnit.HOURS;
            case DAYS:
                return ChronoUnit.DAYS;
            case WEEKS:
                return ChronoUnit.WEEKS;
            default:
                throw new IllegalArgumentException("Unexpected Time Unit: " + t);
        }
        
    };
    
    public static final Function<TimeUnit, ChronoUnit> timeUnitToChronoUnit()
    {
        return TIME_UNIT_TO_CHRONO_UNIT;
    }
    
    public static final Function<LengthOfTime, Duration> LENGTH_OF_TIME_TO_DURATION = t ->
    {
        checkThat(t).is(notNull());
        
        checkThat(t.unit)
            .usingMessage("missing time unit")
            .is(notNull());
        
        checkThat(t.value)
            .usingMessage("time value must be >= 0")
            .is(greaterThanOrEqualTo(0L));

        ChronoUnit chronoUnit = TIME_UNIT_TO_CHRONO_UNIT.apply(t.unit);
        return chronoUnit.getDuration().multipliedBy(t.value);
    };
    
    public static Function<LengthOfTime, Duration> lengthOfTimeToDuration()
    {
        return LENGTH_OF_TIME_TO_DURATION;
    }
    

}
