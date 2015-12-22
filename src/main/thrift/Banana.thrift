namespace java  tech.aroma.banana.thrift
namespace cocoa Banana_
namespace cpp   aroma.banana.thrift

/*
 * Defined in this file are the basic structures and types for 
 * the Banana Service.
 * 
 * Note that Human, User, and Person are used interchangeably.
 */

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
    /** Lowest level of urgency. */
    LOW = 1,
    /** Middle level of urgency. */
    MEDIUM = 2,
    /** Highest level of urgency. */
    HIGH = 3
}

struct Message
{
    /** Each message has a unique ID */
    1: string messageId;
    /** The body represents the Message's Payload, i.e. the actual message. */
    2: string body;
    3: Urgency urgency = Urgency.LOW;
    /** The time the message was created on the Application side */
    4: timestamp timeOfCreation;
    /** The time the message was received on the Server side */
    5: timestamp timeMessageReceived;
    /** Name of the Application that sent the message. */
    6: string applicationName;
    /** The Network Hostname of the Device sending the message, ideally the FQDM. */
    7: optional string hostname;
    8: optional string macAddress;
}

/**
 * Defines the basic Units of Time Measurement.
 */
enum TimeUnit
{
    MILLIS,
    SECONDS,
    MINUTES,
    HOURS,
    DAYS,
    WEEKS
}

/**
 * Defines a Period of Time, or a Length of Time.
 */
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

/**
 * 2 Dimensional Image Size.
 */
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

/**
 * Defines the Role(s) that a human in this system
 * can be.
 */
enum Role
{
    DEVELOPER = 1,
    OPERATIONS = 2,
    MANAGER = 3,
    PRODUCT = 4,
    QA = 5
}

/**
 * A User represents a Human who is a user of the Service.
 */
struct User
{
    /** A person's email address is also considered their identifying trait. */
    1: string email;
    2: optional string name;
    3: optional string username;
    /** A Person can be more than one thing at once. By default, we assume a developer. */
    4: list<Role> roles = [ Role.DEVELOPER ];
}

/**
 * Applications are usually written in one main language.
 */
enum ProgrammingLanguage
{
    JAVA,
    CPP,
    C_SHARP,
    C,
    OBJECTIVE_C,
    SWIFT,
    DOT_NET,
    RUBY,
    GROOVY,
    PYTHON,
    PHP,
    NODE,
    DART,
    OTHER
}

struct Application
{
    /** Owners can perform administrative actions on a service. */
    1: list<User> owners;
    /** When the application was first provisioned. */
    2: timestamp timeOfProvisioning;
    /** The name of the application. */
    3: string name;
    /** The Automatically generated ID for the Application. */
    4: string id;
    /** The total amount of messages that have been counted so far for the Application*/
    5: long totalMessagesSent;
    6: optional Image icon;
    7: optional ProgrammingLanguage programmingLanguage;
    /** Defines a list of people that are subscribed to events for an Application.*/
    8: optional list<User> subscribers = [];
}

/**
 * Defines a Banana Service announcement.
 * Examples include:
 * + Going down for system maintenance
 * + Looking for feedback
 * + New Update available
 * + Other news
 */
struct ServiceAnnouncement
{
    1: string message;
    2: Urgency importance;
    /** Each announcement has an ID so that it can be dismissed by users.*/
    3: string id;
    /** An announcement is irrelevant after this time. */
    4: timestamp timeOfExpiration;
}