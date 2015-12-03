namespace java  tech.aroma.banana.thrift.exceptions
namespace cocoa BananaException_

include "Banana.thrift"

exception InvalidArgumentException
{
    1: string message = "Invalid Argument Received"
}

exception OperationFailedException
{
    1: string message = "The Operation could not be completed"
}