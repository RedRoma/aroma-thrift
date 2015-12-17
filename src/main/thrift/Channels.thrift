namespace java  tech.aroma.banana.thrift.channels
namespace cocoa BananaChannels_
namespace cpp   aroma.banana.thrift.channels

/*
 * Defined in this File are the various Channels that
 * the Banana Service can send Messages to.
 * Essentially a channel is a way to contact a person.
 * A Person can register various channels where he/she can
 * be reached.
 */

include "Banana.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"

typedef Banana.int int
typedef Banana.long long
typedef Banana.timestamp timestamp

/**
 * It's a bit confusing, but 
 * this references a specific Slack Channel in a Team Slack Account,
 * for example, #operations, #development.
 */
struct SlackChannel
{
    1: string domainName;
    2: string channelName;
    3: string slackToken;
}

/**
 * This Channel refers to a Slack User, referenced directly by their
 * username.
 */
struct SlackUsername
{
    1: string domainName;
    2: string username;
    3: string slackToken;
}

/**
 * Email will be sent from the Aroma Tech domain, "aroma.tech".
 */
struct Email
{
    1: string emailAddress;
    2: optional string subject = "Banana Service - Message Received";
}

/**
 * Allows for messages to be sent to a custom Channel
 */
struct CustomChannel
{
    /** This endpoint will be hit with a message each time. */
    1: Endpoint.Endpoint endpoint;
}

/**
 * This Union represents the Abstract concept of a
 * Banana Service "Channel".
 */
union BananaChannel
{
    1: SlackChannel slackChannel;
    2: SlackUsername slackUsername;
    3: Email email;
    4: CustomChannel customChannel;
}

/**
 * This is the Request Body that will be sent to any 
 * Custom Channels registered to a service.
 */
struct ReceiveMessageRequest
{
    1: Banana.Message message;
}

service CustomBananaChannel
{
    /**
     * The Banana Service will first ping your Custom Channel
     * to make sure it is reachable and operational.
     */
    int ping();
    
    /**
     * Called each time the Banana Service sends a message to a specific service.
     */
    oneway void receiveMessage(1: ReceiveMessageRequest request)
}
