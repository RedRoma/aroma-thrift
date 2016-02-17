
namespace java  tech.aroma.thrift.reactions
namespace cocoa AromaReactions_
namespace cpp   tech.aroma.thrift.reactions

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

union Matcher
{
    1: MatcherAll all;
    2: MatcherTitleIs titleIs;
    3: MatcherTitleContains titleContains;
    4: MatcherBodyIs bodyIs;
    5: MatcherBodyContains bodyContains;
    6: MatcherUrgencyEquals urgencyEquals;
    7: MatcherHostnameEquals hostnameEquals;
}