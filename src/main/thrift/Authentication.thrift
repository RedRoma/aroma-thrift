namespace java  tech.aroma.banana.thrift.authentication
namespace cocoa BananaAuthentication_
namespace cpp   aroma.banana.thrift.authentication

/*
 * Defined in this file are the Authentication structures and relationships
 * for the Banana Service.
 */

include "Banana.thrift"

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

struct ApplicationToken
{
    1: string token;
    2: optional string organization;
    3: timestamp timeOfExpiration;
    4: optional string applicationId;
    5: optional string applicationName;
}

struct UserToken
{
    1: string token;
    2: timestamp timeOfExpiration;
    3: optional string organization;
    4: optional bool isOauthToken = false;
    5: optional string oauthProvider;
}

struct GithubToken
{
    1: string username;
    2: string email
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
const string OVER_THE_WIRE_PASSWORD_ENCRYPTION_KEY = "fwlrhvskjhf3foiwjkvdslj3qovknkf jnvzsv h3lfjwlejfiofszdkjnk";

/**
 * An Account registered with our System.
 */
struct AromaAccount
{
    1: string email;
    2: Password password;
    3: string name;
    4: Banana.Image profileImage;
    5: optional Banana.Role role;
}

/**
 * This union represents the multiple ways a User can 
 * Sign In and Authenticate with the Banana Service.
 */
union Credentials
{
    1: GithubToken githubToken;
    2: AromaAccount aromaAccount;
}