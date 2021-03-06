/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef AuthenticationService_H
#define AuthenticationService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "AuthenticationService_types.h"

namespace aroma { namespace thrift { namespace authentication { namespace service {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class AuthenticationServiceIf {
 public:
  virtual ~AuthenticationServiceIf() {}
  virtual double getApiVersion() = 0;

  /**
   * Create a Token, used to represent a User or an Application.
   * 
   * @param request
   */
  virtual void createToken(CreateTokenResponse& _return, const CreateTokenRequest& request) = 0;

  /**
   * Get information about a Token.
   * 
   * @param request
   */
  virtual void getTokenInfo(GetTokenInfoResponse& _return, const GetTokenInfoRequest& request) = 0;

  /**
   * Invalidates a Token and removes it from knowledge. Any subsequent references to the Token will produce
   * an InvalidTokenException.
   * 
   * @param request
   */
  virtual void invalidateToken(InvalidateTokenResponse& _return, const InvalidateTokenRequest& request) = 0;

  /**
   * Verify that a Token is valid, and optionally, that it belongs to the specified pwner.
   * 
   * @param request
   */
  virtual void verifyToken(VerifyTokenResponse& _return, const VerifyTokenRequest& request) = 0;
};

class AuthenticationServiceIfFactory {
 public:
  typedef AuthenticationServiceIf Handler;

  virtual ~AuthenticationServiceIfFactory() {}

  virtual AuthenticationServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(AuthenticationServiceIf* /* handler */) = 0;
};

class AuthenticationServiceIfSingletonFactory : virtual public AuthenticationServiceIfFactory {
 public:
  AuthenticationServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<AuthenticationServiceIf>& iface) : iface_(iface) {}
  virtual ~AuthenticationServiceIfSingletonFactory() {}

  virtual AuthenticationServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(AuthenticationServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<AuthenticationServiceIf> iface_;
};

class AuthenticationServiceNull : virtual public AuthenticationServiceIf {
 public:
  virtual ~AuthenticationServiceNull() {}
  double getApiVersion() {
    double _return = (double)0;
    return _return;
  }
  void createToken(CreateTokenResponse& /* _return */, const CreateTokenRequest& /* request */) {
    return;
  }
  void getTokenInfo(GetTokenInfoResponse& /* _return */, const GetTokenInfoRequest& /* request */) {
    return;
  }
  void invalidateToken(InvalidateTokenResponse& /* _return */, const InvalidateTokenRequest& /* request */) {
    return;
  }
  void verifyToken(VerifyTokenResponse& /* _return */, const VerifyTokenRequest& /* request */) {
    return;
  }
};


class AuthenticationService_getApiVersion_args {
 public:

  AuthenticationService_getApiVersion_args(const AuthenticationService_getApiVersion_args&);
  AuthenticationService_getApiVersion_args& operator=(const AuthenticationService_getApiVersion_args&);
  AuthenticationService_getApiVersion_args() {
  }

  virtual ~AuthenticationService_getApiVersion_args() throw();

  bool operator == (const AuthenticationService_getApiVersion_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const AuthenticationService_getApiVersion_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_getApiVersion_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthenticationService_getApiVersion_pargs {
 public:


  virtual ~AuthenticationService_getApiVersion_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_getApiVersion_result__isset {
  _AuthenticationService_getApiVersion_result__isset() : success(false) {}
  bool success :1;
} _AuthenticationService_getApiVersion_result__isset;

class AuthenticationService_getApiVersion_result {
 public:

  AuthenticationService_getApiVersion_result(const AuthenticationService_getApiVersion_result&);
  AuthenticationService_getApiVersion_result& operator=(const AuthenticationService_getApiVersion_result&);
  AuthenticationService_getApiVersion_result() : success(0) {
  }

  virtual ~AuthenticationService_getApiVersion_result() throw();
  double success;

  _AuthenticationService_getApiVersion_result__isset __isset;

  void __set_success(const double val);

  bool operator == (const AuthenticationService_getApiVersion_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_getApiVersion_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_getApiVersion_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_getApiVersion_presult__isset {
  _AuthenticationService_getApiVersion_presult__isset() : success(false) {}
  bool success :1;
} _AuthenticationService_getApiVersion_presult__isset;

class AuthenticationService_getApiVersion_presult {
 public:


  virtual ~AuthenticationService_getApiVersion_presult() throw();
  double* success;

  _AuthenticationService_getApiVersion_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _AuthenticationService_createToken_args__isset {
  _AuthenticationService_createToken_args__isset() : request(false) {}
  bool request :1;
} _AuthenticationService_createToken_args__isset;

class AuthenticationService_createToken_args {
 public:

  AuthenticationService_createToken_args(const AuthenticationService_createToken_args&);
  AuthenticationService_createToken_args& operator=(const AuthenticationService_createToken_args&);
  AuthenticationService_createToken_args() {
  }

  virtual ~AuthenticationService_createToken_args() throw();
  CreateTokenRequest request;

  _AuthenticationService_createToken_args__isset __isset;

  void __set_request(const CreateTokenRequest& val);

  bool operator == (const AuthenticationService_createToken_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_createToken_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_createToken_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthenticationService_createToken_pargs {
 public:


  virtual ~AuthenticationService_createToken_pargs() throw();
  const CreateTokenRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_createToken_result__isset {
  _AuthenticationService_createToken_result__isset() : success(false), ex1(false), ex2(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
} _AuthenticationService_createToken_result__isset;

class AuthenticationService_createToken_result {
 public:

  AuthenticationService_createToken_result(const AuthenticationService_createToken_result&);
  AuthenticationService_createToken_result& operator=(const AuthenticationService_createToken_result&);
  AuthenticationService_createToken_result() {
  }

  virtual ~AuthenticationService_createToken_result() throw();
  CreateTokenResponse success;
  OperationFailedException ex1;
  InvalidArgumentException ex2;

  _AuthenticationService_createToken_result__isset __isset;

  void __set_success(const CreateTokenResponse& val);

  void __set_ex1(const OperationFailedException& val);

  void __set_ex2(const InvalidArgumentException& val);

  bool operator == (const AuthenticationService_createToken_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex1 == rhs.ex1))
      return false;
    if (!(ex2 == rhs.ex2))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_createToken_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_createToken_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_createToken_presult__isset {
  _AuthenticationService_createToken_presult__isset() : success(false), ex1(false), ex2(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
} _AuthenticationService_createToken_presult__isset;

class AuthenticationService_createToken_presult {
 public:


  virtual ~AuthenticationService_createToken_presult() throw();
  CreateTokenResponse* success;
  OperationFailedException* ex1;
  InvalidArgumentException* ex2;

  _AuthenticationService_createToken_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _AuthenticationService_getTokenInfo_args__isset {
  _AuthenticationService_getTokenInfo_args__isset() : request(false) {}
  bool request :1;
} _AuthenticationService_getTokenInfo_args__isset;

class AuthenticationService_getTokenInfo_args {
 public:

  AuthenticationService_getTokenInfo_args(const AuthenticationService_getTokenInfo_args&);
  AuthenticationService_getTokenInfo_args& operator=(const AuthenticationService_getTokenInfo_args&);
  AuthenticationService_getTokenInfo_args() {
  }

  virtual ~AuthenticationService_getTokenInfo_args() throw();
  GetTokenInfoRequest request;

  _AuthenticationService_getTokenInfo_args__isset __isset;

  void __set_request(const GetTokenInfoRequest& val);

  bool operator == (const AuthenticationService_getTokenInfo_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_getTokenInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_getTokenInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthenticationService_getTokenInfo_pargs {
 public:


  virtual ~AuthenticationService_getTokenInfo_pargs() throw();
  const GetTokenInfoRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_getTokenInfo_result__isset {
  _AuthenticationService_getTokenInfo_result__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _AuthenticationService_getTokenInfo_result__isset;

class AuthenticationService_getTokenInfo_result {
 public:

  AuthenticationService_getTokenInfo_result(const AuthenticationService_getTokenInfo_result&);
  AuthenticationService_getTokenInfo_result& operator=(const AuthenticationService_getTokenInfo_result&);
  AuthenticationService_getTokenInfo_result() {
  }

  virtual ~AuthenticationService_getTokenInfo_result() throw();
  GetTokenInfoResponse success;
  OperationFailedException ex1;
  InvalidTokenException ex2;
  InvalidArgumentException ex3;

  _AuthenticationService_getTokenInfo_result__isset __isset;

  void __set_success(const GetTokenInfoResponse& val);

  void __set_ex1(const OperationFailedException& val);

  void __set_ex2(const InvalidTokenException& val);

  void __set_ex3(const InvalidArgumentException& val);

  bool operator == (const AuthenticationService_getTokenInfo_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex1 == rhs.ex1))
      return false;
    if (!(ex2 == rhs.ex2))
      return false;
    if (!(ex3 == rhs.ex3))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_getTokenInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_getTokenInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_getTokenInfo_presult__isset {
  _AuthenticationService_getTokenInfo_presult__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _AuthenticationService_getTokenInfo_presult__isset;

class AuthenticationService_getTokenInfo_presult {
 public:


  virtual ~AuthenticationService_getTokenInfo_presult() throw();
  GetTokenInfoResponse* success;
  OperationFailedException* ex1;
  InvalidTokenException* ex2;
  InvalidArgumentException* ex3;

  _AuthenticationService_getTokenInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _AuthenticationService_invalidateToken_args__isset {
  _AuthenticationService_invalidateToken_args__isset() : request(false) {}
  bool request :1;
} _AuthenticationService_invalidateToken_args__isset;

class AuthenticationService_invalidateToken_args {
 public:

  AuthenticationService_invalidateToken_args(const AuthenticationService_invalidateToken_args&);
  AuthenticationService_invalidateToken_args& operator=(const AuthenticationService_invalidateToken_args&);
  AuthenticationService_invalidateToken_args() {
  }

  virtual ~AuthenticationService_invalidateToken_args() throw();
  InvalidateTokenRequest request;

  _AuthenticationService_invalidateToken_args__isset __isset;

  void __set_request(const InvalidateTokenRequest& val);

  bool operator == (const AuthenticationService_invalidateToken_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_invalidateToken_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_invalidateToken_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthenticationService_invalidateToken_pargs {
 public:


  virtual ~AuthenticationService_invalidateToken_pargs() throw();
  const InvalidateTokenRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_invalidateToken_result__isset {
  _AuthenticationService_invalidateToken_result__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _AuthenticationService_invalidateToken_result__isset;

class AuthenticationService_invalidateToken_result {
 public:

  AuthenticationService_invalidateToken_result(const AuthenticationService_invalidateToken_result&);
  AuthenticationService_invalidateToken_result& operator=(const AuthenticationService_invalidateToken_result&);
  AuthenticationService_invalidateToken_result() {
  }

  virtual ~AuthenticationService_invalidateToken_result() throw();
  InvalidateTokenResponse success;
  OperationFailedException ex1;
  InvalidTokenException ex2;
  InvalidArgumentException ex3;

  _AuthenticationService_invalidateToken_result__isset __isset;

  void __set_success(const InvalidateTokenResponse& val);

  void __set_ex1(const OperationFailedException& val);

  void __set_ex2(const InvalidTokenException& val);

  void __set_ex3(const InvalidArgumentException& val);

  bool operator == (const AuthenticationService_invalidateToken_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex1 == rhs.ex1))
      return false;
    if (!(ex2 == rhs.ex2))
      return false;
    if (!(ex3 == rhs.ex3))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_invalidateToken_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_invalidateToken_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_invalidateToken_presult__isset {
  _AuthenticationService_invalidateToken_presult__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _AuthenticationService_invalidateToken_presult__isset;

class AuthenticationService_invalidateToken_presult {
 public:


  virtual ~AuthenticationService_invalidateToken_presult() throw();
  InvalidateTokenResponse* success;
  OperationFailedException* ex1;
  InvalidTokenException* ex2;
  InvalidArgumentException* ex3;

  _AuthenticationService_invalidateToken_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _AuthenticationService_verifyToken_args__isset {
  _AuthenticationService_verifyToken_args__isset() : request(false) {}
  bool request :1;
} _AuthenticationService_verifyToken_args__isset;

class AuthenticationService_verifyToken_args {
 public:

  AuthenticationService_verifyToken_args(const AuthenticationService_verifyToken_args&);
  AuthenticationService_verifyToken_args& operator=(const AuthenticationService_verifyToken_args&);
  AuthenticationService_verifyToken_args() {
  }

  virtual ~AuthenticationService_verifyToken_args() throw();
  VerifyTokenRequest request;

  _AuthenticationService_verifyToken_args__isset __isset;

  void __set_request(const VerifyTokenRequest& val);

  bool operator == (const AuthenticationService_verifyToken_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_verifyToken_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_verifyToken_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthenticationService_verifyToken_pargs {
 public:


  virtual ~AuthenticationService_verifyToken_pargs() throw();
  const VerifyTokenRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_verifyToken_result__isset {
  _AuthenticationService_verifyToken_result__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _AuthenticationService_verifyToken_result__isset;

class AuthenticationService_verifyToken_result {
 public:

  AuthenticationService_verifyToken_result(const AuthenticationService_verifyToken_result&);
  AuthenticationService_verifyToken_result& operator=(const AuthenticationService_verifyToken_result&);
  AuthenticationService_verifyToken_result() {
  }

  virtual ~AuthenticationService_verifyToken_result() throw();
  VerifyTokenResponse success;
  OperationFailedException ex1;
  InvalidTokenException ex2;
  InvalidArgumentException ex3;

  _AuthenticationService_verifyToken_result__isset __isset;

  void __set_success(const VerifyTokenResponse& val);

  void __set_ex1(const OperationFailedException& val);

  void __set_ex2(const InvalidTokenException& val);

  void __set_ex3(const InvalidArgumentException& val);

  bool operator == (const AuthenticationService_verifyToken_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex1 == rhs.ex1))
      return false;
    if (!(ex2 == rhs.ex2))
      return false;
    if (!(ex3 == rhs.ex3))
      return false;
    return true;
  }
  bool operator != (const AuthenticationService_verifyToken_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationService_verifyToken_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AuthenticationService_verifyToken_presult__isset {
  _AuthenticationService_verifyToken_presult__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _AuthenticationService_verifyToken_presult__isset;

class AuthenticationService_verifyToken_presult {
 public:


  virtual ~AuthenticationService_verifyToken_presult() throw();
  VerifyTokenResponse* success;
  OperationFailedException* ex1;
  InvalidTokenException* ex2;
  InvalidArgumentException* ex3;

  _AuthenticationService_verifyToken_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class AuthenticationServiceClient : virtual public AuthenticationServiceIf {
 public:
  AuthenticationServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  AuthenticationServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  double getApiVersion();
  void send_getApiVersion();
  double recv_getApiVersion();
  void createToken(CreateTokenResponse& _return, const CreateTokenRequest& request);
  void send_createToken(const CreateTokenRequest& request);
  void recv_createToken(CreateTokenResponse& _return);
  void getTokenInfo(GetTokenInfoResponse& _return, const GetTokenInfoRequest& request);
  void send_getTokenInfo(const GetTokenInfoRequest& request);
  void recv_getTokenInfo(GetTokenInfoResponse& _return);
  void invalidateToken(InvalidateTokenResponse& _return, const InvalidateTokenRequest& request);
  void send_invalidateToken(const InvalidateTokenRequest& request);
  void recv_invalidateToken(InvalidateTokenResponse& _return);
  void verifyToken(VerifyTokenResponse& _return, const VerifyTokenRequest& request);
  void send_verifyToken(const VerifyTokenRequest& request);
  void recv_verifyToken(VerifyTokenResponse& _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class AuthenticationServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<AuthenticationServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (AuthenticationServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getApiVersion(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_createToken(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getTokenInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_invalidateToken(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_verifyToken(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  AuthenticationServiceProcessor(::apache::thrift::stdcxx::shared_ptr<AuthenticationServiceIf> iface) :
    iface_(iface) {
    processMap_["getApiVersion"] = &AuthenticationServiceProcessor::process_getApiVersion;
    processMap_["createToken"] = &AuthenticationServiceProcessor::process_createToken;
    processMap_["getTokenInfo"] = &AuthenticationServiceProcessor::process_getTokenInfo;
    processMap_["invalidateToken"] = &AuthenticationServiceProcessor::process_invalidateToken;
    processMap_["verifyToken"] = &AuthenticationServiceProcessor::process_verifyToken;
  }

  virtual ~AuthenticationServiceProcessor() {}
};

class AuthenticationServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  AuthenticationServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< AuthenticationServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< AuthenticationServiceIfFactory > handlerFactory_;
};

class AuthenticationServiceMultiface : virtual public AuthenticationServiceIf {
 public:
  AuthenticationServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<AuthenticationServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~AuthenticationServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<AuthenticationServiceIf> > ifaces_;
  AuthenticationServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<AuthenticationServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  double getApiVersion() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getApiVersion();
    }
    return ifaces_[i]->getApiVersion();
  }

  void createToken(CreateTokenResponse& _return, const CreateTokenRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->createToken(_return, request);
    }
    ifaces_[i]->createToken(_return, request);
    return;
  }

  void getTokenInfo(GetTokenInfoResponse& _return, const GetTokenInfoRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getTokenInfo(_return, request);
    }
    ifaces_[i]->getTokenInfo(_return, request);
    return;
  }

  void invalidateToken(InvalidateTokenResponse& _return, const InvalidateTokenRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->invalidateToken(_return, request);
    }
    ifaces_[i]->invalidateToken(_return, request);
    return;
  }

  void verifyToken(VerifyTokenResponse& _return, const VerifyTokenRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->verifyToken(_return, request);
    }
    ifaces_[i]->verifyToken(_return, request);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class AuthenticationServiceConcurrentClient : virtual public AuthenticationServiceIf {
 public:
  AuthenticationServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  AuthenticationServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  double getApiVersion();
  int32_t send_getApiVersion();
  double recv_getApiVersion(const int32_t seqid);
  void createToken(CreateTokenResponse& _return, const CreateTokenRequest& request);
  int32_t send_createToken(const CreateTokenRequest& request);
  void recv_createToken(CreateTokenResponse& _return, const int32_t seqid);
  void getTokenInfo(GetTokenInfoResponse& _return, const GetTokenInfoRequest& request);
  int32_t send_getTokenInfo(const GetTokenInfoRequest& request);
  void recv_getTokenInfo(GetTokenInfoResponse& _return, const int32_t seqid);
  void invalidateToken(InvalidateTokenResponse& _return, const InvalidateTokenRequest& request);
  int32_t send_invalidateToken(const InvalidateTokenRequest& request);
  void recv_invalidateToken(InvalidateTokenResponse& _return, const int32_t seqid);
  void verifyToken(VerifyTokenResponse& _return, const VerifyTokenRequest& request);
  int32_t send_verifyToken(const VerifyTokenRequest& request);
  void recv_verifyToken(VerifyTokenResponse& _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

}}}} // namespace

#endif
