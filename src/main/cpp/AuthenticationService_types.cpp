/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "AuthenticationService_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace aroma { namespace banana { namespace thrift { namespace authentication { namespace service {


CreateUserTokenRequest::~CreateUserTokenRequest() throw() {
}


void CreateUserTokenRequest::__set_userId(const std::string& val) {
  this->userId = val;
}

void CreateUserTokenRequest::__set_lifetime(const TimePeriod& val) {
  this->lifetime = val;
}

uint32_t CreateUserTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userId);
          this->__isset.userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->lifetime.read(iprot);
          this->__isset.lifetime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CreateUserTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CreateUserTokenRequest");

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->userId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lifetime", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->lifetime.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CreateUserTokenRequest &a, CreateUserTokenRequest &b) {
  using ::std::swap;
  swap(a.userId, b.userId);
  swap(a.lifetime, b.lifetime);
  swap(a.__isset, b.__isset);
}

CreateUserTokenRequest::CreateUserTokenRequest(const CreateUserTokenRequest& other0) {
  userId = other0.userId;
  lifetime = other0.lifetime;
  __isset = other0.__isset;
}
CreateUserTokenRequest& CreateUserTokenRequest::operator=(const CreateUserTokenRequest& other1) {
  userId = other1.userId;
  lifetime = other1.lifetime;
  __isset = other1.__isset;
  return *this;
}
void CreateUserTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CreateUserTokenRequest(";
  out << "userId=" << to_string(userId);
  out << ", " << "lifetime=" << to_string(lifetime);
  out << ")";
}


CreateUserTokenResponse::~CreateUserTokenResponse() throw() {
}


void CreateUserTokenResponse::__set_token(const UserToken& val) {
  this->token = val;
}

uint32_t CreateUserTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->token.read(iprot);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CreateUserTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CreateUserTokenResponse");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CreateUserTokenResponse &a, CreateUserTokenResponse &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

CreateUserTokenResponse::CreateUserTokenResponse(const CreateUserTokenResponse& other2) {
  token = other2.token;
  __isset = other2.__isset;
}
CreateUserTokenResponse& CreateUserTokenResponse::operator=(const CreateUserTokenResponse& other3) {
  token = other3.token;
  __isset = other3.__isset;
  return *this;
}
void CreateUserTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CreateUserTokenResponse(";
  out << "token=" << to_string(token);
  out << ")";
}


CreateApplicationTokenRequest::~CreateApplicationTokenRequest() throw() {
}


void CreateApplicationTokenRequest::__set_applicationId(const std::string& val) {
  this->applicationId = val;
}

void CreateApplicationTokenRequest::__set_lifetime(const TimePeriod& val) {
  this->lifetime = val;
}

uint32_t CreateApplicationTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationId);
          this->__isset.applicationId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->lifetime.read(iprot);
          this->__isset.lifetime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CreateApplicationTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CreateApplicationTokenRequest");

  xfer += oprot->writeFieldBegin("applicationId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->applicationId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lifetime", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->lifetime.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CreateApplicationTokenRequest &a, CreateApplicationTokenRequest &b) {
  using ::std::swap;
  swap(a.applicationId, b.applicationId);
  swap(a.lifetime, b.lifetime);
  swap(a.__isset, b.__isset);
}

CreateApplicationTokenRequest::CreateApplicationTokenRequest(const CreateApplicationTokenRequest& other4) {
  applicationId = other4.applicationId;
  lifetime = other4.lifetime;
  __isset = other4.__isset;
}
CreateApplicationTokenRequest& CreateApplicationTokenRequest::operator=(const CreateApplicationTokenRequest& other5) {
  applicationId = other5.applicationId;
  lifetime = other5.lifetime;
  __isset = other5.__isset;
  return *this;
}
void CreateApplicationTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CreateApplicationTokenRequest(";
  out << "applicationId=" << to_string(applicationId);
  out << ", " << "lifetime=" << to_string(lifetime);
  out << ")";
}


CreateApplicationTokenResponse::~CreateApplicationTokenResponse() throw() {
}


void CreateApplicationTokenResponse::__set_token(const ApplicationToken& val) {
  this->token = val;
}

uint32_t CreateApplicationTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->token.read(iprot);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CreateApplicationTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CreateApplicationTokenResponse");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CreateApplicationTokenResponse &a, CreateApplicationTokenResponse &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

CreateApplicationTokenResponse::CreateApplicationTokenResponse(const CreateApplicationTokenResponse& other6) {
  token = other6.token;
  __isset = other6.__isset;
}
CreateApplicationTokenResponse& CreateApplicationTokenResponse::operator=(const CreateApplicationTokenResponse& other7) {
  token = other7.token;
  __isset = other7.__isset;
  return *this;
}
void CreateApplicationTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CreateApplicationTokenResponse(";
  out << "token=" << to_string(token);
  out << ")";
}


InvalidateApplicationTokenRequest::~InvalidateApplicationTokenRequest() throw() {
}


void InvalidateApplicationTokenRequest::__set_token(const ApplicationToken& val) {
  this->token = val;
}

uint32_t InvalidateApplicationTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->token.read(iprot);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidateApplicationTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidateApplicationTokenRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidateApplicationTokenRequest &a, InvalidateApplicationTokenRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

InvalidateApplicationTokenRequest::InvalidateApplicationTokenRequest(const InvalidateApplicationTokenRequest& other8) {
  token = other8.token;
  __isset = other8.__isset;
}
InvalidateApplicationTokenRequest& InvalidateApplicationTokenRequest::operator=(const InvalidateApplicationTokenRequest& other9) {
  token = other9.token;
  __isset = other9.__isset;
  return *this;
}
void InvalidateApplicationTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidateApplicationTokenRequest(";
  out << "token=" << to_string(token);
  out << ")";
}


InvalidateApplicationTokenResponse::~InvalidateApplicationTokenResponse() throw() {
}


uint32_t InvalidateApplicationTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidateApplicationTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidateApplicationTokenResponse");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidateApplicationTokenResponse &a, InvalidateApplicationTokenResponse &b) {
  using ::std::swap;
  (void) a;
  (void) b;
}

InvalidateApplicationTokenResponse::InvalidateApplicationTokenResponse(const InvalidateApplicationTokenResponse& other10) {
  (void) other10;
}
InvalidateApplicationTokenResponse& InvalidateApplicationTokenResponse::operator=(const InvalidateApplicationTokenResponse& other11) {
  (void) other11;
  return *this;
}
void InvalidateApplicationTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidateApplicationTokenResponse(";
  out << ")";
}


InvalidateUserTokenRequest::~InvalidateUserTokenRequest() throw() {
}


void InvalidateUserTokenRequest::__set_token(const ApplicationToken& val) {
  this->token = val;
}

uint32_t InvalidateUserTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->token.read(iprot);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidateUserTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidateUserTokenRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidateUserTokenRequest &a, InvalidateUserTokenRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

InvalidateUserTokenRequest::InvalidateUserTokenRequest(const InvalidateUserTokenRequest& other12) {
  token = other12.token;
  __isset = other12.__isset;
}
InvalidateUserTokenRequest& InvalidateUserTokenRequest::operator=(const InvalidateUserTokenRequest& other13) {
  token = other13.token;
  __isset = other13.__isset;
  return *this;
}
void InvalidateUserTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidateUserTokenRequest(";
  out << "token=" << to_string(token);
  out << ")";
}


InvalidateUserTokenResponse::~InvalidateUserTokenResponse() throw() {
}


uint32_t InvalidateUserTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidateUserTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidateUserTokenResponse");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidateUserTokenResponse &a, InvalidateUserTokenResponse &b) {
  using ::std::swap;
  (void) a;
  (void) b;
}

InvalidateUserTokenResponse::InvalidateUserTokenResponse(const InvalidateUserTokenResponse& other14) {
  (void) other14;
}
InvalidateUserTokenResponse& InvalidateUserTokenResponse::operator=(const InvalidateUserTokenResponse& other15) {
  (void) other15;
  return *this;
}
void InvalidateUserTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidateUserTokenResponse(";
  out << ")";
}


VerifyUserTokenRequest::~VerifyUserTokenRequest() throw() {
}


void VerifyUserTokenRequest::__set_token(const UserToken& val) {
  this->token = val;
}

void VerifyUserTokenRequest::__set_userId(const std::string& val) {
  this->userId = val;
__isset.userId = true;
}

uint32_t VerifyUserTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->token.read(iprot);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userId);
          this->__isset.userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t VerifyUserTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("VerifyUserTokenRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.userId) {
    xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->userId);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(VerifyUserTokenRequest &a, VerifyUserTokenRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.userId, b.userId);
  swap(a.__isset, b.__isset);
}

VerifyUserTokenRequest::VerifyUserTokenRequest(const VerifyUserTokenRequest& other16) {
  token = other16.token;
  userId = other16.userId;
  __isset = other16.__isset;
}
VerifyUserTokenRequest& VerifyUserTokenRequest::operator=(const VerifyUserTokenRequest& other17) {
  token = other17.token;
  userId = other17.userId;
  __isset = other17.__isset;
  return *this;
}
void VerifyUserTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "VerifyUserTokenRequest(";
  out << "token=" << to_string(token);
  out << ", " << "userId="; (__isset.userId ? (out << to_string(userId)) : (out << "<null>"));
  out << ")";
}


VerifyUserTokenResponse::~VerifyUserTokenResponse() throw() {
}


void VerifyUserTokenResponse::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t VerifyUserTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t VerifyUserTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("VerifyUserTokenResponse");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(VerifyUserTokenResponse &a, VerifyUserTokenResponse &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

VerifyUserTokenResponse::VerifyUserTokenResponse(const VerifyUserTokenResponse& other18) {
  message = other18.message;
  __isset = other18.__isset;
}
VerifyUserTokenResponse& VerifyUserTokenResponse::operator=(const VerifyUserTokenResponse& other19) {
  message = other19.message;
  __isset = other19.__isset;
  return *this;
}
void VerifyUserTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "VerifyUserTokenResponse(";
  out << "message=" << to_string(message);
  out << ")";
}


VerifyApplicationTokenRequest::~VerifyApplicationTokenRequest() throw() {
}


void VerifyApplicationTokenRequest::__set_token(const ApplicationToken& val) {
  this->token = val;
}

void VerifyApplicationTokenRequest::__set_applicationId(const std::string& val) {
  this->applicationId = val;
__isset.applicationId = true;
}

uint32_t VerifyApplicationTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->token.read(iprot);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationId);
          this->__isset.applicationId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t VerifyApplicationTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("VerifyApplicationTokenRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.applicationId) {
    xfer += oprot->writeFieldBegin("applicationId", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->applicationId);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(VerifyApplicationTokenRequest &a, VerifyApplicationTokenRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.applicationId, b.applicationId);
  swap(a.__isset, b.__isset);
}

VerifyApplicationTokenRequest::VerifyApplicationTokenRequest(const VerifyApplicationTokenRequest& other20) {
  token = other20.token;
  applicationId = other20.applicationId;
  __isset = other20.__isset;
}
VerifyApplicationTokenRequest& VerifyApplicationTokenRequest::operator=(const VerifyApplicationTokenRequest& other21) {
  token = other21.token;
  applicationId = other21.applicationId;
  __isset = other21.__isset;
  return *this;
}
void VerifyApplicationTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "VerifyApplicationTokenRequest(";
  out << "token=" << to_string(token);
  out << ", " << "applicationId="; (__isset.applicationId ? (out << to_string(applicationId)) : (out << "<null>"));
  out << ")";
}


VerifyApplicationTokenResponse::~VerifyApplicationTokenResponse() throw() {
}


void VerifyApplicationTokenResponse::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t VerifyApplicationTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t VerifyApplicationTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("VerifyApplicationTokenResponse");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(VerifyApplicationTokenResponse &a, VerifyApplicationTokenResponse &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

VerifyApplicationTokenResponse::VerifyApplicationTokenResponse(const VerifyApplicationTokenResponse& other22) {
  message = other22.message;
  __isset = other22.__isset;
}
VerifyApplicationTokenResponse& VerifyApplicationTokenResponse::operator=(const VerifyApplicationTokenResponse& other23) {
  message = other23.message;
  __isset = other23.__isset;
  return *this;
}
void VerifyApplicationTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "VerifyApplicationTokenResponse(";
  out << "message=" << to_string(message);
  out << ")";
}

}}}}} // namespace
