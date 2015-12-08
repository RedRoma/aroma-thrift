namespace java  tech.aroma.banana.thrift.exceptions
namespace cocoa BananaException_
namespace cpp   aroma.banana.thrift.exceptions

/*
 * Defined in this File are the Banana Service Exceptions
 * that can occur during operation.
 */

include "Banana.thrift"

/**
 * Thrown when the Service receives a Bad or Invalid Argument.
 */
exception InvalidArgumentException
{
    1: string message = "Invalid Argument Received"
}

/**
 * Thrown when a Service Operation could not be authenticated
 * or validated.
 */
exception InvalidCredentialsException
{
    1: string message = "Failed to Verify and Authenticate credentials"
}

/**
 * Thrown when a Developer tries to perform an Operation
 * that only an "Owner" can do.
 */
exception UnauthorizedException
{
    1: string message = "Only an owner can do that"
}

/**
 * Thrown when referring to a service that does not exist.
 */
exception ServiceDoesNotExistException
{
    1: string message = "The Specified Service does not exist"
}

/**
 * Thrown when trying to register a Channel for a Service that
 * has already been registered before, either by the current Developer
 * or by someone else.
 */
exception ServiceAlreadyRegisteredException
{
    1: string message = "This Channel has already been registered for this Service"
}

/**
 * Thrown when a Service's provisioned Throughout has been exceeded.
 */
exception ThroughoutExceededException
{
    1: string message = "You have exceeded your allocated throughput. Buy more or slow down"
}

/**
 * Thrown when trying to register a Custom Banana Service Channel, but the Endpoint cannot
 * be reached by the Banana Service.
 */
exception CustomChannelUnreachableException
{
    1: string message = "The Custom Channel you've supplied could not be reached. Please ensure the Service is reachable and operational."
}

/**
 * Thrown when referencing a Developer's saved Channel that does not exist.
 */
exception ChannelDoesNotExistException
{
    1: string message = "The Channel specified does not exist in the System"
}

/**
 * Thrown when an Operation could not be completed for any reason.
 * This is like a catch-all exception
 */
exception OperationFailedException
{
    1: string message = "The Operation could not be completed"
}