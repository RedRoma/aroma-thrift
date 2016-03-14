namespace java  tech.aroma.thrift.events
namespace cocoa AromaEvents_
namespace cpp   aroma.thrift.events

/*
 * Defined in this File are the Aroma Events
 * that can be sent to a User via a Notification.
 */

include "Authentication.thrift"
include "Aroma.thrift"

typedef Authentication.ApplicationToken ApplicationToken

typedef Aroma.int int;
typedef Aroma.long long;
typedef Aroma.timestamp timestamp;
typedef Aroma.uuid uuid;

typedef Aroma.User User
typedef Aroma.Application Application

struct ApplicationMessagesDeleted
{
    1:  uuid applicationId;
    2: optional string message = "Application's messages have been deleted"
    3: optional Application app;
    4: uuid userIdOfActor;
    5: optional User actor;
}

/**
 * An Application's Token has been renewed.
 */
struct ApplicationTokenRenewed
{
    1: optional string message = "Application Token has been renewed";
    /** The user who performed the action. */
    2: User user;
    /** We may or may not include the new Application Token, for security reasons. */
    3: optional ApplicationToken applicationToken;
    4: uuid applicationId;
    5: string applicationName;
}

/**
 * An Application Token has been regenerated by someone,
 * likely because the original one was lost, compromised, or forgotten.
 */
struct ApplicationTokenRegenerated
{
    1: optional string message = "Application Token has been re-created"
    /** The person who performed the action. */
    2: User user;
    3: optional ApplicationToken applicationToken;
    4: uuid applicationId;
    5: string applicationName;
}

/**
 * An Application has sent a message.
 */
struct ApplicationSentMessage
{
    1: optional string message = "Application has sent an Alert"
    /** The Message that the Application Sent. */
    2: optional Aroma.Message messageSentByApplication;
    /** The Application that sent the message. */
    3: uuid applicationId;
    4: string applicationName;
}

struct ApplicationDeleted
{
    1: uuid userId;
    2: optional User user;
    3: uuid applicationId;
    4: optional Application application;
    5: optional string message = "Application has been deleted"
}

struct ApplicationFollowed
{
    1: uuid userId;
    2: uuid applicationId;
    3: optional User user;
    4: optional Application application;
    5: optional string message = "Application Followed"
}

/**
 * A Health Poke returned a failure.
 */
struct HealthCheckFailed
{
    1: optional string message = "Application failed a Health Check";
    /** May include the name of the host that went down. */
    2: optional string hostname;
    /** The application that failed the health check. */
    3: uuid applicationId;
    /** The Human-Friendly name of the Application. */
    4: string applicationName;
}

/**
 * An Application that was previously unhealthy
 * is now healthy.
 */
struct HealthCheckBackToNormal
{
    1: optional string message = "Application's Health is back to normal";
    2: uuid applicationId;
    3: string applicationName;
}

struct OwnerAdded
{
    1: uuid existingOwnerId;
    2: uuid newOwnerId;
    3: optional User existingOwner;
    4: optional User newOwner;
}

/**
 * An Application Owner has approved a request to Follow or perform
 * some other action on an Application by a non-owner.
 */
struct OwnerApprovedRequest
{
    1: optional string message = "Application Owner approved your request";
    2: uuid applicationId;
    3: string applicationName;
    /** The Owner who approved. */
    4: User owner;
}

struct UserFollowedApplication
{
    1: optional string message = "Someone followed your Application";
    2: uuid applicationId;
    3: User follower;
    4: User owner;
}

/**
 * A General Event is a less formal kind of Event.
 */
struct GeneralEvent
{
    1: uuid applicationId;
    2: string applicationName;
    3: string message;
    4: timestamp timestamp;
}

/**
 * An Event represents the different types of events that can
 * occur within Aroma.
 */
union EventType
{
    1 : ApplicationMessagesDeleted applicationMessageDeleted;
    2 : HealthCheckFailed healthCheckFailed;
    3 : HealthCheckBackToNormal healthCheckBackToNormal;
    4 : ApplicationFollowed applicationFollowed;
    5 : ApplicationDeleted applicationDeleted;
    6 : ApplicationTokenRenewed applicationTokenRenewed;
    7 : ApplicationTokenRegenerated applicationTokenRegenerated;
    8 : ApplicationSentMessage applicationSentMessage;
    9 : OwnerApprovedRequest ownerApprovedRequest;
    10: OwnerAdded ownerAdded;
    11: GeneralEvent generalEvent;
    12: UserFollowedApplication userFollowedApplication;
}

/**
 * A Notification defines an Event, and the time that it happened.
 */
struct Event
{
    1: EventType eventType;
    2: timestamp timestamp;
    3: uuid eventId;
}