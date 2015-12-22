namespace java  tech.aroma.banana.thrift.authentication.service
namespace cocoa AuthenticationService_
namespace cpp   aroma.banana.thrift.authentication.service

/*
 * Defined in this File is the Authentication Service API.
 * 
 * NOTE: This is an internal Service not meant to be accessible from
 * the outside world. It is designed to be within the firewall.
 */

include "Authentication.thrift"
include "Banana.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Authentication.UserToken UserToken

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException
typedef Exceptions.ApplicationDoesNotExistException ApplicationDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException

/** Defines the Version of the Banana Service API of this specification. */
const double API_VERSION = 1.4;

const int SERVICE_PORT = 6001;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "authentication-srv.banana.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "authentication-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };

struct VerifyUserTokenRequest
{
    1: UserToken token;
}

struct VerifyUserTokenResponse
{
    1: string message;
}

struct VerifyApplicationTokenRequest
{
    1: ApplicationToken token;
}

struct VerifyApplicationTokenResponse
{
    1: string message;
}

/**
 * The Authentication Service is responsible for creating and verifying the validity of Tokens.
 * This Includes Application Tokens as well as User Tokens.
 * 
 * NOTE: This Service is for internal use only. It is designed to be called only by
 * the Banana Service and it's supporting services.
 */
service AuthenticationService
{
    
    double getApiVersion()
    
    //===============================================
    // Operations for Applications
    //===============================================

}
