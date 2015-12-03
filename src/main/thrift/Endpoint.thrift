namespace java  tech.aroma.banana.thrift
namespace cocoa BananaService_

include "Banana.thrift"

typedef i32 int

struct Endpoint
{
    1: int port;
}
