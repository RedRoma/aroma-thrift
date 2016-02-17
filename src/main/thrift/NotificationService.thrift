namespace java  tech.aroma.banana.thrift.notification.service
namespace cocoa NotificationService_
namespace cpp   aroma.banana.thrift.notification.service

/*
 * Defined in this File is the Notification Service API.
 * This Service is responsible for storing Events and notifications,
 * and actually sending Notifications to the right channels.
 */

include "Authentication.thrift"
include "Aroma.thrift"
include "Channels.thrift"
include "Endpoint.thrift"
include "Events.thrift"
include "Exceptions.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Aroma.int int;
typedef Aroma.long long;
typedef Aroma.timestamp timestamp;
typedef Aroma.uuid uuid;

//Struct Typedefs
typedef Authentication.AuthenticationToken AuthenticationToken
typedef Aroma.Application Application
typedef Aroma.Urgency Urgency
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

const int SERVICE_PORT = 7009;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "notification-srv.banana.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "notification-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };


//==========================================================
// SERVICE REQUESTS

struct SendNotificationRequest
{
    1: AuthenticationToken token;
    2: Event event;
    3: list<BananaChannel> channels;
}

struct SendNotificationResponse
{
    1: optional uuid notificationId;
}


//==========================================================
// SERVICE DEFINITION
/**
 * The Notification  Service sends events and Notifications to the proper channels.
 * This includes Email, Slack, iOS Push Notification, etc.
 */
service NotificationService
{
    
    double getApiVersion()
    
    //===============================================
    // Operations for Applications
    //===============================================
    
    SendNotificationResponse sendNotification(1: SendNotificationRequest request) throws (1 : InvalidArgumentException ex1,
                                                                                          2 : OperationFailedException ex2,
                                                                                          3 : InvalidTokenException ex3);

}
