//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


SERVICE_PORT = 7011;
PRODUCTION_ENDPOINT = new TcpEndpoint({
'hostname' : 'message-srv.aroma.tech','port' : 7011});
BETA_ENDPOINT = new TcpEndpoint({
'hostname' : 'message-srv.beta.aroma.tech','port' : 7011});
DEFAULT_MESSAGE_LIFETIME = new LengthOfTime({
'value' : 1,'unit' : 5});