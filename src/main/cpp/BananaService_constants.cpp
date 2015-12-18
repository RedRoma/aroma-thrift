/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "BananaService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace service {

const BananaServiceConstants g_BananaService_constants;

BananaServiceConstants::BananaServiceConstants() {
  API_VERSION = 1.3;

  PRODUCTION_ENDPOINT.hostname = "banana-service.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp136;
  tmp136 = 7001;

  PRODUCTION_ENDPOINT.port = tmp136;

  BETA_ENDPOINT.hostname = "banana-service-beta.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp137;
  tmp137 = 7001;

  BETA_ENDPOINT.port = tmp137;

   ::aroma::banana::thrift::int tmp138;
  tmp138 = 500;

  MAX_ICON_DIMENSION.width = tmp138;
   ::aroma::banana::thrift::int tmp139;
  tmp139 = 500;

  MAX_ICON_DIMENSION.height = tmp139;

  MAX_ICON_SIZE_IN_KILOBYTES = 40;

}

}}}} // namespace

