namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_
namespace cpp   aroma.banana.thrift.service

/*
 * Defined in this File is the Banana Service API and all of the operations
 * that can be performed primarily by People.
 * 
 * The Banana Service can be decomposed into multiple services:
 * 
 * + User Service
 * + Query Service
 * + iOS Service
 * 
 * but for the moment they are rolled up into one, for simplicity.
 * 
 * NOTE: An attempt has been made to order the Operations alphabetically.
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
 *
 * Tag definitions:
 *
 * #user   - Signifies an Operation designed to be used by any person.
 * #owner   - Signifies an Operation that can only be performed by an "Owner".
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;
typedef Banana.uuid uuid;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Authentication.AuthenticationToken AuthenticationToken
typedef Authentication.UserToken UserToken
typedef Banana.Image Image
typedef Banana.User User
typedef Banana.Application Application
typedef Banana.Urgency Urgency
typedef Channels.BananaChannel BananaChannel
typedef Endpoint.Endpoint Endpoint
typedef Events.HealthCheckFailed HealthCheckFailed

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
typedef Exceptions.UserDoesNotExistException UserDoesNotExistException

/** Defines the Version of the Banana Service API of this specification. */
const double API_VERSION = 1.6;

const int SERVICE_PORT = 7001;

/**
 * This is the Banana Service Production Endpoint
 */
const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "banana-srv.banana.aroma.tech", "port" : SERVICE_PORT };

/**
 * This is the Banana Service Beta Endpoint
 */
const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "banana-srv.beta.banana.aroma.tech", "port" : SERVICE_PORT };

/** The Maximum Dimensions for an Icon submitted with an Application. */
const Banana.Dimension MAX_APPLICATION_ICON_DIMENSION = { "width" : 1024, "height" : 1024 };

/** The Maximum Dimension for a Profile Picture submitted. */
const Banana.Dimension MAX_PROFILE_IMAGE_DIMENSION = { "width" : 1024, "height" : 1024 };


/** The Maximum Filesize for an Icon submitted with an Application. */
const int MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES = 100;

/** The Maximum Filesize for a Profile Picture submitted. */
const int MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES = 100;

/** 
 * The Maximum number of messages included in a Message Object.
 * If truncated, the full message can be loaded using the
 * getFullMessage() operation.
 */
const int MAX_MESSAGE_LENGTH = 5000;

//==========================================================
// Actions
//==========================================================


/**
 * Deletes a Message.
 * 
 * #owner
 */
struct DeleteMessageRequest
{
    1: UserToken token;
    2: uuid messageId;
    3: uuid applicationId;
    /** Use for Batch Deletes. */
    4: optional list<uuid> messageIds = [];
}

struct DeleteMessageResponse
{
    1: optional int messagesDeleted = 0;
}

/**
 * Dismisses a Message. Dismissing is analogous to archiving
 * an email; it will no longer be visible to you, but will
 * still be visible to other subscribers.
 */
struct DismissMessageRequest
{
    1: UserToken token;
    2: uuid messageId;
    3: uuid applicationId;
    /** Use for Dismissing multiple Messages. */
    4: optional list<uuid> messageIds = [];
}

struct DismissMessageResponse
{
    1: optional int messagesDismissed = 0;
}

 
/**
 * Defines the required information to provision
 * an Application with the Banana Service.
 */
struct ProvisionApplicationRequest
{
    1: UserToken token;
    2: string applicationName;
    3: optional Banana.ProgrammingLanguage programmingLanguage;
    4: uuid organizationId;
    5: optional Image icon;
}

struct ProvisionApplicationResponse
{
    1: uuid applicationId;
    2: string applicationName;
    3: ApplicationToken applicationToken;
    4: Application applicationInfo;
}

/**
 * Regenerates an Application's Token. This is usually done because the original token was:
 * 1: Lost or Misplaced
 * 2: Compromised (someone else has accessed it)
 * 3: Just for security reasons.
 * 
 * NOTE: This will invalidate any existing Tokens for this Application.
 * NOTE: Only an owner can perform this operation.
 * 
 * #owner
 */
struct RegenerateApplicationTokenRequest
{
    1: UserToken token;
    2: uuid applicationId;
}

struct RegenerateApplicationTokenResponse
{
    1: ApplicationToken serviceToken;
}

/**
 * Registers an Application Endpoint to use
 * for Health Checks.
 */
struct RegisterHealthCheckRequest
{
    1: UserToken token;
    2: Endpoint endpoint;
}

struct RegisterHealthCheckResponse
{
    1: optional string message;
    2: optional string healthCheckToken;
}

/**
 *  Removes a User's Saved Channel. 
 * It will no longer be remembered or suggested. 
 */
struct RemoveSavedChannelRequest
{
    1: UserToken token;
    2: BananaChannel channel;
}

struct RemoveSavedChannelResponse
{
    1: string message;
    2: optional BananaChannel channel;
}

/**
 * Renews an Application Token, effectively extending it's lifetime.
 * Additional Charges may apply.
 */
struct RenewApplicationTokenRequest
{
    1: UserToken token;
    /** The Token to renew */
    2: ApplicationToken applicationToken;
    /** Defines for how long to extend a Token. */
    3: Banana.LengthOfTime newLifetime;
    4: uuid applicationId;
}

struct RenewApplicationTokenResponse
{
    1: ApplicationToken serviceToken;
}

/**
 * Save a User's Personal Contact Channel for future reference.
 */
struct SaveChannelRequest
{
    1: UserToken token;
    2: BananaChannel channel;
}

struct SaveChannelResponse
{
    1: string message;
    2: optional BananaChannel channel;
}

/**
 * Sign In to the Banana Service, and get a User Token.
 */
struct SignInRequest
{
    1: Authentication.Credentials credentials;
    2: string emailAddress;
}

struct SignInResponse
{
    1: UserToken userToken;
}

/**
 * Sign Up for a Banana Service Account.
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
 * Receive a User Token after Signing Up.
 */
struct SignUpResponse
{
    1: UserToken userToken;
    2: Authentication.AromaAccount account;
    3: uuid userId;
}

/**
 * A Snoozed Channel will not receive Notifications
 * for a set time period.
 */
struct SnoozeChannelRequest
{
    1: UserToken token;
    2: BananaChannel channel;
    /** Optionally choose to snooze a specific Application. */
    3: optional uuid applicationId;
    /** Defines how long to snooze the Channel for. */
    4: optional Banana.LengthOfTime lengthOfTime = { "value": 4, "unit" : Banana.TimeUnit.HOURS };
}

struct SnoozeChannelResponse
{
    1: string message;
}

/**
 * Subscribe to an Application to receive notifications for it.
 */
struct SubscribeToApplicationRequest
{
    1: UserToken token;
    2: string applicationName;
    3: uuid applicationId;
    4: optional uuid organizationId;
    5: optional bool shared = false;
}

struct SubscribeToApplicationResponse
{
    1: string message;
    2: BananaChannel channel;
}


//==========================================================
// Query Operations
//==========================================================

struct GetApplicationInfoRequest
{
    1: AuthenticationToken token;
    2: uuid applicationId;
}

struct GetApplicationInfoResponse
{
    1: Application applicationInfo;
    /** The Channels registered to this Application. */
    2: list<BananaChannel> registeredChannels;
}

/**
 * Buzz is like the latest news happening around
 * Banana.
 */
struct GetBuzzRequest
{
    1: UserToken token;
}

struct GetBuzzResponse
{
    1: list<User> freshUsers = [];
    2: list<Application> freshApplications = [];
    3: list<HealthCheckFailed> failedHealthChecks = [];
    /** General events happening lately */
    4: list<Events.GeneralEvent> generalEvents = [];
}

struct GetDashboardRequest
{
    1: UserToken token;
}

struct GetDashboardResponse
{
    1: int unreadMessageCount = 0;
    2: int totalMessagesLastHour = 0;
    3: int totalMessagesLast24hrs = 0;
    4: list<Banana.Message> recentMessages = [];
    5: int numberOfLowUrgencyMessages = 0;
    6: int numberOfMediumUrgencyMessages = 0;
    7: int numberOfHighUrgencyMessages = 0;
}

/**
 * Query to get a User's messages, either across all Services,
 * or by a specific Application.
 */
struct GetMessagesRequest
{
    1: UserToken token;
    /** Allows you to get Messages by a particular application. */
    2: optional uuid applicationId;
    /** Suggests that the Service limits the results of the query.*/
    3: optional int limit = 0;
}

struct GetMessagesResponse
{
    1: list<Banana.Message> messages = [];
    2: optional int totalMessagesMatching = 0;
}

struct GetFullMessageRequest
{
    1: UserToken token;
    2: uuid messageId;
}

struct GetFullMessageResponse
{
    1: string fullBody;
}

struct GetMyApplicationsRequest
{
    1: UserToken token;
}

struct GetMyApplicationsResponse
{
    1: list<Application> applications;
}

struct GetMySavedChannelsRequest
{
    1: UserToken token;
}

struct GetMySavedChannelsResponse
{
    1: list<BananaChannel> channels;
}

/**
 * Request to get a User's Activity Stream.
 * An Activity is an event that resulted from a person's
 * action, and not an application or machine.
 */
struct GetActivityRequest
{
    1: UserToken token;
    2: optional int limit = 0;
}

struct GetActivityResponse
{
    1: list<Events.Event> events = [];
}

/**
 * Request to get any upcoming Service Announcements 
 * from the Team @ Aroma Tech.
 */
struct GetServiceAnnouncementsRequest
{
    1: UserToken token;
}

struct GetServiceAnnouncementsResponse
{
    1: optional list<Banana.ServiceAnnouncement> serviceAnnouncements = []
}

struct GetUserInfoRequest
{
    1: UserToken token;
    2: uuid userId;
}

struct GetUserInfoResponse
{
    1: User userInfo;
}

/**
 * Search for Applications that match the given search terms.
 */
struct SearchForApplicationsRequest
{
    1: UserToken token;
    2: string applicationName;
    3: optional uuid organizationId;
}

struct SearchForApplicationsResponse
{
    1: list<Application> applications = []
}


/**
 * The Banana Service is designed to be used by People, and not Applications.
 * They provide query interfaces and Authentication/Authorization over Data.
 */
service BananaService
{
    
    double getApiVersion()
    
    //==========================================================
    // Action Operations
    //==========================================================
    

    /**
     * Provision a New Application to keep tabs on.
     *
     * #user
     */
    ProvisionApplicationResponse provisionApplication(1 : ProvisionApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                                      2 : InvalidArgumentException ex2,
                                                                                                      3 : InvalidTokenException ex3,
                                                                                                      4 : ApplicationDoesNotExistException ex4,
                                                                                                      5 : UnauthorizedException ex5);
                                                                                                        

    
    /**
     * Regenerate an Application Token in case the existing one is lost, forgotten, or compromised.
     * Keep in mind that this will invalidate any prior existing Application Tokens.
     * Only an "owner" can perform this operation.
     *
     * #owner
     */
    RegenerateApplicationTokenResponse regenerateToken(1 : RegenerateApplicationTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                             2 : InvalidArgumentException ex2,
                                                                                                             3 : InvalidTokenException ex3,
                                                                                                             4 : ApplicationDoesNotExistException ex4,
                                                                                                             5 : UnauthorizedException ex5);
    
    /**
     * Register an existing Application for Health Pokes. The Banana Service
     * will then periodically poke the Application for health status.
     *
     * #owner
     */
    RegisterHealthCheckResponse registerHealthCheck(1 : RegisterHealthCheckRequest request) throws(1 : OperationFailedException ex1,
                                                                                                   2 : InvalidArgumentException ex2,
                                                                                                   3 : InvalidTokenException ex3,
                                                                                                   4 : ApplicationDoesNotExistException ex4,
                                                                                                   5 : UnauthorizedException ex5);
    
    
    /**
     * Removes a previously saved channel.
     */
    RemoveSavedChannelResponse removeSavedChannel(1 : RemoveSavedChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidTokenException ex3,
                                                                                                4 : UnauthorizedException ex4,
                                                                                                5 : ChannelDoesNotExistException ex5);
    
    
    
    /**
     * Renew an Application Token that is close to being expired.
     * Only an "owner" can perform this operation.
     *
     * #owner
     */
    RenewApplicationTokenResponse renewApplicationToken(1 : RenewApplicationTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                         2 : InvalidArgumentException ex2,
                                                                                                         3 : InvalidTokenException ex3
                                                                                                         4 : ApplicationDoesNotExistException ex4,
                                                                                                         5 : UnauthorizedException ex5);
                                                                                                         
        
                                                                                                         
    /**
     * Saves a user's channel for future reference.
     */
    SaveChannelResponse saveChannel(1 : SaveChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidTokenException ex3,
                                                                           4 : UnauthorizedException ex4);                                                                                        
   
    
    /**
     * Sign in to the App and get a User Token in return.
     *
     * #user
     */
    SignInResponse signIn(1 : SignInRequest request) throws(1 : OperationFailedException ex1,
                                                            2 : InvalidArgumentException ex2,
                                                            3 : InvalidCredentialsException ex3);
    

    /**
     * Sign Up for an Aroma Account.
     */
    SignUpResponse signUp(1 : SignUpRequest request) throws(1 : OperationFailedException ex1,
                                                            2 : InvalidArgumentException ex2,
                                                            3 : InvalidCredentialsException ex3,
                                                            4 : AccountAlreadyExistsException ex4);

   
    
    /**
     * Snoozes a Channel momentarily, so that it won't be notified of new alerts and messages.
     */
    SnoozeChannelResponse snoozeChannel(1 : SnoozeChannelRequest request) throws(1 : OperationFailedException ex1,
                                                                                 2 : InvalidArgumentException ex2,
                                                                                 3 : InvalidTokenException ex3,
                                                                                 4 : UnauthorizedException ex4,
                                                                                 5 : ChannelDoesNotExistException ex5);
    
    
    /**
     * Subscribe to an existing application to get notifications.
     *
     * #user
     */
    SubscribeToApplicationResponse subscribeToApplication(1 : SubscribeToApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                                            2 : InvalidArgumentException ex2,
                                                                                                            3 : InvalidTokenException ex3,
                                                                                                            4 : ApplicationDoesNotExistException ex4,
                                                                                                            5 : ApplicationAlreadyRegisteredException ex5,
                                                                                                            6 : CustomChannelUnreachableException ex6);
    
    
   
    
    
    //==========================================================
    // Query Operations
    //==========================================================
    
    /**
     * Get all of the User-Related activities that have happened recently.
     * 
     * #user
     */
    GetActivityResponse getActivity(1 : GetActivityRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidTokenException ex3);
    
   
    /**
     * Get details about an Application from it's unique ID
     *
     * #user
     */
    GetApplicationInfoResponse getApplicationInfo(1 : GetApplicationInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidTokenException ex3,
                                                                                                4 : ApplicationDoesNotExistException ex4,
                                                                                                5 : UnauthorizedException ex5);
    
    GetBuzzResponse getBuzz(1 : GetBuzzRequest request) throws(1 : OperationFailedException ex1,
                                                               2 : InvalidArgumentException ex2,
                                                               3 : InvalidTokenException ex3,
                                                               4 : ApplicationDoesNotExistException ex4,
                                                               5 : UnauthorizedException ex5);
 
 
    GetDashboardResponse getDashboard(1 : GetDashboardRequest request) throws(1 : OperationFailedException ex1,
                                                                              2 : InvalidArgumentException ex2,
                                                                              3 : InvalidTokenException ex3);
    
    /**
     * Get an Application's Messages.
     */
    GetMessagesResponse getMessages(1 : GetMessagesRequest request)throws(1 : OperationFailedException ex1,
                                                                          2 : InvalidArgumentException ex2,
                                                                          3 : InvalidTokenException ex3);

    /**
     * In case the Message body has been truncated, use this operation
     * to load the full message.
     */
    GetFullMessageResponse getFullMessage(1 : GetFullMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                                    2 : InvalidArgumentException ex2,
                                                                                    3 : InvalidTokenException ex3);
    
    
    
    GetMyApplicationsResponse getMyApplications(1 : GetMyApplicationsRequest request) throws(1 : OperationFailedException ex1,
                                                                                             2 : InvalidArgumentException ex2,
                                                                                             3 : InvalidTokenException ex3);
    

    GetMySavedChannelsResponse getMySavedChannels(1 : GetMySavedChannelsRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidTokenException ex3);

    GetUserInfoResponse getUserInfo(1 : GetUserInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidTokenException ex3,
                                                                           4 : UnauthorizedException ex4,
                                                                           5 : UserDoesNotExistException ex5);
    
    /**
     * Perform a Search on all the applications registered to the Banana Service by searching for its title.
     *
     * #user
     */
    SearchForApplicationsResponse searchForApplications(1 : SearchForApplicationsRequest request) throws(1 : OperationFailedException ex1,
                                                                                                         2 : InvalidArgumentException ex2,
                                                                                                         3 : InvalidTokenException ex3,
                                                                                                         4 : UnauthorizedException ex4);
}
