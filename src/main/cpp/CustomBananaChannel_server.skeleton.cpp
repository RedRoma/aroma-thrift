// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "CustomBananaChannel.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::aroma::banana::thrift::channels;

class CustomBananaChannelHandler : virtual public CustomBananaChannelIf {
 public:
  CustomBananaChannelHandler() {
    // Your initialization goes here
  }

  void receiveMessage(const ReceiveMessageRequest& request) {
    // Your implementation goes here
    printf("receiveMessage\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<CustomBananaChannelHandler> handler(new CustomBananaChannelHandler());
  shared_ptr<TProcessor> processor(new CustomBananaChannelProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
