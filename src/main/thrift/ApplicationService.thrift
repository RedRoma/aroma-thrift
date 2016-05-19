namespace java  tech.aroma.thrift.application.service
namespace cocoa ApplicationService_
namespace cpp   aroma.thrift.application.service
namespace php   RedRoma.Aroma.ApplicationService

/*
 * Defined in this File is the Application Service API.
 * This Service is responsible for accepting, processing, and storing
 * incoming messages sent by Applications.
 */

include "Authentication.thrift"
include "Aroma.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Aroma.int int;
typedef Aroma.long long;
typedef Aroma.timestamp timestamp;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Aroma.Application Application
typedef Aroma.Urgency Urgency

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidTokenException InvalidTokenException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException
typedef Exceptions.ApplicationDoesNotExistException ApplicationDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException

const int SERVICE_PORT = 7002;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "application-srv.aroma.tech", "port" : 80 };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "application-srv.beta.aroma.tech", "port" : SERVICE_PORT };


/**
 * The maximum number of characters allowed in a Message.
 *
 * Anything Longer will be Truncated.
 */
const int MAX_TITLE_LENGTH = 40;

/**
 * The maximum number of characters allowed in the body of a message.
 * The rest will be truncated.
 */
const int MAX_CHARACTERS_IN_BODY = 15000

//==========================================================
// QUERY OPERATIONS

//==========================================================
// Operations performed by Applications

/**
 * Send a Message to Aroma.
 */
struct SendMessageRequest
{
    1: ApplicationToken applicationToken;
    2: string body;
    3: Urgency urgency = Aroma.Urgency.LOW;
    /** The time that the message was generated on the Client Side. */
    4: optional timestamp timeOfMessage;
    5: string title;
    6: optional string hostname;
    7: optional string macAddress;
    8: optional string ipv4Address;
    9: optional string deviceName;
    10: optional string operatingSystemName;
}

struct SendMessageResponse
{
    1: string messageId;
}

/**
 * The Application  Service is designed to be called by Applications, to send messages
 * and report alerts to people. It is designed to be used by machines, not humans.
 * This is where Incoming Messages are accepted, processed, and stored.
 */
service ApplicationService
{

    double getApiVersion()

    //===============================================
    // Operations for Applications
    //===============================================


    /**
     * Send a Message from your Application to Aroma.
     */
    SendMessageResponse sendMessage(1 : SendMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidTokenException ex3)

    /**
     * Fire-And-Forget version of sendMessage() ;
     * With this operation, the client does not wait for the server
     * to finish processing. The only guarantees provided is that
     * the Message was successfully sent over the Transport.
     */
    oneway void sendMessageAsync(1 : SendMessageRequest request)

}
