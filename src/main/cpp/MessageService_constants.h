/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MessageService_CONSTANTS_H
#define MessageService_CONSTANTS_H

#include "MessageService_types.h"

namespace aroma { namespace thrift { namespace message { namespace service {

class MessageServiceConstants {
 public:
  MessageServiceConstants();

  int SERVICE_PORT;
   ::aroma::thrift::endpoint::TcpEndpoint PRODUCTION_ENDPOINT;
   ::aroma::thrift::endpoint::TcpEndpoint BETA_ENDPOINT;
   ::tech::aroma::thrift::LengthOfTime DEFAULT_MESSAGE_LIFETIME;
};

extern const MessageServiceConstants g_MessageService_constants;

}}}} // namespace

#endif
