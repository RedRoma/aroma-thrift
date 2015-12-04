namespace java  tech.aroma.banana.thrift.exceptions
namespace cocoa BananaException_
namespace cpp   tech.aroma.banana.thrift.exceptions

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
 * Thrown when an Operation could not be completed for any reason.
 * This is like a catch-all exception
 */
exception OperationFailedException
{
    1: string message = "The Operation could not be completed"
}