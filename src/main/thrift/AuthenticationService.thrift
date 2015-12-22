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
typedef Banana.TimePeriod TimePeriod;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Authentication.UserToken UserToken

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.InvalidTokenException InvalidTokenException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.UnauthorizedException UnauthorizedException

/** Defines the Version of the Banana Service API of this specification. */
const double API_VERSION = 1.4;

const int SERVICE_PORT = 6001;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "authentication-srv.banana.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "authentication-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };

struct CreateUserTokenRequest
{
    1: string userId;
    2: TimePeriod lifetime;
}

struct CreateUserTokenResponse
{
    1: UserToken token;
}

struct CreateApplicationTokenRequest
{
    1: string applicationId;
    2: TimePeriod lifetime;
}

struct CreateApplicationTokenResponse
{
    1: ApplicationToken token;
}

struct GetApplicationTokenInfoRequest
{
    1: ApplicationToken token;
}

struct GetApplicationTokenInfoResponse
{
    1: string applicationId;
}

struct GetUserTokenInfoRequest
{
    1: UserToken token;
}

struct GetUserTokenInfoResponse
{
    1: string userId;
}

struct InvalidateApplicationTokenRequest
{
    1: ApplicationToken token;
}

struct InvalidateApplicationTokenResponse
{
    
}

struct InvalidateUserTokenRequest
{
    1: ApplicationToken token;
}

struct InvalidateUserTokenResponse
{
    
}

struct VerifyUserTokenRequest
{
    1: UserToken token;
    /** If included, the operation will also verify that the token belongs to this User ID. */
    2: optional string userId;
}

struct VerifyUserTokenResponse
{
    1: string message;
}

struct VerifyApplicationTokenRequest
{
    1: ApplicationToken token;
    /** If included, the operation will also verify that the token belongs to this Application ID*/
    2: optional string applicationId;
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
    
    /**
     * Create an Application Token, used to represent an Application or Computer.
     */
    CreateApplicationTokenResponse createApplicationToken(1: CreateApplicationTokenRequest request) throws (1: OperationFailedException ex);
    
    /**
     * Create a User Token, used to represent a Human.
     */
    CreateUserTokenResponse createUserToken(1: CreateUserTokenRequest request) throws (1: OperationFailedException ex);

    /**
     * Get information about an Application Token.
     */
    GetApplicationTokenInfoResponse getApplicationTokenInfo(1 : GetApplicationTokenInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                                                               2 : InvalidTokenException ex2);

    /**
     * Get information about a User Token.
     */
    GetUserTokenInfoResponse getUserTokenInfo(1 : GetUserTokenInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                                          2 : InvalidTokenException ex2);

 
    
    /**
     * Invalidates a Token and removes it from knowledge. Any subsequent references to the Token will produce
     * an InvalidTokenException. 
     */
    InvalidateApplicationTokenResponse invalidateApplicationToken(1 : InvalidateApplicationTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                                        2 : InvalidTokenException ex2);
    

    
    /**
     * Invalidates a Token and removes it from knowledge. Any subsequent references to the Token will produce
     * an InvalidTokenException. 
     */   
    InvalidateUserTokenResponse invalidateUserToken(1 : InvalidateUserTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                   2 : InvalidTokenException ex2);


    /**
     * Verify that a Token is valid, and optionally, that it belongs to the specified application.
     */
    VerifyApplicationTokenResponse verifyApplicationToken(1 : VerifyApplicationTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                            2 : InvalidTokenException ex2);

    /**
     * Verify that a Token is valid, and optionally, that it belongs to the specified user.
     */
    VerifyUserTokenResponse verifyUserToken(1 : VerifyUserTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                       2 : InvalidTokenException ex2);
    
   }
