/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "BananaService_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace tech { namespace aroma { namespace banana { namespace thrift { namespace service {


ProvisionServiceRequest::~ProvisionServiceRequest() throw() {
}


void ProvisionServiceRequest::__set_token(const std::string& val) {
  this->token = val;
}

void ProvisionServiceRequest::__set_serviceName(const std::string& val) {
  this->serviceName = val;
}

void ProvisionServiceRequest::__set_programmingLanguage(const std::string& val) {
  this->programmingLanguage = val;
__isset.programmingLanguage = true;
}

void ProvisionServiceRequest::__set_organization(const std::string& val) {
  this->organization = val;
}

void ProvisionServiceRequest::__set_icon(const Image& val) {
  this->icon = val;
__isset.icon = true;
}

uint32_t ProvisionServiceRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->token);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serviceName);
          this->__isset.serviceName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->programmingLanguage);
          this->__isset.programmingLanguage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->organization);
          this->__isset.organization = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->icon.read(iprot);
          this->__isset.icon = true;
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

uint32_t ProvisionServiceRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ProvisionServiceRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->token);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("serviceName", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->serviceName);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.programmingLanguage) {
    xfer += oprot->writeFieldBegin("programmingLanguage", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->programmingLanguage);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("organization", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->organization);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.icon) {
    xfer += oprot->writeFieldBegin("icon", ::apache::thrift::protocol::T_STRUCT, 5);
    xfer += this->icon.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ProvisionServiceRequest &a, ProvisionServiceRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.serviceName, b.serviceName);
  swap(a.programmingLanguage, b.programmingLanguage);
  swap(a.organization, b.organization);
  swap(a.icon, b.icon);
  swap(a.__isset, b.__isset);
}

ProvisionServiceRequest::ProvisionServiceRequest(const ProvisionServiceRequest& other0) {
  token = other0.token;
  serviceName = other0.serviceName;
  programmingLanguage = other0.programmingLanguage;
  organization = other0.organization;
  icon = other0.icon;
  __isset = other0.__isset;
}
ProvisionServiceRequest& ProvisionServiceRequest::operator=(const ProvisionServiceRequest& other1) {
  token = other1.token;
  serviceName = other1.serviceName;
  programmingLanguage = other1.programmingLanguage;
  organization = other1.organization;
  icon = other1.icon;
  __isset = other1.__isset;
  return *this;
}
void ProvisionServiceRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ProvisionServiceRequest(";
  out << "token=" << to_string(token);
  out << ", " << "serviceName=" << to_string(serviceName);
  out << ", " << "programmingLanguage="; (__isset.programmingLanguage ? (out << to_string(programmingLanguage)) : (out << "<null>"));
  out << ", " << "organization=" << to_string(organization);
  out << ", " << "icon="; (__isset.icon ? (out << to_string(icon)) : (out << "<null>"));
  out << ")";
}


ProvisionServiceResponse::~ProvisionServiceResponse() throw() {
}


void ProvisionServiceResponse::__set_bananaToken(const std::string& val) {
  this->bananaToken = val;
}

void ProvisionServiceResponse::__set_serviceName(const std::string& val) {
  this->serviceName = val;
}

uint32_t ProvisionServiceResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->bananaToken);
          this->__isset.bananaToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serviceName);
          this->__isset.serviceName = true;
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

uint32_t ProvisionServiceResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ProvisionServiceResponse");

  xfer += oprot->writeFieldBegin("bananaToken", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->bananaToken);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("serviceName", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->serviceName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ProvisionServiceResponse &a, ProvisionServiceResponse &b) {
  using ::std::swap;
  swap(a.bananaToken, b.bananaToken);
  swap(a.serviceName, b.serviceName);
  swap(a.__isset, b.__isset);
}

ProvisionServiceResponse::ProvisionServiceResponse(const ProvisionServiceResponse& other2) {
  bananaToken = other2.bananaToken;
  serviceName = other2.serviceName;
  __isset = other2.__isset;
}
ProvisionServiceResponse& ProvisionServiceResponse::operator=(const ProvisionServiceResponse& other3) {
  bananaToken = other3.bananaToken;
  serviceName = other3.serviceName;
  __isset = other3.__isset;
  return *this;
}
void ProvisionServiceResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ProvisionServiceResponse(";
  out << "bananaToken=" << to_string(bananaToken);
  out << ", " << "serviceName=" << to_string(serviceName);
  out << ")";
}


SubscribeToServiceRequest::~SubscribeToServiceRequest() throw() {
}


void SubscribeToServiceRequest::__set_token(const std::string& val) {
  this->token = val;
}

void SubscribeToServiceRequest::__set_serviceName(const std::string& val) {
  this->serviceName = val;
}

void SubscribeToServiceRequest::__set_organization(const std::string& val) {
  this->organization = val;
__isset.organization = true;
}

void SubscribeToServiceRequest::__set_shared(const bool val) {
  this->shared = val;
__isset.shared = true;
}

uint32_t SubscribeToServiceRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->token);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serviceName);
          this->__isset.serviceName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->organization);
          this->__isset.organization = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->shared);
          this->__isset.shared = true;
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

uint32_t SubscribeToServiceRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SubscribeToServiceRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->token);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("serviceName", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->serviceName);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.organization) {
    xfer += oprot->writeFieldBegin("organization", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->organization);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.shared) {
    xfer += oprot->writeFieldBegin("shared", ::apache::thrift::protocol::T_BOOL, 4);
    xfer += oprot->writeBool(this->shared);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SubscribeToServiceRequest &a, SubscribeToServiceRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.serviceName, b.serviceName);
  swap(a.organization, b.organization);
  swap(a.shared, b.shared);
  swap(a.__isset, b.__isset);
}

SubscribeToServiceRequest::SubscribeToServiceRequest(const SubscribeToServiceRequest& other4) {
  token = other4.token;
  serviceName = other4.serviceName;
  organization = other4.organization;
  shared = other4.shared;
  __isset = other4.__isset;
}
SubscribeToServiceRequest& SubscribeToServiceRequest::operator=(const SubscribeToServiceRequest& other5) {
  token = other5.token;
  serviceName = other5.serviceName;
  organization = other5.organization;
  shared = other5.shared;
  __isset = other5.__isset;
  return *this;
}
void SubscribeToServiceRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SubscribeToServiceRequest(";
  out << "token=" << to_string(token);
  out << ", " << "serviceName=" << to_string(serviceName);
  out << ", " << "organization="; (__isset.organization ? (out << to_string(organization)) : (out << "<null>"));
  out << ", " << "shared="; (__isset.shared ? (out << to_string(shared)) : (out << "<null>"));
  out << ")";
}


SubscribeToServiceResponse::~SubscribeToServiceResponse() throw() {
}


void SubscribeToServiceResponse::__set_message(const std::string& val) {
  this->message = val;
}

void SubscribeToServiceResponse::__set_channel(const  ::tech::aroma::banana::thrift::channels::BananaChannel& val) {
  this->channel = val;
}

uint32_t SubscribeToServiceResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->channel.read(iprot);
          this->__isset.channel = true;
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

uint32_t SubscribeToServiceResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SubscribeToServiceResponse");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("channel", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->channel.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SubscribeToServiceResponse &a, SubscribeToServiceResponse &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.channel, b.channel);
  swap(a.__isset, b.__isset);
}

SubscribeToServiceResponse::SubscribeToServiceResponse(const SubscribeToServiceResponse& other6) {
  message = other6.message;
  channel = other6.channel;
  __isset = other6.__isset;
}
SubscribeToServiceResponse& SubscribeToServiceResponse::operator=(const SubscribeToServiceResponse& other7) {
  message = other7.message;
  channel = other7.channel;
  __isset = other7.__isset;
  return *this;
}
void SubscribeToServiceResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SubscribeToServiceResponse(";
  out << "message=" << to_string(message);
  out << ", " << "channel=" << to_string(channel);
  out << ")";
}


RegisterHealthCheckRequest::~RegisterHealthCheckRequest() throw() {
}


void RegisterHealthCheckRequest::__set_endpoint(const  ::tech::aroma::banana::thrift::endpoint::Endpoint& val) {
  this->endpoint = val;
}

uint32_t RegisterHealthCheckRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->endpoint.read(iprot);
          this->__isset.endpoint = true;
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

uint32_t RegisterHealthCheckRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("RegisterHealthCheckRequest");

  xfer += oprot->writeFieldBegin("endpoint", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->endpoint.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RegisterHealthCheckRequest &a, RegisterHealthCheckRequest &b) {
  using ::std::swap;
  swap(a.endpoint, b.endpoint);
  swap(a.__isset, b.__isset);
}

RegisterHealthCheckRequest::RegisterHealthCheckRequest(const RegisterHealthCheckRequest& other8) {
  endpoint = other8.endpoint;
  __isset = other8.__isset;
}
RegisterHealthCheckRequest& RegisterHealthCheckRequest::operator=(const RegisterHealthCheckRequest& other9) {
  endpoint = other9.endpoint;
  __isset = other9.__isset;
  return *this;
}
void RegisterHealthCheckRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "RegisterHealthCheckRequest(";
  out << "endpoint=" << to_string(endpoint);
  out << ")";
}


RegisterHealthCheckResponse::~RegisterHealthCheckResponse() throw() {
}


uint32_t RegisterHealthCheckResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t RegisterHealthCheckResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("RegisterHealthCheckResponse");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RegisterHealthCheckResponse &a, RegisterHealthCheckResponse &b) {
  using ::std::swap;
  (void) a;
  (void) b;
}

RegisterHealthCheckResponse::RegisterHealthCheckResponse(const RegisterHealthCheckResponse& other10) {
  (void) other10;
}
RegisterHealthCheckResponse& RegisterHealthCheckResponse::operator=(const RegisterHealthCheckResponse& other11) {
  (void) other11;
  return *this;
}
void RegisterHealthCheckResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "RegisterHealthCheckResponse(";
  out << ")";
}

}}}}} // namespace
