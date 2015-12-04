namespace java  tech.aroma.banana.thrift.notifications
namespace cocoa BananaNotifications_
namespace cpp   tech.aroma.banana.thrift.notifications

/*
 * Defined in this File are the Banana Service Notifications
 * and Event types that can be sent to a Developer.
 */

include "Authentication.thrift"
include "Banana.thrift"

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

typedef Authentication.Developer Developer
typedef Authentication.Service Service
typedef Authentication.ServiceToken ServiceToken

struct HealthCheckFailed
{
}

struct HealthCheckBackToNormal
{
}

struct ServiceTokenRenewed
{
    1: Developer developer;
    2: optional ServiceToken serviceToken;
}

struct ServiceTokenRegenerated
{
    1: Developer developer;
    2: optional ServiceToken serviceToken;
}


struct ServiceSentMessage
{
    1: Banana.Message message;
}



union Event
{
    1: HealthCheckFailed healthCheckFailed;
}

struct Notification
{
    1: Event event;
    2: timestamp timestamp;
}