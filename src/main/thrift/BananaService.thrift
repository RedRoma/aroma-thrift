namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_
namespace cpp   aroma.banana.thrift.service

/*
 * Defined in this File is the Banana Service API and all of the operations
 * that can be performed by both Developers and their services.
 */

include "Authentication.thrift"
include "Banana.thrift"
include "Channels.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"
include "Notifications.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 * 
 * Tag definitions:
 * 
 * #developer   - Signifies an Operation designed to be used by Humans.
 * #service     - Signifies an Operation designed to be used by Computers.
 * #owner       - Signifies an Operation that can only be performed by an "Owner".
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

//Struct Typedefs
typedef Authentication.DeveloperToken DeveloperToken
typedef Authentication.ServiceToken ServiceToken
typedef Authentication.Service Service
typedef Banana.Dimension Dimension
typedef Banana.Image Image
typedef Banana.Urgency Urgency
typedef Endpoint.Endpoint Endpoint
typedef Endpoint.TcpEndpoint TcpEndpoint

//Exception Typedefs
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ServiceAlreadyRegisteredException ServiceAlreadyRegisteredException
typedef Exceptions.ServiceDoesNotExistException ServiceDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException

/**
 * This is the Banana Service Production Endpoint 
 */
const TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "banana-service.aroma.tech", "port" : 7001 };

/**
 * This is the Banana Service Beta Endpoint
 */
const TcpEndpoint BETA_ENDPOINT = { "hostname" : "banana-service-beta.aroma.tech", "port" : 7001 };


struct SignInRequest
{
    1: Authentication.OauthToken oathToken;
    2: string username;
}

struct SignInResponse
{
    1: DeveloperToken developerToken;
}


/** The Maximum Dimensions for an Icon submitted with a Service. */
const Dimension MAX_ICON_DIMENSION = { "width" : 500, "height" : 500 };

/** The Maximum Filesize for an Icon submitted with a Service. */
const int MAX_ICON_SIZE_IN_KILOBYTES = 40;

struct ProvisionServiceRequest
{
    1: string token;
    2: string serviceName;
    3: optional string programmingLanguage;
    4: string organization;
    5: optional Image icon;
    6: DeveloperToken developerToken;
}

struct ProvisionServiceResponse
{
    1: string bananaToken;
    2: string serviceName;
    3: ServiceToken serviceToken; 
}

struct SubscribeToServiceRequest
{
    1: string token;
    2: string serviceName;
    3: optional string organization;
    4: optional bool shared = false;
    5: DeveloperToken developerToken;
}

struct SubscribeToServiceResponse
{
    1: string message;
    2: Channels.BananaChannel channel;
}


struct RegisterHealthCheckRequest
{
   1: Endpoint endpoint;
   2: DeveloperToken developerToken;
}

struct RegisterHealthCheckResponse
{
    1: optional string message;
}

struct RenewServiceTokenRequest
{
    1: ServiceToken serviceToken;
    2: Banana.TimePeriod timePeriod;
    3: DeveloperToken developerToken;
}

struct RenewServiceTokenResponse
{
    1: ServiceToken serviceToken;
}

struct RegenerateTokenRequest
{
    1: string serviceId;
    2: DeveloperToken developerToken;
}

struct RegenerateTokenResponse
{
    1: ServiceToken serviceToken;
}

struct DeleteMessageRequest
{
    1: DeveloperToken developerToken;
    2: string messageId;
    3: string serviceId;
}

struct DeleteMessageResponse
{
    
}

struct DeleteAllMessagesRequest
{
    1: DeveloperToken developerToken;
    2: string serviceId;
}

struct HideMessageRequest
{
    1: DeveloperToken developerToken;
    2: string messageId;
    3: string serviceId;
}

struct HideMessageResponse
{
    
}

struct HideAllMessagesRequest
{
    1: DeveloperToken developerToken;
    2: string serviceId;
}

struct HideAllMessagesResponse
{
    
}

//==============================
// Operations performed by Services

struct SendMessageRequest
{
    1: ServiceToken serviceToken;
    2: string message;
    3: Urgency urgency = Banana.Urgency.PRESSING;
}

struct SendMessageResponse
{
    1: string message;
}

service BananaService
{
    /**
     * Sign in to the App and using a valid OAUTH Token.
     * 
     * #developer
     */
    SignInResponse signIn(1: SignInRequest request) throws(1: OperationFailedException ex1,
                                                           2: InvalidArgumentException ex2,
                                                           3: InvalidCredentialsException ex3)
    
    /**
     * Provision a New Service to keep tabs on.
     * 
     * #developer
     */
    ProvisionServiceResponse provisionService(1: ProvisionServiceRequest request) throws(1: OperationFailedException ex1,
                                                                                         2: InvalidArgumentException ex2,
                                                                                         3: InvalidCredentialsException ex3,
                                                                                         4: ServiceDoesNotExistException ex4)
    /**
     * Subscribe to an existing service to get notifications.
     * 
     * #developer
     */
    SubscribeToServiceResponse subscribeToService(1: SubscribeToServiceRequest request) throws(1: OperationFailedException ex1,
                                                                                               2: InvalidArgumentException ex2,
                                                                                               3: InvalidCredentialsException ex3,
                                                                                               4: ServiceDoesNotExistException ex4,
                                                                                               5: ServiceAlreadyRegisteredException ex5)

    
    /**
     * Register an existing Service for Health Pokes. The Banana Service
     * will then periodically poke the Service for health status.
     * 
     * #developer
     * #owner
     */
    RegisterHealthCheckResponse registerHealthCheck(1: RegisterHealthCheckRequest request) throws(1: OperationFailedException ex1,
                                                                                                  2: InvalidArgumentException ex2,
                                                                                                  3: InvalidCredentialsException ex3,
                                                                                                  4: ServiceDoesNotExistException ex4,
                                                                                                  5: UnauthorizedException ex5)
    
    /**
     * Renew a Service Token that is close to being expired. 
     * Only an "owner" can perform this operation.
     * 
     * #developer
     * #owner
     */
    RenewServiceTokenResponse renewServiceToken(1: RenewServiceTokenRequest request) throws(1: OperationFailedException ex1,
                                                                                            2: InvalidArgumentException ex2,
                                                                                            3: InvalidCredentialsException ex3,
                                                                                            4: ServiceDoesNotExistException ex4,
                                                                                            5: UnauthorizedException ex5)
    
    /**
     * Regenerate a Token in case the existing one is lost or forgetten.
     * Keep in mind that this will invalidate the existing ServiceToken. 
     * Only an "owner" can perform this opeartion.
     * 
     * #developer
     * #owner
     */
    RegenerateTokenResponse regenerateToken(1: RegenerateTokenRequest request) throws(1: OperationFailedException ex1,
                                                                                      2: InvalidArgumentException ex2,
                                                                                      3: InvalidCredentialsException ex3,
                                                                                      4: ServiceDoesNotExistException ex4,
                                                                                      5: UnauthorizedException ex5)
    
    /**
     * 
     * #service
     */
    SendMessageResponse sendMessage(1: SendMessageRequest request) throws(1: OperationFailedException ex1,
                                                                          2: InvalidArgumentException ex2,
                                                                          3: InvalidCredentialsException ex3)
    
    /**
     * 
     * #service
     */
    oneway void sendMessageAsync(1: SendMessageRequest request)
}
