namespace java  tech.aroma.banana.thrift.events
namespace cocoa BananaEvents_
namespace cpp   aroma.banana.thrift.events

/*
 * Defined in this File are the Banana Service Events
 * that can be sent to a User via a Notification.
 */

include "Authentication.thrift"
include "Banana.thrift"

typedef Authentication.ApplicationToken ApplicationToken

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;
typedef Banana.User User
typedef Banana.Application Application


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
    4: string applicationId;
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
    4: string applicationId;
    5: string applicationName;
}

/**
 * An Application has sent a message.
 */
struct ApplicationSentMessage
{
    1: optional string message = "Application has sent an Alert"
    /** The Message that the Application Sent. */
    2: optional Banana.Message messageSentByApplication;
    /** The Application that sent the message. */
    3: string applicationId;
    4: string applicationName;
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
    3: string applicationId;
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
    2: string applicationId;
    3: string applicationName;
}

/**
 * An Application Owner has approved a request to Follow or perform
 * some other action on an Application by a non-owner.
 */
struct OwnerApprovedRequest
{
    1: optional string message = "Application Owner approved your request";
    2: string applicationId;
    3: string applicationName;
    /** The Owner who approved. */
    4: User owner;
}

/**
 * An Event represents the different types of events that can
 * occur within the Banana Service.
 */
union EventType
{
    1: HealthCheckFailed healthCheckFailed;
    2: HealthCheckBackToNormal healthCheckBackToNormal;
    3: ApplicationTokenRenewed applicationTokenRenewed;
    4: ApplicationTokenRegenerated applicationTokenRegenerated;
    5: ApplicationSentMessage applicationSentMessage;
    6: OwnerApprovedRequest ownerApprovedRequest;
}

/**
 * A Notification defines an Event, and the time that it happened.
 */
struct Event
{
    1: EventType eventType;
    2: timestamp timestamp;
    3: string eventId;
}
