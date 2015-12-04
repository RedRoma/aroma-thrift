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
 * Thrown when referring to a service that does not exist.
 */
exception ServiceDoesNotExistException
{
    1: string message = "The Specified Service does not exist"
}

/**
 * Thrown when an Operation could not be completed for any reason.
 */
exception OperationFailedException
{
    1: string message = "The Operation could not be completed"
}