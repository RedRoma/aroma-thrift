namespace java  tech.aroma.banana.thrift.authentication
namespace cocoa BananaAuthentication_

include "Banana.thrift"

typedef i32 int
typedef i64 long
typedef i64 timestamp

enum Role
{
    DEV = 1,
    OWNER = 2
}

struct Developer
{
    1: string email;
    2: optional string name;
    3: optional string username;
    4: Role role;
}