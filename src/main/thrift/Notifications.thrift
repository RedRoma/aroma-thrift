namespace java  tech.aroma.banana.thrift.notifications
namespace cocoa BananaNotifications_
namespace cpp   aroma.banana.thrift.notifications

/*
 * Defined in this File are the Banana Service Notifications
 * and Event types that can be sent to a Human.
 */

include "Authentication.thrift"
include "Banana.thrift"

typedef Authentication.ServiceToken ServiceToken

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;
typedef Banana.Human Human
typedef Banana.Service Service

struct HealthCheckFailed
{
}

struct HealthCheckBackToNormal
{
}

struct ServiceTokenRenewed
{
    1: Human human;
    2: optional ServiceToken serviceToken;
}

struct ServiceTokenRegenerated
{
    1: Human human;
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
