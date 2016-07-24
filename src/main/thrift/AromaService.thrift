namespace java  tech.aroma.thrift.service
namespace cocoa AromaService_
namespace cpp   aroma.thrift.service
namespace php   RedRoma.Aroma.AromaService

/*
 * Defined in this File is Aroma API and all of the operations
 * that can be performed primarily by People.
 *
 * The Aroma Service can be decomposed into multiple services:
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
include "Aroma.thrift"
include "Channels.thrift"
include "Endpoint.thrift"
include "Events.thrift"
include "Exceptions.thrift"
include "Reactions.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 *
 * Tag definitions:
 *
 * #owner   - Signifies an Operation that can only be performed by an "Owner".
 */

typedef Aroma.int int;
typedef Aroma.long long;
typedef Aroma.timestamp timestamp;
typedef Aroma.uuid uuid;

//Struct Typedefs
typedef Authentication.ApplicationToken ApplicationToken
typedef Authentication.AuthenticationToken AuthenticationToken
typedef Authentication.UserToken UserToken
typedef Aroma.Application Application
typedef Aroma.Image Image
typedef Aroma.Urgency Urgency
typedef Aroma.User User
typedef Channels.AromaChannel AromaChannel
typedef Channels.MobileDevice MobileDevice
typedef Endpoint.Endpoint Endpoint
typedef Events.HealthCheckFailed HealthCheckFailed
typedef Reactions.Reaction Reaction

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException
typedef Exceptions.ApplicationDoesNotExistException ApplicationDoesNotExistException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.DoesNotExistException DoesNotExistException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.InvalidTokenException InvalidTokenException
typedef Exceptions.MessageDoesNotExistException MessageDoesNotExistException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.UnauthorizedException UnauthorizedException
typedef Exceptions.UserDoesNotExistException UserDoesNotExistException

const int SERVICE_PORT = 7010;

/**
 * This is Aroma Production Endpoint
 */
const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "aroma-srv.aroma.tech", "port" : 80 };

/**
 * This is Aroma Beta Endpoint
 */
const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "aroma-srv.beta.aroma.tech", "port" : SERVICE_PORT };



//==========================================================
// AUTHENTICATION OPERATIONS
//==========================================================


/** The Maximum Dimension for a Profile Picture submitted. */
const Aroma.Dimension MAX_PROFILE_IMAGE_DIMENSION = { "width" : 1024, "height" : 1024 };

/** The Maximum Filesize for a Profile Picture submitted. */
const int MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES = 100;

/**
 * Sign In to Aroma, and get a User Token.
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
 * Sign Up for an Aroma Account.
 */
struct SignUpRequest
{
    1: string email;
    //TODO: Rename to fullName or completeName
    2: string name;
    3: string firstName;
    4: string middleName;
    5: string lastName;
    6: string username;
    7: uuid organizationId;
    8: Authentication.Credentials credentials;
    9: Aroma.Role mainRole;
    10: optional timestamp birthDate;
    11: optional string githubProfile;
    12: optional Image profileImage;
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

//==========================================================
// USER INFO
//==========================================================

struct CheckExistsRequest
{
    1: string emailAddress;
}

struct CheckExistsResponse
{
    1: bool exists;
    2: optional string message;
}

struct GetUserInfoRequest
{
    1: UserToken token;
    2: uuid userId;
    /** Can Optionally query by Email as well. */
    3: optional string email;
}

struct GetUserInfoResponse
{
    1: User userInfo;
}


//==========================================================
// APPLICATION OPERATIONS
//==========================================================


/** The Maximum Dimensions for an Icon submitted with an Application. */
const Aroma.Dimension MAX_APPLICATION_ICON_DIMENSION = { "width" : 1024, "height" : 1024 };

/** The Maximum Filesize for an Icon submitted with an Application. */
const int MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES = 100;


struct GetApplicationInfoRequest
{
    1: AuthenticationToken token;
    2: uuid applicationId;
    /** If set, the service will determine if the calling user follows the Application. */
    3: optional bool includeFollowingInfo = false;
}

struct GetApplicationInfoResponse
{
    1: Application applicationInfo;
}

struct GetApplicationsOwnedByRequest
{
    1: UserToken token;
    /** If not present, will assume the userID of the Caller. */
    2: optional uuid userId;
}

struct GetApplicationsOwnedByResponse
{
    1: list<Application> applications = [];
}

/**
 * Defines the required information to provision
 * an Application with Aroma.
 */
struct ProvisionApplicationRequest
{
    1: UserToken token;
    2: string applicationName;
    3: optional Aroma.ProgrammingLanguage programmingLanguage;
    4: uuid organizationId;
    5: optional Image icon;
    6: optional set<uuid> owners;
    7: optional string applicationDescription = "";
    8: optional Aroma.Tier tier = Aroma.Tier.FREE;
}

/** The Maximum number of characters that can be in the Application Name. */
const int APPLICATION_NAME_MAX_LENGTH = 20;

/** The Maximum number of owners that an Application can have. */
const int APPLICATION_MAX_OWNERS = 10;

struct ProvisionApplicationResponse
{
    1: ApplicationToken applicationToken;
    2: Application applicationInfo;
}

struct DeleteApplicationRequest
{
    1: UserToken token;
    2: uuid applicationId;
}

struct DeleteApplicationResponse
{
    1: optional string message = "Success";
}

struct UpdateApplicationRequest
{
    1: UserToken token;
    2: Application updatedApplication;
}

struct UpdateApplicationResponse
{
    1: Application application;
}

/**
 * Search for Applications that match the given search terms.
 */
struct SearchForApplicationsRequest
{
    1: UserToken token;
    /** Performs a search based on the Application name. */
    2: string applicationName;
    3: optional uuid organizationId;
}

struct SearchForApplicationsResponse
{
    1: list<Application> applications = []
}


/**
 * Recreates an Application's Token. This is usually done because the original token was:
 * 1: Forgotten or Misplaced
 * 2: Compromised (someone else has accessed it)
 * 3: Just for security reasons.
 *
 * NOTE: This will invalidate any existing Tokens for this Application.
 * NOTE: Only an owner can perform this operation.
 *
 * #owner
 */
struct RecreateApplicationTokenRequest
{
    1: UserToken token;
    2: uuid applicationId;
}

struct RecreateApplicationTokenResponse
{
    1: ApplicationToken applicationToken;
}


/**
 * Renews an Application Token, effectively extending it's lifetime.
 * Additional Charges may apply.
 */
struct RenewApplicationTokenRequest
{
    1: UserToken token;
    /** Defines for how long to extend a Token's life. */
    3: optional Aroma.LengthOfTime newLifetime;
    4: uuid applicationId;
}

struct RenewApplicationTokenResponse
{
    1: ApplicationToken serviceToken;
}


//==========================================================
// FOLLOW APP OPERATIONS
//==========================================================

struct GetApplicationsFollowedByRequest
{
    1: UserToken token;
    /** If not present, will assume the userId of the Caller. */
    2: optional uuid userId;
}

struct GetApplicationsFollowedByResponse
{
    1: list<Application> applications = [];
}

/**
 * Follow an Application to receive notifications from it.
 */
struct FollowApplicationRequest
{
    1: UserToken token;
    2: uuid applicationId;
    3: optional uuid organizationId;
}

struct FollowApplicationResponse
{
    1: optional string message = "Success";
}

struct UnfollowApplicationRequest
{
    1: UserToken token;
    2: uuid applicationId;
    3: optional uuid organizationId;
}

struct UnfollowApplicationResponse
{
    1: optional string message = "Success"
}

//==========================================================
// MESSAGE OPERATIONS
//==========================================================


/**
 * The Maximum number of messages included in a Message Object.
 * If truncated, the full message can be loaded using the
 * getFullMessage() operation.
 */
const int MAX_MESSAGE_LENGTH = 5000;



/**
 * Query to get a User's messages, either across all Services,
 * or by a specific Application.
 */
struct GetApplicationMessagesRequest
{
    1: UserToken token;
    /** The Application's Messages to retrieve. */
    2: uuid applicationId;
    /** Suggests that the Service limits the results of the query.*/
    3: optional int limit = 0;
}

struct GetApplicationMessagesResponse
{
    1: list<Aroma.Message> messages = [];
    2: optional int totalMessagesMatching = 0;
}

struct GetFullMessageRequest
{
    1: UserToken token;
    2: uuid messageId;
    3: uuid applicationId;
}

struct GetFullMessageResponse
{
    1: Aroma.Message fullMessage;
}

struct GetMediaRequest
{
    1: UserToken token;
    2: uuid mediaId;
    3: optional Aroma.Dimension desiredThumbnailSize;
}

struct GetMediaResponse
{
    //For now only Images are supported
    1: Aroma.Image image;
}

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
    /**
     * Use for deleting all the Messages stored for
     * an Application. Note that this overrides other options.
     * Use with care.
     */
    5: optional bool deleteAll = false;
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
    /**
     * Use for clearing the entire Inbox.
     * Note that this overrides other options.
     */
    5: optional bool dismissAll = false;
}

struct DismissMessageResponse
{
    1: optional int messagesDismissed = 0;
}


//==========================================================
// INBOX OPERATIONS
//==========================================================


/** The default amount of time to save messages in a User's Inbox. */
const Aroma.LengthOfTime DEFAULT_INBOX_LIFETIME = { "value" : 3, "unit" : Aroma.TimeUnit.DAYS };


struct GetInboxRequest
{
    1: UserToken token;
    /** Suggests that the Service limits the results of the query.*/
    2: optional int limit = 0;
}

struct GetInboxResponse
{
    1: list<Aroma.Message> messages = [];
}

//==========================================================
// ACTIVITY OPERATIONS
//==========================================================


/** The default amount of time to save events in a User's Activity Feed. */
const Aroma.LengthOfTime DEFAULT_ACTIVITY_LIFETIME = { "value" : 4, "unit" : Aroma.TimeUnit.DAYS };



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

struct DeleteActivityRequest
{
    1: UserToken token;
    2: uuid eventId;
    3: optional bool deleteAll = false;
    4: optional list<uuid> multipleEventIds;
}

struct DeleteActivityResponse
{
    1: optional int totalEventsDeleted = 0;
}

//==========================================================
// REACTION OPERATIONS
//==========================================================

/** The Maximum Number of Reactions that can be saved for a User or and App. */
const int MAXIMUM_REACTIONS = 100


/** Get the reactions saved for either the calling user's Inbox, or an Application.  */
struct GetReactionsRequest
{
    1: UserToken token;
    2: optional uuid forAppId;
}

struct GetReactionsResponse
{
    1: list<Reaction> reactions = [];
}

/**
 * Sets the Reactions for either the calling user's Inbox, or an Application owned
 * by the calling user.
 */
struct UpdateReactionsRequest
{
    1: UserToken token;
    /**
    * By default, this request updates the caller's Inbox Reactions. If an AppID
    * is specified, it's Reactions will be updated instead. Note than only an owner can
    * change an App's Rections.
    */
    2: optional uuid forAppId;
    /** Completely wipes out any existing reactions and sets them to this supplied list. */
    3: list<Reaction> reactions = [];
}

struct UpdateReactionsResponse
{
    /**
     * Returns the complete list of Reactions after the operations is complete.
     * If it's successful, this list will be the same as the list included in
     * the request.
     */
    1: optional list<Reaction> reactions = [];
}

//==========================================================
// BUZZ OPERATIONS
//==========================================================


/**
 * Buzz is like the latest news happening around
 * Aroma.
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
    4: list<Events.Event> generalEvents = [];
}


//==========================================================
// DASHBOARD OPERATIONS
//==========================================================

struct GetDashboardRequest
{
    1: UserToken token;
}

struct GetDashboardResponse
{
    1: int unreadMessageCount = 0;
    2: int totalMessagesLastHour = 0;
    3: int totalMessagesLast24hrs = 0;
    4: list<Aroma.Message> recentMessages = [];
    5: int numberOfLowUrgencyMessages = 0;
    6: int numberOfMediumUrgencyMessages = 0;
    7: int numberOfHighUrgencyMessages = 0;
}

//==========================================================
// DEVICE REGISTRATION OPERATIONS
//==========================================================

struct CheckIfDeviceIsRegisteredRequest
{
    1: UserToken token;
    2: MobileDevice device;
}

struct CheckIfDeviceIsRegisteredResponse
{
    1: required bool isRegistered;
}

/**
 * Get a list of devices registered to the calling user.
 */
struct GetRegisteredDevicesRequest
{
    1: UserToken token;
}

struct GetRegisteredDevicesResponse
{
    1: list<MobileDevice> devices = [];
}

struct RegisterDeviceRequest
{
    1: UserToken token;
    2: MobileDevice device;
}

struct RegisterDeviceResponse
{
    1: optional string message = "Successfully Registered";
}

struct UnregisterDeviceRequest
{
    1: UserToken token;
    2: MobileDevice device;
}

struct UnregisterDeviceResponse
{
    1: MobileDevice removedDevice;
}


//==========================================================
// OTHER OPERATIONS
//==========================================================

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
 * Request to get any upcoming Service Announcements
 * from the Team @ Aroma Tech.
 */
struct GetServiceAnnouncementsRequest
{
    1: UserToken token;
}

struct GetServiceAnnouncementsResponse
{
    1: optional list<Aroma.ServiceAnnouncement> serviceAnnouncements = []
}


//==========================================================
// AROMA SERVICE DEFINITION
//==========================================================

/**
 * The Aroma Service is designed to be used by People, and not Applications.
 * They provide query interfaces and Authentication/Authorization over Data.
 */
service AromaService
{

    //==========================================================
    // AUTHENTICATION OPERATIONS
    //==========================================================


    /**
     * Sign in to the App and get a User Token in return.
     */
    SignInResponse signIn(1 : SignInRequest request) throws(1 : OperationFailedException ex1,
                                                            2 : InvalidArgumentException ex2,
                                                            3 : InvalidCredentialsException ex3,
                                                            4 : UserDoesNotExistException ex4);



    /**
     * Sign Up for an Aroma Account.
     */
    SignUpResponse signUp(1 : SignUpRequest request) throws(1 : OperationFailedException ex1,
                                                            2 : InvalidArgumentException ex2,
                                                            3 : InvalidCredentialsException ex3,
                                                            4 : AccountAlreadyExistsException ex4);

    //==========================================================
    // USER PROFILE OPERATIONS
    //==========================================================


    GetUserInfoResponse getUserInfo(1 : GetUserInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidTokenException ex3,
                                                                           4 : UnauthorizedException ex4,
                                                                           5 : UserDoesNotExistException ex5);

    //==========================================================
    // APPLICATION OPERATIONS
    //==========================================================

    /**
     * Get details about an Application from it's unique ID
     */
    GetApplicationInfoResponse getApplicationInfo(1 : GetApplicationInfoRequest request) throws(1 : OperationFailedException ex1,
                                                                                                2 : InvalidArgumentException ex2,
                                                                                                3 : InvalidTokenException ex3,
                                                                                                4 : ApplicationDoesNotExistException ex4,
                                                                                                5 : UnauthorizedException ex5);

    GetApplicationsOwnedByResponse getApplicationsOwnedBy(1 : GetApplicationsOwnedByRequest request) throws(1 : OperationFailedException ex1,
                                                                                                            2 : InvalidArgumentException ex2,
                                                                                                            3 : InvalidTokenException ex3);


    /**
     * Provision a New Application to keep tabs on.
     */
    ProvisionApplicationResponse provisionApplication(1 : ProvisionApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                                      2 : InvalidArgumentException ex2,
                                                                                                      3 : InvalidTokenException ex3,
                                                                                                      4 : ApplicationDoesNotExistException ex4,
                                                                                                      5 : UnauthorizedException ex5);



    /**
     * Recreate an Application Token in case the existing one is lost, forgotten, or compromised.
     * Keep in mind that this will invalidate any prior existing Application Tokens.
     * Only an "owner" can perform this operation.
     *
     * #owner
     */
    RecreateApplicationTokenResponse recreateToken(1 : RecreateApplicationTokenRequest request) throws(1 : OperationFailedException ex1,
                                                                                                       2 : InvalidArgumentException ex2,
                                                                                                       3 : InvalidTokenException ex3,
                                                                                                       4 : ApplicationDoesNotExistException ex4,
                                                                                                       5 : UnauthorizedException ex5);


    /**
     * Permanently Deletes an Application. Only an owner can perform this Operations.
     *
     * #owners
     */
    DeleteApplicationResponse deleteApplication(1 : DeleteApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                             2 : InvalidArgumentException ex2,
                                                                                             3 : InvalidTokenException ex3,
                                                                                             4 : ApplicationDoesNotExistException ex4,
                                                                                             5 : UnauthorizedException ex5);


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
     * #owner
     */
    UpdateApplicationResponse updateApplication(1 : UpdateApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                             2 : InvalidArgumentException ex2,
                                                                                             3 : InvalidTokenException ex3,
                                                                                             4 : ApplicationDoesNotExistException ex4,
                                                                                             5 : UnauthorizedException ex5);


    /**
     * Perform a Search on all the applications registered to Aroma by searching for its title.
     */
    SearchForApplicationsResponse searchForApplications(1 : SearchForApplicationsRequest request) throws(1 : OperationFailedException ex1,
                                                                                                         2 : InvalidArgumentException ex2,
                                                                                                         3 : InvalidTokenException ex3,
                                                                                                         4 : UnauthorizedException ex4);

    //==========================================================
    // MESSAGE OPERATIONS
    //==========================================================


    /**
     * Get an Application's Messages.
     */
     GetApplicationMessagesResponse getApplicationMessages(1 : GetApplicationMessagesRequest request)throws(1 : OperationFailedException ex1,
                                                                                                            2 : InvalidArgumentException ex2,
                                                                                                            3 : InvalidTokenException ex3,
                                                                                                            4 : UnauthorizedException ex4,
                                                                                                            5: ApplicationDoesNotExistException ex5);


    /**
     * In case the Message body has been truncated, use this operation
     * to load the full message.
     */
    GetFullMessageResponse getFullMessage(1 : GetFullMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                                    2 : InvalidArgumentException ex2,
                                                                                    3 : InvalidTokenException ex3);


    /**
     * Delete Messages stored for the Application. Only an owner can perform this operation.
     *
     * #owner
     */
    DeleteMessageResponse deleteMessage(1 : DeleteMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                                 2 : InvalidArgumentException ex2,
                                                                                 3 : InvalidTokenException ex3,
                                                                                 4 : MessageDoesNotExistException ex4,
                                                                                 5 : UnauthorizedException ex5);



    DismissMessageResponse dismissMessage(1 : DismissMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                                    2 : InvalidArgumentException ex2,
                                                                                    3 : InvalidTokenException ex3,
                                                                                    4 : MessageDoesNotExistException ex4,
                                                                                    5 : UnauthorizedException ex5);

    //==========================================================
    // INBOX OPERATIONS
    //==========================================================


    /**
     * Get Messages in a User's Inbox
     */
    GetInboxResponse getInbox(1 : GetInboxRequest request)throws(1 : OperationFailedException ex1,
                                                                 2 : InvalidArgumentException ex2,
                                                                 3 : InvalidTokenException ex3);

    //==========================================================
    // ACTIVITY OPERATIONS
    //==========================================================

    /**
     * Get all of the User-Related activities that have happened recently.
     */
    GetActivityResponse getActivity(1 : GetActivityRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidTokenException ex3);

    //==========================================================
    // REACTION OPERATIONS
    //==========================================================


    /**
     * #owner
     */
    GetReactionsResponse getReactions(1 : GetReactionsRequest request) throws(1 : OperationFailedException ex1,
                                                                              2 : InvalidArgumentException ex2,
                                                                              3 : InvalidTokenException ex3,
                                                                              4 : ApplicationDoesNotExistException ex4,
                                                                              5 : UnauthorizedException ex5);

    /**
     * Update an Application's Reactions.
     *
     * #owner
     */
    UpdateReactionsResponse updateReactions(1 : UpdateReactionsRequest request) throws(1 : OperationFailedException ex1,
                                                                                       2 : InvalidArgumentException ex2,
                                                                                       3 : InvalidTokenException ex3,
                                                                                       4 : ApplicationDoesNotExistException ex4,
                                                                                       5 : UnauthorizedException ex5);

    //==========================================================
    // FOLLOW APP OPERATIONS
    //==========================================================


    GetApplicationsFollowedByResponse getApplicationsFollowedBy(1 : GetApplicationsFollowedByRequest request) throws(1 : OperationFailedException ex1,
                                                                                                                     2 : InvalidArgumentException ex2,
                                                                                                                     3 : InvalidTokenException ex3);


    /**
     * Subscribe to an existing application to get notifications.
     */
    FollowApplicationResponse followApplication(1 : FollowApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                             2 : InvalidArgumentException ex2,
                                                                                             3 : InvalidTokenException ex3,
                                                                                             4 : ApplicationDoesNotExistException ex4,
                                                                                             5 : UnauthorizedException ex5);



    UnfollowApplicationResponse unfollowApplication(1 : UnfollowApplicationRequest request) throws(1 : OperationFailedException ex1,
                                                                                                   2 : InvalidArgumentException ex2,
                                                                                                   3 : InvalidTokenException ex3,
                                                                                                   4 : ApplicationDoesNotExistException ex4,
                                                                                                   5 : UnauthorizedException ex5);

    //==========================================================
    // DEVICE REGISTRATION OPERATIONS
    //==========================================================

    CheckIfDeviceIsRegisteredResponse checkIfDeviceIsRegistered(1 : CheckIfDeviceIsRegisteredRequest request) throws(1 : OperationFailedException ex1,
                                                                                                                     2 : InvalidArgumentException ex2,
                                                                                                                     3 : InvalidTokenException ex3,
                                                                                                                     4 : UnauthorizedException ex4);

    /**
     * Get a list of all the devices currently registered to a user account.
     */
    GetRegisteredDevicesResponse getRegisteredDevices(1 : GetRegisteredDevicesRequest request) throws(1 : OperationFailedException ex1,
                                                                                                      2 : InvalidArgumentException ex2,
                                                                                                      3 : InvalidTokenException ex3,
                                                                                                      4 : UnauthorizedException ex4);

    /**
     * Register a Device and associate it with the account of the User calling.
     */
    RegisterDeviceResponse registerDevice(1 : RegisterDeviceRequest request) throws(1 : OperationFailedException ex1,
                                                                                    2 : InvalidArgumentException ex2,
                                                                                    3 : InvalidTokenException ex3,
                                                                                    4 : UnauthorizedException ex4);

    /**
     * Unregisters a Device from a User Account, if it is found. Causes no harm if the device does not exist.
     */
    UnregisterDeviceResponse unregisterDevice(1 : UnregisterDeviceRequest request) throws(1 : OperationFailedException ex1,
                                                                                          2 : InvalidArgumentException ex2,
                                                                                          3 : InvalidTokenException ex3,
                                                                                          4 : UnauthorizedException ex4);

    //==========================================================
    // DASHBOARD OPERATIONS
    //==========================================================

    GetDashboardResponse getDashboard(1 : GetDashboardRequest request) throws(1 : OperationFailedException ex1,
                                                                              2 : InvalidArgumentException ex2,
                                                                              3 : InvalidTokenException ex3);


    //==========================================================
    // BUZZ OPERATIONS
    //==========================================================


    GetBuzzResponse getBuzz(1 : GetBuzzRequest request) throws(1 : OperationFailedException ex1,
                                                               2 : InvalidArgumentException ex2,
                                                               3 : InvalidTokenException ex3,
                                                               4 : ApplicationDoesNotExistException ex4,
                                                               5 : UnauthorizedException ex5);

    //==========================================================
    // OTHER OPERATIONS
    //==========================================================

    double getApiVersion()

    /**
     * Register an existing Application for Health Pokes. The Aroma Service
     * will then periodically poke the Application for health status.
     *
     * #owner
     */
    RegisterHealthCheckResponse registerHealthCheck(1 : RegisterHealthCheckRequest request) throws(1 : OperationFailedException ex1,
                                                                                                   2 : InvalidArgumentException ex2,
                                                                                                   3 : InvalidTokenException ex3,
                                                                                                   4 : ApplicationDoesNotExistException ex4,
                                                                                                   5 : UnauthorizedException ex5);


    /** Request to get Media stored by the Aroma Service. */
    GetMediaResponse getMedia(1 : GetMediaRequest request) throws(1 : OperationFailedException ex1,
                                                                  2 : InvalidArgumentException ex2,
                                                                  3 : InvalidTokenException ex3,
                                                                  4 : DoesNotExistException ex4,
                                                                  5 : UnauthorizedException ex5);



}
