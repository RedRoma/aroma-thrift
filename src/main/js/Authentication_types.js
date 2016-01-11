//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


TokenType = {
  'APPLICATION' : 1,
  'USER' : 2
};
ApplicationToken = function(args) {
  this.tokenId = null;
  this.organization = null;
  this.timeOfExpiration = null;
  this.applicationId = null;
  this.applicationName = null;
  if (args) {
    if (args.tokenId !== undefined && args.tokenId !== null) {
      this.tokenId = args.tokenId;
    }
    if (args.organization !== undefined && args.organization !== null) {
      this.organization = args.organization;
    }
    if (args.timeOfExpiration !== undefined && args.timeOfExpiration !== null) {
      this.timeOfExpiration = args.timeOfExpiration;
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.applicationName !== undefined && args.applicationName !== null) {
      this.applicationName = args.applicationName;
    }
  }
};
ApplicationToken.prototype = {};
ApplicationToken.prototype.read = function(input) {
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
        this.organization = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I64) {
        this.timeOfExpiration = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.applicationId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.applicationName = input.readString().value;
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

ApplicationToken.prototype.write = function(output) {
  output.writeStructBegin('ApplicationToken');
  if (this.tokenId !== null && this.tokenId !== undefined) {
    output.writeFieldBegin('tokenId', Thrift.Type.STRING, 1);
    output.writeString(this.tokenId);
    output.writeFieldEnd();
  }
  if (this.organization !== null && this.organization !== undefined) {
    output.writeFieldBegin('organization', Thrift.Type.STRING, 2);
    output.writeString(this.organization);
    output.writeFieldEnd();
  }
  if (this.timeOfExpiration !== null && this.timeOfExpiration !== undefined) {
    output.writeFieldBegin('timeOfExpiration', Thrift.Type.I64, 3);
    output.writeI64(this.timeOfExpiration);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 4);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  if (this.applicationName !== null && this.applicationName !== undefined) {
    output.writeFieldBegin('applicationName', Thrift.Type.STRING, 5);
    output.writeString(this.applicationName);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

UserToken = function(args) {
  this.tokenId = null;
  this.timeOfExpiration = null;
  this.organization = null;
  this.isOauthToken = false;
  this.oauthProvider = null;
  if (args) {
    if (args.tokenId !== undefined && args.tokenId !== null) {
      this.tokenId = args.tokenId;
    }
    if (args.timeOfExpiration !== undefined && args.timeOfExpiration !== null) {
      this.timeOfExpiration = args.timeOfExpiration;
    }
    if (args.organization !== undefined && args.organization !== null) {
      this.organization = args.organization;
    }
    if (args.isOauthToken !== undefined && args.isOauthToken !== null) {
      this.isOauthToken = args.isOauthToken;
    }
    if (args.oauthProvider !== undefined && args.oauthProvider !== null) {
      this.oauthProvider = args.oauthProvider;
    }
  }
};
UserToken.prototype = {};
UserToken.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.I64) {
        this.timeOfExpiration = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.organization = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.BOOL) {
        this.isOauthToken = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.oauthProvider = input.readString().value;
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

UserToken.prototype.write = function(output) {
  output.writeStructBegin('UserToken');
  if (this.tokenId !== null && this.tokenId !== undefined) {
    output.writeFieldBegin('tokenId', Thrift.Type.STRING, 1);
    output.writeString(this.tokenId);
    output.writeFieldEnd();
  }
  if (this.timeOfExpiration !== null && this.timeOfExpiration !== undefined) {
    output.writeFieldBegin('timeOfExpiration', Thrift.Type.I64, 2);
    output.writeI64(this.timeOfExpiration);
    output.writeFieldEnd();
  }
  if (this.organization !== null && this.organization !== undefined) {
    output.writeFieldBegin('organization', Thrift.Type.STRING, 3);
    output.writeString(this.organization);
    output.writeFieldEnd();
  }
  if (this.isOauthToken !== null && this.isOauthToken !== undefined) {
    output.writeFieldBegin('isOauthToken', Thrift.Type.BOOL, 4);
    output.writeBool(this.isOauthToken);
    output.writeFieldEnd();
  }
  if (this.oauthProvider !== null && this.oauthProvider !== undefined) {
    output.writeFieldBegin('oauthProvider', Thrift.Type.STRING, 5);
    output.writeString(this.oauthProvider);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GithubToken = function(args) {
  this.username = null;
  this.email = null;
  this.oauthToken = null;
  if (args) {
    if (args.username !== undefined && args.username !== null) {
      this.username = args.username;
    }
    if (args.email !== undefined && args.email !== null) {
      this.email = args.email;
    }
    if (args.oauthToken !== undefined && args.oauthToken !== null) {
      this.oauthToken = args.oauthToken;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field oauthToken is unset!');
    }
  }
};
GithubToken.prototype = {};
GithubToken.prototype.read = function(input) {
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
        this.username = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.email = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.oauthToken = input.readString().value;
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

GithubToken.prototype.write = function(output) {
  output.writeStructBegin('GithubToken');
  if (this.username !== null && this.username !== undefined) {
    output.writeFieldBegin('username', Thrift.Type.STRING, 1);
    output.writeString(this.username);
    output.writeFieldEnd();
  }
  if (this.email !== null && this.email !== undefined) {
    output.writeFieldBegin('email', Thrift.Type.STRING, 2);
    output.writeString(this.email);
    output.writeFieldEnd();
  }
  if (this.oauthToken !== null && this.oauthToken !== undefined) {
    output.writeFieldBegin('oauthToken', Thrift.Type.STRING, 3);
    output.writeString(this.oauthToken);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Password = function(args) {
  this.encryptedPassword = null;
  if (args) {
    if (args.encryptedPassword !== undefined && args.encryptedPassword !== null) {
      this.encryptedPassword = args.encryptedPassword;
    }
  }
};
Password.prototype = {};
Password.prototype.read = function(input) {
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
        this.encryptedPassword = input.readString().value;
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

Password.prototype.write = function(output) {
  output.writeStructBegin('Password');
  if (this.encryptedPassword !== null && this.encryptedPassword !== undefined) {
    output.writeFieldBegin('encryptedPassword', Thrift.Type.STRING, 1);
    output.writeString(this.encryptedPassword);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

AromaAccount = function(args) {
  this.email = null;
  this.password = null;
  this.name = null;
  this.profileImage = null;
  this.role = null;
  if (args) {
    if (args.email !== undefined && args.email !== null) {
      this.email = args.email;
    }
    if (args.password !== undefined && args.password !== null) {
      this.password = new Password(args.password);
    }
    if (args.name !== undefined && args.name !== null) {
      this.name = args.name;
    }
    if (args.profileImage !== undefined && args.profileImage !== null) {
      this.profileImage = new Image(args.profileImage);
    }
    if (args.role !== undefined && args.role !== null) {
      this.role = args.role;
    }
  }
};
AromaAccount.prototype = {};
AromaAccount.prototype.read = function(input) {
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
        this.email = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.password = new Password();
        this.password.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.name = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.profileImage = new Image();
        this.profileImage.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.I32) {
        this.role = input.readI32().value;
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

AromaAccount.prototype.write = function(output) {
  output.writeStructBegin('AromaAccount');
  if (this.email !== null && this.email !== undefined) {
    output.writeFieldBegin('email', Thrift.Type.STRING, 1);
    output.writeString(this.email);
    output.writeFieldEnd();
  }
  if (this.password !== null && this.password !== undefined) {
    output.writeFieldBegin('password', Thrift.Type.STRUCT, 2);
    this.password.write(output);
    output.writeFieldEnd();
  }
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 3);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  if (this.profileImage !== null && this.profileImage !== undefined) {
    output.writeFieldBegin('profileImage', Thrift.Type.STRUCT, 4);
    this.profileImage.write(output);
    output.writeFieldEnd();
  }
  if (this.role !== null && this.role !== undefined) {
    output.writeFieldBegin('role', Thrift.Type.I32, 5);
    output.writeI32(this.role);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Credentials = function(args) {
  this.githubToken = null;
  this.aromaPassword = null;
  if (args) {
    if (args.githubToken !== undefined && args.githubToken !== null) {
      this.githubToken = new GithubToken(args.githubToken);
    }
    if (args.aromaPassword !== undefined && args.aromaPassword !== null) {
      this.aromaPassword = new Password(args.aromaPassword);
    }
  }
};
Credentials.prototype = {};
Credentials.prototype.read = function(input) {
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
        this.githubToken = new GithubToken();
        this.githubToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.aromaPassword = new Password();
        this.aromaPassword.read(input);
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

Credentials.prototype.write = function(output) {
  output.writeStructBegin('Credentials');
  if (this.githubToken !== null && this.githubToken !== undefined) {
    output.writeFieldBegin('githubToken', Thrift.Type.STRUCT, 1);
    this.githubToken.write(output);
    output.writeFieldEnd();
  }
  if (this.aromaPassword !== null && this.aromaPassword !== undefined) {
    output.writeFieldBegin('aromaPassword', Thrift.Type.STRUCT, 2);
    this.aromaPassword.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

AuthenticationToken = function(args) {
  this.applicationToken = null;
  this.userToken = null;
  if (args) {
    if (args.applicationToken !== undefined && args.applicationToken !== null) {
      this.applicationToken = new ApplicationToken(args.applicationToken);
    }
    if (args.userToken !== undefined && args.userToken !== null) {
      this.userToken = new UserToken(args.userToken);
    }
  }
};
AuthenticationToken.prototype = {};
AuthenticationToken.prototype.read = function(input) {
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
        this.applicationToken = new ApplicationToken();
        this.applicationToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.userToken = new UserToken();
        this.userToken.read(input);
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

AuthenticationToken.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationToken');
  if (this.applicationToken !== null && this.applicationToken !== undefined) {
    output.writeFieldBegin('applicationToken', Thrift.Type.STRUCT, 1);
    this.applicationToken.write(output);
    output.writeFieldEnd();
  }
  if (this.userToken !== null && this.userToken !== undefined) {
    output.writeFieldBegin('userToken', Thrift.Type.STRUCT, 2);
    this.userToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

OVER_THE_WIRE_PASSWORD_ENCRYPTION_KEY = 'fwlrhvskjhf3foiwjkvdslj3qovknkf jnvzsv h3lfjwlejfiofszdkjnk';
