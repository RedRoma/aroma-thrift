namespace java  tech.aroma.thrift.events
namespace cocoa AromaEvents_
namespace cpp   aroma.thrift.events
namespace php   RedRoma.Aroma.Events

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
    1: optional int totalMessagesDeleted;
    2: optional string message = "Application's messages have been deleted"
}

/**
 * An Application's Token has been renewed.
 */
struct ApplicationTokenRenewed
{
    /** We may or may not include the new Application Token, for security reasons. */
    1: optional ApplicationToken applicationToken;
    2: optional string message = "Application Token has been renewed";
}

/**
 * An Application Token has been regenerated by someone,
 * likely because the original one was lost, compromised, or forgotten.
 */
struct ApplicationTokenRegenerated
{
    1: optional ApplicationToken applicationToken;
    2: optional User actor;
    3: optional string message = "Application Token has been re-created"
}

/**
 * An Application has sent a message.
 */
struct ApplicationSentMessage
{
    1: uuid messageId;
    2: optional Aroma.Message messageSentByApplication;
    3: optional string message = "Application has sent an Alert"
}

struct ApplicationDeleted
{
    1: optional string message = "Application has been deleted"
}

struct ApplicationFollowed
{
    1: optional string message = "Application Followed"
}

struct ApplicationUnfollowed
{
    1: optional string message = "Application Unfollowed"
}

struct ApplicationUpdated
{
    1: optional string message = "Application Updated"
}

struct ApplicationReactionsUpdated
{
    1: optional string message = "Application Reactions Updated"
}

/**
 * A Health Poke returned a failure.
 */
struct HealthCheckFailed
{
    /** May include the name of the host that went down. */
    1: optional string hostname;
    /** The Human-Friendly name of the Application. */
    2: optional string message = "Application failed a Health Check";
}

/**
 * An Application that was previously unhealthy
 * is now healthy.
 */
struct HealthCheckBackToNormal
{
    1: optional string message = "Application's Health is back to normal";
}

struct OwnerAdded
{
    1: uuid userIdOfNewOwner;
    2: optional User newOwner;
    3: optional string message = "New Owner Added"
}

/**
 * An Application Owner has approved a request to Follow or perform
 * some other action on an Application by a non-owner.
 */
struct OwnerApprovedRequest
{
    1 : optional string message = "Application Owner approved your request";
}

/**
 * A General Event is a less formal kind of Event.
 */
struct GeneralEvent
{
    1: optional string message;
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
    14: ApplicationReactionsUpdated applicationReactionsUpdated;
    6 : ApplicationTokenRenewed applicationTokenRenewed;
    7 : ApplicationTokenRegenerated applicationTokenRegenerated;
    8 : ApplicationSentMessage applicationSentMessage;
    12: ApplicationUnfollowed applicationUnfollowed;
    13: ApplicationUpdated applicationUpdated;
    9 : OwnerApprovedRequest ownerApprovedRequest;
    10: OwnerAdded ownerAdded;
    11: GeneralEvent generalEvent;
}

/**
 * A Notification defines an Event, and the time that it happened.
 */
struct Event
{
    1: uuid eventId;
    2: uuid userIdOfActor;
    3: optional User actor;
    4: uuid applicationId;
    5: optional Application application;
    6: EventType eventType;
    7: timestamp timestamp;
}
