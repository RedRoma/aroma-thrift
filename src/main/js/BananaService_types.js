//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


ProvisionServiceRequest = function(args) {
  this.token = null;
  this.serviceName = null;
  this.programmingLanguage = null;
  this.organization = null;
  this.icon = null;
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
      this.icon = new Image(args.icon);
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
        this.token = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.programmingLanguage = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.organization = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.icon = new Image();
        this.icon.read(input);
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
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ProvisionServiceResponse = function(args) {
  this.bananaToken = null;
  this.serviceName = null;
  if (args) {
    if (args.bananaToken !== undefined && args.bananaToken !== null) {
      this.bananaToken = args.bananaToken;
    }
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
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
        this.bananaToken = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString().value;
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
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SubscribeToServiceRequest = function(args) {
  this.token = null;
  this.serviceName = null;
  this.organization = null;
  this.shared = false;
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
        this.token = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString().value;
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
        this.shared = input.readBool().value;
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
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SubscribeToServiceResponse = function(args) {
  this.message = null;
  this.channel = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
    if (args.channel !== undefined && args.channel !== null) {
      this.channel = new BananaChannel(args.channel);
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
        this.message = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.channel = new BananaChannel();
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

RegisterHealthCheckRequest = function(args) {
  this.endpoint = null;
  if (args) {
    if (args.endpoint !== undefined && args.endpoint !== null) {
      this.endpoint = new Endpoint(args.endpoint);
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
        this.endpoint = new Endpoint();
        this.endpoint.read(input);
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

RegisterHealthCheckRequest.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckRequest');
  if (this.endpoint !== null && this.endpoint !== undefined) {
    output.writeFieldBegin('endpoint', Thrift.Type.STRUCT, 1);
    this.endpoint.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegisterHealthCheckResponse = function(args) {
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
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RegisterHealthCheckResponse.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckResponse');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MAX_ICON_DIMENSION = new Dimension({
'width' : 500,'height' : 500});
MAX_ICON_SIZE_IN_KILOBYTES = 40;
