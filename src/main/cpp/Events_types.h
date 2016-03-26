/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Events_TYPES_H
#define Events_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Aroma_types.h"


namespace aroma { namespace thrift { namespace events {

typedef class  ::aroma::thrift::authentication::ApplicationToken ApplicationToken;

typedef  ::tech::aroma::thrift::int int;

typedef  ::tech::aroma::thrift::long long;

typedef  ::tech::aroma::thrift::timestamp timestamp;

typedef  ::tech::aroma::thrift::uuid uuid;

typedef class  ::tech::aroma::thrift::User User;

typedef class  ::tech::aroma::thrift::Application Application;

class ApplicationMessagesDeleted;

class ApplicationTokenRenewed;

class ApplicationTokenRegenerated;

class ApplicationSentMessage;

class ApplicationDeleted;

class ApplicationFollowed;

class ApplicationUnfollowed;

class HealthCheckFailed;

class HealthCheckBackToNormal;

class OwnerAdded;

class OwnerApprovedRequest;

class GeneralEvent;

class EventType;

class Event;

typedef struct _ApplicationMessagesDeleted__isset {
  _ApplicationMessagesDeleted__isset() : totalMessagesDeleted(false), message(true) {}
  bool totalMessagesDeleted :1;
  bool message :1;
} _ApplicationMessagesDeleted__isset;

class ApplicationMessagesDeleted {
 public:

  ApplicationMessagesDeleted(const ApplicationMessagesDeleted&);
  ApplicationMessagesDeleted& operator=(const ApplicationMessagesDeleted&);
  ApplicationMessagesDeleted() : totalMessagesDeleted(0), message("Application's messages have been deleted") {
  }

  virtual ~ApplicationMessagesDeleted() throw();
  int totalMessagesDeleted;
  std::string message;

  _ApplicationMessagesDeleted__isset __isset;

  void __set_totalMessagesDeleted(const int val);

  void __set_message(const std::string& val);

  bool operator == (const ApplicationMessagesDeleted & rhs) const
  {
    if (__isset.totalMessagesDeleted != rhs.__isset.totalMessagesDeleted)
      return false;
    else if (__isset.totalMessagesDeleted && !(totalMessagesDeleted == rhs.totalMessagesDeleted))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationMessagesDeleted &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationMessagesDeleted & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationMessagesDeleted &a, ApplicationMessagesDeleted &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationMessagesDeleted& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationTokenRenewed__isset {
  _ApplicationTokenRenewed__isset() : applicationToken(false), message(true) {}
  bool applicationToken :1;
  bool message :1;
} _ApplicationTokenRenewed__isset;

class ApplicationTokenRenewed {
 public:

  ApplicationTokenRenewed(const ApplicationTokenRenewed&);
  ApplicationTokenRenewed& operator=(const ApplicationTokenRenewed&);
  ApplicationTokenRenewed() : message("Application Token has been renewed") {
  }

  virtual ~ApplicationTokenRenewed() throw();
  ApplicationToken applicationToken;
  std::string message;

  _ApplicationTokenRenewed__isset __isset;

  void __set_applicationToken(const ApplicationToken& val);

  void __set_message(const std::string& val);

  bool operator == (const ApplicationTokenRenewed & rhs) const
  {
    if (__isset.applicationToken != rhs.__isset.applicationToken)
      return false;
    else if (__isset.applicationToken && !(applicationToken == rhs.applicationToken))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationTokenRenewed &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationTokenRenewed & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationTokenRenewed &a, ApplicationTokenRenewed &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationTokenRenewed& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationTokenRegenerated__isset {
  _ApplicationTokenRegenerated__isset() : applicationToken(false), actor(false), message(true) {}
  bool applicationToken :1;
  bool actor :1;
  bool message :1;
} _ApplicationTokenRegenerated__isset;

class ApplicationTokenRegenerated {
 public:

  ApplicationTokenRegenerated(const ApplicationTokenRegenerated&);
  ApplicationTokenRegenerated& operator=(const ApplicationTokenRegenerated&);
  ApplicationTokenRegenerated() : message("Application Token has been re-created") {
  }

  virtual ~ApplicationTokenRegenerated() throw();
  ApplicationToken applicationToken;
  User actor;
  std::string message;

  _ApplicationTokenRegenerated__isset __isset;

  void __set_applicationToken(const ApplicationToken& val);

  void __set_actor(const User& val);

  void __set_message(const std::string& val);

  bool operator == (const ApplicationTokenRegenerated & rhs) const
  {
    if (__isset.applicationToken != rhs.__isset.applicationToken)
      return false;
    else if (__isset.applicationToken && !(applicationToken == rhs.applicationToken))
      return false;
    if (__isset.actor != rhs.__isset.actor)
      return false;
    else if (__isset.actor && !(actor == rhs.actor))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationTokenRegenerated &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationTokenRegenerated & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationTokenRegenerated &a, ApplicationTokenRegenerated &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationTokenRegenerated& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationSentMessage__isset {
  _ApplicationSentMessage__isset() : messageId(false), messageSentByApplication(false), message(true) {}
  bool messageId :1;
  bool messageSentByApplication :1;
  bool message :1;
} _ApplicationSentMessage__isset;

class ApplicationSentMessage {
 public:

  ApplicationSentMessage(const ApplicationSentMessage&);
  ApplicationSentMessage& operator=(const ApplicationSentMessage&);
  ApplicationSentMessage() : messageId(), message("Application has sent an Alert") {
  }

  virtual ~ApplicationSentMessage() throw();
  uuid messageId;
   ::tech::aroma::thrift::Message messageSentByApplication;
  std::string message;

  _ApplicationSentMessage__isset __isset;

  void __set_messageId(const uuid& val);

  void __set_messageSentByApplication(const  ::tech::aroma::thrift::Message& val);

  void __set_message(const std::string& val);

  bool operator == (const ApplicationSentMessage & rhs) const
  {
    if (!(messageId == rhs.messageId))
      return false;
    if (__isset.messageSentByApplication != rhs.__isset.messageSentByApplication)
      return false;
    else if (__isset.messageSentByApplication && !(messageSentByApplication == rhs.messageSentByApplication))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationSentMessage &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationSentMessage & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationSentMessage &a, ApplicationSentMessage &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationSentMessage& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationDeleted__isset {
  _ApplicationDeleted__isset() : message(true) {}
  bool message :1;
} _ApplicationDeleted__isset;

class ApplicationDeleted {
 public:

  ApplicationDeleted(const ApplicationDeleted&);
  ApplicationDeleted& operator=(const ApplicationDeleted&);
  ApplicationDeleted() : message("Application has been deleted") {
  }

  virtual ~ApplicationDeleted() throw();
  std::string message;

  _ApplicationDeleted__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ApplicationDeleted & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationDeleted &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationDeleted & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationDeleted &a, ApplicationDeleted &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationDeleted& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationFollowed__isset {
  _ApplicationFollowed__isset() : message(true) {}
  bool message :1;
} _ApplicationFollowed__isset;

class ApplicationFollowed {
 public:

  ApplicationFollowed(const ApplicationFollowed&);
  ApplicationFollowed& operator=(const ApplicationFollowed&);
  ApplicationFollowed() : message("Application Followed") {
  }

  virtual ~ApplicationFollowed() throw();
  std::string message;

  _ApplicationFollowed__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ApplicationFollowed & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationFollowed &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationFollowed & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationFollowed &a, ApplicationFollowed &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationFollowed& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationUnfollowed__isset {
  _ApplicationUnfollowed__isset() : message(true) {}
  bool message :1;
} _ApplicationUnfollowed__isset;

class ApplicationUnfollowed {
 public:

  ApplicationUnfollowed(const ApplicationUnfollowed&);
  ApplicationUnfollowed& operator=(const ApplicationUnfollowed&);
  ApplicationUnfollowed() : message("Application Unfollowed") {
  }

  virtual ~ApplicationUnfollowed() throw();
  std::string message;

  _ApplicationUnfollowed__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ApplicationUnfollowed & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationUnfollowed &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationUnfollowed & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationUnfollowed &a, ApplicationUnfollowed &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationUnfollowed& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HealthCheckFailed__isset {
  _HealthCheckFailed__isset() : hostname(false), message(true) {}
  bool hostname :1;
  bool message :1;
} _HealthCheckFailed__isset;

class HealthCheckFailed {
 public:

  HealthCheckFailed(const HealthCheckFailed&);
  HealthCheckFailed& operator=(const HealthCheckFailed&);
  HealthCheckFailed() : hostname(), message("Application failed a Health Check") {
  }

  virtual ~HealthCheckFailed() throw();
  std::string hostname;
  std::string message;

  _HealthCheckFailed__isset __isset;

  void __set_hostname(const std::string& val);

  void __set_message(const std::string& val);

  bool operator == (const HealthCheckFailed & rhs) const
  {
    if (__isset.hostname != rhs.__isset.hostname)
      return false;
    else if (__isset.hostname && !(hostname == rhs.hostname))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const HealthCheckFailed &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HealthCheckFailed & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HealthCheckFailed &a, HealthCheckFailed &b);

inline std::ostream& operator<<(std::ostream& out, const HealthCheckFailed& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HealthCheckBackToNormal__isset {
  _HealthCheckBackToNormal__isset() : message(true) {}
  bool message :1;
} _HealthCheckBackToNormal__isset;

class HealthCheckBackToNormal {
 public:

  HealthCheckBackToNormal(const HealthCheckBackToNormal&);
  HealthCheckBackToNormal& operator=(const HealthCheckBackToNormal&);
  HealthCheckBackToNormal() : message("Application's Health is back to normal") {
  }

  virtual ~HealthCheckBackToNormal() throw();
  std::string message;

  _HealthCheckBackToNormal__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const HealthCheckBackToNormal & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const HealthCheckBackToNormal &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HealthCheckBackToNormal & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HealthCheckBackToNormal &a, HealthCheckBackToNormal &b);

inline std::ostream& operator<<(std::ostream& out, const HealthCheckBackToNormal& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OwnerAdded__isset {
  _OwnerAdded__isset() : userIdOfNewOwner(false), newOwner(false), message(true) {}
  bool userIdOfNewOwner :1;
  bool newOwner :1;
  bool message :1;
} _OwnerAdded__isset;

class OwnerAdded {
 public:

  OwnerAdded(const OwnerAdded&);
  OwnerAdded& operator=(const OwnerAdded&);
  OwnerAdded() : userIdOfNewOwner(), message("New Owner Added") {
  }

  virtual ~OwnerAdded() throw();
  uuid userIdOfNewOwner;
  User newOwner;
  std::string message;

  _OwnerAdded__isset __isset;

  void __set_userIdOfNewOwner(const uuid& val);

  void __set_newOwner(const User& val);

  void __set_message(const std::string& val);

  bool operator == (const OwnerAdded & rhs) const
  {
    if (!(userIdOfNewOwner == rhs.userIdOfNewOwner))
      return false;
    if (__isset.newOwner != rhs.__isset.newOwner)
      return false;
    else if (__isset.newOwner && !(newOwner == rhs.newOwner))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const OwnerAdded &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OwnerAdded & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(OwnerAdded &a, OwnerAdded &b);

inline std::ostream& operator<<(std::ostream& out, const OwnerAdded& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OwnerApprovedRequest__isset {
  _OwnerApprovedRequest__isset() : message(true) {}
  bool message :1;
} _OwnerApprovedRequest__isset;

class OwnerApprovedRequest {
 public:

  OwnerApprovedRequest(const OwnerApprovedRequest&);
  OwnerApprovedRequest& operator=(const OwnerApprovedRequest&);
  OwnerApprovedRequest() : message("Application Owner approved your request") {
  }

  virtual ~OwnerApprovedRequest() throw();
  std::string message;

  _OwnerApprovedRequest__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const OwnerApprovedRequest & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const OwnerApprovedRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OwnerApprovedRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(OwnerApprovedRequest &a, OwnerApprovedRequest &b);

inline std::ostream& operator<<(std::ostream& out, const OwnerApprovedRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GeneralEvent__isset {
  _GeneralEvent__isset() : message(false) {}
  bool message :1;
} _GeneralEvent__isset;

class GeneralEvent {
 public:

  GeneralEvent(const GeneralEvent&);
  GeneralEvent& operator=(const GeneralEvent&);
  GeneralEvent() : message() {
  }

  virtual ~GeneralEvent() throw();
  std::string message;

  _GeneralEvent__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const GeneralEvent & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const GeneralEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GeneralEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GeneralEvent &a, GeneralEvent &b);

inline std::ostream& operator<<(std::ostream& out, const GeneralEvent& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _EventType__isset {
  _EventType__isset() : applicationMessageDeleted(false), healthCheckFailed(false), healthCheckBackToNormal(false), applicationFollowed(false), applicationDeleted(false), applicationTokenRenewed(false), applicationTokenRegenerated(false), applicationSentMessage(false), applicationUnfollowed(false), ownerApprovedRequest(false), ownerAdded(false), generalEvent(false) {}
  bool applicationMessageDeleted :1;
  bool healthCheckFailed :1;
  bool healthCheckBackToNormal :1;
  bool applicationFollowed :1;
  bool applicationDeleted :1;
  bool applicationTokenRenewed :1;
  bool applicationTokenRegenerated :1;
  bool applicationSentMessage :1;
  bool applicationUnfollowed :1;
  bool ownerApprovedRequest :1;
  bool ownerAdded :1;
  bool generalEvent :1;
} _EventType__isset;

class EventType {
 public:

  EventType(const EventType&);
  EventType& operator=(const EventType&);
  EventType() {
  }

  virtual ~EventType() throw();
  ApplicationMessagesDeleted applicationMessageDeleted;
  HealthCheckFailed healthCheckFailed;
  HealthCheckBackToNormal healthCheckBackToNormal;
  ApplicationFollowed applicationFollowed;
  ApplicationDeleted applicationDeleted;
  ApplicationTokenRenewed applicationTokenRenewed;
  ApplicationTokenRegenerated applicationTokenRegenerated;
  ApplicationSentMessage applicationSentMessage;
  ApplicationUnfollowed applicationUnfollowed;
  OwnerApprovedRequest ownerApprovedRequest;
  OwnerAdded ownerAdded;
  GeneralEvent generalEvent;

  _EventType__isset __isset;

  void __set_applicationMessageDeleted(const ApplicationMessagesDeleted& val);

  void __set_healthCheckFailed(const HealthCheckFailed& val);

  void __set_healthCheckBackToNormal(const HealthCheckBackToNormal& val);

  void __set_applicationFollowed(const ApplicationFollowed& val);

  void __set_applicationDeleted(const ApplicationDeleted& val);

  void __set_applicationTokenRenewed(const ApplicationTokenRenewed& val);

  void __set_applicationTokenRegenerated(const ApplicationTokenRegenerated& val);

  void __set_applicationSentMessage(const ApplicationSentMessage& val);

  void __set_applicationUnfollowed(const ApplicationUnfollowed& val);

  void __set_ownerApprovedRequest(const OwnerApprovedRequest& val);

  void __set_ownerAdded(const OwnerAdded& val);

  void __set_generalEvent(const GeneralEvent& val);

  bool operator == (const EventType & rhs) const
  {
    if (!(applicationMessageDeleted == rhs.applicationMessageDeleted))
      return false;
    if (!(healthCheckFailed == rhs.healthCheckFailed))
      return false;
    if (!(healthCheckBackToNormal == rhs.healthCheckBackToNormal))
      return false;
    if (!(applicationFollowed == rhs.applicationFollowed))
      return false;
    if (!(applicationDeleted == rhs.applicationDeleted))
      return false;
    if (!(applicationTokenRenewed == rhs.applicationTokenRenewed))
      return false;
    if (!(applicationTokenRegenerated == rhs.applicationTokenRegenerated))
      return false;
    if (!(applicationSentMessage == rhs.applicationSentMessage))
      return false;
    if (!(applicationUnfollowed == rhs.applicationUnfollowed))
      return false;
    if (!(ownerApprovedRequest == rhs.ownerApprovedRequest))
      return false;
    if (!(ownerAdded == rhs.ownerAdded))
      return false;
    if (!(generalEvent == rhs.generalEvent))
      return false;
    return true;
  }
  bool operator != (const EventType &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventType & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EventType &a, EventType &b);

inline std::ostream& operator<<(std::ostream& out, const EventType& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Event__isset {
  _Event__isset() : eventId(false), userIdOfActor(false), actor(false), applicationId(false), application(false), eventType(false), timestamp(false) {}
  bool eventId :1;
  bool userIdOfActor :1;
  bool actor :1;
  bool applicationId :1;
  bool application :1;
  bool eventType :1;
  bool timestamp :1;
} _Event__isset;

class Event {
 public:

  Event(const Event&);
  Event& operator=(const Event&);
  Event() : eventId(), userIdOfActor(), applicationId(), timestamp(0) {
  }

  virtual ~Event() throw();
  uuid eventId;
  uuid userIdOfActor;
  User actor;
  uuid applicationId;
  Application application;
  EventType eventType;
  timestamp timestamp;

  _Event__isset __isset;

  void __set_eventId(const uuid& val);

  void __set_userIdOfActor(const uuid& val);

  void __set_actor(const User& val);

  void __set_applicationId(const uuid& val);

  void __set_application(const Application& val);

  void __set_eventType(const EventType& val);

  void __set_timestamp(const timestamp val);

  bool operator == (const Event & rhs) const
  {
    if (!(eventId == rhs.eventId))
      return false;
    if (!(userIdOfActor == rhs.userIdOfActor))
      return false;
    if (__isset.actor != rhs.__isset.actor)
      return false;
    else if (__isset.actor && !(actor == rhs.actor))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (__isset.application != rhs.__isset.application)
      return false;
    else if (__isset.application && !(application == rhs.application))
      return false;
    if (!(eventType == rhs.eventType))
      return false;
    if (!(timestamp == rhs.timestamp))
      return false;
    return true;
  }
  bool operator != (const Event &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Event & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Event &a, Event &b);

inline std::ostream& operator<<(std::ostream& out, const Event& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
