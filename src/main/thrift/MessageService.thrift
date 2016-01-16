namespace java  tech.aroma.banana.thrift.message.service
namespace cocoa MessageService_
namespace cpp   aroma.banana.thrift.message.service

/*
 * Defined in this File is the Message Service API.
 * This Service is responsible for storing Messages and providing Query
 * functionality.
 * This is an internal service not designed to be exposed to the Outside World.
 */

include "Authentication.thrift"
include "Banana.thrift"
include "Channels.thrift"
include "Endpoint.thrift"
include "Events.thrift"
include "Exceptions.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

//Struct Typedefs
typedef Authentication.AuthenticationToken AuthenticationToken
typedef Authentication.UserToken UserToken
typedef Banana.Application Application
typedef Banana.Urgency Urgency
typedef Channels.BananaChannel BananaChannel
typedef Events.Event Event

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.InvalidTokenException InvalidTokenException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException
typedef Exceptions.ApplicationDoesNotExistException ApplicationDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException

const int SERVICE_PORT = 7011;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "message-srv.banana.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "message-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };


//==========================================================
// SERVICE REQUESTS


/**
 * Deletes a Message.
 * 
 * #owner
 */
struct DeleteMessageRequest
{
    1: UserToken token;
    2: string messageId;
    3: string applicationId;
    /** Use for Batch Deletes. */
    4: optional list<string> messageIds = [];
}

struct DeleteMessageResponse
{
    1: optional int messagesDeleted = 0;
}

//==========================================================
// SERVICE DEFINITION
/**
 * The Notification  Service sends events and Notifications to the proper channels.
 * This includes Email, Slack, iOS Push Notification, etc.
 */
service MessageService
{
    
    double getApiVersion()
    

}
