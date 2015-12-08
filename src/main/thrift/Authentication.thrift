namespace java  tech.aroma.banana.thrift.authentication
namespace cocoa BananaAuthentication_
namespace cpp   aroma.banana.thrift.authentication

include "Banana.thrift"

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

struct ServiceToken
{
    1: string id;
    2: string serviceName;
    3: optional string organization;
    4: timestamp timeOfExpiration;
}

struct DeveloperToken
{
    1: string id;
    2: optional string oauthProvider = "github";
    3: timestamp timeOfExpiration;
    4: optional string organization;
}

struct GithubToken
{
    1: string username;
    2: optional string email
    3: required string oauthToken;
}

union OauthToken
{
    1: GithubToken githubToken;
}