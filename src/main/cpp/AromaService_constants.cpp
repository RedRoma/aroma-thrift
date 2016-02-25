/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "AromaService_constants.h"

namespace aroma { namespace thrift { namespace service {

const AromaServiceConstants g_AromaService_constants;

AromaServiceConstants::AromaServiceConstants() {
  API_VERSION = 1.7;

  SERVICE_PORT = 7010;

  PRODUCTION_ENDPOINT.hostname = "aroma-srv.aroma.tech";
   ::aroma::thrift::endpoint::int tmp217;
  tmp217 = 7010;

  PRODUCTION_ENDPOINT.port = tmp217;

  BETA_ENDPOINT.hostname = "aroma-srv.beta.aroma.tech";
   ::aroma::thrift::endpoint::int tmp218;
  tmp218 = 7010;

  BETA_ENDPOINT.port = tmp218;

   ::tech::aroma::thrift::int tmp219;
  tmp219 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.width = tmp219;
   ::tech::aroma::thrift::int tmp220;
  tmp220 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.height = tmp220;

   ::tech::aroma::thrift::int tmp221;
  tmp221 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.width = tmp221;
   ::tech::aroma::thrift::int tmp222;
  tmp222 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.height = tmp222;

  MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES = 100;

  MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES = 100;

  MAX_MESSAGE_LENGTH = 5000;

   ::tech::aroma::thrift::long tmp223;
  tmp223 = 3LL;

  DEFAULT_INBOX_LIFETIME.value = tmp223;
  DEFAULT_INBOX_LIFETIME.unit = ( ::tech::aroma::thrift::TimeUnit::type)5;

  APPLICATION_NAME_MAX_LENGTH = 20;

  APPLICATION_MAX_OWNERS = 10;

}

}}} // namespace
