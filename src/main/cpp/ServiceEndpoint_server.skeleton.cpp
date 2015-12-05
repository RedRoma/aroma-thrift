// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ServiceEndpoint.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::aroma::banana::thrift::endpoint;

class ServiceEndpointHandler : virtual public ServiceEndpointIf {
 public:
  ServiceEndpointHandler() {
    // Your initialization goes here
  }

  void healthPoke(HealthPokeResponse& _return, const HealthPokeRequest& request) {
    // Your implementation goes here
    printf("healthPoke\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<ServiceEndpointHandler> handler(new ServiceEndpointHandler());
  shared_ptr<TProcessor> processor(new ServiceEndpointProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

