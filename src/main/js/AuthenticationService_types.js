//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


CreateTokenRequest = function(args) {
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
      this.lifetime = new LengthOfTime(args.lifetime);
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
        this.ownerId = input.readString().value;
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
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.desiredTokenType = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.ownerName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.organizationId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRING) {
        this.organizationName = input.readString().value;
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

CreateTokenResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new AuthenticationToken(args.token);
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
        this.token = new AuthenticationToken();
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

GetTokenInfoRequest = function(args) {
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
        this.tokenId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.tokenType = input.readI32().value;
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

GetTokenInfoResponse = function(args) {
  this.token = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new AuthenticationToken(args.token);
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
        this.token = new AuthenticationToken();
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

InvalidateTokenRequest = function(args) {
  this.token = null;
  this.multipleTokens = [];
  this.belongingTo = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new AuthenticationToken(args.token);
    }
    if (args.multipleTokens !== undefined && args.multipleTokens !== null) {
      this.multipleTokens = Thrift.copyList(args.multipleTokens, [null]);
    }
    if (args.belongingTo !== undefined && args.belongingTo !== null) {
      this.belongingTo = args.belongingTo;
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
        this.token = new AuthenticationToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.LIST) {
        var _size0 = 0;
        var _rtmp34;
        this.multipleTokens = [];
        var _etype3 = 0;
        _rtmp34 = input.readListBegin();
        _etype3 = _rtmp34.etype;
        _size0 = _rtmp34.size;
        for (var _i5 = 0; _i5 < _size0; ++_i5)
        {
          var elem6 = null;
          elem6 = new AuthenticationToken();
          elem6.read(input);
          this.multipleTokens.push(elem6);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.belongingTo = input.readString().value;
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

InvalidateTokenRequest.prototype.write = function(output) {
  output.writeStructBegin('InvalidateTokenRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.multipleTokens !== null && this.multipleTokens !== undefined) {
    output.writeFieldBegin('multipleTokens', Thrift.Type.LIST, 2);
    output.writeListBegin(Thrift.Type.STRUCT, this.multipleTokens.length);
    for (var iter7 in this.multipleTokens)
    {
      if (this.multipleTokens.hasOwnProperty(iter7))
      {
        iter7 = this.multipleTokens[iter7];
        iter7.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.belongingTo !== null && this.belongingTo !== undefined) {
    output.writeFieldBegin('belongingTo', Thrift.Type.STRING, 3);
    output.writeString(this.belongingTo);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidateTokenResponse = function(args) {
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

VerifyTokenRequest = function(args) {
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
        this.tokenId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.ownerId = input.readString().value;
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

VerifyTokenResponse = function(args) {
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

SERVICE_PORT = 7026;
PRODUCTION_ENDPOINT = new TcpEndpoint({
'hostname' : 'authentication-srv.aroma.tech','port' : 7026});
BETA_ENDPOINT = new TcpEndpoint({
'hostname' : 'authentication-srv.beta.aroma.tech','port' : 7026});
DEFAULT_TOKEN_LIFETIME = new LengthOfTime({
'value' : 60,'unit' : 5});
