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

struct Password
{
    1: string encryptedPassword;
}

/**
 * Use this password to encrypt the password 
 * before sending it over the wire. Without it, passwords will
 * not be understood by the service, and will be rejected.
 */
const string OVER_THE_WIRE_PASSWORD_ENCRYPTION_KEY = "dD2Qor6l1ZBhQh6q8X3WGwr84vBeqeEjcfoYb01xSwJBU5mFIM";

/**
 * An Account registered with our System.
 */
struct AromaAccount
{
    1: string email;
    2: Password password;
    3: string name;
    4: Banana.Image profileImage;
}

/**
 * There are multiple ways to Sign In and Authenticate with
 * the Banana Service.
 */
union Credentials
{
    1: GithubToken githubToken;
    2: AromaAccount aromaAccount;
}