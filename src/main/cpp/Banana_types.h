/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Banana_TYPES_H
#define Banana_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace aroma { namespace banana { namespace thrift {

struct Urgency {
  enum type {
    INFORMATIONAL = 1,
    PRESSING = 2,
    CRITICAL = 3
  };
};

extern const std::map<int, const char*> _Urgency_VALUES_TO_NAMES;

struct TimeUnit {
  enum type {
    MILLIS = 0,
    SECONDS = 1,
    MINUTES = 2,
    HOURS = 3,
    DAYS = 4
  };
};

extern const std::map<int, const char*> _TimeUnit_VALUES_TO_NAMES;

struct ImageType {
  enum type {
    JPEG = 1,
    PNG = 2
  };
};

extern const std::map<int, const char*> _ImageType_VALUES_TO_NAMES;

struct Role {
  enum type {
    DEV = 1,
    OWNER = 2
  };
};

extern const std::map<int, const char*> _Role_VALUES_TO_NAMES;

typedef int32_t int;

typedef int64_t long;

typedef int64_t timestamp;

class Message;

class TimePeriod;

class Dimension;

class Image;

class Developer;

class Service;

typedef struct _Message__isset {
  _Message__isset() : messageId(false), body(false), urgency(true), timeMessageSent(false), timeMessageReceived(false), nameOfService(false) {}
  bool messageId :1;
  bool body :1;
  bool urgency :1;
  bool timeMessageSent :1;
  bool timeMessageReceived :1;
  bool nameOfService :1;
} _Message__isset;

class Message {
 public:

  Message(const Message&);
  Message& operator=(const Message&);
  Message() : messageId(), body(), urgency((Urgency::type)2), timeMessageSent(0), timeMessageReceived(0), nameOfService() {
    urgency = (Urgency::type)2;

  }

  virtual ~Message() throw();
  std::string messageId;
  std::string body;
  Urgency::type urgency;
  timestamp timeMessageSent;
  timestamp timeMessageReceived;
  std::string nameOfService;

  _Message__isset __isset;

  void __set_messageId(const std::string& val);

  void __set_body(const std::string& val);

  void __set_urgency(const Urgency::type val);

  void __set_timeMessageSent(const timestamp val);

  void __set_timeMessageReceived(const timestamp val);

  void __set_nameOfService(const std::string& val);

  bool operator == (const Message & rhs) const
  {
    if (!(messageId == rhs.messageId))
      return false;
    if (!(body == rhs.body))
      return false;
    if (!(urgency == rhs.urgency))
      return false;
    if (!(timeMessageSent == rhs.timeMessageSent))
      return false;
    if (!(timeMessageReceived == rhs.timeMessageReceived))
      return false;
    if (!(nameOfService == rhs.nameOfService))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Message &a, Message &b);

inline std::ostream& operator<<(std::ostream& out, const Message& obj)
{
  obj.printTo(out);
  return out;
}


class TimePeriod {
 public:

  TimePeriod(const TimePeriod&);
  TimePeriod& operator=(const TimePeriod&);
  TimePeriod() : unit((TimeUnit::type)0), value(0) {
  }

  virtual ~TimePeriod() throw();
  TimeUnit::type unit;
  int value;

  void __set_unit(const TimeUnit::type val);

  void __set_value(const int val);

  bool operator == (const TimePeriod & rhs) const
  {
    if (!(unit == rhs.unit))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const TimePeriod &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TimePeriod & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TimePeriod &a, TimePeriod &b);

inline std::ostream& operator<<(std::ostream& out, const TimePeriod& obj)
{
  obj.printTo(out);
  return out;
}


class Dimension {
 public:

  Dimension(const Dimension&);
  Dimension& operator=(const Dimension&);
  Dimension() : width(0), height(0) {
  }

  virtual ~Dimension() throw();
  int width;
  int height;

  void __set_width(const int val);

  void __set_height(const int val);

  bool operator == (const Dimension & rhs) const
  {
    if (!(width == rhs.width))
      return false;
    if (!(height == rhs.height))
      return false;
    return true;
  }
  bool operator != (const Dimension &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Dimension & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Dimension &a, Dimension &b);

inline std::ostream& operator<<(std::ostream& out, const Dimension& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Image__isset {
  _Image__isset() : imageType(false), data(false), dimension(false) {}
  bool imageType :1;
  bool data :1;
  bool dimension :1;
} _Image__isset;

class Image {
 public:

  Image(const Image&);
  Image& operator=(const Image&);
  Image() : imageType((ImageType::type)0), data() {
  }

  virtual ~Image() throw();
  ImageType::type imageType;
  std::string data;
  Dimension dimension;

  _Image__isset __isset;

  void __set_imageType(const ImageType::type val);

  void __set_data(const std::string& val);

  void __set_dimension(const Dimension& val);

  bool operator == (const Image & rhs) const
  {
    if (!(imageType == rhs.imageType))
      return false;
    if (!(data == rhs.data))
      return false;
    if (!(dimension == rhs.dimension))
      return false;
    return true;
  }
  bool operator != (const Image &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Image & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Image &a, Image &b);

inline std::ostream& operator<<(std::ostream& out, const Image& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Developer__isset {
  _Developer__isset() : email(false), name(false), username(false), role(false) {}
  bool email :1;
  bool name :1;
  bool username :1;
  bool role :1;
} _Developer__isset;

class Developer {
 public:

  Developer(const Developer&);
  Developer& operator=(const Developer&);
  Developer() : email(), name(), username(), role((Role::type)0) {
  }

  virtual ~Developer() throw();
  std::string email;
  std::string name;
  std::string username;
  Role::type role;

  _Developer__isset __isset;

  void __set_email(const std::string& val);

  void __set_name(const std::string& val);

  void __set_username(const std::string& val);

  void __set_role(const Role::type val);

  bool operator == (const Developer & rhs) const
  {
    if (!(email == rhs.email))
      return false;
    if (__isset.name != rhs.__isset.name)
      return false;
    else if (__isset.name && !(name == rhs.name))
      return false;
    if (__isset.username != rhs.__isset.username)
      return false;
    else if (__isset.username && !(username == rhs.username))
      return false;
    if (!(role == rhs.role))
      return false;
    return true;
  }
  bool operator != (const Developer &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Developer & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Developer &a, Developer &b);

inline std::ostream& operator<<(std::ostream& out, const Developer& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Service__isset {
  _Service__isset() : owner(false), timeOfRegistration(false), name(false), id(false), totalMessagesSent(false) {}
  bool owner :1;
  bool timeOfRegistration :1;
  bool name :1;
  bool id :1;
  bool totalMessagesSent :1;
} _Service__isset;

class Service {
 public:

  Service(const Service&);
  Service& operator=(const Service&);
  Service() : timeOfRegistration(0), name(), id(), totalMessagesSent(0) {
  }

  virtual ~Service() throw();
  Developer owner;
  timestamp timeOfRegistration;
  std::string name;
  std::string id;
  long totalMessagesSent;

  _Service__isset __isset;

  void __set_owner(const Developer& val);

  void __set_timeOfRegistration(const timestamp val);

  void __set_name(const std::string& val);

  void __set_id(const std::string& val);

  void __set_totalMessagesSent(const long val);

  bool operator == (const Service & rhs) const
  {
    if (!(owner == rhs.owner))
      return false;
    if (!(timeOfRegistration == rhs.timeOfRegistration))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(id == rhs.id))
      return false;
    if (!(totalMessagesSent == rhs.totalMessagesSent))
      return false;
    return true;
  }
  bool operator != (const Service &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Service & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Service &a, Service &b);

inline std::ostream& operator<<(std::ostream& out, const Service& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
