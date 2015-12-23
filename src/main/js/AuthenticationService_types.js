//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


TokenType = {
  'APPLICATION' : 1,
  'USER' : 2
};
CreateUserTokenRequest = function(args) {
  this.userId = null;
  this.lifetime = null;
  if (args) {
    if (args.userId !== undefined && args.userId !== null) {
      this.userId = args.userId;
    }
    if (args.lifetime !== undefined && args.lifetime !== null) {
      this.lifetime = new LengthOfTime(args.lifetime);
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
        this.userId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.lifetime = new LengthOfTime();
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

CreateUserTokenResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new UserToken(args.token);
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
        this.token = new UserToken();
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

CreateApplicationTokenRequest = function(args) {
  this.applicationId = null;
  this.lifetime = null;
  if (args) {
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.lifetime !== undefined && args.lifetime !== null) {
      this.lifetime = new LengthOfTime(args.lifetime);
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
        this.applicationId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.lifetime = new LengthOfTime();
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

CreateApplicationTokenResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new ApplicationToken(args.token);
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
        this.token = new ApplicationToken();
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

GetApplicationTokenInfoRequest = function(args) {
  this.tokenId = null;
  if (args) {
    if (args.tokenId !== undefined && args.tokenId !== null) {
      this.tokenId = args.tokenId;
    }
  }
};
GetApplicationTokenInfoRequest.prototype = {};
GetApplicationTokenInfoRequest.prototype.read = function(input) {
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
        this.tokenId = input.readString().value;
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

GetApplicationTokenInfoRequest.prototype.write = function(output) {
  output.writeStructBegin('GetApplicationTokenInfoRequest');
  if (this.tokenId !== null && this.tokenId !== undefined) {
    output.writeFieldBegin('tokenId', Thrift.Type.STRING, 1);
    output.writeString(this.tokenId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetApplicationTokenInfoResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new ApplicationToken(args.token);
    }
  }
};
GetApplicationTokenInfoResponse.prototype = {};
GetApplicationTokenInfoResponse.prototype.read = function(input) {
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
        this.token = new ApplicationToken();
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

GetApplicationTokenInfoResponse.prototype.write = function(output) {
  output.writeStructBegin('GetApplicationTokenInfoResponse');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetUserTokenInfoRequest = function(args) {
  this.tokenId = null;
  if (args) {
    if (args.tokenId !== undefined && args.tokenId !== null) {
      this.tokenId = args.tokenId;
    }
  }
};
GetUserTokenInfoRequest.prototype = {};
GetUserTokenInfoRequest.prototype.read = function(input) {
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
        this.tokenId = input.readString().value;
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

GetUserTokenInfoRequest.prototype.write = function(output) {
  output.writeStructBegin('GetUserTokenInfoRequest');
  if (this.tokenId !== null && this.tokenId !== undefined) {
    output.writeFieldBegin('tokenId', Thrift.Type.STRING, 1);
    output.writeString(this.tokenId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetUserTokenInfoResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new UserToken(args.token);
    }
  }
};
GetUserTokenInfoResponse.prototype = {};
GetUserTokenInfoResponse.prototype.read = function(input) {
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
        this.token = new UserToken();
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

GetUserTokenInfoResponse.prototype.write = function(output) {
  output.writeStructBegin('GetUserTokenInfoResponse');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateApplicationTokenRequest = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new ApplicationToken(args.token);
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
        this.token = new ApplicationToken();
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

InvalidateApplicationTokenResponse = function(args) {
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

InvalidateUserTokenRequest = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new ApplicationToken(args.token);
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
        this.token = new ApplicationToken();
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

InvalidateUserTokenResponse = function(args) {
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

VerifyUserTokenRequest = function(args) {
  this.token = null;
  this.userId = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new UserToken(args.token);
    }
    if (args.userId !== undefined && args.userId !== null) {
      this.userId = args.userId;
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
        this.token = new UserToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.userId = input.readString().value;
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

VerifyUserTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('VerifyUserTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.userId !== null && this.userId !== undefined) {
    output.writeFieldBegin('userId', Thrift.Type.STRING, 2);
    output.writeString(this.userId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyUserTokenResponse = function(args) {
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
        this.message = input.readString().value;
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

VerifyApplicationTokenRequest = function(args) {
  this.token = null;
  this.applicationId = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new ApplicationToken(args.token);
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
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
        this.token = new ApplicationToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.applicationId = input.readString().value;
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

VerifyApplicationTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('VerifyApplicationTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 2);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

VerifyApplicationTokenResponse = function(args) {
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
        this.message = input.readString().value;
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

API_VERSION = 1.4;
SERVICE_PORT = 6001;
PRODUCTION_ENDPOINT = new TcpEndpoint({
'hostname' : 'authentication-srv.banana.aroma.tech','port' : 6001});
BETA_ENDPOINT = new TcpEndpoint({
'hostname' : 'authentication-srv.beta.banana.aroma.tech','port' : 6001});
