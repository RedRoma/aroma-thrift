namespace java  tech.aroma.banana.thrift.endpoint
namespace cocoa BananaEndpoint_

include "Banana.thrift"

typedef i32 int

struct Endpoint
{
    1: int port;
}
