namespace java  tech.aroma.banana.thrift.endpoint
namespace cocoa BananaEndpoint_

include "Banana.thrift"

typedef i32 int

struct TcpEndpoint
{
    1: required string hostname;
    2: required int port = 80;
}

struct HttpEndpoint
{
    1: required string url;
}

union Endpoint
{
    1: TcpEndpoint tcp;
    2: HttpEndpoint http;
}
