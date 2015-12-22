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


GetApplicationTokenInfoRequest::~GetApplicationTokenInfoRequest() throw() {
}


void GetApplicationTokenInfoRequest::__set_tokenId(const std::string& val) {
  this->tokenId = val;
}

uint32_t GetApplicationTokenInfoRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->tokenId);
          this->__isset.tokenId = true;
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

uint32_t GetApplicationTokenInfoRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GetApplicationTokenInfoRequest");

  xfer += oprot->writeFieldBegin("tokenId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->tokenId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GetApplicationTokenInfoRequest &a, GetApplicationTokenInfoRequest &b) {
  using ::std::swap;
  swap(a.tokenId, b.tokenId);
  swap(a.__isset, b.__isset);
}

GetApplicationTokenInfoRequest::GetApplicationTokenInfoRequest(const GetApplicationTokenInfoRequest& other8) {
  tokenId = other8.tokenId;
  __isset = other8.__isset;
}
GetApplicationTokenInfoRequest& GetApplicationTokenInfoRequest::operator=(const GetApplicationTokenInfoRequest& other9) {
  tokenId = other9.tokenId;
  __isset = other9.__isset;
  return *this;
}
void GetApplicationTokenInfoRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GetApplicationTokenInfoRequest(";
  out << "tokenId=" << to_string(tokenId);
  out << ")";
}


GetApplicationTokenInfoResponse::~GetApplicationTokenInfoResponse() throw() {
}


void GetApplicationTokenInfoResponse::__set_token(const ApplicationToken& val) {
  this->token = val;
}

uint32_t GetApplicationTokenInfoResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t GetApplicationTokenInfoResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GetApplicationTokenInfoResponse");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GetApplicationTokenInfoResponse &a, GetApplicationTokenInfoResponse &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

GetApplicationTokenInfoResponse::GetApplicationTokenInfoResponse(const GetApplicationTokenInfoResponse& other10) {
  token = other10.token;
  __isset = other10.__isset;
}
GetApplicationTokenInfoResponse& GetApplicationTokenInfoResponse::operator=(const GetApplicationTokenInfoResponse& other11) {
  token = other11.token;
  __isset = other11.__isset;
  return *this;
}
void GetApplicationTokenInfoResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GetApplicationTokenInfoResponse(";
  out << "token=" << to_string(token);
  out << ")";
}


GetUserTokenInfoRequest::~GetUserTokenInfoRequest() throw() {
}


void GetUserTokenInfoRequest::__set_tokenId(const std::string& val) {
  this->tokenId = val;
}

uint32_t GetUserTokenInfoRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->tokenId);
          this->__isset.tokenId = true;
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

uint32_t GetUserTokenInfoRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GetUserTokenInfoRequest");

  xfer += oprot->writeFieldBegin("tokenId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->tokenId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GetUserTokenInfoRequest &a, GetUserTokenInfoRequest &b) {
  using ::std::swap;
  swap(a.tokenId, b.tokenId);
  swap(a.__isset, b.__isset);
}

GetUserTokenInfoRequest::GetUserTokenInfoRequest(const GetUserTokenInfoRequest& other12) {
  tokenId = other12.tokenId;
  __isset = other12.__isset;
}
GetUserTokenInfoRequest& GetUserTokenInfoRequest::operator=(const GetUserTokenInfoRequest& other13) {
  tokenId = other13.tokenId;
  __isset = other13.__isset;
  return *this;
}
void GetUserTokenInfoRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GetUserTokenInfoRequest(";
  out << "tokenId=" << to_string(tokenId);
  out << ")";
}


GetUserTokenInfoResponse::~GetUserTokenInfoResponse() throw() {
}


void GetUserTokenInfoResponse::__set_token(const UserToken& val) {
  this->token = val;
}

uint32_t GetUserTokenInfoResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t GetUserTokenInfoResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GetUserTokenInfoResponse");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GetUserTokenInfoResponse &a, GetUserTokenInfoResponse &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

GetUserTokenInfoResponse::GetUserTokenInfoResponse(const GetUserTokenInfoResponse& other14) {
  token = other14.token;
  __isset = other14.__isset;
}
GetUserTokenInfoResponse& GetUserTokenInfoResponse::operator=(const GetUserTokenInfoResponse& other15) {
  token = other15.token;
  __isset = other15.__isset;
  return *this;
}
void GetUserTokenInfoResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GetUserTokenInfoResponse(";
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

InvalidateApplicationTokenRequest::InvalidateApplicationTokenRequest(const InvalidateApplicationTokenRequest& other16) {
  token = other16.token;
  __isset = other16.__isset;
}
InvalidateApplicationTokenRequest& InvalidateApplicationTokenRequest::operator=(const InvalidateApplicationTokenRequest& other17) {
  token = other17.token;
  __isset = other17.__isset;
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

InvalidateApplicationTokenResponse::InvalidateApplicationTokenResponse(const InvalidateApplicationTokenResponse& other18) {
  (void) other18;
}
InvalidateApplicationTokenResponse& InvalidateApplicationTokenResponse::operator=(const InvalidateApplicationTokenResponse& other19) {
  (void) other19;
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

InvalidateUserTokenRequest::InvalidateUserTokenRequest(const InvalidateUserTokenRequest& other20) {
  token = other20.token;
  __isset = other20.__isset;
}
InvalidateUserTokenRequest& InvalidateUserTokenRequest::operator=(const InvalidateUserTokenRequest& other21) {
  token = other21.token;
  __isset = other21.__isset;
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

InvalidateUserTokenResponse::InvalidateUserTokenResponse(const InvalidateUserTokenResponse& other22) {
  (void) other22;
}
InvalidateUserTokenResponse& InvalidateUserTokenResponse::operator=(const InvalidateUserTokenResponse& other23) {
  (void) other23;
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

VerifyUserTokenRequest::VerifyUserTokenRequest(const VerifyUserTokenRequest& other24) {
  token = other24.token;
  userId = other24.userId;
  __isset = other24.__isset;
}
VerifyUserTokenRequest& VerifyUserTokenRequest::operator=(const VerifyUserTokenRequest& other25) {
  token = other25.token;
  userId = other25.userId;
  __isset = other25.__isset;
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

VerifyUserTokenResponse::VerifyUserTokenResponse(const VerifyUserTokenResponse& other26) {
  message = other26.message;
  __isset = other26.__isset;
}
VerifyUserTokenResponse& VerifyUserTokenResponse::operator=(const VerifyUserTokenResponse& other27) {
  message = other27.message;
  __isset = other27.__isset;
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

VerifyApplicationTokenRequest::VerifyApplicationTokenRequest(const VerifyApplicationTokenRequest& other28) {
  token = other28.token;
  applicationId = other28.applicationId;
  __isset = other28.__isset;
}
VerifyApplicationTokenRequest& VerifyApplicationTokenRequest::operator=(const VerifyApplicationTokenRequest& other29) {
  token = other29.token;
  applicationId = other29.applicationId;
  __isset = other29.__isset;
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

VerifyApplicationTokenResponse::VerifyApplicationTokenResponse(const VerifyApplicationTokenResponse& other30) {
  message = other30.message;
  __isset = other30.__isset;
}
VerifyApplicationTokenResponse& VerifyApplicationTokenResponse::operator=(const VerifyApplicationTokenResponse& other31) {
  message = other31.message;
  __isset = other31.__isset;
  return *this;
}
void VerifyApplicationTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "VerifyApplicationTokenResponse(";
  out << "message=" << to_string(message);
  out << ")";
}

}}}}} // namespace
