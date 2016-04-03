
namespace java  tech.aroma.thrift
namespace cocoa Aroma_
namespace cpp   tech.aroma.thrift
namespace php   RedRoma.Aroma

/*
 * Defined in this file are the basic structures and types used by Aroma.
 */
 

/** Defines the Version of Aroma API of this specification. */
const double API_VERSION = 1.9;

typedef i32 int
typedef i64 long

/**
 * A Timestamp is defined as Unix Time, otherwise known as
 * Milliseconds since epoch.
 */
typedef i64 timestamp

/** 
 * Defines a particular kind of string, as a Type-4 UUID.
 * These are commonly used for ID types.
 */
typedef string uuid


enum ImageType
{
    JPEG = 1,
    PNG = 2
}

enum Industry
{
    BANKING = 1,
    ECOMMERCE = 2,
    EDUCATION = 3,
    ENTERTAINMENT = 4,
    GOVERMENT = 5,
    MARKETING = 6,
    RETAIL = 7,
    TECH = 8,
    AEROSPACE = 9,
    ROBOTICS = 10
}


enum Tier
{
    FREE = 1,
    PAID = 2
}


/**
 * Defines the basic Units of Time Measurement.
 */
enum TimeUnit
{
    MILLIS = 1,
    SECONDS = 2,
    MINUTES = 3,
    HOURS = 4,
    DAYS = 5,
    WEEKS = 6
}


/**
 * Applications are usually written in one main language.
 */
enum ProgrammingLanguage
{
    JAVA = 1,
    CPP = 2,
    C_SHARP = 3,
    C = 4,
    OBJECTIVE_C = 5,
    SWIFT = 6,
    DOT_NET = 7,
    RUBY = 8,
    GROOVY = 9,
    PYTHON = 10,
    PHP = 11,
    NODE = 12,
    DART = 13,
    OTHER = 14
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
    QA = 5,
    FAN = 6
}


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

/**
 * Defines a Period of Time, or a Length of Time.
 */
struct LengthOfTime
{
    1: required TimeUnit unit;
    /** The Value must be non-negative */
    2: required long value;
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


/*
 * TODO: Find a more distinctive name for Message.
 * + Kik
 * + Sok
 * + Dice
 */
struct Message
{
    /** Each message has a unique ID */
    1: uuid messageId;
    /** 
     * The body represents the Message's Payload, i.e. the actual message.
     * If the Message Body is too long, it may be truncated. The complete
     * body can then be loaded in a separate request.
     */
    2: optional string body;
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
    9: optional bool isTruncated = false;
    10: string title;
    /** The ID of the Application the Message was sent from. */
    11: uuid applicationId;
}


/**
 * An Organization can represent a Company or group of People.
 */
struct Organization
{
    1: uuid organizationId;
    2: string organizationName;
    3: optional string website;
    4: optional Image logo;
    5: optional string techStack;
    6: optional list<string> owners;
    7: optional string organizationEmail;
    8: optional string stockMarketSymbol;
    9: optional string logoLink;
    10: optional Industry industry;
    11: optional Tier tier = Tier.FREE;
    12: optional string organizationDescription;
    /** A Link to the Org's GitHub Page, if available. */
    13: optional string githubProfile;
}


/**
 * A User represents a Human who is a uses the Service.
 */
struct User
{
    /** A person's email address is also considered their identifying trait. */
    1: string email;
    2: uuid userId;
    3: optional string name;
    /** A Person can be more than one thing at once. By default, we assume a developer. */
    4: set<Role> roles = [ Role.DEVELOPER ];
    5: optional Image profileImage;
    6: optional uuid profileImageLink;
    7: optional string githubProfile;
    8: optional string firstName;
    9: optional string middleName;
    10: optional string lastName;
    11: optional timestamp birthdate;
    12: optional timestamp timeUserJoined;
}

struct Application
{
    /** Owners can perform administrative actions on a service. */
    1: set<uuid> owners;
    /** When the application was first provisioned. */
    2: timestamp timeOfProvisioning;
    /** The name of the application. */
    //TODO: Rename to fullName or completeName
    3: string name;
    /** The Automatically generated ID for the Application. */
    4: uuid applicationId;
    /** 
     * The total amount of messages that 
     * have been counted so far for the Application*/
    5: long totalMessagesSent;
    6: optional Image icon;
    7: optional ProgrammingLanguage programmingLanguage;
    /** 
     * Defines the userIds of the people who are following this Application.
     */
    8: optional set<uuid> followers = [];
    9: string applicationDescription;
    10: uuid organizationId;
    11: optional Tier tier = Tier.FREE;
    /** The time the App's token will expire. */
    12: timestamp timeOfTokenExpiration;
    13: optional uuid applicationIconMediaId;
    /** Set to true if the calling user follows this Application. */
    14: optional bool isFollowing;
}

/**
 * Defines an Aroma announcement.
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
    3: uuid id;
    /** An announcement is irrelevant after this time. */
    4: timestamp timeOfExpiration;
}