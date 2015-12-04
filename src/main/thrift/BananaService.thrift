namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_
namespace cpp   tech.aroma.banana.thrift.service

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

struct RegisterHealthCheckRequest
{
   
}

struct RegisterHealthCheckResponse
{
    
}


service BananaService
{
    
    ProvisionServiceResponse provisionService(ProvisionServiceRequest request) throws (OperationFailedException ex1,
                                                                                       InvalidArgumentException ex2,
                                                                                       InvalidCredentialsException ex3,
                                                                                       ServiceDoesNotExistException ex4)
    
    
    RegisterHealthCheckResponse registerHealthCheck(RegisterHealthCheckRequest request) throws (OperationFailedException ex1,
                                                                                                InvalidArgumentException ex2,
                                                                                                InvalidCredentialsException ex3,
                                                                                                ServiceDoesNotExistException ex4)
}
