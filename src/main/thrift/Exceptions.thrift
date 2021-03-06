namespace java  tech.aroma.thrift.exceptions
namespace cocoa AromaException_
namespace cpp   aroma.thrift.exceptions
namespace php   RedRoma.Aroma.Exceptions

/*
 * Defined in this File are the Aroma Exceptions
 * that can occur during operation.
 */

/**
 * Thrown when the Service receives a Bad or Invalid Argument.
 */
exception InvalidArgumentException
{
    1: string message = "Invalid Argument Received"
}

/**
 * Thrown when a User's credentials did not match up when attempting
 * to Sign In.
 */
exception InvalidCredentialsException
{
    1: string message = "Failed to Verify and Authenticate Credentials"
}

/**
 * Thrown when referencing or using an Invalid Token (Application or User).
 */
exception InvalidTokenException
{
    1: string message = "The specified token is invalid"
}

/**
 * Thrown when trying to create an account that is already registered.
 */
exception AccountAlreadyExistsException
{
    1: string message = "This email has already been registered. Reset your password if you forgot it."
}

/**
 * Thrown when trying to reset an Account, but the Reset Code provided is invalid.
 */
exception InvalidCodeException
{
    1: string message = "The Reset Password is invalid"
}

/**
 * Thrown when a Human tries to perform an Operation
 * that only an "Owner" can do.
 */
exception UnauthorizedException
{
    1: string message = "Only an Owner can do that"
}

/**
 * Thrown when referring to something that does not exist.
 * This is the generic version, and is to be used with things 
 * not covered by AppDoesNotExist, UserDoesNotExist, etc.
 */
exception DoesNotExistException
{
    1: string message = "The requested resource does not exist"
}

/**
 * Thrown when referring to a service that does not exist.
 */
exception ApplicationDoesNotExistException
{
    1: string message = "The Specified Application does not exist."
}

/**
 * Thrown when trying to register a Channel for an Application that
 * has already been registered before, either by the current Person
 * or by someone else.
 */
exception ApplicationAlreadyRegisteredException
{
    1: string message = "This Channel has already been registered for this Application."
}

exception UserDoesNotExistException
{
    1: string message = "The User you're referring to does not exist."
}

/**
 * Thrown when an Application sends too many messages in a short period of time.
 * This helps combat DoS attacks.
 */
exception ThroughoutExceededException
{
    1: string message = "You have exceeded your allocated throughput. Buy more or slow down."
}

/**
 * Thrown when trying to register a Custom AromaChannel, but the Endpoint cannot
 * be reached by Aroma.
 */
exception CustomChannelUnreachableException
{
    1: string message = "The Custom Channel you've supplied could not be reached. Please ensure the Application is reachable and operational."
}

/**
 * Thrown when referencing a Developer's saved Channel that does not exist.
 */
exception ChannelDoesNotExistException
{
    1: string message = "The Channel specified does not exist in the System."
}

/**
 * Thrown when referencing a Message that does not exist.
 */
exception MessageDoesNotExistException
{
    1: string message = "The Message specified does not exist."
}

/**
 * Thrown when referencing an Organization that does not exist.
 */
exception OrganizationDoesNotExistException
{
    1: string message = "The Organization specified does not exist."
}

/**
 * Thrown when an Operation could not be completed for any reason.
 * This is like a catch-all exception
 */
exception OperationFailedException
{
    1: string message = "The Operation could not be completed"
}