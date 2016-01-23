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
CreateTokenRequest = module.exports.CreateTokenRequest = function(args) {
  this.ownerId = null;
  this.lifetime = null;
  this.desiredTokenType = null;
  this.ownerName = null;
  this.organizationId = null;
  this.organizationName = null;
  if (args) {
    if (args.ownerId !== undefined && args.ownerId !== null) {
      this.ownerId = args.ownerId;
    }
    if (args.lifetime !== undefined && args.lifetime !== null) {
      this.lifetime = new Banana_ttypes.LengthOfTime(args.lifetime);
    }
    if (args.desiredTokenType !== undefined && args.desiredTokenType !== null) {
      this.desiredTokenType = args.desiredTokenType;
    }
    if (args.ownerName !== undefined && args.ownerName !== null) {
      this.ownerName = args.ownerName;
    }
    if (args.organizationId !== undefined && args.organizationId !== null) {
      this.organizationId = args.organizationId;
    }
    if (args.organizationName !== undefined && args.organizationName !== null) {
      this.organizationName = args.organizationName;
    }
  }
};
CreateTokenRequest.prototype = {};
CreateTokenRequest.prototype.read = function(input) {
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
        this.ownerId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.lifetime = new Banana_ttypes.LengthOfTime();
        this.lifetime.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.desiredTokenType = input.readI32();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.ownerName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.organizationId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRING) {
        this.organizationName = input.readString();
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

CreateTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('CreateTokenRequest');
  if (this.ownerId !== null && this.ownerId !== undefined) {
    output.writeFieldBegin('ownerId', Thrift.Type.STRING, 1);
    output.writeString(this.ownerId);
    output.writeFieldEnd();
  }
  if (this.lifetime !== null && this.lifetime !== undefined) {
    output.writeFieldBegin('lifetime', Thrift.Type.STRUCT, 2);
    this.lifetime.write(output);
    output.writeFieldEnd();
  }
  if (this.desiredTokenType !== null && this.desiredTokenType !== undefined) {
    output.writeFieldBegin('desiredTokenType', Thrift.Type.I32, 3);
    output.writeI32(this.desiredTokenType);
    output.writeFieldEnd();
  }
  if (this.ownerName !== null && this.ownerName !== undefined) {
    output.writeFieldBegin('ownerName', Thrift.Type.STRING, 4);
    output.writeString(this.ownerName);
    output.writeFieldEnd();
  }
  if (this.organizationId !== null && this.organizationId !== undefined) {
    output.writeFieldBegin('organizationId', Thrift.Type.STRING, 5);
    output.writeString(this.organizationId);
    output.writeFieldEnd();
  }
  if (this.organizationName !== null && this.organizationName !== undefined) {
    output.writeFieldBegin('organizationName', Thrift.Type.STRING, 6);
    output.writeString(this.organizationName);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

CreateTokenResponse = module.exports.CreateTokenResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.AuthenticationToken(args.token);
    }
  }
};
CreateTokenResponse.prototype = {};
CreateTokenResponse.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.AuthenticationToken();
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

CreateTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('CreateTokenResponse');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetTokenInfoRequest = module.exports.GetTokenInfoRequest = function(args) {
  this.tokenId = null;
  this.tokenType = null;
  if (args) {
    if (args.tokenId !== undefined && args.tokenId !== null) {
      this.tokenId = args.tokenId;
    }
    if (args.tokenType !== undefined && args.tokenType !== null) {
      this.tokenType = args.tokenType;
    }
  }
};
GetTokenInfoRequest.prototype = {};
GetTokenInfoRequest.prototype.read = function(input) {
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
        this.tokenId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.tokenType = input.readI32();
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

GetTokenInfoRequest.prototype.write = function(output) {
  output.writeStructBegin('GetTokenInfoRequest');
  if (this.tokenId !== null && this.tokenId !== undefined) {
    output.writeFieldBegin('tokenId', Thrift.Type.STRING, 1);
    output.writeString(this.tokenId);
    output.writeFieldEnd();
  }
  if (this.tokenType !== null && this.tokenType !== undefined) {
    output.writeFieldBegin('tokenType', Thrift.Type.I32, 2);
    output.writeI32(this.tokenType);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetTokenInfoResponse = module.exports.GetTokenInfoResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.AuthenticationToken(args.token);
    }
  }
};
GetTokenInfoResponse.prototype = {};
GetTokenInfoResponse.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.AuthenticationToken();
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

GetTokenInfoResponse.prototype.write = function(output) {
  output.writeStructBegin('GetTokenInfoResponse');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateTokenRequest = module.exports.InvalidateTokenRequest = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.AuthenticationToken(args.token);
    }
  }
};
InvalidateTokenRequest.prototype = {};
InvalidateTokenRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.AuthenticationToken();
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

InvalidateTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('InvalidateTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateTokenResponse = module.exports.InvalidateTokenResponse = function(args) {
  this.message = 'Operation completed successfully';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
InvalidateTokenResponse.prototype = {};
InvalidateTokenResponse.prototype.read = function(input) {
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

InvalidateTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('InvalidateTokenResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyTokenRequest = module.exports.VerifyTokenRequest = function(args) {
  this.tokenId = null;
  this.ownerId = null;
  if (args) {
    if (args.tokenId !== undefined && args.tokenId !== null) {
      this.tokenId = args.tokenId;
    }
    if (args.ownerId !== undefined && args.ownerId !== null) {
      this.ownerId = args.ownerId;
    }
  }
};
VerifyTokenRequest.prototype = {};
VerifyTokenRequest.prototype.read = function(input) {
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
        this.tokenId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.ownerId = input.readString();
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

VerifyTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('VerifyTokenRequest');
  if (this.tokenId !== null && this.tokenId !== undefined) {
    output.writeFieldBegin('tokenId', Thrift.Type.STRING, 1);
    output.writeString(this.tokenId);
    output.writeFieldEnd();
  }
  if (this.ownerId !== null && this.ownerId !== undefined) {
    output.writeFieldBegin('ownerId', Thrift.Type.STRING, 2);
    output.writeString(this.ownerId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyTokenResponse = module.exports.VerifyTokenResponse = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
VerifyTokenResponse.prototype = {};
VerifyTokenResponse.prototype.read = function(input) {
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

VerifyTokenResponse.prototype.write = function(output) {
  output.writeStructBegin('VerifyTokenResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ttypes.SERVICE_PORT = 6001;
ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'authentication-srv.banana.aroma.tech','port' : 6001});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'authentication-srv.beta.banana.aroma.tech','port' : 6001});
