namespace java  tech.aroma.banana.thrift.endpoint
namespace cocoa BananaEndpoint_

include "Banana.thrift"
include "Exceptions.thrift"

typedef i32 int

typedef Exceptions.OperationFailedException OperationFailedException

struct TcpEndpoint
{
    1: required string hostname;
    2: required int port = 80;
}

struct ThriftHttpEndpoint
{
    1: required string url;
}

struct RestHttpEndpoint
{
    1: required string url;
}

union Endpoint
{
    1: TcpEndpoint tcp;
    2: ThriftHttpEndpoint thriftHttp;
    3: RestHttpEndpoint restHttp;
}

struct HealthPokeRequest
{
    1: string serviceName;
}

struct HealthPokeResponse
{
    1: string message;
}

service ServiceEndpoint
{
    HealthPokeResponse healthPoke(1: HealthPokeRequest request) throws (1: OperationFailedException ex1)
}