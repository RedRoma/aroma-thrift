/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "ApplicationService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace application { namespace service {

const ApplicationServiceConstants g_ApplicationService_constants;

ApplicationServiceConstants::ApplicationServiceConstants() {
  SERVICE_PORT = 7005;

  PRODUCTION_ENDPOINT.hostname = "application-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp5;
  tmp5 = 7005;

  PRODUCTION_ENDPOINT.port = tmp5;

  BETA_ENDPOINT.hostname = "application-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp6;
  tmp6 = 7005;

  BETA_ENDPOINT.port = tmp6;

}

}}}}} // namespace

