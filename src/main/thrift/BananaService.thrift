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
typedef Banana.Image Image
typedef Banana.Developer Developer
typedef Banana.Service Service
typedef Banana.Urgency Urgency
typedef Channels.BananaChannel BananaChannel
typedef Endpoint.Endpoint Endpoint

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ServiceAlreadyRegisteredException ServiceAlreadyRegisteredException
typedef Exceptions.ServiceDoesNotExistException ServiceDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException

/** Defines the Version of the Banana Service API currently in use. */
const double API_VERSION = 1.1;

/**
 * This is the Banana Service Production Endpoint
 */
const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "banana-service.aroma.tech", "port" : 7001 };

/**
 * This is the Banana Service Beta Endpoint
 */
const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "banana-service-beta.aroma.tech", "port" : 7001 };

//==========================================================
// Actions
//==========================================================


struct SignInRequest
{
    1: Authentication.Credentials credentials;
    2: string username;
}

struct SignInResponse
{
    1: DeveloperToken developerToken;
}

/**
 * Sign Up for an Aroma Account.
 */
struct SignUpRequest
{
    1: string email;
    2: string name;
    3: string username;
    4: string organization;
    5: Authentication.Credentials credentials;
}

/**
 * Receive a Developer Token after Signing Up.
 */
struct SignUpResponse
{
    1: DeveloperToken developerToken;
}

/** The Maximum Dimensions for an Icon submitted with a Service. */
const Banana.Dimension MAX_ICON_DIMENSION = { "width" : 500, "height" : 500 };

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
    2: BananaChannel channel;
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
    /** Use for Batch Deletes. */
    4: optional list<string> messageIds = [];
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
    /** Use for Batch Hides. */
    4: optional list<string> messageIds = [];
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

/**
 * Save a Developer's Personal Contact Channel for future use.
 */
struct SaveChannelRequest
{
    1: DeveloperToken developerToken;
    2: BananaChannel channel;
}

struct SaveChannelResponse
{
    1: string message;
    2: optional BananaChannel channel;
}

struct RemoveSavedChannelRequest
{
    1: DeveloperToken developerToken;
    2: BananaChannel channel;
}

struct RemoveSavedChannelResponse
{
    1: string message;
    2: optional BananaChannel channel;
}

/**
 * A Snoozed Channel will not receive Notifications
 * for a set time period.
 */
struct SnoozeChannelRequest
{
    1: DeveloperToken developerToken;
    2: BananaChannel channel;
}

struct SnoozeChannelResponse
{
    1: string message;
}

//==========================================================
// Getting and Querying for Data
//==========================================================

struct GetMyServicesRequest
{
    1: DeveloperToken developerToken;
}

struct GetMyServicesResponse
{
    1: list<Service> services;
}

struct GetServiceInfoRequest
{
    1: DeveloperToken developerToken;
    2: string serviceId;
}

struct GetServiceInfoResponse
{
    1: Service serviceInfo;
}

struct GetDashboardRequest
{
    1: DeveloperToken developerToken;
}

struct GetDashboardResponse
{
    1: int unreadMessageCount = 0;
    2: int totalMessagesLastHour = 0;
    3: int totalMessagesLast24hrs = 0;
    4: list<Banana.Message> recentMessages = [];

}

struct SearchForServicesRequest
{
    1: DeveloperToken developerToken;
    2: string searchTerm;
    3: optional string organization;
}

struct SearchForServicesResponse
{
    1: list<Service> services = []
}

struct GetServiceSubscribersRequest
{
    1: DeveloperToken developerToken;
    2: string serviceId;
    3: string organization;
}

struct GetServiceSubscribersResponse
{
    1: list<Developer> developers = [];
}

struct GetMySavedChannelsRequest
{
    1: DeveloperToken developerToken;
}

struct GetMySavedChannelsResponse
{
    1: list<BananaChannel> channels;
}

//==========================================================
// Operations performed by Services

struct SendMessageRequest
{
    1: ServiceToken serviceToken;
    2: string message;
    3: Urgency urgency = Banana.Urgency.IMPORTANT;
}

struct SendMessageResponse
{
    1: string message;
}

service BananaService
{
    //===============================================
    // Operations for Services
    //===============================================


    /**
     *
     * #service
     */
    SendMessageResponse sendMessage(1: SendMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                          2 : InvalidArgumentException ex2,
                                                                          3 : InvalidCredentialsException ex3)

    /**
     *
     * #service
     */
    oneway void sendMessageAsync(1: SendMessageRequest request)


    //===============================================
    // Operations for Developers
    //===============================================

    /**
     * Sign in to the App and using a valid OAUTH Token.
     *
     * #developer
     */
    SignInResponse signIn(1: SignInRequest request) throws(1 : OperationFailedException ex1,
                                                           2 : InvalidArgumentException ex2,
                                                           3 : InvalidCredentialsException ex3)

    /**
     * Sign Up for an Aroma Account.
     */
    SignUpResponse signUp(1: SignUpRequest request) throws(1 : OperationFailedException ex1,
                                                           2 : InvalidArgumentException ex2,
                                                           3 : InvalidCredentialsException ex3,
                                                           4 : AccountAlreadyExistsException ex4)

    /**
     * Provision a New Service to keep tabs on.
     *
     * #developer
     */
    ProvisionServiceResponse provisionService(1: ProvisionServiceRequest request) throws(1 : OperationFailedException ex1,
                                                                                         2 : InvalidArgumentException ex2,
                                                                                         3 : InvalidCredentialsException ex3,
                                                                                         4 : ServiceDoesNotExistException ex4)
    /**
     * Subscribe to an existing service to get notifications.
     *
     * #developer
     */
    SubscribeToServiceResponse subscribeToService(1: SubscribeToServiceRequest request) throws(1 : OperationFailedException ex1,
                                                                                               2 : InvalidArgumentException ex2,
                                                                                               3 : InvalidCredentialsException ex3,
                                                                                               4 : ServiceDoesNotExistException ex4,
                                                                                               5 : ServiceAlreadyRegisteredException ex5,
                                                                                               6 : CustomChannelUnreachableException ex6)


    /**
     * Register an existing Service for Health Pokes. The Banana Service
     * will then periodically poke the Service for health status.
     *
     * #developer
     * #owner
     */
    RegisterHealthCheckResponse registerHealthCheck(1: RegisterHealthCheckRequest request) throws(1 : OperationFailedException ex1,
                                                                                                  2 : InvalidArgumentException ex2,
                                                                                                  3 : InvalidCredentialsException ex3,
                                                                                                  4 : ServiceDoesNotExistException ex4,
                                                                                                  5 : UnauthorizedException ex5)

    /**
     * Renew a Service Token that is close to being expired.
     * Only an "owner" can perform this operation.
     *
     * #developer
     * #owner
     */
    RenewServiceTokenResponse renewServiceToken(1: RenewServiceTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                            2 : InvalidArgumentException ex2,
                                                                                            3 : InvalidCredentialsException ex3,
                                                                                            4 : ServiceDoesNotExistException ex4,
                                                                                            5 : UnauthorizedException ex5)

    /**
     * Regenerate a Token in case the existing one is lost or forgetten.
     * Keep in mind that this will invalidate the existing ServiceToken.
     * Only an "owner" can perform this opeartion.
     *
     * #developer
     * #owner
     */
    RegenerateTokenResponse regenerateToken(1: RegenerateTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                      2 : InvalidArgumentException ex2,
                                                                                      3 : InvalidCredentialsException ex3,
                                                                                      4 : ServiceDoesNotExistException ex4,
                                                                                      5 : UnauthorizedException ex5)



    /**
     * Perform a Search on all the services registered to the Banana Service by searching for its title.
     *
     * #developer
     */
    SearchForServicesResponse searchForServices(1: SearchForServicesRequest request) throws(1 : OperationFailedException ex1,
                                                                                            2 : InvalidArgumentException ex2,
                                                                                            3 : InvalidCredentialsException ex3,
                                                                                            4 : UnauthorizedException ex4)



    SaveChannelResponse saveChannel(1: SaveChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                          2 : InvalidArgumentException ex2,
                                                                          3 : InvalidCredentialsException ex3,
                                                                          4 : UnauthorizedException ex4)


    RemoveSavedChannelResponse removeSavedChannel(1: RemoveSavedChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                                               2 : InvalidArgumentException ex2,
                                                                                               3 : InvalidCredentialsException ex3,
                                                                                               4 : UnauthorizedException ex4,
                                                                                               5 : ChannelDoesNotExistException ex5)
    
    SnoozeChannelResponse snoozeChannel(1: SnoozeChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                                2 : InvalidArgumentException ex2,
                                                                                3 : InvalidCredentialsException ex3,
                                                                                4 : UnauthorizedException ex4,
                                                                                5 : ChannelDoesNotExistException ex5)
    
    /**
     * Get a list of all Developers subscribed to a Service.
     *
     * #developer
     */
    GetServiceSubscribersResponse getServiceSubscribers(1: GetServiceSubscribersRequest request) throws(1 : OperationFailedException ex1,
                                                                                                        2 : InvalidArgumentException ex2,
                                                                                                        3 : InvalidCredentialsException ex3,
                                                                                                        4 : UnauthorizedException ex4)

    
    GetMySavedChannelsResponse getMySavedChannels(1 : GetMySavedChannelsRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidCredentialsException ex3)
    
    GetMyServicesResponse getMyServices(1: GetMyServicesRequest request) throws(1 : OperationFailedException ex1,
                                                                                2 : InvalidArgumentException ex2,
                                                                                3 : InvalidCredentialsException ex3)
    

    /**
     * Get details about a Service from it's unique ID
     *
     * #developer
     */
    GetServiceInfoResponse getServiceInfo(1: GetServiceInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                                   2 : InvalidArgumentException ex2,
                                                                                   3 : InvalidCredentialsException ex3,
                                                                                   4 : ServiceDoesNotExistException ex4,
                                                                                   5 : UnauthorizedException ex5)

    
    GetDashboardResponse getDashboard(1: GetDashboardRequest request) throws(1 : OperationFailedException ex1,
                                                                             2 : InvalidArgumentException ex2,
                                                                             3 : InvalidCredentialsException ex3)

}
