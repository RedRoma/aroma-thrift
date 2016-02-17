//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


MatcherAll = function(args) {
};
MatcherAll.prototype = {};
MatcherAll.prototype.read = function(input) {
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

MatcherAll.prototype.write = function(output) {
  output.writeStructBegin('MatcherAll');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherTitleIs = function(args) {
  this.expectedTitle = null;
  if (args) {
    if (args.expectedTitle !== undefined && args.expectedTitle !== null) {
      this.expectedTitle = args.expectedTitle;
    }
  }
};
MatcherTitleIs.prototype = {};
MatcherTitleIs.prototype.read = function(input) {
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
        this.expectedTitle = input.readString().value;
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

MatcherTitleIs.prototype.write = function(output) {
  output.writeStructBegin('MatcherTitleIs');
  if (this.expectedTitle !== null && this.expectedTitle !== undefined) {
    output.writeFieldBegin('expectedTitle', Thrift.Type.STRING, 1);
    output.writeString(this.expectedTitle);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherTitleContains = function(args) {
  this.substring = null;
  if (args) {
    if (args.substring !== undefined && args.substring !== null) {
      this.substring = args.substring;
    }
  }
};
MatcherTitleContains.prototype = {};
MatcherTitleContains.prototype.read = function(input) {
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
        this.substring = input.readString().value;
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

MatcherTitleContains.prototype.write = function(output) {
  output.writeStructBegin('MatcherTitleContains');
  if (this.substring !== null && this.substring !== undefined) {
    output.writeFieldBegin('substring', Thrift.Type.STRING, 1);
    output.writeString(this.substring);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherBodyIs = function(args) {
  this.expectedBody = null;
  if (args) {
    if (args.expectedBody !== undefined && args.expectedBody !== null) {
      this.expectedBody = args.expectedBody;
    }
  }
};
MatcherBodyIs.prototype = {};
MatcherBodyIs.prototype.read = function(input) {
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
        this.expectedBody = input.readString().value;
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

MatcherBodyIs.prototype.write = function(output) {
  output.writeStructBegin('MatcherBodyIs');
  if (this.expectedBody !== null && this.expectedBody !== undefined) {
    output.writeFieldBegin('expectedBody', Thrift.Type.STRING, 1);
    output.writeString(this.expectedBody);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherBodyContains = function(args) {
  this.substring = null;
  if (args) {
    if (args.substring !== undefined && args.substring !== null) {
      this.substring = args.substring;
    }
  }
};
MatcherBodyContains.prototype = {};
MatcherBodyContains.prototype.read = function(input) {
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
        this.substring = input.readString().value;
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

MatcherBodyContains.prototype.write = function(output) {
  output.writeStructBegin('MatcherBodyContains');
  if (this.substring !== null && this.substring !== undefined) {
    output.writeFieldBegin('substring', Thrift.Type.STRING, 1);
    output.writeString(this.substring);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherUrgencyEquals = function(args) {
  this.urgency = null;
  if (args) {
    if (args.urgency !== undefined && args.urgency !== null) {
      this.urgency = args.urgency;
    }
  }
};
MatcherUrgencyEquals.prototype = {};
MatcherUrgencyEquals.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.I32) {
        this.urgency = input.readI32().value;
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

MatcherUrgencyEquals.prototype.write = function(output) {
  output.writeStructBegin('MatcherUrgencyEquals');
  if (this.urgency !== null && this.urgency !== undefined) {
    output.writeFieldBegin('urgency', Thrift.Type.I32, 1);
    output.writeI32(this.urgency);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherHostnameEquals = function(args) {
  this.expectedHostname = null;
  if (args) {
    if (args.expectedHostname !== undefined && args.expectedHostname !== null) {
      this.expectedHostname = args.expectedHostname;
    }
  }
};
MatcherHostnameEquals.prototype = {};
MatcherHostnameEquals.prototype.read = function(input) {
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
        this.expectedHostname = input.readString().value;
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

MatcherHostnameEquals.prototype.write = function(output) {
  output.writeStructBegin('MatcherHostnameEquals');
  if (this.expectedHostname !== null && this.expectedHostname !== undefined) {
    output.writeFieldBegin('expectedHostname', Thrift.Type.STRING, 1);
    output.writeString(this.expectedHostname);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Matcher = function(args) {
  this.all = null;
  this.titleIs = null;
  this.titleContains = null;
  this.bodyIs = null;
  this.bodyContains = null;
  this.urgencyEquals = null;
  this.hostnameEquals = null;
  if (args) {
    if (args.all !== undefined && args.all !== null) {
      this.all = new MatcherAll(args.all);
    }
    if (args.titleIs !== undefined && args.titleIs !== null) {
      this.titleIs = new MatcherTitleIs(args.titleIs);
    }
    if (args.titleContains !== undefined && args.titleContains !== null) {
      this.titleContains = new MatcherTitleContains(args.titleContains);
    }
    if (args.bodyIs !== undefined && args.bodyIs !== null) {
      this.bodyIs = new MatcherBodyIs(args.bodyIs);
    }
    if (args.bodyContains !== undefined && args.bodyContains !== null) {
      this.bodyContains = new MatcherBodyContains(args.bodyContains);
    }
    if (args.urgencyEquals !== undefined && args.urgencyEquals !== null) {
      this.urgencyEquals = new MatcherUrgencyEquals(args.urgencyEquals);
    }
    if (args.hostnameEquals !== undefined && args.hostnameEquals !== null) {
      this.hostnameEquals = new MatcherHostnameEquals(args.hostnameEquals);
    }
  }
};
Matcher.prototype = {};
Matcher.prototype.read = function(input) {
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
        this.all = new MatcherAll();
        this.all.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.titleIs = new MatcherTitleIs();
        this.titleIs.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.titleContains = new MatcherTitleContains();
        this.titleContains.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.bodyIs = new MatcherBodyIs();
        this.bodyIs.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.bodyContains = new MatcherBodyContains();
        this.bodyContains.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRUCT) {
        this.urgencyEquals = new MatcherUrgencyEquals();
        this.urgencyEquals.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRUCT) {
        this.hostnameEquals = new MatcherHostnameEquals();
        this.hostnameEquals.read(input);
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

Matcher.prototype.write = function(output) {
  output.writeStructBegin('Matcher');
  if (this.all !== null && this.all !== undefined) {
    output.writeFieldBegin('all', Thrift.Type.STRUCT, 1);
    this.all.write(output);
    output.writeFieldEnd();
  }
  if (this.titleIs !== null && this.titleIs !== undefined) {
    output.writeFieldBegin('titleIs', Thrift.Type.STRUCT, 2);
    this.titleIs.write(output);
    output.writeFieldEnd();
  }
  if (this.titleContains !== null && this.titleContains !== undefined) {
    output.writeFieldBegin('titleContains', Thrift.Type.STRUCT, 3);
    this.titleContains.write(output);
    output.writeFieldEnd();
  }
  if (this.bodyIs !== null && this.bodyIs !== undefined) {
    output.writeFieldBegin('bodyIs', Thrift.Type.STRUCT, 4);
    this.bodyIs.write(output);
    output.writeFieldEnd();
  }
  if (this.bodyContains !== null && this.bodyContains !== undefined) {
    output.writeFieldBegin('bodyContains', Thrift.Type.STRUCT, 5);
    this.bodyContains.write(output);
    output.writeFieldEnd();
  }
  if (this.urgencyEquals !== null && this.urgencyEquals !== undefined) {
    output.writeFieldBegin('urgencyEquals', Thrift.Type.STRUCT, 6);
    this.urgencyEquals.write(output);
    output.writeFieldEnd();
  }
  if (this.hostnameEquals !== null && this.hostnameEquals !== undefined) {
    output.writeFieldBegin('hostnameEquals', Thrift.Type.STRUCT, 7);
    this.hostnameEquals.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

