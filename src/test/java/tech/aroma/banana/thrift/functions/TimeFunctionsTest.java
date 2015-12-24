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
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import tech.aroma.banana.thrift.LengthOfTime;
import tech.aroma.banana.thrift.TimeUnit;
import tech.sirwellington.alchemy.generator.NumberGenerators;
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner;
import tech.sirwellington.alchemy.test.junit.runners.DontRepeat;
import tech.sirwellington.alchemy.test.junit.runners.Repeat;

import static org.hamcrest.Matchers.is;
import static org.hamcrest.Matchers.notNullValue;
import static org.junit.Assert.assertThat;
import static tech.sirwellington.alchemy.generator.AlchemyGenerator.one;
import static tech.sirwellington.alchemy.generator.EnumGenerators.enumValueOf;
import static tech.sirwellington.alchemy.test.junit.ThrowableAssertion.assertThrows;

/**
 *
 * @author SirWellington
 */
@Repeat(500)
@RunWith(AlchemyTestRunner.class)
public class TimeFunctionsTest
{
    
    private TimeUnit timeUnit;
    private long timeValue;
    private LengthOfTime lengthOfTime;
    
    @Before
    public void setUp()
    {
        timeUnit = enumValueOf(TimeUnit.class).get();
        timeValue = one(NumberGenerators.longs(0, 10_000));
        lengthOfTime = new LengthOfTime()
            .setUnit(timeUnit)
            .setValue(timeValue);
    }
    
    @DontRepeat
    @Test
    public void testCannotInstantiate()
    {
        assertThrows(() -> TimeFunctions.class.newInstance())
            .isInstanceOf(IllegalAccessException.class);
    }
    
    @Test
    public void testTimeUnitToChronoUnit()
    {
        
        assertThrows(() -> TimeFunctions.TIME_UNIT_TO_CHRONO_UNIT.apply(null))
            .isInstanceOf(IllegalArgumentException.class);
        
        ChronoUnit expected = toChronoUnit(timeUnit);
        ChronoUnit chronoUnit = TimeFunctions.TIME_UNIT_TO_CHRONO_UNIT.apply(timeUnit);
        assertThat(chronoUnit, notNullValue());
        assertThat(chronoUnit, is(expected));
    }
    
    @Test
    public void testLengthOfTimeToDuration()
    {
        assertThrows(() -> TimeFunctions.LENGTH_OF_TIME_TO_DURATION.apply(null))
            .isInstanceOf(IllegalArgumentException.class);
        
        ChronoUnit chronoUnit = toChronoUnit(timeUnit);
        Duration duration = TimeFunctions.LENGTH_OF_TIME_TO_DURATION.apply(lengthOfTime);
        Duration expectedDuration = chronoUnit.getDuration().multipliedBy(timeValue);
        assertThat(duration, is(expectedDuration));
    }
    
    private ChronoUnit toChronoUnit(TimeUnit timeUnit)
    {
        switch (timeUnit)
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
                throw new UnsupportedOperationException("Unexpected Time Unit Type: " + timeUnit);
        }
    }
    
}
