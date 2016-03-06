namespace java  tech.aroma.thrift.email.service
namespace cocoa EmailService_
namespace cpp   aroma.thrift.email.service

/*
 * Defined in this File is the Email Service API.
 * This Service is responsible for actually sending Emails to Users.
 */

include "Authentication.thrift"
include "Aroma.thrift"
include "Channels.thrift"
include "Endpoint.thrift"
include "Email.thrift"
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
typedef Aroma.User User
typedef Channels.AromaChannel AromaChannel
typedef Email.EmailMessage EmailMessage

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

const int SERVICE_PORT = 7017;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "email-srv.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "email-srv.beta.aroma.tech", "port" : SERVICE_PORT };

//==========================================================
// EMAILS



struct SendEmailRequest
{
    1: string emailAddress;
    2: EmailMessage emailMessage;
}

struct SendEmailResponse
{
    
}


//==========================================================
// SERVICE DEFINITION
/**
 * The Notification  Service sends events and Notifications to the proper channels.
 * This includes Email, Slack, iOS Push Notification, etc.
 */
service EmailService
{
    
    double getApiVersion()
    
    //===============================================
    // Operations for Sending Emails
    //===============================================

    SendEmailResponse sendEmail(1 : SendEmailRequest request) throws(1 : InvalidArgumentException ex1,
                                                                     2 : OperationFailedException ex2,
                                                                     3 : InvalidTokenException ex3);
 
}
