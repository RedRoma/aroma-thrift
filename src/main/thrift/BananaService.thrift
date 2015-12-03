namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_

include "Authentication.thrift"
include "Banana.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"

typedef i32 int
typedef i64 long
typedef i64 timestamp

//Exception Typedefs
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ServiceDoesNotExistException ServiceDoesNotExistException


struct RegisterHealthCheckRequest
{
   
}

struct RegisterHealthCheckResponse
{
    
}


service BananaService
{
    RegisterHealthCheckResponse registerHealthCheck(1: RegisterHealthCheckRequest request) throws (1: OperationFailedException ex1,
                                                                                                   2: InvalidArgumentException ex2,
                                                                                                   3: InvalidCredentialsException ex3,
                                                                                                   4: ServiceDoesNotExistException ex4
                                                                                                    )
}
