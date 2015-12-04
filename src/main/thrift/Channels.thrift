namespace java  tech.aroma.banana.thrift.channels
namespace cocoa BananaChannels_
namespace cpp   aroma.banana.thrift.channels

/*
 * Defined in this File are the various Channels that
 * the Banana Service can send Messages to.
 * Essentially a channel is a way to contact a developer.
 * A Developer can register various channels where he/she can
 * be reached.
 */

include "Banana.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"

typedef Banana.int int
typedef Banana.long long
typedef Banana.timestamp timestamp

struct SlackChannel
{
    1: string domainName;
    2: string channelName;
    3: string slackToken;
}

struct SlackUsername
{
    1: string domainName;
    2: string username;
    3: string slackToken;
}

struct Email
{
    1: string emailAddress;
    2: optional string subject = "Banana Service - Message Received";
}

struct CustomChannel
{
    /** This endpoint will be hit with a message each time. */
    1: Endpoint.Endpoint endpoint;
}

union BananaChannel
{
    1: SlackChannel slackChannel;
    2: SlackUsername slackUsername;
    3: Email email;
    4: CustomChannel customChannel;
}

struct ReceiveMessageRequest
{
    1: Banana.Message message;
}

service CustomBananaChannel
{
    oneway void receiveMessage(1: ReceiveMessageRequest request)
}
