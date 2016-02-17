/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Endpoint_TYPES_H
#define Endpoint_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Aroma_types.h"
#include "Exceptions_types.h"


namespace aroma { namespace thrift { namespace endpoint {

typedef  ::tech::aroma::thrift::int int;

typedef  ::tech::aroma::thrift::uuid uuid;

typedef class  ::aroma::thrift::exceptions::OperationFailedException OperationFailedException;

class TcpEndpoint;

class HttpThriftEndpoint;

class HttpRestEndpoint;

class Endpoint;

class HealthPokeRequest;

class HealthPokeResponse;


class TcpEndpoint {
 public:

  TcpEndpoint(const TcpEndpoint&);
  TcpEndpoint& operator=(const TcpEndpoint&);
  TcpEndpoint() : hostname(), port(80) {
  }

  virtual ~TcpEndpoint() throw();
  std::string hostname;
  int port;

  void __set_hostname(const std::string& val);

  void __set_port(const int val);

  bool operator == (const TcpEndpoint & rhs) const
  {
    if (!(hostname == rhs.hostname))
      return false;
    if (!(port == rhs.port))
      return false;
    return true;
  }
  bool operator != (const TcpEndpoint &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TcpEndpoint & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TcpEndpoint &a, TcpEndpoint &b);

inline std::ostream& operator<<(std::ostream& out, const TcpEndpoint& obj)
{
  obj.printTo(out);
  return out;
}


class HttpThriftEndpoint {
 public:

  HttpThriftEndpoint(const HttpThriftEndpoint&);
  HttpThriftEndpoint& operator=(const HttpThriftEndpoint&);
  HttpThriftEndpoint() : url() {
  }

  virtual ~HttpThriftEndpoint() throw();
  std::string url;

  void __set_url(const std::string& val);

  bool operator == (const HttpThriftEndpoint & rhs) const
  {
    if (!(url == rhs.url))
      return false;
    return true;
  }
  bool operator != (const HttpThriftEndpoint &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HttpThriftEndpoint & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HttpThriftEndpoint &a, HttpThriftEndpoint &b);

inline std::ostream& operator<<(std::ostream& out, const HttpThriftEndpoint& obj)
{
  obj.printTo(out);
  return out;
}


class HttpRestEndpoint {
 public:

  HttpRestEndpoint(const HttpRestEndpoint&);
  HttpRestEndpoint& operator=(const HttpRestEndpoint&);
  HttpRestEndpoint() : url() {
  }

  virtual ~HttpRestEndpoint() throw();
  std::string url;

  void __set_url(const std::string& val);

  bool operator == (const HttpRestEndpoint & rhs) const
  {
    if (!(url == rhs.url))
      return false;
    return true;
  }
  bool operator != (const HttpRestEndpoint &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HttpRestEndpoint & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HttpRestEndpoint &a, HttpRestEndpoint &b);

inline std::ostream& operator<<(std::ostream& out, const HttpRestEndpoint& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Endpoint__isset {
  _Endpoint__isset() : tcp(false), httpThrift(false), httpRest(false) {}
  bool tcp :1;
  bool httpThrift :1;
  bool httpRest :1;
} _Endpoint__isset;

class Endpoint {
 public:

  Endpoint(const Endpoint&);
  Endpoint& operator=(const Endpoint&);
  Endpoint() {
  }

  virtual ~Endpoint() throw();
  TcpEndpoint tcp;
  HttpThriftEndpoint httpThrift;
  HttpRestEndpoint httpRest;

  _Endpoint__isset __isset;

  void __set_tcp(const TcpEndpoint& val);

  void __set_httpThrift(const HttpThriftEndpoint& val);

  void __set_httpRest(const HttpRestEndpoint& val);

  bool operator == (const Endpoint & rhs) const
  {
    if (!(tcp == rhs.tcp))
      return false;
    if (!(httpThrift == rhs.httpThrift))
      return false;
    if (!(httpRest == rhs.httpRest))
      return false;
    return true;
  }
  bool operator != (const Endpoint &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Endpoint & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Endpoint &a, Endpoint &b);

inline std::ostream& operator<<(std::ostream& out, const Endpoint& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HealthPokeRequest__isset {
  _HealthPokeRequest__isset() : applicationId(false), serviceToken(false) {}
  bool applicationId :1;
  bool serviceToken :1;
} _HealthPokeRequest__isset;

class HealthPokeRequest {
 public:

  HealthPokeRequest(const HealthPokeRequest&);
  HealthPokeRequest& operator=(const HealthPokeRequest&);
  HealthPokeRequest() : applicationId() {
  }

  virtual ~HealthPokeRequest() throw();
  uuid applicationId;
   ::aroma::thrift::authentication::ApplicationToken serviceToken;

  _HealthPokeRequest__isset __isset;

  void __set_applicationId(const uuid& val);

  void __set_serviceToken(const  ::aroma::thrift::authentication::ApplicationToken& val);

  bool operator == (const HealthPokeRequest & rhs) const
  {
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(serviceToken == rhs.serviceToken))
      return false;
    return true;
  }
  bool operator != (const HealthPokeRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HealthPokeRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HealthPokeRequest &a, HealthPokeRequest &b);

inline std::ostream& operator<<(std::ostream& out, const HealthPokeRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HealthPokeResponse__isset {
  _HealthPokeResponse__isset() : message(false), healthy(false) {}
  bool message :1;
  bool healthy :1;
} _HealthPokeResponse__isset;

class HealthPokeResponse {
 public:

  HealthPokeResponse(const HealthPokeResponse&);
  HealthPokeResponse& operator=(const HealthPokeResponse&);
  HealthPokeResponse() : message(), healthy(0) {
  }

  virtual ~HealthPokeResponse() throw();
  std::string message;
  bool healthy;

  _HealthPokeResponse__isset __isset;

  void __set_message(const std::string& val);

  void __set_healthy(const bool val);

  bool operator == (const HealthPokeResponse & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    if (!(healthy == rhs.healthy))
      return false;
    return true;
  }
  bool operator != (const HealthPokeResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HealthPokeResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HealthPokeResponse &a, HealthPokeResponse &b);

inline std::ostream& operator<<(std::ostream& out, const HealthPokeResponse& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
