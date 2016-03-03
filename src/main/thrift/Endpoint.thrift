namespace java  tech.aroma.thrift.endpoint
namespace cocoa AromaEndpoint_
namespace cpp   aroma.thrift.endpoint

/*
 * Defined in this File are names and verbs relating to Application Endpoints
 * that Aroma periodically "pokes" (polls) for Health Statuses.
 */

include "Authentication.thrift"
include "Aroma.thrift"
include "Exceptions.thrift"

typedef Aroma.int int
typedef Aroma.uuid uuid;

typedef Exceptions.OperationFailedException OperationFailedException

/**
 * A TCP Application Endpoint to Poke,
 * defined in Thrift.
 */
struct TcpEndpoint
{
    1: required string hostname;
    2: required int port = 80;
}

/**
 * An HTTP ApplicationEndpoint to Poke,
 * defined in Thrift.
 */
struct HttpThriftEndpoint
{
    1: required string url;
}

/**
 * A REST HTTP Endpoint to Poke.
 * 
 * This Endpoint is not defined in Thrift and will instead receive
 * an HTTP Post Request with the same payload, but in JSON.
 * 
 * Examples to follow...
 */
struct HttpRestEndpoint
{
    1: required string url;
}

/**
 * This union defines the multiple ways that an Endpoint can be defined
 * and understood.
 */
union Endpoint
{
    1: TcpEndpoint tcp;
    2: HttpThriftEndpoint httpThrift;
    3: HttpRestEndpoint httpRest;
}

/**
 * Sent by Aroma to an Application Endpoint
 * to poke for health status.
 */
struct HealthPokeRequest
{
    /** The ID of the Application to Check. */
    1: uuid applicationId;
    /** 
     * We will include your ApplicationToken so that you 
     * can authenticate the call if you'd like. With
     * the ApplicationToken, you can verify that it is 
     * us calling you.
     */
    2: Authentication.ApplicationToken serviceToken;
}

struct HealthPokeResponse
{
    /** Send us back some message, not too long. */
    1: string message;
    /** Tell us whether your Application is healthy or not. */
    2: bool healthy;
}

/**
 * This service is implemented by Applications wishing to be "poked"
 * for health checks.
 */
service ApplicationEndpoint
{
    
    HealthPokeResponse healthPoke(1: HealthPokeRequest request) throws (1: OperationFailedException ex1)
}
