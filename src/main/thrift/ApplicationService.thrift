namespace java  tech.aroma.banana.thrift.application.service
namespace cocoa ApplicationService_
namespace cpp   aroma.banana.thrift.application.service

/*
 * Defined in this File is the Application Service API.
 * This Service is responsible for accepting, processing, and storing
 * incoming messages sent by Applications.
 */

include "Authentication.thrift"
include "Banana.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"
include "MessageService.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Banana.Application Application
typedef Banana.Urgency Urgency

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidTokenException InvalidTokenException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException
typedef Exceptions.ApplicationDoesNotExistException ApplicationDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.ThroughoutExceededException ThroughoutExceededException
typedef Exceptions.UnauthorizedException UnauthorizedException

//Service Request Typedefs
typedef MessageService.SendMessageRequest SendMessageRequest
typedef MessageService.SendMessageResponse SendMessageResponse

const int SERVICE_PORT = 7005;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "application-srv.banana.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "application-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };


/**
 * The Application  Service is designed to be called by Applications, to send messages
 * and report alerts to people. It is designed to be used by machines, not humans.
 * This is where Incoming Messages are accepted, processed, and stored.
 * 
 * The Application Service also performs rate-metering to ensure
 * throughput limits are not exceeded.
 */
service ApplicationService
{
    
    double getApiVersion()
    
    //===============================================
    // Operations for Applications
    //===============================================


    /**
     * Send a Message from your Application to the Banana Service.
     */
    SendMessageResponse sendMessage(1 : SendMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidTokenException ex3,
                                                                           4 : ApplicationDoesNotExistException ex4,
                                                                           5 : ThroughoutExceededException ex5)

    /**
     * Fire-And-Forget version of sendMessage() ;
     * With this operation, the client does not wait for the server
     * to finish processing. The only guarantees provided is that
     * the Message was successfully sent over the Transport.
     */
    oneway void sendMessageAsync(1 : SendMessageRequest request)

}
