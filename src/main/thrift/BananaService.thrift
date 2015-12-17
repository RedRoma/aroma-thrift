namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_
namespace cpp   aroma.banana.thrift.service

/*
 * Defined in this File is the Banana Service API and all of the operations
 * that can be performed by both Humans and their Applications.
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
 * #human   - Signifies an Operation designed to be used by Humans.
 * #app     - Signifies an Operation designed to be used by Applications.
 * #owner   - Signifies an Operation that can only be performed by an "Owner".
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

//Struct Typedefs
typedef Authentication.HumanToken HumanToken
typedef Authentication.ApplicationToken ApplicationToken
typedef Banana.Image Image
typedef Banana.Human Human
typedef Banana.Application Application
typedef Banana.Urgency Urgency
typedef Channels.BananaChannel BananaChannel
typedef Endpoint.Endpoint Endpoint

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
const double API_VERSION = 1.3;

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
    1: HumanToken humanToken;
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
 * Receive a Human Token after Signing Up.
 */
struct SignUpResponse
{
    1: HumanToken humanToken;
    2: Authentication.AromaAccount account;
}

/** The Maximum Dimensions for an Icon submitted with an Application. */
const Banana.Dimension MAX_ICON_DIMENSION = { "width" : 500, "height" : 500 };

/** The Maximum Filesize for an Icon submitted with an Application. */
const int MAX_ICON_SIZE_IN_KILOBYTES = 40;

/**
 * Defines the required information to provision
 * an Application with the Banana Service.
 */
struct ProvisionApplicationRequest
{
    1: string token;
    2: string applicationName;
    3: optional Banana.ProgrammingLanguage programmingLanguage;
    4: string organization;
    5: optional Image icon;
    6: HumanToken humanToken;
}

struct ProvisionApplicationResponse
{
    1: string bananaToken;
    2: string applicationName;
    3: ApplicationToken serviceToken;
    4: optional string applicationId;
}

/**
 * Subscribe to an Application to receive notifications for it.
 */
struct SubscribeToApplicationRequest
{
    1: HumanToken humanToken;
    2: string applicationName;
    3: string applicationId;
    4: optional string organization;
    5: optional bool shared = false;
}

struct SubscribeToApplicationResponse
{
    1: string message;
    2: BananaChannel channel;
}

/**
 * Registers an Application Endpoint to use
 * for Health Checks.
 */
struct RegisterHealthCheckRequest
{
   1: Endpoint endpoint;
   2: HumanToken humanToken;
}

struct RegisterHealthCheckResponse
{
    1: optional string message;
    2: optional string healthCheckToken;
}

struct RenewApplicationTokenRequest
{
    1: ApplicationToken applicationToken;
    2: Banana.TimePeriod timePeriod;
    3: HumanToken humanToken;
    4: string applicationId;
}

struct RenewApplicationTokenResponse
{
    1: ApplicationToken serviceToken;
}

struct RegenerateApplicationTokenRequest
{
    1: string applicationId;
    2: HumanToken humanToken;
}

struct RegenerateApplicationTokenResponse
{
    1: ApplicationToken serviceToken;
}

struct DeleteMessageRequest
{
    1: HumanToken humanToken;
    2: string messageId;
    3: string applicationId;
    /** Use for Batch Deletes. */
    4: optional list<string> messageIds = [];
}

struct DeleteMessageResponse
{
    1: optional int messagesDeleted = 0;
}

struct DeleteAllMessagesRequest
{
    1: HumanToken humanToken;
    2: string applicationId;
    3: optional int messagesDeleted = 0;
}

struct DismissMessageRequest
{
    1: HumanToken humanToken;
    2: string messageId;
    3: string applicationId;
    /** Use for Dismissing multiple Messages. */
    4: optional list<string> messageIds = [];
}

struct DismissMessageResponse
{
    1: optional int messagesDismissed = 0;
}

struct DismissAllMessagesRequest
{
    1: HumanToken humanToken;
    2: string applicationId;
    3: optional int messagesDismissed = 0;
}

struct DismissAllMessagesResponse
{

}

/**
 * Save a Human's Personal Contact Channel for future use.
 */
struct SaveChannelRequest
{
    1: HumanToken humanToken;
    2: BananaChannel channel;
}

struct SaveChannelResponse
{
    1: string message;
    2: optional BananaChannel channel;
}

struct RemoveSavedChannelRequest
{
    1: HumanToken humanToken;
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
    1: HumanToken humanToken;
    2: BananaChannel channel;
}

struct SnoozeChannelResponse
{
    1: string message;
}

//==========================================================
// Getting and Querying for Data
//==========================================================

struct GetMyApplicationsRequest
{
    1: HumanToken humanToken;
}

struct GetMyApplicationsResponse
{
    1: list<Application> applications;
}

struct GetApplicationInfoRequest
{
    1: HumanToken humanToken;
    2: string applicationId;
}

struct GetApplicationInfoResponse
{
    1: Application applicationInfo;
}

struct GetDashboardRequest
{
    1: HumanToken humanToken;
}

struct GetDashboardResponse
{
    1: int unreadMessageCount = 0;
    2: int totalMessagesLastHour = 0;
    3: int totalMessagesLast24hrs = 0;
    4: list<Banana.Message> recentMessages = [];

}

struct SearchForApplicationsRequest
{
    1: HumanToken humanToken;
    2: string searchTerm;
    3: optional string organization;
}

struct SearchForApplicationsResponse
{
    1: list<Application> applications = []
}

struct GetApplicationSubscribersRequest
{
    1: HumanToken humanToken;
    2: string applicationId;
    3: string organization;
}

struct GetApplicationSubscribersResponse
{
    1: list<Human> humans = [];
}

struct GetMySavedChannelsRequest
{
    1: HumanToken humanToken;
}

struct GetMySavedChannelsResponse
{
    1: list<BananaChannel> channels;
}

//==========================================================
// Operations performed by Applications

struct SendMessageRequest
{
    1: ApplicationToken applicationToken;
    2: string message;
    3: Urgency urgency = Banana.Urgency.INFORMATIONAL;
}

struct SendMessageResponse
{
    1: string message;
}

service BananaService
{
    
    double getApiVersion()
    
    //===============================================
    // Operations for Applications
    //===============================================


    /**
     *
     * #app
     */
    SendMessageResponse sendMessage(1 : SendMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidCredentialsException ex3)

    /**
     *
     * #app
     */
    oneway void sendMessageAsync(1 : SendMessageRequest request)


    //===============================================
    // Operations for Humans
    //===============================================

    /**
     * Sign in to the App and using a valid OAUTH Token.
     *
     * #human
     */
    SignInResponse signIn(1 : SignInRequest request) throws(1 : OperationFailedException ex1,
                                                            2 : InvalidArgumentException ex2,
                                                            3 : InvalidCredentialsException ex3)

    /**
     * Sign Up for an Aroma Account.
     */
    SignUpResponse signUp(1 : SignUpRequest request) throws(1 : OperationFailedException ex1,
                                                            2 : InvalidArgumentException ex2,
                                                            3 : InvalidCredentialsException ex3,
                                                            4 : AccountAlreadyExistsException ex4)

    /**
     * Provision a New Application to keep tabs on.
     *
     * #human
     */
    ProvisionApplicationResponse provisionApplication(1 : ProvisionApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                                      2 : InvalidArgumentException ex2,
                                                                                                      3 : InvalidCredentialsException ex3,
                                                                                                      4 : ApplicationDoesNotExistException ex4)
    /**
     * Subscribe to an existing application to get notifications.
     *
     * #human
     */
    SubscribeToApplicationResponse subscribeToApplication(1 : SubscribeToApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                                            2 : InvalidArgumentException ex2,
                                                                                                            3 : InvalidCredentialsException ex3,
                                                                                                            4 : ApplicationDoesNotExistException ex4,
                                                                                                            5 : ApplicationAlreadyRegisteredException ex5,
                                                                                                            6 : CustomChannelUnreachableException ex6)


    /**
     * Register an existing Application for Health Pokes. The Banana Service
     * will then periodically poke the Application for health status.
     *
     * #human
     * #owner
     */
    RegisterHealthCheckResponse registerHealthCheck(1 : RegisterHealthCheckRequest request) throws(1 : OperationFailedException ex1,
                                                                                                   2 : InvalidArgumentException ex2,
                                                                                                   3 : InvalidCredentialsException ex3,
                                                                                                   4 : ApplicationDoesNotExistException ex4,
                                                                                                   5 : UnauthorizedException ex5)

    /**
     * Renew an Application Token that is close to being expired.
     * Only an "owner" can perform this operation.
     *
     * #human
     * #owner
     */
    RenewApplicationTokenResponse renewApplicationToken(1 : RenewApplicationTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                         2 : InvalidArgumentException ex2,
                                                                                                         3 : InvalidCredentialsException ex3,
                                                                                                         4 : ApplicationDoesNotExistException ex4,
                                                                                                         5 : UnauthorizedException ex5)

    /**
     * Regenerate an Application Token in case the existing one is lost, forgotten, or compromised.
     * Keep in mind that this will invalidate any prior existing Application Tokens.
     * Only an "owner" can perform this operation.
     *
     * #human
     * #owner
     */
    RegenerateApplicationTokenResponse regenerateToken(1 : RegenerateApplicationTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                             2 : InvalidArgumentException ex2,
                                                                                                             3 : InvalidCredentialsException ex3,
                                                                                                             4 : ApplicationDoesNotExistException ex4,
                                                                                                             5 : UnauthorizedException ex5)



    /**
     * Perform a Search on all the applications registered to the Banana Service by searching for its title.
     *
     * #human
     */
    SearchForApplicationsResponse searchForApplications(1 : SearchForApplicationsRequest request) throws(1 : OperationFailedException ex1,
                                                                                                         2 : InvalidArgumentException ex2,
                                                                                                         3 : InvalidCredentialsException ex3,
                                                                                                         4 : UnauthorizedException ex4)



    SaveChannelResponse saveChannel(1 : SaveChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidCredentialsException ex3,
                                                                           4 : UnauthorizedException ex4)


    RemoveSavedChannelResponse removeSavedChannel(1 : RemoveSavedChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidCredentialsException ex3,
                                                                                                4 : UnauthorizedException ex4,
                                                                                                5 : ChannelDoesNotExistException ex5)
    
    SnoozeChannelResponse snoozeChannel(1 : SnoozeChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                                 2 : InvalidArgumentException ex2,
                                                                                 3 : InvalidCredentialsException ex3,
                                                                                 4 : UnauthorizedException ex4,
                                                                                 5 : ChannelDoesNotExistException ex5)
    
    /**
     * Get a list of all Humans subscribed to an Application.
     *
     * #human
     */
    GetApplicationSubscribersResponse getApplicationSubscribers(1 : GetApplicationSubscribersRequest request) throws(1 : OperationFailedException ex1,
                                                                                                                     2 : InvalidArgumentException ex2,
                                                                                                                     3 : InvalidCredentialsException ex3,
                                                                                                                     4 : UnauthorizedException ex4)

    
    GetMySavedChannelsResponse getMySavedChannels(1 : GetMySavedChannelsRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidCredentialsException ex3)
    
    GetMyApplicationsResponse getMyApplications(1 : GetMyApplicationsRequest request) throws(1 : OperationFailedException ex1,
                                                                                             2 : InvalidArgumentException ex2,
                                                                                             3 : InvalidCredentialsException ex3)
    

    /**
     * Get details about an Application from it's unique ID
     *
     * #human
     */
    GetApplicationInfoResponse getApplicationInfo(1 : GetApplicationInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidCredentialsException ex3,
                                                                                                4 : ApplicationDoesNotExistException ex4,
                                                                                                5 : UnauthorizedException ex5)

    
    GetDashboardResponse getDashboard(1 : GetDashboardRequest request) throws(1 : OperationFailedException ex1,
                                                                              2 : InvalidArgumentException ex2,
                                                                              3 : InvalidCredentialsException ex3)

}
