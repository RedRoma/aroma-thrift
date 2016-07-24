namespace java  tech.aroma.thrift.authentication
namespace cocoa AromaAuthentication_
namespace cpp   aroma.thrift.authentication
namespace php   RedRoma.Aroma.Authentication

/*
 * Defined in this file are the Authentication structures and relationships
 * for Aroma.
 */

include "Aroma.thrift"

typedef Aroma.int int;
typedef Aroma.long long;
typedef Aroma.timestamp timestamp;
typedef Aroma.uuid uuid;

enum TokenStatus
{
    ACTIVE = 1,
    EXPIRED = 2
}


struct ApplicationToken
{
    1: string tokenId;
    2: optional string organization;
    3: timestamp timeOfExpiration;
    4: optional uuid applicationId;
    5: optional string applicationName;
    6: optional TokenStatus status;
}

struct UserToken
{
    1: string tokenId;
    2: timestamp timeOfExpiration;
    3: optional string organization;
    4: optional bool isOauthToken = false;
    5: optional string oauthProvider;
    6: uuid userId;
    7: optional TokenStatus status;
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
const string OVER_THE_WIRE_PASSWORD_ENCRYPTION_KEY = "AR3W3O04OJ5I894k40s04163U408pnU47AicAO6X29593AbTwaWk60qu966M9j12O6873Z64822x4qG71vaEjOei159sr9QUT1DaK";

/**
 * An Account registered with our System.
 */
struct AromaAccount
{
    1: string email;
    2: Password password;
    3: string name;
    4: Aroma.Image profileImage;
    5: optional Aroma.Role role;
}

/**
 * This union represents the multiple ways a User can 
 * Sign In and Authenticate with Aroma.
 */
union Credentials
{
    1: GithubToken githubToken;
    2: Password aromaPassword;
}

enum TokenType
{
    APPLICATION = 1,
    USER = 2
}


/** 
 * Represents an Authentication Token that is used
 * and accepted by the Authentication Service.
 */
struct AuthenticationToken
{
    1: string tokenId;
    2: uuid ownerId;
    3: timestamp timeOfCreation;
    4: timestamp timeOfExpiration;
    5: TokenType tokenType;
    6: uuid organizationId;
    7: string ownerName;
    8: string organizationName;
    9: optional TokenStatus status;
}