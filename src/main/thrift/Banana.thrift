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
 * Determines how Severe a Call or
 */
enum Urgency
{
    INFORMATIONAL = 1,
    WARNING = 2,
    FATAL = 3
}
