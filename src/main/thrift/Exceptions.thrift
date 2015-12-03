namespace java  tech.aroma.banana.thrift.exceptions
namespace cocoa BananaException_
namespace cpp   tech.aroma.banana.thrift.exceptions

include "Banana.thrift"

exception InvalidArgumentException
{
    1: string message = "Invalid Argument Received"
}

exception InvalidCredentialsException
{
    1: string message = "Failed to Verify and Authenticate credentials"
}

exception ServiceDoesNotExistException
{
    1: string message = "The Specified Service does not exist"
}

exception OperationFailedException
{
    1: string message = "The Operation could not be completed"
}