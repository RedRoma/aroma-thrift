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
var Endpoint_ttypes = require('./Endpoint_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
CreateUserTokenRequest = module.exports.CreateUserTokenRequest = function(args) {
  this.userId = null;
  this.lifetime = null;
  if (args) {
    if (args.userId !== undefined && args.userId !== null) {
      this.userId = args.userId;
    }
    if (args.lifetime !== undefined && args.lifetime !== null) {
      this.lifetime = new Banana_ttypes.TimePeriod(args.lifetime);
    }
  }
};
CreateUserTokenRequest.prototype = {};
CreateUserTokenRequest.prototype.read = function(input) {
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
        this.userId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.lifetime = new Banana_ttypes.TimePeriod();
        this.lifetime.read(input);
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

CreateUserTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('CreateUserTokenRequest');
  if (this.userId !== null && this.userId !== undefined) {
    output.writeFieldBegin('userId', Thrift.Type.STRING, 1);
    output.writeString(this.userId);
    output.writeFieldEnd();
  }
  if (this.lifetime !== null && this.lifetime !== undefined) {
    output.writeFieldBegin('lifetime', Thrift.Type.STRUCT, 2);
    this.lifetime.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

CreateUserTokenResponse = module.exports.CreateUserTokenResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.UserToken(args.token);
    }
  }
};
CreateUserTokenResponse.prototype = {};
CreateUserTokenResponse.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.UserToken();
        this.token.read(input);
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

CreateUserTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('CreateUserTokenResponse');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

CreateApplicationTokenRequest = module.exports.CreateApplicationTokenRequest = function(args) {
  this.applicationId = null;
  this.lifetime = null;
  if (args) {
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.lifetime !== undefined && args.lifetime !== null) {
      this.lifetime = new Banana_ttypes.TimePeriod(args.lifetime);
    }
  }
};
CreateApplicationTokenRequest.prototype = {};
CreateApplicationTokenRequest.prototype.read = function(input) {
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
        this.applicationId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.lifetime = new Banana_ttypes.TimePeriod();
        this.lifetime.read(input);
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

CreateApplicationTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('CreateApplicationTokenRequest');
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 1);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  if (this.lifetime !== null && this.lifetime !== undefined) {
    output.writeFieldBegin('lifetime', Thrift.Type.STRUCT, 2);
    this.lifetime.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

CreateApplicationTokenResponse = module.exports.CreateApplicationTokenResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.ApplicationToken(args.token);
    }
  }
};
CreateApplicationTokenResponse.prototype = {};
CreateApplicationTokenResponse.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.ApplicationToken();
        this.token.read(input);
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

CreateApplicationTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('CreateApplicationTokenResponse');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateApplicationTokenRequest = module.exports.InvalidateApplicationTokenRequest = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.ApplicationToken(args.token);
    }
  }
};
InvalidateApplicationTokenRequest.prototype = {};
InvalidateApplicationTokenRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.ApplicationToken();
        this.token.read(input);
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

InvalidateApplicationTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('InvalidateApplicationTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateApplicationTokenResponse = module.exports.InvalidateApplicationTokenResponse = function(args) {
};
InvalidateApplicationTokenResponse.prototype = {};
InvalidateApplicationTokenResponse.prototype.read = function(input) {
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
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

InvalidateApplicationTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('InvalidateApplicationTokenResponse');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateUserTokenRequest = module.exports.InvalidateUserTokenRequest = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.ApplicationToken(args.token);
    }
  }
};
InvalidateUserTokenRequest.prototype = {};
InvalidateUserTokenRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.ApplicationToken();
        this.token.read(input);
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

InvalidateUserTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('InvalidateUserTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateUserTokenResponse = module.exports.InvalidateUserTokenResponse = function(args) {
};
InvalidateUserTokenResponse.prototype = {};
InvalidateUserTokenResponse.prototype.read = function(input) {
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
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

InvalidateUserTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('InvalidateUserTokenResponse');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyUserTokenRequest = module.exports.VerifyUserTokenRequest = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.UserToken(args.token);
    }
  }
};
VerifyUserTokenRequest.prototype = {};
VerifyUserTokenRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.UserToken();
        this.token.read(input);
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

VerifyUserTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('VerifyUserTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyUserTokenResponse = module.exports.VerifyUserTokenResponse = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
VerifyUserTokenResponse.prototype = {};
VerifyUserTokenResponse.prototype.read = function(input) {
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

VerifyUserTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('VerifyUserTokenResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyApplicationTokenRequest = module.exports.VerifyApplicationTokenRequest = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.ApplicationToken(args.token);
    }
  }
};
VerifyApplicationTokenRequest.prototype = {};
VerifyApplicationTokenRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.ApplicationToken();
        this.token.read(input);
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

VerifyApplicationTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('VerifyApplicationTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyApplicationTokenResponse = module.exports.VerifyApplicationTokenResponse = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
VerifyApplicationTokenResponse.prototype = {};
VerifyApplicationTokenResponse.prototype.read = function(input) {
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

VerifyApplicationTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('VerifyApplicationTokenResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ttypes.API_VERSION = 1.4;
ttypes.SERVICE_PORT = 6001;
ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'authentication-srv.banana.aroma.tech','port' : 6001});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'authentication-srv.beta.banana.aroma.tech','port' : 6001});
