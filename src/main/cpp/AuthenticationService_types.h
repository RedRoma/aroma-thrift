/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef AuthenticationService_TYPES_H
#define AuthenticationService_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Banana_types.h"
#include "Endpoint_types.h"
#include "Exceptions_types.h"


namespace aroma { namespace banana { namespace thrift { namespace authentication { namespace service {

struct TokenType {
  enum type {
    APPLICATION = 1,
    USER = 2
  };
};

extern const std::map<int, const char*> _TokenType_VALUES_TO_NAMES;

typedef  ::aroma::banana::thrift::int int;

typedef  ::aroma::banana::thrift::long long;

typedef  ::aroma::banana::thrift::timestamp timestamp;

typedef class  ::aroma::banana::thrift::LengthOfTime LengthOfTime;

typedef class  ::aroma::banana::thrift::authentication::ApplicationToken ApplicationToken;

typedef class  ::aroma::banana::thrift::authentication::UserToken UserToken;

typedef class  ::aroma::banana::thrift::exceptions::AccountAlreadyExistsException AccountAlreadyExistsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidArgumentException InvalidArgumentException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidCredentialsException InvalidCredentialsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidTokenException InvalidTokenException;

typedef class  ::aroma::banana::thrift::exceptions::OperationFailedException OperationFailedException;

typedef class  ::aroma::banana::thrift::exceptions::UnauthorizedException UnauthorizedException;

class CreateUserTokenRequest;

class CreateUserTokenResponse;

class CreateApplicationTokenRequest;

class CreateApplicationTokenResponse;

class GetApplicationTokenInfoRequest;

class GetApplicationTokenInfoResponse;

class GetUserTokenInfoRequest;

class GetUserTokenInfoResponse;

class InvalidateApplicationTokenRequest;

class InvalidateApplicationTokenResponse;

class InvalidateUserTokenRequest;

class InvalidateUserTokenResponse;

class VerifyUserTokenRequest;

class VerifyUserTokenResponse;

class VerifyApplicationTokenRequest;

class VerifyApplicationTokenResponse;

typedef struct _CreateUserTokenRequest__isset {
  _CreateUserTokenRequest__isset() : userId(false), lifetime(false) {}
  bool userId :1;
  bool lifetime :1;
} _CreateUserTokenRequest__isset;

class CreateUserTokenRequest {
 public:

  CreateUserTokenRequest(const CreateUserTokenRequest&);
  CreateUserTokenRequest& operator=(const CreateUserTokenRequest&);
  CreateUserTokenRequest() : userId() {
  }

  virtual ~CreateUserTokenRequest() throw();
  std::string userId;
  LengthOfTime lifetime;

  _CreateUserTokenRequest__isset __isset;

  void __set_userId(const std::string& val);

  void __set_lifetime(const LengthOfTime& val);

  bool operator == (const CreateUserTokenRequest & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    if (!(lifetime == rhs.lifetime))
      return false;
    return true;
  }
  bool operator != (const CreateUserTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CreateUserTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CreateUserTokenRequest &a, CreateUserTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const CreateUserTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CreateUserTokenResponse__isset {
  _CreateUserTokenResponse__isset() : token(false) {}
  bool token :1;
} _CreateUserTokenResponse__isset;

class CreateUserTokenResponse {
 public:

  CreateUserTokenResponse(const CreateUserTokenResponse&);
  CreateUserTokenResponse& operator=(const CreateUserTokenResponse&);
  CreateUserTokenResponse() {
  }

  virtual ~CreateUserTokenResponse() throw();
  UserToken token;

  _CreateUserTokenResponse__isset __isset;

  void __set_token(const UserToken& val);

  bool operator == (const CreateUserTokenResponse & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const CreateUserTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CreateUserTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CreateUserTokenResponse &a, CreateUserTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const CreateUserTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CreateApplicationTokenRequest__isset {
  _CreateApplicationTokenRequest__isset() : applicationId(false), lifetime(false) {}
  bool applicationId :1;
  bool lifetime :1;
} _CreateApplicationTokenRequest__isset;

class CreateApplicationTokenRequest {
 public:

  CreateApplicationTokenRequest(const CreateApplicationTokenRequest&);
  CreateApplicationTokenRequest& operator=(const CreateApplicationTokenRequest&);
  CreateApplicationTokenRequest() : applicationId() {
  }

  virtual ~CreateApplicationTokenRequest() throw();
  std::string applicationId;
  LengthOfTime lifetime;

  _CreateApplicationTokenRequest__isset __isset;

  void __set_applicationId(const std::string& val);

  void __set_lifetime(const LengthOfTime& val);

  bool operator == (const CreateApplicationTokenRequest & rhs) const
  {
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(lifetime == rhs.lifetime))
      return false;
    return true;
  }
  bool operator != (const CreateApplicationTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CreateApplicationTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CreateApplicationTokenRequest &a, CreateApplicationTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const CreateApplicationTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CreateApplicationTokenResponse__isset {
  _CreateApplicationTokenResponse__isset() : token(false) {}
  bool token :1;
} _CreateApplicationTokenResponse__isset;

class CreateApplicationTokenResponse {
 public:

  CreateApplicationTokenResponse(const CreateApplicationTokenResponse&);
  CreateApplicationTokenResponse& operator=(const CreateApplicationTokenResponse&);
  CreateApplicationTokenResponse() {
  }

  virtual ~CreateApplicationTokenResponse() throw();
  ApplicationToken token;

  _CreateApplicationTokenResponse__isset __isset;

  void __set_token(const ApplicationToken& val);

  bool operator == (const CreateApplicationTokenResponse & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const CreateApplicationTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CreateApplicationTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CreateApplicationTokenResponse &a, CreateApplicationTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const CreateApplicationTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetApplicationTokenInfoRequest__isset {
  _GetApplicationTokenInfoRequest__isset() : token(false) {}
  bool token :1;
} _GetApplicationTokenInfoRequest__isset;

class GetApplicationTokenInfoRequest {
 public:

  GetApplicationTokenInfoRequest(const GetApplicationTokenInfoRequest&);
  GetApplicationTokenInfoRequest& operator=(const GetApplicationTokenInfoRequest&);
  GetApplicationTokenInfoRequest() {
  }

  virtual ~GetApplicationTokenInfoRequest() throw();
  ApplicationToken token;

  _GetApplicationTokenInfoRequest__isset __isset;

  void __set_token(const ApplicationToken& val);

  bool operator == (const GetApplicationTokenInfoRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const GetApplicationTokenInfoRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetApplicationTokenInfoRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetApplicationTokenInfoRequest &a, GetApplicationTokenInfoRequest &b);

inline std::ostream& operator<<(std::ostream& out, const GetApplicationTokenInfoRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetApplicationTokenInfoResponse__isset {
  _GetApplicationTokenInfoResponse__isset() : applicationId(false) {}
  bool applicationId :1;
} _GetApplicationTokenInfoResponse__isset;

class GetApplicationTokenInfoResponse {
 public:

  GetApplicationTokenInfoResponse(const GetApplicationTokenInfoResponse&);
  GetApplicationTokenInfoResponse& operator=(const GetApplicationTokenInfoResponse&);
  GetApplicationTokenInfoResponse() : applicationId() {
  }

  virtual ~GetApplicationTokenInfoResponse() throw();
  std::string applicationId;

  _GetApplicationTokenInfoResponse__isset __isset;

  void __set_applicationId(const std::string& val);

  bool operator == (const GetApplicationTokenInfoResponse & rhs) const
  {
    if (!(applicationId == rhs.applicationId))
      return false;
    return true;
  }
  bool operator != (const GetApplicationTokenInfoResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetApplicationTokenInfoResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetApplicationTokenInfoResponse &a, GetApplicationTokenInfoResponse &b);

inline std::ostream& operator<<(std::ostream& out, const GetApplicationTokenInfoResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetUserTokenInfoRequest__isset {
  _GetUserTokenInfoRequest__isset() : token(false) {}
  bool token :1;
} _GetUserTokenInfoRequest__isset;

class GetUserTokenInfoRequest {
 public:

  GetUserTokenInfoRequest(const GetUserTokenInfoRequest&);
  GetUserTokenInfoRequest& operator=(const GetUserTokenInfoRequest&);
  GetUserTokenInfoRequest() {
  }

  virtual ~GetUserTokenInfoRequest() throw();
  UserToken token;

  _GetUserTokenInfoRequest__isset __isset;

  void __set_token(const UserToken& val);

  bool operator == (const GetUserTokenInfoRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const GetUserTokenInfoRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetUserTokenInfoRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetUserTokenInfoRequest &a, GetUserTokenInfoRequest &b);

inline std::ostream& operator<<(std::ostream& out, const GetUserTokenInfoRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetUserTokenInfoResponse__isset {
  _GetUserTokenInfoResponse__isset() : userId(false) {}
  bool userId :1;
} _GetUserTokenInfoResponse__isset;

class GetUserTokenInfoResponse {
 public:

  GetUserTokenInfoResponse(const GetUserTokenInfoResponse&);
  GetUserTokenInfoResponse& operator=(const GetUserTokenInfoResponse&);
  GetUserTokenInfoResponse() : userId() {
  }

  virtual ~GetUserTokenInfoResponse() throw();
  std::string userId;

  _GetUserTokenInfoResponse__isset __isset;

  void __set_userId(const std::string& val);

  bool operator == (const GetUserTokenInfoResponse & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    return true;
  }
  bool operator != (const GetUserTokenInfoResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetUserTokenInfoResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetUserTokenInfoResponse &a, GetUserTokenInfoResponse &b);

inline std::ostream& operator<<(std::ostream& out, const GetUserTokenInfoResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidateApplicationTokenRequest__isset {
  _InvalidateApplicationTokenRequest__isset() : token(false) {}
  bool token :1;
} _InvalidateApplicationTokenRequest__isset;

class InvalidateApplicationTokenRequest {
 public:

  InvalidateApplicationTokenRequest(const InvalidateApplicationTokenRequest&);
  InvalidateApplicationTokenRequest& operator=(const InvalidateApplicationTokenRequest&);
  InvalidateApplicationTokenRequest() {
  }

  virtual ~InvalidateApplicationTokenRequest() throw();
  ApplicationToken token;

  _InvalidateApplicationTokenRequest__isset __isset;

  void __set_token(const ApplicationToken& val);

  bool operator == (const InvalidateApplicationTokenRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const InvalidateApplicationTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidateApplicationTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InvalidateApplicationTokenRequest &a, InvalidateApplicationTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidateApplicationTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}


class InvalidateApplicationTokenResponse {
 public:

  InvalidateApplicationTokenResponse(const InvalidateApplicationTokenResponse&);
  InvalidateApplicationTokenResponse& operator=(const InvalidateApplicationTokenResponse&);
  InvalidateApplicationTokenResponse() {
  }

  virtual ~InvalidateApplicationTokenResponse() throw();

  bool operator == (const InvalidateApplicationTokenResponse & /* rhs */) const
  {
    return true;
  }
  bool operator != (const InvalidateApplicationTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidateApplicationTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InvalidateApplicationTokenResponse &a, InvalidateApplicationTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidateApplicationTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidateUserTokenRequest__isset {
  _InvalidateUserTokenRequest__isset() : token(false) {}
  bool token :1;
} _InvalidateUserTokenRequest__isset;

class InvalidateUserTokenRequest {
 public:

  InvalidateUserTokenRequest(const InvalidateUserTokenRequest&);
  InvalidateUserTokenRequest& operator=(const InvalidateUserTokenRequest&);
  InvalidateUserTokenRequest() {
  }

  virtual ~InvalidateUserTokenRequest() throw();
  ApplicationToken token;

  _InvalidateUserTokenRequest__isset __isset;

  void __set_token(const ApplicationToken& val);

  bool operator == (const InvalidateUserTokenRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const InvalidateUserTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidateUserTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InvalidateUserTokenRequest &a, InvalidateUserTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidateUserTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}


class InvalidateUserTokenResponse {
 public:

  InvalidateUserTokenResponse(const InvalidateUserTokenResponse&);
  InvalidateUserTokenResponse& operator=(const InvalidateUserTokenResponse&);
  InvalidateUserTokenResponse() {
  }

  virtual ~InvalidateUserTokenResponse() throw();

  bool operator == (const InvalidateUserTokenResponse & /* rhs */) const
  {
    return true;
  }
  bool operator != (const InvalidateUserTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidateUserTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InvalidateUserTokenResponse &a, InvalidateUserTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidateUserTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _VerifyUserTokenRequest__isset {
  _VerifyUserTokenRequest__isset() : token(false), userId(false) {}
  bool token :1;
  bool userId :1;
} _VerifyUserTokenRequest__isset;

class VerifyUserTokenRequest {
 public:

  VerifyUserTokenRequest(const VerifyUserTokenRequest&);
  VerifyUserTokenRequest& operator=(const VerifyUserTokenRequest&);
  VerifyUserTokenRequest() : userId() {
  }

  virtual ~VerifyUserTokenRequest() throw();
  UserToken token;
  std::string userId;

  _VerifyUserTokenRequest__isset __isset;

  void __set_token(const UserToken& val);

  void __set_userId(const std::string& val);

  bool operator == (const VerifyUserTokenRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    if (__isset.userId != rhs.__isset.userId)
      return false;
    else if (__isset.userId && !(userId == rhs.userId))
      return false;
    return true;
  }
  bool operator != (const VerifyUserTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VerifyUserTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(VerifyUserTokenRequest &a, VerifyUserTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const VerifyUserTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _VerifyUserTokenResponse__isset {
  _VerifyUserTokenResponse__isset() : message(false) {}
  bool message :1;
} _VerifyUserTokenResponse__isset;

class VerifyUserTokenResponse {
 public:

  VerifyUserTokenResponse(const VerifyUserTokenResponse&);
  VerifyUserTokenResponse& operator=(const VerifyUserTokenResponse&);
  VerifyUserTokenResponse() : message() {
  }

  virtual ~VerifyUserTokenResponse() throw();
  std::string message;

  _VerifyUserTokenResponse__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const VerifyUserTokenResponse & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const VerifyUserTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VerifyUserTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(VerifyUserTokenResponse &a, VerifyUserTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const VerifyUserTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _VerifyApplicationTokenRequest__isset {
  _VerifyApplicationTokenRequest__isset() : token(false), applicationId(false) {}
  bool token :1;
  bool applicationId :1;
} _VerifyApplicationTokenRequest__isset;

class VerifyApplicationTokenRequest {
 public:

  VerifyApplicationTokenRequest(const VerifyApplicationTokenRequest&);
  VerifyApplicationTokenRequest& operator=(const VerifyApplicationTokenRequest&);
  VerifyApplicationTokenRequest() : applicationId() {
  }

  virtual ~VerifyApplicationTokenRequest() throw();
  ApplicationToken token;
  std::string applicationId;

  _VerifyApplicationTokenRequest__isset __isset;

  void __set_token(const ApplicationToken& val);

  void __set_applicationId(const std::string& val);

  bool operator == (const VerifyApplicationTokenRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    if (__isset.applicationId != rhs.__isset.applicationId)
      return false;
    else if (__isset.applicationId && !(applicationId == rhs.applicationId))
      return false;
    return true;
  }
  bool operator != (const VerifyApplicationTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VerifyApplicationTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(VerifyApplicationTokenRequest &a, VerifyApplicationTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const VerifyApplicationTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _VerifyApplicationTokenResponse__isset {
  _VerifyApplicationTokenResponse__isset() : message(false) {}
  bool message :1;
} _VerifyApplicationTokenResponse__isset;

class VerifyApplicationTokenResponse {
 public:

  VerifyApplicationTokenResponse(const VerifyApplicationTokenResponse&);
  VerifyApplicationTokenResponse& operator=(const VerifyApplicationTokenResponse&);
  VerifyApplicationTokenResponse() : message() {
  }

  virtual ~VerifyApplicationTokenResponse() throw();
  std::string message;

  _VerifyApplicationTokenResponse__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const VerifyApplicationTokenResponse & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const VerifyApplicationTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VerifyApplicationTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(VerifyApplicationTokenResponse &a, VerifyApplicationTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const VerifyApplicationTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

}}}}} // namespace

#endif
