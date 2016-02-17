/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef NotificationService_H
#define NotificationService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "NotificationService_types.h"

namespace aroma { namespace thrift { namespace notification { namespace service {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class NotificationServiceIf {
 public:
  virtual ~NotificationServiceIf() {}
  virtual double getApiVersion() = 0;
  virtual void sendNotification(SendNotificationResponse& _return, const SendNotificationRequest& request) = 0;
};

class NotificationServiceIfFactory {
 public:
  typedef NotificationServiceIf Handler;

  virtual ~NotificationServiceIfFactory() {}

  virtual NotificationServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(NotificationServiceIf* /* handler */) = 0;
};

class NotificationServiceIfSingletonFactory : virtual public NotificationServiceIfFactory {
 public:
  NotificationServiceIfSingletonFactory(const boost::shared_ptr<NotificationServiceIf>& iface) : iface_(iface) {}
  virtual ~NotificationServiceIfSingletonFactory() {}

  virtual NotificationServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(NotificationServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<NotificationServiceIf> iface_;
};

class NotificationServiceNull : virtual public NotificationServiceIf {
 public:
  virtual ~NotificationServiceNull() {}
  double getApiVersion() {
    double _return = (double)0;
    return _return;
  }
  void sendNotification(SendNotificationResponse& /* _return */, const SendNotificationRequest& /* request */) {
    return;
  }
};


class NotificationService_getApiVersion_args {
 public:

  NotificationService_getApiVersion_args(const NotificationService_getApiVersion_args&);
  NotificationService_getApiVersion_args& operator=(const NotificationService_getApiVersion_args&);
  NotificationService_getApiVersion_args() {
  }

  virtual ~NotificationService_getApiVersion_args() throw();

  bool operator == (const NotificationService_getApiVersion_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const NotificationService_getApiVersion_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotificationService_getApiVersion_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class NotificationService_getApiVersion_pargs {
 public:


  virtual ~NotificationService_getApiVersion_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotificationService_getApiVersion_result__isset {
  _NotificationService_getApiVersion_result__isset() : success(false) {}
  bool success :1;
} _NotificationService_getApiVersion_result__isset;

class NotificationService_getApiVersion_result {
 public:

  NotificationService_getApiVersion_result(const NotificationService_getApiVersion_result&);
  NotificationService_getApiVersion_result& operator=(const NotificationService_getApiVersion_result&);
  NotificationService_getApiVersion_result() : success(0) {
  }

  virtual ~NotificationService_getApiVersion_result() throw();
  double success;

  _NotificationService_getApiVersion_result__isset __isset;

  void __set_success(const double val);

  bool operator == (const NotificationService_getApiVersion_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const NotificationService_getApiVersion_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotificationService_getApiVersion_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotificationService_getApiVersion_presult__isset {
  _NotificationService_getApiVersion_presult__isset() : success(false) {}
  bool success :1;
} _NotificationService_getApiVersion_presult__isset;

class NotificationService_getApiVersion_presult {
 public:


  virtual ~NotificationService_getApiVersion_presult() throw();
  double* success;

  _NotificationService_getApiVersion_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _NotificationService_sendNotification_args__isset {
  _NotificationService_sendNotification_args__isset() : request(false) {}
  bool request :1;
} _NotificationService_sendNotification_args__isset;

class NotificationService_sendNotification_args {
 public:

  NotificationService_sendNotification_args(const NotificationService_sendNotification_args&);
  NotificationService_sendNotification_args& operator=(const NotificationService_sendNotification_args&);
  NotificationService_sendNotification_args() {
  }

  virtual ~NotificationService_sendNotification_args() throw();
  SendNotificationRequest request;

  _NotificationService_sendNotification_args__isset __isset;

  void __set_request(const SendNotificationRequest& val);

  bool operator == (const NotificationService_sendNotification_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const NotificationService_sendNotification_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotificationService_sendNotification_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class NotificationService_sendNotification_pargs {
 public:


  virtual ~NotificationService_sendNotification_pargs() throw();
  const SendNotificationRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotificationService_sendNotification_result__isset {
  _NotificationService_sendNotification_result__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _NotificationService_sendNotification_result__isset;

class NotificationService_sendNotification_result {
 public:

  NotificationService_sendNotification_result(const NotificationService_sendNotification_result&);
  NotificationService_sendNotification_result& operator=(const NotificationService_sendNotification_result&);
  NotificationService_sendNotification_result() {
  }

  virtual ~NotificationService_sendNotification_result() throw();
  SendNotificationResponse success;
  InvalidArgumentException ex1;
  OperationFailedException ex2;
  InvalidTokenException ex3;

  _NotificationService_sendNotification_result__isset __isset;

  void __set_success(const SendNotificationResponse& val);

  void __set_ex1(const InvalidArgumentException& val);

  void __set_ex2(const OperationFailedException& val);

  void __set_ex3(const InvalidTokenException& val);

  bool operator == (const NotificationService_sendNotification_result & rhs) const
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
  bool operator != (const NotificationService_sendNotification_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotificationService_sendNotification_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotificationService_sendNotification_presult__isset {
  _NotificationService_sendNotification_presult__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _NotificationService_sendNotification_presult__isset;

class NotificationService_sendNotification_presult {
 public:


  virtual ~NotificationService_sendNotification_presult() throw();
  SendNotificationResponse* success;
  InvalidArgumentException* ex1;
  OperationFailedException* ex2;
  InvalidTokenException* ex3;

  _NotificationService_sendNotification_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class NotificationServiceClient : virtual public NotificationServiceIf {
 public:
  NotificationServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  NotificationServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  double getApiVersion();
  void send_getApiVersion();
  double recv_getApiVersion();
  void sendNotification(SendNotificationResponse& _return, const SendNotificationRequest& request);
  void send_sendNotification(const SendNotificationRequest& request);
  void recv_sendNotification(SendNotificationResponse& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class NotificationServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<NotificationServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (NotificationServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getApiVersion(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_sendNotification(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  NotificationServiceProcessor(boost::shared_ptr<NotificationServiceIf> iface) :
    iface_(iface) {
    processMap_["getApiVersion"] = &NotificationServiceProcessor::process_getApiVersion;
    processMap_["sendNotification"] = &NotificationServiceProcessor::process_sendNotification;
  }

  virtual ~NotificationServiceProcessor() {}
};

class NotificationServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  NotificationServiceProcessorFactory(const ::boost::shared_ptr< NotificationServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< NotificationServiceIfFactory > handlerFactory_;
};

class NotificationServiceMultiface : virtual public NotificationServiceIf {
 public:
  NotificationServiceMultiface(std::vector<boost::shared_ptr<NotificationServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~NotificationServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<NotificationServiceIf> > ifaces_;
  NotificationServiceMultiface() {}
  void add(boost::shared_ptr<NotificationServiceIf> iface) {
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

  void sendNotification(SendNotificationResponse& _return, const SendNotificationRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->sendNotification(_return, request);
    }
    ifaces_[i]->sendNotification(_return, request);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class NotificationServiceConcurrentClient : virtual public NotificationServiceIf {
 public:
  NotificationServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  NotificationServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  double getApiVersion();
  int32_t send_getApiVersion();
  double recv_getApiVersion(const int32_t seqid);
  void sendNotification(SendNotificationResponse& _return, const SendNotificationRequest& request);
  int32_t send_sendNotification(const SendNotificationRequest& request);
  void recv_sendNotification(SendNotificationResponse& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

}}}} // namespace

#endif
