namespace java  tech.aroma.banana.thrift.endpoint
namespace cocoa BananaEndpoint_
namespace cpp   tech.aroma.banana.thrift.endpoint

/*
 * Defined in this File are names and verbs about Service Endpoints
 * that the Banana Service "pokes" (polls) for Health Statuses.
 */

include "Banana.thrift"
include "Exceptions.thrift"

typedef i32 int

typedef Exceptions.OperationFailedException OperationFailedException

/**
 * A TCP ServiceEndpoint to Poke,
 * defined in Thrift.
 */
struct TcpEndpoint
{
    1: required string hostname;
    2: required int port = 80;
}

/**
 * An HTTP ServiceEndpoint to Poke,
 * defined in Thrift.
 */
struct ThriftHttpEndpoint
{
    1: required string url;
}

/**
 * A REST HTTP Endpoint to Poke.
 * This Service is not defined in Thrift and will instead receive
 * an HTTP Post Request with the same
 */
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
    2: bool healthy;
}

service ServiceEndpoint
{
    
    HealthPokeResponse healthPoke(1: HealthPokeRequest request) throws (1: OperationFailedException ex1)
}
