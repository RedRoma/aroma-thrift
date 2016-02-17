namespace java  tech.aroma.thrift.authentication.service
namespace cocoa AuthenticationService_
namespace cpp   aroma.thrift.authentication.service

/*
 * Defined in this File is the Authentication Service API.
 * 
 * NOTE: This is an internal Service not meant to be accessible from
 * the outside world. It is designed to be within the firewall.
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
typedef Aroma.LengthOfTime LengthOfTime;
typedef Aroma.uuid uuid;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Authentication.AuthenticationToken AuthenticationToken
typedef Authentication.TokenType TokenType
typedef Authentication.UserToken UserToken

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.InvalidTokenException InvalidTokenException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.UnauthorizedException UnauthorizedException

const int SERVICE_PORT = 7026;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "authentication-srv.aroma.tech", "port" : SERVICE_PORT };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "authentication-srv.beta.aroma.tech", "port" : SERVICE_PORT };

/** The Default lifetime of a Token created by the Authentication Service. */
const Aroma.LengthOfTime DEFAULT_TOKEN_LIFETIME = { "value" : 60, "unit" : Aroma.TimeUnit.DAYS };

struct CreateTokenRequest
{
    /** 
     * The ID of the entity that will own the token. 
     * For Application tokens, this is the Application ID.
     * For User Tokens, this is the userId.
     */
    1: uuid ownerId;
    /** The desired length of time to keep the Token alive and valid. 
     *  If not present, will be set to DEFAULT_TOKEN_LIFETIME.
     */
    2: optional LengthOfTime lifetime;
    /** This is required, and determines the kind of Token created. */
    3: TokenType desiredTokenType;
    /** Optional stores the name of the entity owning the token, for instance App name or user's email. */
    4: optional string ownerName;
    5: optional uuid organizationId;
    6: optional string organizationName;
}

struct CreateTokenResponse
{
    1: AuthenticationToken token;
}

struct GetTokenInfoRequest
{
    1: string tokenId;
    2: TokenType tokenType;
}

struct GetTokenInfoResponse
{
    1: AuthenticationToken token;
}

struct InvalidateTokenRequest
{
    1: AuthenticationToken token;
    2: optional list<AuthenticationToken> multipleTokens = [];
    /** Deletes all Tokens belonging to this ownerId. */
    3: optional uuid belongingTo;
}

struct InvalidateTokenResponse
{
    1: string message = "Operation completed successfully";
}

struct VerifyTokenRequest
{
    1: string tokenId;
    /** If included, the operation will also verify that the token belongs to this Owner ID. */
    2: optional string ownerId;
}

struct VerifyTokenResponse
{
    1: string message;
}

/**
 * The Authentication Service is responsible for creating and verifying the validity of Tokens.
 * This Includes Application Tokens as well as User Tokens.
 * 
 * NOTE: This Service is for internal use only. It is designed to be called only by
 * Aroma and it's supporting services.
 */
service AuthenticationService
{
    
    double getApiVersion()
    
    /**
     * Create a Token, used to represent a User or an Application.
     */
    CreateTokenResponse createToken(1: CreateTokenRequest request) throws (1: OperationFailedException ex1,
                                                                           2: InvalidArgumentException ex2);
    
    /**
     * Get information about a Token.
     */
    GetTokenInfoResponse getTokenInfo(1 : GetTokenInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                              2 : InvalidTokenException ex2,
                                                                              3 : InvalidArgumentException ex3);
 
    /**
     * Invalidates a Token and removes it from knowledge. Any subsequent references to the Token will produce
     * an InvalidTokenException. 
     */
    InvalidateTokenResponse invalidateToken(1 : InvalidateTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                       2 : InvalidTokenException ex2,
                                                                                       3 : InvalidArgumentException ex3);
 


    /**
     * Verify that a Token is valid, and optionally, that it belongs to the specified pwner.
     */
    VerifyTokenResponse verifyToken(1 : VerifyTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidTokenException ex2,
                                                                           3 : InvalidArgumentException ex3);

    
   }
