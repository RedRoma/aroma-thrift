//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


TcpEndpoint = function(args) {
  this.hostname = null;
  this.port = 80;
  if (args) {
    if (args.hostname !== undefined && args.hostname !== null) {
      this.hostname = args.hostname;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field hostname is unset!');
    }
    if (args.port !== undefined && args.port !== null) {
      this.port = args.port;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field port is unset!');
    }
  }
};
TcpEndpoint.prototype = {};
TcpEndpoint.prototype.read = function(input) {
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
        this.hostname = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.port = input.readI32().value;
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

TcpEndpoint.prototype.write = function(output) {
  output.writeStructBegin('TcpEndpoint');
  if (this.hostname !== null && this.hostname !== undefined) {
    output.writeFieldBegin('hostname', Thrift.Type.STRING, 1);
    output.writeString(this.hostname);
    output.writeFieldEnd();
  }
  if (this.port !== null && this.port !== undefined) {
    output.writeFieldBegin('port', Thrift.Type.I32, 2);
    output.writeI32(this.port);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ThriftHttpEndpoint = function(args) {
  this.url = null;
  if (args) {
    if (args.url !== undefined && args.url !== null) {
      this.url = args.url;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field url is unset!');
    }
  }
};
ThriftHttpEndpoint.prototype = {};
ThriftHttpEndpoint.prototype.read = function(input) {
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
        this.url = input.readString().value;
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

ThriftHttpEndpoint.prototype.write = function(output) {
  output.writeStructBegin('ThriftHttpEndpoint');
  if (this.url !== null && this.url !== undefined) {
    output.writeFieldBegin('url', Thrift.Type.STRING, 1);
    output.writeString(this.url);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RestHttpEndpoint = function(args) {
  this.url = null;
  if (args) {
    if (args.url !== undefined && args.url !== null) {
      this.url = args.url;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field url is unset!');
    }
  }
};
RestHttpEndpoint.prototype = {};
RestHttpEndpoint.prototype.read = function(input) {
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
        this.url = input.readString().value;
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

RestHttpEndpoint.prototype.write = function(output) {
  output.writeStructBegin('RestHttpEndpoint');
  if (this.url !== null && this.url !== undefined) {
    output.writeFieldBegin('url', Thrift.Type.STRING, 1);
    output.writeString(this.url);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Endpoint = function(args) {
  this.tcp = null;
  this.thriftHttp = null;
  this.restHttp = null;
  if (args) {
    if (args.tcp !== undefined && args.tcp !== null) {
      this.tcp = new TcpEndpoint(args.tcp);
    }
    if (args.thriftHttp !== undefined && args.thriftHttp !== null) {
      this.thriftHttp = new ThriftHttpEndpoint(args.thriftHttp);
    }
    if (args.restHttp !== undefined && args.restHttp !== null) {
      this.restHttp = new RestHttpEndpoint(args.restHttp);
    }
  }
};
Endpoint.prototype = {};
Endpoint.prototype.read = function(input) {
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
        this.tcp = new TcpEndpoint();
        this.tcp.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.thriftHttp = new ThriftHttpEndpoint();
        this.thriftHttp.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.restHttp = new RestHttpEndpoint();
        this.restHttp.read(input);
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

Endpoint.prototype.write = function(output) {
  output.writeStructBegin('Endpoint');
  if (this.tcp !== null && this.tcp !== undefined) {
    output.writeFieldBegin('tcp', Thrift.Type.STRUCT, 1);
    this.tcp.write(output);
    output.writeFieldEnd();
  }
  if (this.thriftHttp !== null && this.thriftHttp !== undefined) {
    output.writeFieldBegin('thriftHttp', Thrift.Type.STRUCT, 2);
    this.thriftHttp.write(output);
    output.writeFieldEnd();
  }
  if (this.restHttp !== null && this.restHttp !== undefined) {
    output.writeFieldBegin('restHttp', Thrift.Type.STRUCT, 3);
    this.restHttp.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

HealthPokeRequest = function(args) {
  this.serviceName = null;
  this.serviceToken = null;
  if (args) {
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new ServiceToken(args.serviceToken);
    }
  }
};
HealthPokeRequest.prototype = {};
HealthPokeRequest.prototype.read = function(input) {
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
        this.serviceName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new ServiceToken();
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

HealthPokeRequest.prototype.write = function(output) {
  output.writeStructBegin('HealthPokeRequest');
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 1);
    output.writeString(this.serviceName);
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

HealthPokeResponse = function(args) {
  this.message = null;
  this.healthy = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
    if (args.healthy !== undefined && args.healthy !== null) {
      this.healthy = args.healthy;
    }
  }
};
HealthPokeResponse.prototype = {};
HealthPokeResponse.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.BOOL) {
        this.healthy = input.readBool().value;
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

HealthPokeResponse.prototype.write = function(output) {
  output.writeStructBegin('HealthPokeResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  if (this.healthy !== null && this.healthy !== undefined) {
    output.writeFieldBegin('healthy', Thrift.Type.BOOL, 2);
    output.writeBool(this.healthy);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

