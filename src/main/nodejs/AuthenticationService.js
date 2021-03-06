//
// Autogenerated by Thrift Compiler (0.11.0)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
"use strict";

var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Authentication_ttypes = require('./Authentication_types');
var Aroma_ttypes = require('./Aroma_types');
var Endpoint_ttypes = require('./Endpoint_types');
var Exceptions_ttypes = require('./Exceptions_types');


var ttypes = require('./AuthenticationService_types');
//HELPER FUNCTIONS AND STRUCTURES

var AuthenticationService_getApiVersion_args = function(args) {
};
AuthenticationService_getApiVersion_args.prototype = {};
AuthenticationService_getApiVersion_args.prototype.read = function(input) {
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

AuthenticationService_getApiVersion_args.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_getApiVersion_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_getApiVersion_result = function(args) {
  this.success = null;
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = args.success;
    }
  }
};
AuthenticationService_getApiVersion_result.prototype = {};
AuthenticationService_getApiVersion_result.prototype.read = function(input) {
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
      case 0:
      if (ftype == Thrift.Type.DOUBLE) {
        this.success = input.readDouble();
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

AuthenticationService_getApiVersion_result.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_getApiVersion_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.DOUBLE, 0);
    output.writeDouble(this.success);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_createToken_args = function(args) {
  this.request = null;
  if (args) {
    if (args.request !== undefined && args.request !== null) {
      this.request = new ttypes.CreateTokenRequest(args.request);
    }
  }
};
AuthenticationService_createToken_args.prototype = {};
AuthenticationService_createToken_args.prototype.read = function(input) {
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
        this.request = new ttypes.CreateTokenRequest();
        this.request.read(input);
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

AuthenticationService_createToken_args.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_createToken_args');
  if (this.request !== null && this.request !== undefined) {
    output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
    this.request.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_createToken_result = function(args) {
  this.success = null;
  this.ex1 = null;
  this.ex2 = null;
  if (args instanceof Exceptions_ttypes.OperationFailedException) {
    this.ex1 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidArgumentException) {
    this.ex2 = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new ttypes.CreateTokenResponse(args.success);
    }
    if (args.ex1 !== undefined && args.ex1 !== null) {
      this.ex1 = args.ex1;
    }
    if (args.ex2 !== undefined && args.ex2 !== null) {
      this.ex2 = args.ex2;
    }
  }
};
AuthenticationService_createToken_result.prototype = {};
AuthenticationService_createToken_result.prototype.read = function(input) {
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
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new ttypes.CreateTokenResponse();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex1 = new Exceptions_ttypes.OperationFailedException();
        this.ex1.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex2 = new Exceptions_ttypes.InvalidArgumentException();
        this.ex2.read(input);
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

AuthenticationService_createToken_result.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_createToken_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.ex1 !== null && this.ex1 !== undefined) {
    output.writeFieldBegin('ex1', Thrift.Type.STRUCT, 1);
    this.ex1.write(output);
    output.writeFieldEnd();
  }
  if (this.ex2 !== null && this.ex2 !== undefined) {
    output.writeFieldBegin('ex2', Thrift.Type.STRUCT, 2);
    this.ex2.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_getTokenInfo_args = function(args) {
  this.request = null;
  if (args) {
    if (args.request !== undefined && args.request !== null) {
      this.request = new ttypes.GetTokenInfoRequest(args.request);
    }
  }
};
AuthenticationService_getTokenInfo_args.prototype = {};
AuthenticationService_getTokenInfo_args.prototype.read = function(input) {
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
        this.request = new ttypes.GetTokenInfoRequest();
        this.request.read(input);
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

AuthenticationService_getTokenInfo_args.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_getTokenInfo_args');
  if (this.request !== null && this.request !== undefined) {
    output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
    this.request.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_getTokenInfo_result = function(args) {
  this.success = null;
  this.ex1 = null;
  this.ex2 = null;
  this.ex3 = null;
  if (args instanceof Exceptions_ttypes.OperationFailedException) {
    this.ex1 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidTokenException) {
    this.ex2 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidArgumentException) {
    this.ex3 = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new ttypes.GetTokenInfoResponse(args.success);
    }
    if (args.ex1 !== undefined && args.ex1 !== null) {
      this.ex1 = args.ex1;
    }
    if (args.ex2 !== undefined && args.ex2 !== null) {
      this.ex2 = args.ex2;
    }
    if (args.ex3 !== undefined && args.ex3 !== null) {
      this.ex3 = args.ex3;
    }
  }
};
AuthenticationService_getTokenInfo_result.prototype = {};
AuthenticationService_getTokenInfo_result.prototype.read = function(input) {
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
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new ttypes.GetTokenInfoResponse();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex1 = new Exceptions_ttypes.OperationFailedException();
        this.ex1.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex2 = new Exceptions_ttypes.InvalidTokenException();
        this.ex2.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex3 = new Exceptions_ttypes.InvalidArgumentException();
        this.ex3.read(input);
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

AuthenticationService_getTokenInfo_result.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_getTokenInfo_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.ex1 !== null && this.ex1 !== undefined) {
    output.writeFieldBegin('ex1', Thrift.Type.STRUCT, 1);
    this.ex1.write(output);
    output.writeFieldEnd();
  }
  if (this.ex2 !== null && this.ex2 !== undefined) {
    output.writeFieldBegin('ex2', Thrift.Type.STRUCT, 2);
    this.ex2.write(output);
    output.writeFieldEnd();
  }
  if (this.ex3 !== null && this.ex3 !== undefined) {
    output.writeFieldBegin('ex3', Thrift.Type.STRUCT, 3);
    this.ex3.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_invalidateToken_args = function(args) {
  this.request = null;
  if (args) {
    if (args.request !== undefined && args.request !== null) {
      this.request = new ttypes.InvalidateTokenRequest(args.request);
    }
  }
};
AuthenticationService_invalidateToken_args.prototype = {};
AuthenticationService_invalidateToken_args.prototype.read = function(input) {
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
        this.request = new ttypes.InvalidateTokenRequest();
        this.request.read(input);
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

AuthenticationService_invalidateToken_args.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_invalidateToken_args');
  if (this.request !== null && this.request !== undefined) {
    output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
    this.request.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_invalidateToken_result = function(args) {
  this.success = null;
  this.ex1 = null;
  this.ex2 = null;
  this.ex3 = null;
  if (args instanceof Exceptions_ttypes.OperationFailedException) {
    this.ex1 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidTokenException) {
    this.ex2 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidArgumentException) {
    this.ex3 = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new ttypes.InvalidateTokenResponse(args.success);
    }
    if (args.ex1 !== undefined && args.ex1 !== null) {
      this.ex1 = args.ex1;
    }
    if (args.ex2 !== undefined && args.ex2 !== null) {
      this.ex2 = args.ex2;
    }
    if (args.ex3 !== undefined && args.ex3 !== null) {
      this.ex3 = args.ex3;
    }
  }
};
AuthenticationService_invalidateToken_result.prototype = {};
AuthenticationService_invalidateToken_result.prototype.read = function(input) {
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
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new ttypes.InvalidateTokenResponse();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex1 = new Exceptions_ttypes.OperationFailedException();
        this.ex1.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex2 = new Exceptions_ttypes.InvalidTokenException();
        this.ex2.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex3 = new Exceptions_ttypes.InvalidArgumentException();
        this.ex3.read(input);
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

AuthenticationService_invalidateToken_result.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_invalidateToken_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.ex1 !== null && this.ex1 !== undefined) {
    output.writeFieldBegin('ex1', Thrift.Type.STRUCT, 1);
    this.ex1.write(output);
    output.writeFieldEnd();
  }
  if (this.ex2 !== null && this.ex2 !== undefined) {
    output.writeFieldBegin('ex2', Thrift.Type.STRUCT, 2);
    this.ex2.write(output);
    output.writeFieldEnd();
  }
  if (this.ex3 !== null && this.ex3 !== undefined) {
    output.writeFieldBegin('ex3', Thrift.Type.STRUCT, 3);
    this.ex3.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_verifyToken_args = function(args) {
  this.request = null;
  if (args) {
    if (args.request !== undefined && args.request !== null) {
      this.request = new ttypes.VerifyTokenRequest(args.request);
    }
  }
};
AuthenticationService_verifyToken_args.prototype = {};
AuthenticationService_verifyToken_args.prototype.read = function(input) {
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
        this.request = new ttypes.VerifyTokenRequest();
        this.request.read(input);
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

AuthenticationService_verifyToken_args.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_verifyToken_args');
  if (this.request !== null && this.request !== undefined) {
    output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
    this.request.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationService_verifyToken_result = function(args) {
  this.success = null;
  this.ex1 = null;
  this.ex2 = null;
  this.ex3 = null;
  if (args instanceof Exceptions_ttypes.OperationFailedException) {
    this.ex1 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidTokenException) {
    this.ex2 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidArgumentException) {
    this.ex3 = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new ttypes.VerifyTokenResponse(args.success);
    }
    if (args.ex1 !== undefined && args.ex1 !== null) {
      this.ex1 = args.ex1;
    }
    if (args.ex2 !== undefined && args.ex2 !== null) {
      this.ex2 = args.ex2;
    }
    if (args.ex3 !== undefined && args.ex3 !== null) {
      this.ex3 = args.ex3;
    }
  }
};
AuthenticationService_verifyToken_result.prototype = {};
AuthenticationService_verifyToken_result.prototype.read = function(input) {
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
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new ttypes.VerifyTokenResponse();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex1 = new Exceptions_ttypes.OperationFailedException();
        this.ex1.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex2 = new Exceptions_ttypes.InvalidTokenException();
        this.ex2.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex3 = new Exceptions_ttypes.InvalidArgumentException();
        this.ex3.read(input);
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

AuthenticationService_verifyToken_result.prototype.write = function(output) {
  output.writeStructBegin('AuthenticationService_verifyToken_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.ex1 !== null && this.ex1 !== undefined) {
    output.writeFieldBegin('ex1', Thrift.Type.STRUCT, 1);
    this.ex1.write(output);
    output.writeFieldEnd();
  }
  if (this.ex2 !== null && this.ex2 !== undefined) {
    output.writeFieldBegin('ex2', Thrift.Type.STRUCT, 2);
    this.ex2.write(output);
    output.writeFieldEnd();
  }
  if (this.ex3 !== null && this.ex3 !== undefined) {
    output.writeFieldBegin('ex3', Thrift.Type.STRUCT, 3);
    this.ex3.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var AuthenticationServiceClient = exports.Client = function(output, pClass) {
    this.output = output;
    this.pClass = pClass;
    this._seqid = 0;
    this._reqs = {};
};
AuthenticationServiceClient.prototype = {};
AuthenticationServiceClient.prototype.seqid = function() { return this._seqid; };
AuthenticationServiceClient.prototype.new_seqid = function() { return this._seqid += 1; };
AuthenticationServiceClient.prototype.getApiVersion = function(callback) {
  this._seqid = this.new_seqid();
  if (callback === undefined) {
    var _defer = Q.defer();
    this._reqs[this.seqid()] = function(error, result) {
      if (error) {
        _defer.reject(error);
      } else {
        _defer.resolve(result);
      }
    };
    this.send_getApiVersion();
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_getApiVersion();
  }
};

AuthenticationServiceClient.prototype.send_getApiVersion = function() {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('getApiVersion', Thrift.MessageType.CALL, this.seqid());
  var args = new AuthenticationService_getApiVersion_args();
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

AuthenticationServiceClient.prototype.recv_getApiVersion = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new AuthenticationService_getApiVersion_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('getApiVersion failed: unknown result');
};
AuthenticationServiceClient.prototype.createToken = function(request, callback) {
  this._seqid = this.new_seqid();
  if (callback === undefined) {
    var _defer = Q.defer();
    this._reqs[this.seqid()] = function(error, result) {
      if (error) {
        _defer.reject(error);
      } else {
        _defer.resolve(result);
      }
    };
    this.send_createToken(request);
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_createToken(request);
  }
};

AuthenticationServiceClient.prototype.send_createToken = function(request) {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('createToken', Thrift.MessageType.CALL, this.seqid());
  var params = {
    request: request
  };
  var args = new AuthenticationService_createToken_args(params);
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

AuthenticationServiceClient.prototype.recv_createToken = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new AuthenticationService_createToken_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.ex1) {
    return callback(result.ex1);
  }
  if (null !== result.ex2) {
    return callback(result.ex2);
  }
  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('createToken failed: unknown result');
};
AuthenticationServiceClient.prototype.getTokenInfo = function(request, callback) {
  this._seqid = this.new_seqid();
  if (callback === undefined) {
    var _defer = Q.defer();
    this._reqs[this.seqid()] = function(error, result) {
      if (error) {
        _defer.reject(error);
      } else {
        _defer.resolve(result);
      }
    };
    this.send_getTokenInfo(request);
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_getTokenInfo(request);
  }
};

AuthenticationServiceClient.prototype.send_getTokenInfo = function(request) {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('getTokenInfo', Thrift.MessageType.CALL, this.seqid());
  var params = {
    request: request
  };
  var args = new AuthenticationService_getTokenInfo_args(params);
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

AuthenticationServiceClient.prototype.recv_getTokenInfo = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new AuthenticationService_getTokenInfo_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.ex1) {
    return callback(result.ex1);
  }
  if (null !== result.ex2) {
    return callback(result.ex2);
  }
  if (null !== result.ex3) {
    return callback(result.ex3);
  }
  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('getTokenInfo failed: unknown result');
};
AuthenticationServiceClient.prototype.invalidateToken = function(request, callback) {
  this._seqid = this.new_seqid();
  if (callback === undefined) {
    var _defer = Q.defer();
    this._reqs[this.seqid()] = function(error, result) {
      if (error) {
        _defer.reject(error);
      } else {
        _defer.resolve(result);
      }
    };
    this.send_invalidateToken(request);
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_invalidateToken(request);
  }
};

AuthenticationServiceClient.prototype.send_invalidateToken = function(request) {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('invalidateToken', Thrift.MessageType.CALL, this.seqid());
  var params = {
    request: request
  };
  var args = new AuthenticationService_invalidateToken_args(params);
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

AuthenticationServiceClient.prototype.recv_invalidateToken = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new AuthenticationService_invalidateToken_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.ex1) {
    return callback(result.ex1);
  }
  if (null !== result.ex2) {
    return callback(result.ex2);
  }
  if (null !== result.ex3) {
    return callback(result.ex3);
  }
  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('invalidateToken failed: unknown result');
};
AuthenticationServiceClient.prototype.verifyToken = function(request, callback) {
  this._seqid = this.new_seqid();
  if (callback === undefined) {
    var _defer = Q.defer();
    this._reqs[this.seqid()] = function(error, result) {
      if (error) {
        _defer.reject(error);
      } else {
        _defer.resolve(result);
      }
    };
    this.send_verifyToken(request);
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_verifyToken(request);
  }
};

AuthenticationServiceClient.prototype.send_verifyToken = function(request) {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('verifyToken', Thrift.MessageType.CALL, this.seqid());
  var params = {
    request: request
  };
  var args = new AuthenticationService_verifyToken_args(params);
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

AuthenticationServiceClient.prototype.recv_verifyToken = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new AuthenticationService_verifyToken_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.ex1) {
    return callback(result.ex1);
  }
  if (null !== result.ex2) {
    return callback(result.ex2);
  }
  if (null !== result.ex3) {
    return callback(result.ex3);
  }
  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('verifyToken failed: unknown result');
};
var AuthenticationServiceProcessor = exports.Processor = function(handler) {
  this._handler = handler;
}
;
AuthenticationServiceProcessor.prototype.process = function(input, output) {
  var r = input.readMessageBegin();
  if (this['process_' + r.fname]) {
    return this['process_' + r.fname].call(this, r.rseqid, input, output);
  } else {
    input.skip(Thrift.Type.STRUCT);
    input.readMessageEnd();
    var x = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN_METHOD, 'Unknown function ' + r.fname);
    output.writeMessageBegin(r.fname, Thrift.MessageType.EXCEPTION, r.rseqid);
    x.write(output);
    output.writeMessageEnd();
    output.flush();
  }
}
;
AuthenticationServiceProcessor.prototype.process_getApiVersion = function(seqid, input, output) {
  var args = new AuthenticationService_getApiVersion_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.getApiVersion.length === 0) {
    Q.fcall(this._handler.getApiVersion.bind(this._handler))
      .then(function(result) {
        var result_obj = new AuthenticationService_getApiVersion_result({success: result});
        output.writeMessageBegin("getApiVersion", Thrift.MessageType.REPLY, seqid);
        result_obj.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        var result;
        result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("getApiVersion", Thrift.MessageType.EXCEPTION, seqid);
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.getApiVersion(function (err, result) {
      var result_obj;
      if ((err === null || typeof err === 'undefined')) {
        result_obj = new AuthenticationService_getApiVersion_result((err !== null || typeof err === 'undefined') ? err : {success: result});
        output.writeMessageBegin("getApiVersion", Thrift.MessageType.REPLY, seqid);
      } else {
        result_obj = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("getApiVersion", Thrift.MessageType.EXCEPTION, seqid);
      }
      result_obj.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
};
AuthenticationServiceProcessor.prototype.process_createToken = function(seqid, input, output) {
  var args = new AuthenticationService_createToken_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.createToken.length === 1) {
    Q.fcall(this._handler.createToken.bind(this._handler), args.request)
      .then(function(result) {
        var result_obj = new AuthenticationService_createToken_result({success: result});
        output.writeMessageBegin("createToken", Thrift.MessageType.REPLY, seqid);
        result_obj.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        var result;
        if (err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
          result = new AuthenticationService_createToken_result(err);
          output.writeMessageBegin("createToken", Thrift.MessageType.REPLY, seqid);
        } else {
          result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
          output.writeMessageBegin("createToken", Thrift.MessageType.EXCEPTION, seqid);
        }
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.createToken(args.request, function (err, result) {
      var result_obj;
      if ((err === null || typeof err === 'undefined') || err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
        result_obj = new AuthenticationService_createToken_result((err !== null || typeof err === 'undefined') ? err : {success: result});
        output.writeMessageBegin("createToken", Thrift.MessageType.REPLY, seqid);
      } else {
        result_obj = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("createToken", Thrift.MessageType.EXCEPTION, seqid);
      }
      result_obj.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
};
AuthenticationServiceProcessor.prototype.process_getTokenInfo = function(seqid, input, output) {
  var args = new AuthenticationService_getTokenInfo_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.getTokenInfo.length === 1) {
    Q.fcall(this._handler.getTokenInfo.bind(this._handler), args.request)
      .then(function(result) {
        var result_obj = new AuthenticationService_getTokenInfo_result({success: result});
        output.writeMessageBegin("getTokenInfo", Thrift.MessageType.REPLY, seqid);
        result_obj.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        var result;
        if (err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
          result = new AuthenticationService_getTokenInfo_result(err);
          output.writeMessageBegin("getTokenInfo", Thrift.MessageType.REPLY, seqid);
        } else {
          result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
          output.writeMessageBegin("getTokenInfo", Thrift.MessageType.EXCEPTION, seqid);
        }
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.getTokenInfo(args.request, function (err, result) {
      var result_obj;
      if ((err === null || typeof err === 'undefined') || err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
        result_obj = new AuthenticationService_getTokenInfo_result((err !== null || typeof err === 'undefined') ? err : {success: result});
        output.writeMessageBegin("getTokenInfo", Thrift.MessageType.REPLY, seqid);
      } else {
        result_obj = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("getTokenInfo", Thrift.MessageType.EXCEPTION, seqid);
      }
      result_obj.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
};
AuthenticationServiceProcessor.prototype.process_invalidateToken = function(seqid, input, output) {
  var args = new AuthenticationService_invalidateToken_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.invalidateToken.length === 1) {
    Q.fcall(this._handler.invalidateToken.bind(this._handler), args.request)
      .then(function(result) {
        var result_obj = new AuthenticationService_invalidateToken_result({success: result});
        output.writeMessageBegin("invalidateToken", Thrift.MessageType.REPLY, seqid);
        result_obj.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        var result;
        if (err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
          result = new AuthenticationService_invalidateToken_result(err);
          output.writeMessageBegin("invalidateToken", Thrift.MessageType.REPLY, seqid);
        } else {
          result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
          output.writeMessageBegin("invalidateToken", Thrift.MessageType.EXCEPTION, seqid);
        }
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.invalidateToken(args.request, function (err, result) {
      var result_obj;
      if ((err === null || typeof err === 'undefined') || err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
        result_obj = new AuthenticationService_invalidateToken_result((err !== null || typeof err === 'undefined') ? err : {success: result});
        output.writeMessageBegin("invalidateToken", Thrift.MessageType.REPLY, seqid);
      } else {
        result_obj = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("invalidateToken", Thrift.MessageType.EXCEPTION, seqid);
      }
      result_obj.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
};
AuthenticationServiceProcessor.prototype.process_verifyToken = function(seqid, input, output) {
  var args = new AuthenticationService_verifyToken_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.verifyToken.length === 1) {
    Q.fcall(this._handler.verifyToken.bind(this._handler), args.request)
      .then(function(result) {
        var result_obj = new AuthenticationService_verifyToken_result({success: result});
        output.writeMessageBegin("verifyToken", Thrift.MessageType.REPLY, seqid);
        result_obj.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        var result;
        if (err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
          result = new AuthenticationService_verifyToken_result(err);
          output.writeMessageBegin("verifyToken", Thrift.MessageType.REPLY, seqid);
        } else {
          result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
          output.writeMessageBegin("verifyToken", Thrift.MessageType.EXCEPTION, seqid);
        }
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.verifyToken(args.request, function (err, result) {
      var result_obj;
      if ((err === null || typeof err === 'undefined') || err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException || err instanceof Exceptions_ttypes.InvalidArgumentException) {
        result_obj = new AuthenticationService_verifyToken_result((err !== null || typeof err === 'undefined') ? err : {success: result});
        output.writeMessageBegin("verifyToken", Thrift.MessageType.REPLY, seqid);
      } else {
        result_obj = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("verifyToken", Thrift.MessageType.EXCEPTION, seqid);
      }
      result_obj.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
};
