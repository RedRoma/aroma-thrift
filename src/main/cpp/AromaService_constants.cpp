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
   ::aroma::thrift::endpoint::int tmp209;
  tmp209 = 7010;

  PRODUCTION_ENDPOINT.port = tmp209;

  BETA_ENDPOINT.hostname = "aroma-srv.beta.aroma.tech";
   ::aroma::thrift::endpoint::int tmp210;
  tmp210 = 7010;

  BETA_ENDPOINT.port = tmp210;

   ::tech::aroma::thrift::int tmp211;
  tmp211 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.width = tmp211;
   ::tech::aroma::thrift::int tmp212;
  tmp212 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.height = tmp212;

   ::tech::aroma::thrift::int tmp213;
  tmp213 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.width = tmp213;
   ::tech::aroma::thrift::int tmp214;
  tmp214 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.height = tmp214;

  MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES = 100;

  MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES = 100;

  MAX_MESSAGE_LENGTH = 5000;

   ::tech::aroma::thrift::long tmp215;
  tmp215 = 3LL;

  DEFAULT_INBOX_LIFETIME.value = tmp215;
  DEFAULT_INBOX_LIFETIME.unit = ( ::tech::aroma::thrift::TimeUnit::type)4;

  APPLICATION_NAME_MAX_LENGTH = 20;

  APPLICATION_MAX_OWNERS = 10;

}

}}} // namespace

