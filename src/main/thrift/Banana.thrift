namespace java  tech.aroma.banana.thrift
namespace cocoa Banana_
namespace cpp   tech.aroma.banana.thrift

typedef i32 int
typedef i64 long

/**
 * A Timestamp is defined as Unix Time, otherwise known as
 * Milliseconds since epoch.
 */
typedef i64 timestamp

/**
 * Determines how Important or Severe a Message is.
 */
enum Urgency
{
    INFORMATIONAL = 1,
    PRESSING = 2,
    CRITICAL = 3
}


struct Message
{
    1: string body;
    2: Urgency urgency = Urgency.PRESSING;
}

struct Call
{

}

struct Text
{

}

struct Service
{
    1: string owner;
    2: timestamp timeOfRegistration;
    3: string name;
}

