namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_
namespace cpp   tech.aroma.banana.thrift.service

/*
 * Defined in this File is the Banana Service API and all of the operations
 * that can be performed by both Developers and their services.
 */

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


struct ProvisionServiceRequest
{
    1: string token;
    2: string serviceName;
    3: optional string programmingLanguage;
    4: string organization;
}

struct ProvisionServiceResponse
{
    1: string bananaToken;
    2: string serviceName;
}

struct SubscribeToServiceRequest
{
    1: string token;
    2: string serviceName;
    3: optional string organization;
}

struct SubscribeToServiceResponse
{
    1: string message;
}


struct RegisterHealthCheckRequest
{
   1: Endpoint.Endpoint endpoint;
}

struct RegisterHealthCheckResponse
{
    
}


service BananaService
{

    ProvisionServiceResponse provisionService(1: ProvisionServiceRequest request) throws(1: OperationFailedException ex1,
                                                                                         2: InvalidArgumentException ex2,
                                                                                         3: InvalidCredentialsException ex3,
                                                                                         4: ServiceDoesNotExistException ex4)

    SubscribeToServiceResponse subscribeToService(1: SubscribeToServiceRequest request) throws(1: OperationFailedException ex1,
                                                                                               2: InvalidArgumentException ex2,
                                                                                               3: InvalidCredentialsException ex3,
                                                                                               4: ServiceDoesNotExistException ex4)


    RegisterHealthCheckResponse registerHealthCheck(1: RegisterHealthCheckRequest request) throws(1: OperationFailedException ex1,
                                                                                                  2: InvalidArgumentException ex2,
                                                                                                  3: InvalidCredentialsException ex3,
                                                                                                  4: ServiceDoesNotExistException ex4)
}
