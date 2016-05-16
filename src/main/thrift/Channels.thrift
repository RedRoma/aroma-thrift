namespace java  tech.aroma.thrift.channels
namespace cocoa AromaChannels_
namespace cpp   aroma.thrift.channels
namespace php   RedRoma.Aroma.Channels

/*
 * Defined in this File are the various Channels that
 * Aroma can send Messages to.
 *
 * A Channel represents a Medium where information can be transmitted and delivered to,
 * such as a Push Notification to an iOS or Android Device.
 *
 * A Person can register various channels where he/she can
 * be reached.
 */

include "Aroma.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"

typedef Aroma.int int
typedef Aroma.long long
typedef Aroma.timestamp timestamp
typedef Aroma.uuid uuid

/**
 * It's a bit confusing, but "Channel" here refers to
 * a specific "Slack Channel" in a Team Slack Account,
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
    2: optional string subject = "Aroma - New Message";
}

/**
 * Allows for messages to be sent to a custom Channel
 */
struct CustomChannel
{
    /** This endpoint will be hit with a message each time. */
    1: Endpoint.Endpoint endpoint;
}

struct IOSDevice
{
    /** Device Token may be stored and serialized as a Base64 encoded String. */
    1: string deviceToken;
}

struct AndroidDevice
{
    1: string registrationId;
}

struct WindowsPhoneDevice
{
    
}

/**
 * This Union represents the Abstract concept of an AromaChannel
 */
union AromaChannel
{
    1: SlackChannel slackChannel;
    2: SlackUsername slackUsername;
    3: Email email;
    4: CustomChannel customChannel;
    5: IOSDevice iosDevice;
    6: AndroidDevice androidDevice;
    7: WindowsPhoneDevice windowsPhone;
}

struct ChannelInfo
{
    1: AromaChannel channel;
    2: timestamp timeRegistered;
    3: optional uuid channelId;
}

/**
 * This is the Request Body that will be sent to any
 * Custom Channels registered to a service.
 */
struct ReceiveMessageRequest
{
    1: Aroma.Message message;
}

/**
 * Defines a custom endpoint to send messages to.
 * Note that a channel can receive messages and events from
 * more than one Application.
 *
 * Note that no care is taken to rate-limit. Your endpoint
 * may get flooded. Use with caution.
 */
service CustomAromaChannel
{
    /**
     * The Aroma Service will first ping your Custom Channel
     * to make sure it is reachable and operational.
     */
    int ping();

    /**
     * Called each time Aroma receives a Message from the Application
     * in question.
     */
    oneway void receiveMessage(1: ReceiveMessageRequest request)
}
