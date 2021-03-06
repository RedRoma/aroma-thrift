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
var Channels_ttypes = require('./Channels_types');
var Endpoint_ttypes = require('./Endpoint_types');
var Email_ttypes = require('./Email_types');
var Exceptions_ttypes = require('./Exceptions_types');


var ttypes = require('./EmailService_types');
//HELPER FUNCTIONS AND STRUCTURES

var EmailService_getApiVersion_args = function(args) {
};
EmailService_getApiVersion_args.prototype = {};
EmailService_getApiVersion_args.prototype.read = function(input) {
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

EmailService_getApiVersion_args.prototype.write = function(output) {
  output.writeStructBegin('EmailService_getApiVersion_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var EmailService_getApiVersion_result = function(args) {
  this.success = null;
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = args.success;
    }
  }
};
EmailService_getApiVersion_result.prototype = {};
EmailService_getApiVersion_result.prototype.read = function(input) {
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

EmailService_getApiVersion_result.prototype.write = function(output) {
  output.writeStructBegin('EmailService_getApiVersion_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.DOUBLE, 0);
    output.writeDouble(this.success);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var EmailService_sendEmail_args = function(args) {
  this.request = null;
  if (args) {
    if (args.request !== undefined && args.request !== null) {
      this.request = new ttypes.SendEmailRequest(args.request);
    }
  }
};
EmailService_sendEmail_args.prototype = {};
EmailService_sendEmail_args.prototype.read = function(input) {
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
        this.request = new ttypes.SendEmailRequest();
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

EmailService_sendEmail_args.prototype.write = function(output) {
  output.writeStructBegin('EmailService_sendEmail_args');
  if (this.request !== null && this.request !== undefined) {
    output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
    this.request.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

var EmailService_sendEmail_result = function(args) {
  this.success = null;
  this.ex1 = null;
  this.ex2 = null;
  this.ex3 = null;
  if (args instanceof Exceptions_ttypes.InvalidArgumentException) {
    this.ex1 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.OperationFailedException) {
    this.ex2 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidTokenException) {
    this.ex3 = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new ttypes.SendEmailResponse(args.success);
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
EmailService_sendEmail_result.prototype = {};
EmailService_sendEmail_result.prototype.read = function(input) {
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
        this.success = new ttypes.SendEmailResponse();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex1 = new Exceptions_ttypes.InvalidArgumentException();
        this.ex1.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex2 = new Exceptions_ttypes.OperationFailedException();
        this.ex2.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex3 = new Exceptions_ttypes.InvalidTokenException();
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

EmailService_sendEmail_result.prototype.write = function(output) {
  output.writeStructBegin('EmailService_sendEmail_result');
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

var EmailServiceClient = exports.Client = function(output, pClass) {
    this.output = output;
    this.pClass = pClass;
    this._seqid = 0;
    this._reqs = {};
};
EmailServiceClient.prototype = {};
EmailServiceClient.prototype.seqid = function() { return this._seqid; };
EmailServiceClient.prototype.new_seqid = function() { return this._seqid += 1; };
EmailServiceClient.prototype.getApiVersion = function(callback) {
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

EmailServiceClient.prototype.send_getApiVersion = function() {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('getApiVersion', Thrift.MessageType.CALL, this.seqid());
  var args = new EmailService_getApiVersion_args();
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

EmailServiceClient.prototype.recv_getApiVersion = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new EmailService_getApiVersion_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('getApiVersion failed: unknown result');
};
EmailServiceClient.prototype.sendEmail = function(request, callback) {
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
    this.send_sendEmail(request);
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_sendEmail(request);
  }
};

EmailServiceClient.prototype.send_sendEmail = function(request) {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('sendEmail', Thrift.MessageType.CALL, this.seqid());
  var params = {
    request: request
  };
  var args = new EmailService_sendEmail_args(params);
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

EmailServiceClient.prototype.recv_sendEmail = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new EmailService_sendEmail_result();
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
  return callback('sendEmail failed: unknown result');
};
var EmailServiceProcessor = exports.Processor = function(handler) {
  this._handler = handler;
}
;
EmailServiceProcessor.prototype.process = function(input, output) {
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
EmailServiceProcessor.prototype.process_getApiVersion = function(seqid, input, output) {
  var args = new EmailService_getApiVersion_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.getApiVersion.length === 0) {
    Q.fcall(this._handler.getApiVersion.bind(this._handler))
      .then(function(result) {
        var result_obj = new EmailService_getApiVersion_result({success: result});
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
        result_obj = new EmailService_getApiVersion_result((err !== null || typeof err === 'undefined') ? err : {success: result});
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
EmailServiceProcessor.prototype.process_sendEmail = function(seqid, input, output) {
  var args = new EmailService_sendEmail_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.sendEmail.length === 1) {
    Q.fcall(this._handler.sendEmail.bind(this._handler), args.request)
      .then(function(result) {
        var result_obj = new EmailService_sendEmail_result({success: result});
        output.writeMessageBegin("sendEmail", Thrift.MessageType.REPLY, seqid);
        result_obj.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        var result;
        if (err instanceof Exceptions_ttypes.InvalidArgumentException || err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException) {
          result = new EmailService_sendEmail_result(err);
          output.writeMessageBegin("sendEmail", Thrift.MessageType.REPLY, seqid);
        } else {
          result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
          output.writeMessageBegin("sendEmail", Thrift.MessageType.EXCEPTION, seqid);
        }
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.sendEmail(args.request, function (err, result) {
      var result_obj;
      if ((err === null || typeof err === 'undefined') || err instanceof Exceptions_ttypes.InvalidArgumentException || err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidTokenException) {
        result_obj = new EmailService_sendEmail_result((err !== null || typeof err === 'undefined') ? err : {success: result});
        output.writeMessageBegin("sendEmail", Thrift.MessageType.REPLY, seqid);
      } else {
        result_obj = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("sendEmail", Thrift.MessageType.EXCEPTION, seqid);
      }
      result_obj.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
};
