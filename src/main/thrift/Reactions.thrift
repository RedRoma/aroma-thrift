
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

struct MatcherTitleIsNot
{
    1: string title;
}

struct MatcherTitleContains
{
    1: string substring;
}

struct MatcherTitleDoesNotContain
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

struct MatcherBodyDoesNotContain
{
    1: string substring;
}

struct MatcherUrgencyIs
{
    1: Aroma.Urgency urgency;
    2: optional list<Aroma.Urgency> urgencies;
}

struct MatcherHostnameIs
{
    1: string expectedHostname;
}

struct MatcherHostnameContains
{
    1: string substring;
}

struct MatcherHostnameDoesNotContain
{
    1: string substring;
}

union AromaMatcher
{
    1: MatcherAll all;
    2: MatcherTitleIs titleIs;
    3: MatcherTitleIsNot titleIsNot;
    4: MatcherTitleContains titleContains;
    5: MatcherTitleDoesNotContain titleDoesNotContain;
    6: MatcherBodyIs bodyIs;
    7: MatcherBodyContains bodyContains;
    8: MatcherBodyDoesNotContain bodyDoesNotContain;
    9: MatcherUrgencyIs urgencyEquals;
    10: MatcherHostnameIs hostnameIs;
    11: MatcherHostnameContains hostnameContains;
    12: MatcherHostnameDoesNotContain hostnameDoesNotContain;
}


struct ActionForwardToSlackChannel
{
    1: string slackChannel;
    2: optional bool includeBody = true;
}

struct ActionForwardToSlackUser
{
    1: string slackUsername;
    2: optional bool includeBody = true;
}

struct ActionSendEmail
{
    1: string emailAddress;
    2: optional bool includeBody = true;
}

struct ActionSkipInbox
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
    1: ActionForwardToSlackChannel forwardToSlackChannel;
    2: ActionForwardToSlackUser forwardToSlackUser;
    3: ActionSendEmail sendEmail;
    4: ActionSkipInbox skipInbox;
    5: ActionDeleteMessage deleteMessage;
    6: ActionRespondToCode respondToCode;
    7: ActionForwardToUsers forwardToUsers;
}


struct Reaction
{
    1: AromaMatcher matcher;
    2: AromaAction action;
    3: string name;
}
