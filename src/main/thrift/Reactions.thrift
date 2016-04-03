
namespace java  tech.aroma.thrift.reactions
namespace cocoa AromaReactions_
namespace cpp   tech.aroma.thrift.reactions
namespace php   RedRoma.Aroma.Reactions

/*
 * Defined in this File are the Reactions that can occur when an Application sends a Messages.
 * 
 * A Reaction is composed into two parts, a Matcher and an Action.
 * When a Message matches a given matcher, the Action is performed.
 * 
 */

include "Aroma.thrift"
include "Exceptions.thrift"

typedef Aroma.int int
typedef Aroma.long long
typedef Aroma.timestamp timestamp
typedef Aroma.uuid uuid

/** Matches All Messages. */
struct MatcherAll
{
}

struct MatcherTitleIs
{
    1: string expectedTitle;
}

struct MatcherTitleContains
{
    1: string substring;
}

struct MatcherBodyIs
{
    1: string expectedBody;
}

struct MatcherBodyContains
{
    1: string substring;
}

struct MatcherUrgencyEquals
{
    1: Aroma.Urgency urgency;
}

struct MatcherHostnameEquals
{
    1: string expectedHostname;
}

union AromaMatcher
{
    1: MatcherAll all;
    2: MatcherTitleIs titleIs;
    3: MatcherTitleContains titleContains;
    4: MatcherBodyIs bodyIs;
    5: MatcherBodyContains bodyContains;
    6: MatcherUrgencyEquals urgencyEquals;
    7: MatcherHostnameEquals hostnameEquals;
}


struct ActionPostToSlackChannel
{
    1: string slackChannel;
    2: optional bool includeBody = true;
}

struct ActionPostToSlackUser
{
    1: string slackUsername;
    2: optional bool includeBody = true;
}

struct ActionSendEmail
{
    1: string emailAddress;
    2: optional bool includeBody = true;
}

struct ActionIgnore
{
   
}

struct ActionDeleteMessage
{
    
}

struct ActionRespondToCode
{
    1: string messageToSend;
}

struct ActionForwardToUsers
{
    1: list<uuid> userIds = [];
}

union AromaAction
{
    1: ActionPostToSlackChannel postToSlackChannel;
    2: ActionPostToSlackUser postToSlackUser;
    3: ActionSendEmail sendEmail;
    4: ActionIgnore ignore;
    5: ActionDeleteMessage deleteMessage;
    6: ActionRespondToCode respondToCode;
    7: ActionForwardToUsers forwardToUsers;
}


struct Reaction
{
    1: AromaMatcher matcher;
    2: AromaAction action;
}