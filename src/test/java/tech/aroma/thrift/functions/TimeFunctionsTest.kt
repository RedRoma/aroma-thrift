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

package tech.aroma.thrift.functions

import org.hamcrest.Matchers.equalTo
import org.hamcrest.Matchers.notNullValue
import org.junit.Assert.assertThat
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import tech.aroma.thrift.LengthOfTime
import tech.aroma.thrift.TimeUnit
import tech.aroma.thrift.TimeUnit.DAYS
import tech.aroma.thrift.TimeUnit.HOURS
import tech.aroma.thrift.TimeUnit.MILLIS
import tech.aroma.thrift.TimeUnit.MINUTES
import tech.aroma.thrift.TimeUnit.SECONDS
import tech.aroma.thrift.TimeUnit.WEEKS
import tech.sirwellington.alchemy.generator.AlchemyGenerator.Get.one
import tech.sirwellington.alchemy.generator.NumberGenerators
import tech.sirwellington.alchemy.generator.NumberGenerators.Companion.integers
import tech.sirwellington.alchemy.generator.TimeGenerators.Companion.anytime
import tech.sirwellington.alchemy.generator.TimeGenerators.Companion.futureInstants
import tech.sirwellington.alchemy.generator.TimeGenerators.Companion.pastInstants
import tech.sirwellington.alchemy.test.junit.runners.AlchemyTestRunner
import tech.sirwellington.alchemy.test.junit.runners.DontRepeat
import tech.sirwellington.alchemy.test.junit.runners.Repeat
import java.time.Instant
import java.time.temporal.ChronoUnit
import java.util.Arrays

/**
 * @author SirWellington
 */
@Repeat(500)
@RunWith(AlchemyTestRunner::class)
class TimeFunctionsTest
{

    private lateinit var timeUnit: TimeUnit
    private var timeValue: Long = 0
    private lateinit var lengthOfTime: LengthOfTime
    private var expectedInSeconds: Long = 0

    private var anyTimestamp: Long = 0
    private var pastTimestamp: Long = 0
    private var futureTimestamp: Long = 0

    @Before
    fun setUp()
    {
        val units = Arrays.asList(SECONDS, MINUTES, DAYS)
        timeUnit = anyOf(units)!!
        timeValue = one(NumberGenerators.integers(1, 100)).toLong()

        lengthOfTime = LengthOfTime(timeUnit, timeValue)

        val duration = TimeFunctions.lengthOfTimeToDuration().apply(lengthOfTime)
        expectedInSeconds = duration.seconds

        anyTimestamp = one(anytime()).toEpochMilli()
        pastTimestamp = one(pastInstants()).toEpochMilli()
        futureTimestamp = one(futureInstants()).toEpochMilli()
    }


    @DontRepeat
    @Test(expected = IllegalAccessException::class)
    @Throws(IllegalAccessException::class, InstantiationException::class)
    fun testCannotInstantiate()
    {
        TimeFunctions::class.java.newInstance()
    }

    @Test
    fun testTimeUnitToChronoUnit()
    {

        val expected = toChronoUnit(timeUnit)
        val chronoUnit = TimeFunctions.TIME_UNIT_TO_CHRONO_UNIT.apply(timeUnit)
        assertThat(chronoUnit, notNullValue())
        assertThat(chronoUnit, equalTo(expected))
    }

    @Test
    fun testLengthOfTimeToDuration()
    {
        val chronoUnit = toChronoUnit(timeUnit)
        val duration = TimeFunctions.LENGTH_OF_TIME_TO_DURATION.apply(lengthOfTime)
        val expectedDuration = chronoUnit.duration.multipliedBy(timeValue)
        assertThat(duration, equalTo(expectedDuration))
    }


    @Test
    fun testToSeconds()
    {
        val seconds = TimeFunctions.toSeconds(lengthOfTime!!)
        assertThat(seconds, equalTo(expectedInSeconds))
    }

    private fun toChronoUnit(timeUnit: TimeUnit): ChronoUnit
    {
        when (timeUnit)
        {
            MILLIS  -> return ChronoUnit.MILLIS
            SECONDS -> return ChronoUnit.SECONDS
            MINUTES -> return ChronoUnit.MINUTES
            HOURS   -> return ChronoUnit.HOURS
            DAYS    -> return ChronoUnit.DAYS
            WEEKS   -> return ChronoUnit.WEEKS
            else    -> throw UnsupportedOperationException("Unexpected Time Unit Type: " + timeUnit)
        }
    }

    @Test
    fun testToInstant()
    {
        val result = TimeFunctions.toInstant(anyTimestamp)
        assertThat(result, equalTo(Instant.ofEpochMilli(anyTimestamp)))
        assertThat(result.toEpochMilli(), equalTo(anyTimestamp))
    }

    @Test
    fun testIsInThePast()
    {
        assertThat(TimeFunctions.isInThePast(pastTimestamp), equalTo(true))
        assertThat(TimeFunctions.isInThePast(futureTimestamp), equalTo(false))
    }

    @Test
    fun testIsInTheFuture()
    {
        assertThat(TimeFunctions.isInTheFuture(futureTimestamp), equalTo(true))
        assertThat(TimeFunctions.isInTheFuture(pastTimestamp), equalTo(false))
    }


    private fun <T> anyOf(list: List<T>): T?
    {
        if (list.isEmpty())
        {
            return null
        }

        val index = one(integers(0, list.size - 1))
        return list[index]
    }
}
