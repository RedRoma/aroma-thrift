/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BananaService_CONSTANTS_H
#define BananaService_CONSTANTS_H

#include "BananaService_types.h"

namespace aroma { namespace banana { namespace thrift { namespace service {

class BananaServiceConstants {
 public:
  BananaServiceConstants();

  double API_VERSION;
  int SERVICE_PORT;
   ::aroma::banana::thrift::endpoint::TcpEndpoint PRODUCTION_ENDPOINT;
   ::aroma::banana::thrift::endpoint::TcpEndpoint BETA_ENDPOINT;
   ::aroma::banana::thrift::Dimension MAX_APPLICATION_ICON_DIMENSION;
   ::aroma::banana::thrift::Dimension MAX_PROFILE_IMAGE_DIMENSION;
  int MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES;
  int MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES;
  int MAX_MESSAGE_LENGTH;
   ::aroma::banana::thrift::LengthOfTime DEFAULT_INBOX_LIFETIME;
  int APPLICATION_NAME_MAX_LENGTH;
  int APPLICATION_MAX_OWNERS;
};

extern const BananaServiceConstants g_BananaService_constants;

}}}} // namespace

#endif
