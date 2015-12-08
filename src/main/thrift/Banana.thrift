namespace java  tech.aroma.banana.thrift
namespace cocoa Banana_
namespace cpp   aroma.banana.thrift

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
    1: string messageId;
    2: string body;
    3: Urgency urgency = Urgency.PRESSING;
    4: timestamp timeMessageSent;
    5: timestamp timeMessageReceived;
    6: string nameOfService;
}

enum TimeUnit
{
    MILLIS,
    SECONDS,
    MINUTES,
    HOURS,
    DAYS
}

struct TimePeriod
{
    1: required TimeUnit unit;
    /** The Value must be non-negative */
    2: required int value;
}

enum ImageType
{
    JPEG = 1,
    PNG = 2
}

struct Dimension
{
    1: required int width;
    2: required int height;
}

struct Image
{
    1: ImageType imageType;
    2: binary data;
    3: Dimension dimension;
}