//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Banana_ttypes = require('./Banana_types')


var ttypes = module.exports = {};
InvalidArgumentException = module.exports.InvalidArgumentException = function(args) {
  Thrift.TException.call(this, "InvalidArgumentException")
  this.name = "InvalidArgumentException"
  this.message = 'Invalid Argument Received';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(InvalidArgumentException, Thrift.TException);
InvalidArgumentException.prototype.name = 'InvalidArgumentException';
InvalidArgumentException.prototype.read = function(input) {
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

InvalidArgumentException.prototype.write = function(output) {
  output.writeStructBegin('InvalidArgumentException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidCredentialsException = module.exports.InvalidCredentialsException = function(args) {
  Thrift.TException.call(this, "InvalidCredentialsException")
  this.name = "InvalidCredentialsException"
  this.message = 'Failed to Verify and Authenticate Credentials';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(InvalidCredentialsException, Thrift.TException);
InvalidCredentialsException.prototype.name = 'InvalidCredentialsException';
InvalidCredentialsException.prototype.read = function(input) {
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

InvalidCredentialsException.prototype.write = function(output) {
  output.writeStructBegin('InvalidCredentialsException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidTokenException = module.exports.InvalidTokenException = function(args) {
  Thrift.TException.call(this, "InvalidTokenException")
  this.name = "InvalidTokenException"
  this.message = 'The specified token is invalid';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(InvalidTokenException, Thrift.TException);
InvalidTokenException.prototype.name = 'InvalidTokenException';
InvalidTokenException.prototype.read = function(input) {
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

InvalidTokenException.prototype.write = function(output) {
  output.writeStructBegin('InvalidTokenException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

AccountAlreadyExistsException = module.exports.AccountAlreadyExistsException = function(args) {
  Thrift.TException.call(this, "AccountAlreadyExistsException")
  this.name = "AccountAlreadyExistsException"
  this.message = 'This email has already been registered. Reset your password if you forgot it.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(AccountAlreadyExistsException, Thrift.TException);
AccountAlreadyExistsException.prototype.name = 'AccountAlreadyExistsException';
AccountAlreadyExistsException.prototype.read = function(input) {
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

AccountAlreadyExistsException.prototype.write = function(output) {
  output.writeStructBegin('AccountAlreadyExistsException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

InvalidCodeException = module.exports.InvalidCodeException = function(args) {
  Thrift.TException.call(this, "InvalidCodeException")
  this.name = "InvalidCodeException"
  this.message = 'The Reset Password is invalid';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(InvalidCodeException, Thrift.TException);
InvalidCodeException.prototype.name = 'InvalidCodeException';
InvalidCodeException.prototype.read = function(input) {
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

InvalidCodeException.prototype.write = function(output) {
  output.writeStructBegin('InvalidCodeException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

UnauthorizedException = module.exports.UnauthorizedException = function(args) {
  Thrift.TException.call(this, "UnauthorizedException")
  this.name = "UnauthorizedException"
  this.message = 'Only an Owner can do that';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(UnauthorizedException, Thrift.TException);
UnauthorizedException.prototype.name = 'UnauthorizedException';
UnauthorizedException.prototype.read = function(input) {
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

UnauthorizedException.prototype.write = function(output) {
  output.writeStructBegin('UnauthorizedException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationDoesNotExistException = module.exports.ApplicationDoesNotExistException = function(args) {
  Thrift.TException.call(this, "ApplicationDoesNotExistException")
  this.name = "ApplicationDoesNotExistException"
  this.message = 'The Specified Application does not exist.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(ApplicationDoesNotExistException, Thrift.TException);
ApplicationDoesNotExistException.prototype.name = 'ApplicationDoesNotExistException';
ApplicationDoesNotExistException.prototype.read = function(input) {
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

ApplicationDoesNotExistException.prototype.write = function(output) {
  output.writeStructBegin('ApplicationDoesNotExistException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationAlreadyRegisteredException = module.exports.ApplicationAlreadyRegisteredException = function(args) {
  Thrift.TException.call(this, "ApplicationAlreadyRegisteredException")
  this.name = "ApplicationAlreadyRegisteredException"
  this.message = 'This Channel has already been registered for this Application.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(ApplicationAlreadyRegisteredException, Thrift.TException);
ApplicationAlreadyRegisteredException.prototype.name = 'ApplicationAlreadyRegisteredException';
ApplicationAlreadyRegisteredException.prototype.read = function(input) {
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

ApplicationAlreadyRegisteredException.prototype.write = function(output) {
  output.writeStructBegin('ApplicationAlreadyRegisteredException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

UserDoesNotExistException = module.exports.UserDoesNotExistException = function(args) {
  Thrift.TException.call(this, "UserDoesNotExistException")
  this.name = "UserDoesNotExistException"
  this.message = 'The User you\'re referring to does not exist.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(UserDoesNotExistException, Thrift.TException);
UserDoesNotExistException.prototype.name = 'UserDoesNotExistException';
UserDoesNotExistException.prototype.read = function(input) {
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

UserDoesNotExistException.prototype.write = function(output) {
  output.writeStructBegin('UserDoesNotExistException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ThroughoutExceededException = module.exports.ThroughoutExceededException = function(args) {
  Thrift.TException.call(this, "ThroughoutExceededException")
  this.name = "ThroughoutExceededException"
  this.message = 'You have exceeded your allocated throughput. Buy more or slow down.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(ThroughoutExceededException, Thrift.TException);
ThroughoutExceededException.prototype.name = 'ThroughoutExceededException';
ThroughoutExceededException.prototype.read = function(input) {
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

ThroughoutExceededException.prototype.write = function(output) {
  output.writeStructBegin('ThroughoutExceededException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

CustomChannelUnreachableException = module.exports.CustomChannelUnreachableException = function(args) {
  Thrift.TException.call(this, "CustomChannelUnreachableException")
  this.name = "CustomChannelUnreachableException"
  this.message = 'The Custom Channel you\'ve supplied could not be reached. Please ensure the Application is reachable and operational.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(CustomChannelUnreachableException, Thrift.TException);
CustomChannelUnreachableException.prototype.name = 'CustomChannelUnreachableException';
CustomChannelUnreachableException.prototype.read = function(input) {
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

CustomChannelUnreachableException.prototype.write = function(output) {
  output.writeStructBegin('CustomChannelUnreachableException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ChannelDoesNotExistException = module.exports.ChannelDoesNotExistException = function(args) {
  Thrift.TException.call(this, "ChannelDoesNotExistException")
  this.name = "ChannelDoesNotExistException"
  this.message = 'The Channel specified does not exist in the System.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(ChannelDoesNotExistException, Thrift.TException);
ChannelDoesNotExistException.prototype.name = 'ChannelDoesNotExistException';
ChannelDoesNotExistException.prototype.read = function(input) {
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

ChannelDoesNotExistException.prototype.write = function(output) {
  output.writeStructBegin('ChannelDoesNotExistException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MessageDoesNotExistException = module.exports.MessageDoesNotExistException = function(args) {
  Thrift.TException.call(this, "MessageDoesNotExistException")
  this.name = "MessageDoesNotExistException"
  this.message = 'The Message specified does not exist.';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(MessageDoesNotExistException, Thrift.TException);
MessageDoesNotExistException.prototype.name = 'MessageDoesNotExistException';
MessageDoesNotExistException.prototype.read = function(input) {
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

MessageDoesNotExistException.prototype.write = function(output) {
  output.writeStructBegin('MessageDoesNotExistException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

OperationFailedException = module.exports.OperationFailedException = function(args) {
  Thrift.TException.call(this, "OperationFailedException")
  this.name = "OperationFailedException"
  this.message = 'The Operation could not be completed';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
Thrift.inherits(OperationFailedException, Thrift.TException);
OperationFailedException.prototype.name = 'OperationFailedException';
OperationFailedException.prototype.read = function(input) {
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

OperationFailedException.prototype.write = function(output) {
  output.writeStructBegin('OperationFailedException');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

