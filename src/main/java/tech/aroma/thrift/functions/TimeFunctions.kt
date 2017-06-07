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


import tech.aroma.thrift.LengthOfTime
import tech.aroma.thrift.TimeUnit
import tech.sirwellington.alchemy.annotations.access.NonInstantiable
import tech.sirwellington.alchemy.annotations.arguments.Required
import tech.sirwellington.alchemy.arguments.assertions.*
import tech.sirwellington.alchemy.arguments.checkThat
import java.time.Duration
import java.time.Instant
import java.time.Instant.now
import java.time.temporal.ChronoUnit
import java.util.function.Function

/**
 *
 * @author SirWellington
 */
@NonInstantiable
object TimeFunctions
{

    val TIME_UNIT_TO_CHRONO_UNIT: Function<TimeUnit, ChronoUnit> = Function { t ->


        when (t)
        {
            TimeUnit.MILLIS  -> ChronoUnit.MILLIS
            TimeUnit.SECONDS -> ChronoUnit.SECONDS
            TimeUnit.MINUTES -> ChronoUnit.MINUTES
            TimeUnit.HOURS   -> ChronoUnit.HOURS
            TimeUnit.DAYS    -> ChronoUnit.DAYS
            TimeUnit.WEEKS   -> ChronoUnit.WEEKS
            else             -> throw IllegalArgumentException("Unexpected Time Unit: " + t)
        }

    }

    @JvmStatic
    fun timeUnitToChronoUnit(): Function<TimeUnit, ChronoUnit>
    {
        return TIME_UNIT_TO_CHRONO_UNIT
    }

    @JvmStatic
    val LENGTH_OF_TIME_TO_DURATION = Function<LengthOfTime, Duration> { t ->

        checkThat(t).isA(nonNullReference())

        checkThat(t.unit)
                .usingMessage("missing time unit")
                .isA(nonNullReference())

        checkThat(t.value)
                .usingMessage("time value must be >= 0")
                .isA(greaterThanOrEqualTo(0L))

        val chronoUnit = TIME_UNIT_TO_CHRONO_UNIT.apply(t.unit)
        chronoUnit.duration.multipliedBy(t.value)
    }

    @JvmStatic
    fun lengthOfTimeToDuration(): Function<LengthOfTime, Duration>
    {
        return LENGTH_OF_TIME_TO_DURATION
    }

    @JvmStatic
    fun toSeconds(@Required lengthOfTime: LengthOfTime): Long
    {
        checkThat(lengthOfTime).isA(nonNullReference())

        val duration = TimeFunctions.lengthOfTimeToDuration().apply(lengthOfTime)
        return duration.seconds
    }


    /**
     * Converts an Aroma Timestamp to an appropriate instance.
     * @param timestamp The Aroma Timestamp, stored as milliseconds-since-epoch.
     *
     * @return An [Instant] representation.
     *
     *
     * @see isInThePast
     * @see isInTheFuture
     */
    @JvmStatic
    fun toInstant(timestamp: Long): Instant
    {
        return Instant.ofEpochMilli(timestamp)
    }

    /**
     * Checks if an epoch is in the past using [Instant]
     *
     * @param timestamp
     *
     * @return
     *
     *
     * @see toInstant
     * @see isInTheFuture
     */
    @JvmStatic
    fun isInThePast(timestamp: Long): Boolean
    {
        return toInstant(timestamp).isBefore(now())
    }

    /**
     * Checks if an epoch timestamp is in the future using [Instant].
     *
     * @param timestamp
     *
     * @return
     *
     *
     * @see isInThePast
     * @see toInstant
     */
    @JvmStatic
    fun isInTheFuture(timestamp: Long): Boolean
    {
        return toInstant(timestamp).isAfter(now())
    }


}