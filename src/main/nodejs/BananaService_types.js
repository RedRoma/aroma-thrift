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
var Exceptions_ttypes = require('./Exceptions_types')
var Notifications_ttypes = require('./Notifications_types')


var ttypes = module.exports = {};
SignInRequest = module.exports.SignInRequest = function(args) {
  this.oathToken = null;
  this.username = null;
  if (args) {
    if (args.oathToken !== undefined && args.oathToken !== null) {
      this.oathToken = new Authentication_ttypes.OauthToken(args.oathToken);
    }
    if (args.username !== undefined && args.username !== null) {
      this.username = args.username;
    }
  }
};
SignInRequest.prototype = {};
SignInRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.oathToken = new Authentication_ttypes.OauthToken();
        this.oathToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.username = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SignInRequest.prototype.write = function(output) {
  output.writeStructBegin('SignInRequest');
  if (this.oathToken !== null && this.oathToken !== undefined) {
    output.writeFieldBegin('oathToken', Thrift.Type.STRUCT, 1);
    this.oathToken.write(output);
    output.writeFieldEnd();
  }
  if (this.username !== null && this.username !== undefined) {
    output.writeFieldBegin('username', Thrift.Type.STRING, 2);
    output.writeString(this.username);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SignInResponse = module.exports.SignInResponse = function(args) {
  this.developerToken = null;
  if (args) {
    if (args.developerToken !== undefined && args.developerToken !== null) {
      this.developerToken = new Authentication_ttypes.DeveloperToken(args.developerToken);
    }
  }
};
SignInResponse.prototype = {};
SignInResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.developerToken = new Authentication_ttypes.DeveloperToken();
        this.developerToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SignInResponse.prototype.write = function(output) {
  output.writeStructBegin('SignInResponse');
  if (this.developerToken !== null && this.developerToken !== undefined) {
    output.writeFieldBegin('developerToken', Thrift.Type.STRUCT, 1);
    this.developerToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ProvisionServiceRequest = module.exports.ProvisionServiceRequest = function(args) {
  this.token = null;
  this.serviceName = null;
  this.programmingLanguage = null;
  this.organization = null;
  this.icon = null;
  this.developerToken = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = args.token;
    }
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
    if (args.programmingLanguage !== undefined && args.programmingLanguage !== null) {
      this.programmingLanguage = args.programmingLanguage;
    }
    if (args.organization !== undefined && args.organization !== null) {
      this.organization = args.organization;
    }
    if (args.icon !== undefined && args.icon !== null) {
      this.icon = new Banana_ttypes.Image(args.icon);
    }
    if (args.developerToken !== undefined && args.developerToken !== null) {
      this.developerToken = new Authentication_ttypes.DeveloperToken(args.developerToken);
    }
  }
};
ProvisionServiceRequest.prototype = {};
ProvisionServiceRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.token = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.programmingLanguage = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.organization = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.icon = new Banana_ttypes.Image();
        this.icon.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRUCT) {
        this.developerToken = new Authentication_ttypes.DeveloperToken();
        this.developerToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ProvisionServiceRequest.prototype.write = function(output) {
  output.writeStructBegin('ProvisionServiceRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRING, 1);
    output.writeString(this.token);
    output.writeFieldEnd();
  }
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 2);
    output.writeString(this.serviceName);
    output.writeFieldEnd();
  }
  if (this.programmingLanguage !== null && this.programmingLanguage !== undefined) {
    output.writeFieldBegin('programmingLanguage', Thrift.Type.STRING, 3);
    output.writeString(this.programmingLanguage);
    output.writeFieldEnd();
  }
  if (this.organization !== null && this.organization !== undefined) {
    output.writeFieldBegin('organization', Thrift.Type.STRING, 4);
    output.writeString(this.organization);
    output.writeFieldEnd();
  }
  if (this.icon !== null && this.icon !== undefined) {
    output.writeFieldBegin('icon', Thrift.Type.STRUCT, 5);
    this.icon.write(output);
    output.writeFieldEnd();
  }
  if (this.developerToken !== null && this.developerToken !== undefined) {
    output.writeFieldBegin('developerToken', Thrift.Type.STRUCT, 6);
    this.developerToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ProvisionServiceResponse = module.exports.ProvisionServiceResponse = function(args) {
  this.bananaToken = null;
  this.serviceName = null;
  this.serviceToken = null;
  if (args) {
    if (args.bananaToken !== undefined && args.bananaToken !== null) {
      this.bananaToken = args.bananaToken;
    }
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new Authentication_ttypes.ServiceToken(args.serviceToken);
    }
  }
};
ProvisionServiceResponse.prototype = {};
ProvisionServiceResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.bananaToken = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new Authentication_ttypes.ServiceToken();
        this.serviceToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ProvisionServiceResponse.prototype.write = function(output) {
  output.writeStructBegin('ProvisionServiceResponse');
  if (this.bananaToken !== null && this.bananaToken !== undefined) {
    output.writeFieldBegin('bananaToken', Thrift.Type.STRING, 1);
    output.writeString(this.bananaToken);
    output.writeFieldEnd();
  }
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 2);
    output.writeString(this.serviceName);
    output.writeFieldEnd();
  }
  if (this.serviceToken !== null && this.serviceToken !== undefined) {
    output.writeFieldBegin('serviceToken', Thrift.Type.STRUCT, 3);
    this.serviceToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SubscribeToServiceRequest = module.exports.SubscribeToServiceRequest = function(args) {
  this.token = null;
  this.serviceName = null;
  this.organization = null;
  this.shared = false;
  this.developerToken = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = args.token;
    }
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
    if (args.organization !== undefined && args.organization !== null) {
      this.organization = args.organization;
    }
    if (args.shared !== undefined && args.shared !== null) {
      this.shared = args.shared;
    }
    if (args.developerToken !== undefined && args.developerToken !== null) {
      this.developerToken = new Authentication_ttypes.DeveloperToken(args.developerToken);
    }
  }
};
SubscribeToServiceRequest.prototype = {};
SubscribeToServiceRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.token = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.organization = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.BOOL) {
        this.shared = input.readBool();
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.developerToken = new Authentication_ttypes.DeveloperToken();
        this.developerToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SubscribeToServiceRequest.prototype.write = function(output) {
  output.writeStructBegin('SubscribeToServiceRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRING, 1);
    output.writeString(this.token);
    output.writeFieldEnd();
  }
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 2);
    output.writeString(this.serviceName);
    output.writeFieldEnd();
  }
  if (this.organization !== null && this.organization !== undefined) {
    output.writeFieldBegin('organization', Thrift.Type.STRING, 3);
    output.writeString(this.organization);
    output.writeFieldEnd();
  }
  if (this.shared !== null && this.shared !== undefined) {
    output.writeFieldBegin('shared', Thrift.Type.BOOL, 4);
    output.writeBool(this.shared);
    output.writeFieldEnd();
  }
  if (this.developerToken !== null && this.developerToken !== undefined) {
    output.writeFieldBegin('developerToken', Thrift.Type.STRUCT, 5);
    this.developerToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SubscribeToServiceResponse = module.exports.SubscribeToServiceResponse = function(args) {
  this.message = null;
  this.channel = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
    if (args.channel !== undefined && args.channel !== null) {
      this.channel = new Channels_ttypes.BananaChannel(args.channel);
    }
  }
};
SubscribeToServiceResponse.prototype = {};
SubscribeToServiceResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.channel = new Channels_ttypes.BananaChannel();
        this.channel.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SubscribeToServiceResponse.prototype.write = function(output) {
  output.writeStructBegin('SubscribeToServiceResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  if (this.channel !== null && this.channel !== undefined) {
    output.writeFieldBegin('channel', Thrift.Type.STRUCT, 2);
    this.channel.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegisterHealthCheckRequest = module.exports.RegisterHealthCheckRequest = function(args) {
  this.endpoint = null;
  this.developerToken = null;
  if (args) {
    if (args.endpoint !== undefined && args.endpoint !== null) {
      this.endpoint = new Endpoint_ttypes.Endpoint(args.endpoint);
    }
    if (args.developerToken !== undefined && args.developerToken !== null) {
      this.developerToken = new Authentication_ttypes.DeveloperToken(args.developerToken);
    }
  }
};
RegisterHealthCheckRequest.prototype = {};
RegisterHealthCheckRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.endpoint = new Endpoint_ttypes.Endpoint();
        this.endpoint.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.developerToken = new Authentication_ttypes.DeveloperToken();
        this.developerToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RegisterHealthCheckRequest.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckRequest');
  if (this.endpoint !== null && this.endpoint !== undefined) {
    output.writeFieldBegin('endpoint', Thrift.Type.STRUCT, 1);
    this.endpoint.write(output);
    output.writeFieldEnd();
  }
  if (this.developerToken !== null && this.developerToken !== undefined) {
    output.writeFieldBegin('developerToken', Thrift.Type.STRUCT, 2);
    this.developerToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegisterHealthCheckResponse = module.exports.RegisterHealthCheckResponse = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
RegisterHealthCheckResponse.prototype = {};
RegisterHealthCheckResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RegisterHealthCheckResponse.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RenewServiceTokenRequest = module.exports.RenewServiceTokenRequest = function(args) {
  this.serviceToken = null;
  this.timePeriod = null;
  this.developerToken = null;
  if (args) {
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new Authentication_ttypes.ServiceToken(args.serviceToken);
    }
    if (args.timePeriod !== undefined && args.timePeriod !== null) {
      this.timePeriod = new Banana_ttypes.TimePeriod(args.timePeriod);
    }
    if (args.developerToken !== undefined && args.developerToken !== null) {
      this.developerToken = new Authentication_ttypes.DeveloperToken(args.developerToken);
    }
  }
};
RenewServiceTokenRequest.prototype = {};
RenewServiceTokenRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new Authentication_ttypes.ServiceToken();
        this.serviceToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.timePeriod = new Banana_ttypes.TimePeriod();
        this.timePeriod.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.developerToken = new Authentication_ttypes.DeveloperToken();
        this.developerToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RenewServiceTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('RenewServiceTokenRequest');
  if (this.serviceToken !== null && this.serviceToken !== undefined) {
    output.writeFieldBegin('serviceToken', Thrift.Type.STRUCT, 1);
    this.serviceToken.write(output);
    output.writeFieldEnd();
  }
  if (this.timePeriod !== null && this.timePeriod !== undefined) {
    output.writeFieldBegin('timePeriod', Thrift.Type.STRUCT, 2);
    this.timePeriod.write(output);
    output.writeFieldEnd();
  }
  if (this.developerToken !== null && this.developerToken !== undefined) {
    output.writeFieldBegin('developerToken', Thrift.Type.STRUCT, 3);
    this.developerToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RenewServiceTokenResponse = module.exports.RenewServiceTokenResponse = function(args) {
  this.serviceToken = null;
  if (args) {
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new Authentication_ttypes.ServiceToken(args.serviceToken);
    }
  }
};
RenewServiceTokenResponse.prototype = {};
RenewServiceTokenResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new Authentication_ttypes.ServiceToken();
        this.serviceToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RenewServiceTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('RenewServiceTokenResponse');
  if (this.serviceToken !== null && this.serviceToken !== undefined) {
    output.writeFieldBegin('serviceToken', Thrift.Type.STRUCT, 1);
    this.serviceToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegenerateTokenRequest = module.exports.RegenerateTokenRequest = function(args) {
  this.serviceName = null;
  this.developerToken = null;
  if (args) {
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
    if (args.developerToken !== undefined && args.developerToken !== null) {
      this.developerToken = new Authentication_ttypes.DeveloperToken(args.developerToken);
    }
  }
};
RegenerateTokenRequest.prototype = {};
RegenerateTokenRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.developerToken = new Authentication_ttypes.DeveloperToken();
        this.developerToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RegenerateTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('RegenerateTokenRequest');
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 1);
    output.writeString(this.serviceName);
    output.writeFieldEnd();
  }
  if (this.developerToken !== null && this.developerToken !== undefined) {
    output.writeFieldBegin('developerToken', Thrift.Type.STRUCT, 2);
    this.developerToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegenerateTokenResponse = module.exports.RegenerateTokenResponse = function(args) {
  this.serviceToken = null;
  if (args) {
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new Authentication_ttypes.ServiceToken(args.serviceToken);
    }
  }
};
RegenerateTokenResponse.prototype = {};
RegenerateTokenResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new Authentication_ttypes.ServiceToken();
        this.serviceToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RegenerateTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('RegenerateTokenResponse');
  if (this.serviceToken !== null && this.serviceToken !== undefined) {
    output.writeFieldBegin('serviceToken', Thrift.Type.STRUCT, 1);
    this.serviceToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SendMessageRequest = module.exports.SendMessageRequest = function(args) {
  this.message = null;
  this.serviceToken = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = new Banana_ttypes.Message(args.message);
    }
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new Authentication_ttypes.ServiceToken(args.serviceToken);
    }
  }
};
SendMessageRequest.prototype = {};
SendMessageRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.message = new Banana_ttypes.Message();
        this.message.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new Authentication_ttypes.ServiceToken();
        this.serviceToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SendMessageRequest.prototype.write = function(output) {
  output.writeStructBegin('SendMessageRequest');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRUCT, 1);
    this.message.write(output);
    output.writeFieldEnd();
  }
  if (this.serviceToken !== null && this.serviceToken !== undefined) {
    output.writeFieldBegin('serviceToken', Thrift.Type.STRUCT, 2);
    this.serviceToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SendMessageResponse = module.exports.SendMessageResponse = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
SendMessageResponse.prototype = {};
SendMessageResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SendMessageResponse.prototype.write = function(output) {
  output.writeStructBegin('SendMessageResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'banana-service.aroma.tech','port' : 7001});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'banana-service-beta.aroma.tech','port' : 7001});
ttypes.MAX_ICON_DIMENSION = new Banana_ttypes.Dimension({
'width' : 500,'height' : 500});
ttypes.MAX_ICON_SIZE_IN_KILOBYTES = 40;
