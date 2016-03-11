namespace java  tech.aroma.thrift.email
namespace cocoa AromaEmail_
namespace cpp   aroma.thrift.email

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

typedef Aroma.int int
typedef Aroma.long long
typedef Aroma.timestamp timestamp

typedef Aroma.User User


struct EmailNewUserRegistration
{
    1: User infoOfNewUser;
}

union EmailMessage
{
    1: EmailNewUserRegistration newUser;
}
