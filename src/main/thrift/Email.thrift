namespace java  tech.aroma.thrift.email
namespace cocoa AromaEmail_
namespace cpp   aroma.thrift.email
namespace php   RedRoma.Aroma.Email

/*
 * Defined in this File are the various Channels that
 * Aroma can send Messages to.
 * 
 * Essentially a channel is a way to contact a person.
 * 
 * A Person can register various channels where he/she can
 * be reached.
 */

include "Aroma.thrift"
include "Authentication.thrift"

typedef Aroma.int int
typedef Aroma.long long
typedef Aroma.timestamp timestamp

typedef Aroma.Application Application
typedef Aroma.User User

typedef Authentication.ApplicationToken ApplicationToken

struct EmailNewApplication
{
    1: User creator;
    2: Application app;
    3: ApplicationToken appToken;
}

struct EmailNewUserRegistration
{
    1: User infoOfNewUser;
}

union EmailMessage
{
    1: EmailNewApplication newApp;
    2: EmailNewUserRegistration newUser;
}
