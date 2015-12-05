/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef CustomBananaChannel_H
#define CustomBananaChannel_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "Channels_types.h"

namespace aroma { namespace banana { namespace thrift { namespace channels {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class CustomBananaChannelIf {
 public:
  virtual ~CustomBananaChannelIf() {}
  virtual void receiveMessage(const ReceiveMessageRequest& request) = 0;
};

class CustomBananaChannelIfFactory {
 public:
  typedef CustomBananaChannelIf Handler;

  virtual ~CustomBananaChannelIfFactory() {}

  virtual CustomBananaChannelIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(CustomBananaChannelIf* /* handler */) = 0;
};

class CustomBananaChannelIfSingletonFactory : virtual public CustomBananaChannelIfFactory {
 public:
  CustomBananaChannelIfSingletonFactory(const boost::shared_ptr<CustomBananaChannelIf>& iface) : iface_(iface) {}
  virtual ~CustomBananaChannelIfSingletonFactory() {}

  virtual CustomBananaChannelIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(CustomBananaChannelIf* /* handler */) {}

 protected:
  boost::shared_ptr<CustomBananaChannelIf> iface_;
};

class CustomBananaChannelNull : virtual public CustomBananaChannelIf {
 public:
  virtual ~CustomBananaChannelNull() {}
  void receiveMessage(const ReceiveMessageRequest& /* request */) {
    return;
  }
};

typedef struct _CustomBananaChannel_receiveMessage_args__isset {
  _CustomBananaChannel_receiveMessage_args__isset() : request(false) {}
  bool request :1;
} _CustomBananaChannel_receiveMessage_args__isset;

class CustomBananaChannel_receiveMessage_args {
 public:

  CustomBananaChannel_receiveMessage_args(const CustomBananaChannel_receiveMessage_args&);
  CustomBananaChannel_receiveMessage_args& operator=(const CustomBananaChannel_receiveMessage_args&);
  CustomBananaChannel_receiveMessage_args() {
  }

  virtual ~CustomBananaChannel_receiveMessage_args() throw();
  ReceiveMessageRequest request;

  _CustomBananaChannel_receiveMessage_args__isset __isset;

  void __set_request(const ReceiveMessageRequest& val);

  bool operator == (const CustomBananaChannel_receiveMessage_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const CustomBananaChannel_receiveMessage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomBananaChannel_receiveMessage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CustomBananaChannel_receiveMessage_pargs {
 public:


  virtual ~CustomBananaChannel_receiveMessage_pargs() throw();
  const ReceiveMessageRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class CustomBananaChannelClient : virtual public CustomBananaChannelIf {
 public:
  CustomBananaChannelClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  CustomBananaChannelClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
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
  void receiveMessage(const ReceiveMessageRequest& request);
  void send_receiveMessage(const ReceiveMessageRequest& request);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class CustomBananaChannelProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<CustomBananaChannelIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (CustomBananaChannelProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_receiveMessage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  CustomBananaChannelProcessor(boost::shared_ptr<CustomBananaChannelIf> iface) :
    iface_(iface) {
    processMap_["receiveMessage"] = &CustomBananaChannelProcessor::process_receiveMessage;
  }

  virtual ~CustomBananaChannelProcessor() {}
};

class CustomBananaChannelProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  CustomBananaChannelProcessorFactory(const ::boost::shared_ptr< CustomBananaChannelIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< CustomBananaChannelIfFactory > handlerFactory_;
};

class CustomBananaChannelMultiface : virtual public CustomBananaChannelIf {
 public:
  CustomBananaChannelMultiface(std::vector<boost::shared_ptr<CustomBananaChannelIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~CustomBananaChannelMultiface() {}
 protected:
  std::vector<boost::shared_ptr<CustomBananaChannelIf> > ifaces_;
  CustomBananaChannelMultiface() {}
  void add(boost::shared_ptr<CustomBananaChannelIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void receiveMessage(const ReceiveMessageRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->receiveMessage(request);
    }
    ifaces_[i]->receiveMessage(request);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class CustomBananaChannelConcurrentClient : virtual public CustomBananaChannelIf {
 public:
  CustomBananaChannelConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  CustomBananaChannelConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
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
  void receiveMessage(const ReceiveMessageRequest& request);
  void send_receiveMessage(const ReceiveMessageRequest& request);
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
