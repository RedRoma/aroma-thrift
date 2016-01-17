//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Authentication_ttypes = require('./Authentication_types')
var Banana_ttypes = require('./Banana_types')
var Channels_ttypes = require('./Channels_types')
var Endpoint_ttypes = require('./Endpoint_types')
var Events_ttypes = require('./Events_types')
var Exceptions_ttypes = require('./Exceptions_types')
var ApplicationService_ttypes = require('./ApplicationService_types')
var BananaService_ttypes = require('./BananaService_types')


var ttypes = module.exports = {};
ttypes.SERVICE_PORT = 7011;
ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'message-srv.banana.aroma.tech','port' : 7011});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'message-srv.beta.banana.aroma.tech','port' : 7011});