//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


TimeUnit = {
  'MILLIS' : 0,
  'SECONDS' : 1,
  'MINUTES' : 2,
  'HOURS' : 3,
  'DAYS' : 4,
  'WEEKS' : 5
};
ImageType = {
  'JPEG' : 1,
  'PNG' : 2
};
Urgency = {
  'LOW' : 1,
  'MEDIUM' : 2,
  'HIGH' : 3
};
Role = {
  'DEVELOPER' : 1,
  'OPERATIONS' : 2,
  'MANAGER' : 3,
  'PRODUCT' : 4,
  'QA' : 5
};
ProgrammingLanguage = {
  'JAVA' : 0,
  'CPP' : 1,
  'C_SHARP' : 2,
  'C' : 3,
  'OBJECTIVE_C' : 4,
  'SWIFT' : 5,
  'DOT_NET' : 6,
  'RUBY' : 7,
  'GROOVY' : 8,
  'PYTHON' : 9,
  'PHP' : 10,
  'NODE' : 11,
  'DART' : 12,
  'OTHER' : 13
};
LengthOfTime = function(args) {
  this.unit = null;
  this.value = null;
  if (args) {
    if (args.unit !== undefined && args.unit !== null) {
      this.unit = args.unit;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field unit is unset!');
    }
    if (args.value !== undefined && args.value !== null) {
      this.value = args.value;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field value is unset!');
    }
  }
};
LengthOfTime.prototype = {};
LengthOfTime.prototype.read = function(input) {
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
        this.unit = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.value = input.readI64().value;
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

LengthOfTime.prototype.write = function(output) {
  output.writeStructBegin('LengthOfTime');
  if (this.unit !== null && this.unit !== undefined) {
    output.writeFieldBegin('unit', Thrift.Type.I32, 1);
    output.writeI32(this.unit);
    output.writeFieldEnd();
  }
  if (this.value !== null && this.value !== undefined) {
    output.writeFieldBegin('value', Thrift.Type.I64, 2);
    output.writeI64(this.value);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Dimension = function(args) {
  this.width = null;
  this.height = null;
  if (args) {
    if (args.width !== undefined && args.width !== null) {
      this.width = args.width;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field width is unset!');
    }
    if (args.height !== undefined && args.height !== null) {
      this.height = args.height;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field height is unset!');
    }
  }
};
Dimension.prototype = {};
Dimension.prototype.read = function(input) {
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
        this.width = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.height = input.readI32().value;
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

Dimension.prototype.write = function(output) {
  output.writeStructBegin('Dimension');
  if (this.width !== null && this.width !== undefined) {
    output.writeFieldBegin('width', Thrift.Type.I32, 1);
    output.writeI32(this.width);
    output.writeFieldEnd();
  }
  if (this.height !== null && this.height !== undefined) {
    output.writeFieldBegin('height', Thrift.Type.I32, 2);
    output.writeI32(this.height);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Image = function(args) {
  this.imageType = null;
  this.data = null;
  this.dimension = null;
  if (args) {
    if (args.imageType !== undefined && args.imageType !== null) {
      this.imageType = args.imageType;
    }
    if (args.data !== undefined && args.data !== null) {
      this.data = args.data;
    }
    if (args.dimension !== undefined && args.dimension !== null) {
      this.dimension = new Dimension(args.dimension);
    }
  }
};
Image.prototype = {};
Image.prototype.read = function(input) {
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
        this.imageType = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.data = input.readBinary().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.dimension = new Dimension();
        this.dimension.read(input);
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

Image.prototype.write = function(output) {
  output.writeStructBegin('Image');
  if (this.imageType !== null && this.imageType !== undefined) {
    output.writeFieldBegin('imageType', Thrift.Type.I32, 1);
    output.writeI32(this.imageType);
    output.writeFieldEnd();
  }
  if (this.data !== null && this.data !== undefined) {
    output.writeFieldBegin('data', Thrift.Type.STRING, 2);
    output.writeBinary(this.data);
    output.writeFieldEnd();
  }
  if (this.dimension !== null && this.dimension !== undefined) {
    output.writeFieldBegin('dimension', Thrift.Type.STRUCT, 3);
    this.dimension.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Message = function(args) {
  this.messageId = null;
  this.body = null;
  this.urgency = 1;
  this.timeOfCreation = null;
  this.timeMessageReceived = null;
  this.applicationName = null;
  this.hostname = null;
  this.macAddress = null;
  this.isTruncated = false;
  this.title = null;
  this.applicationId = null;
  if (args) {
    if (args.messageId !== undefined && args.messageId !== null) {
      this.messageId = args.messageId;
    }
    if (args.body !== undefined && args.body !== null) {
      this.body = args.body;
    }
    if (args.urgency !== undefined && args.urgency !== null) {
      this.urgency = args.urgency;
    }
    if (args.timeOfCreation !== undefined && args.timeOfCreation !== null) {
      this.timeOfCreation = args.timeOfCreation;
    }
    if (args.timeMessageReceived !== undefined && args.timeMessageReceived !== null) {
      this.timeMessageReceived = args.timeMessageReceived;
    }
    if (args.applicationName !== undefined && args.applicationName !== null) {
      this.applicationName = args.applicationName;
    }
    if (args.hostname !== undefined && args.hostname !== null) {
      this.hostname = args.hostname;
    }
    if (args.macAddress !== undefined && args.macAddress !== null) {
      this.macAddress = args.macAddress;
    }
    if (args.isTruncated !== undefined && args.isTruncated !== null) {
      this.isTruncated = args.isTruncated;
    }
    if (args.title !== undefined && args.title !== null) {
      this.title = args.title;
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
  }
};
Message.prototype = {};
Message.prototype.read = function(input) {
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
        this.messageId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.body = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.urgency = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.I64) {
        this.timeOfCreation = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.I64) {
        this.timeMessageReceived = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRING) {
        this.applicationName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRING) {
        this.hostname = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 8:
      if (ftype == Thrift.Type.STRING) {
        this.macAddress = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 9:
      if (ftype == Thrift.Type.BOOL) {
        this.isTruncated = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.title = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
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

Message.prototype.write = function(output) {
  output.writeStructBegin('Message');
  if (this.messageId !== null && this.messageId !== undefined) {
    output.writeFieldBegin('messageId', Thrift.Type.STRING, 1);
    output.writeString(this.messageId);
    output.writeFieldEnd();
  }
  if (this.body !== null && this.body !== undefined) {
    output.writeFieldBegin('body', Thrift.Type.STRING, 2);
    output.writeString(this.body);
    output.writeFieldEnd();
  }
  if (this.urgency !== null && this.urgency !== undefined) {
    output.writeFieldBegin('urgency', Thrift.Type.I32, 3);
    output.writeI32(this.urgency);
    output.writeFieldEnd();
  }
  if (this.timeOfCreation !== null && this.timeOfCreation !== undefined) {
    output.writeFieldBegin('timeOfCreation', Thrift.Type.I64, 4);
    output.writeI64(this.timeOfCreation);
    output.writeFieldEnd();
  }
  if (this.timeMessageReceived !== null && this.timeMessageReceived !== undefined) {
    output.writeFieldBegin('timeMessageReceived', Thrift.Type.I64, 5);
    output.writeI64(this.timeMessageReceived);
    output.writeFieldEnd();
  }
  if (this.applicationName !== null && this.applicationName !== undefined) {
    output.writeFieldBegin('applicationName', Thrift.Type.STRING, 6);
    output.writeString(this.applicationName);
    output.writeFieldEnd();
  }
  if (this.hostname !== null && this.hostname !== undefined) {
    output.writeFieldBegin('hostname', Thrift.Type.STRING, 7);
    output.writeString(this.hostname);
    output.writeFieldEnd();
  }
  if (this.macAddress !== null && this.macAddress !== undefined) {
    output.writeFieldBegin('macAddress', Thrift.Type.STRING, 8);
    output.writeString(this.macAddress);
    output.writeFieldEnd();
  }
  if (this.isTruncated !== null && this.isTruncated !== undefined) {
    output.writeFieldBegin('isTruncated', Thrift.Type.BOOL, 9);
    output.writeBool(this.isTruncated);
    output.writeFieldEnd();
  }
  if (this.title !== null && this.title !== undefined) {
    output.writeFieldBegin('title', Thrift.Type.STRING, 10);
    output.writeString(this.title);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 11);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Organization = function(args) {
  this.organizationId = null;
  this.organizationName = null;
  this.website = null;
  this.logo = null;
  this.techStack = null;
  this.owners = null;
  this.organizationEmail = null;
  this.stockMarketSymbol = null;
  if (args) {
    if (args.organizationId !== undefined && args.organizationId !== null) {
      this.organizationId = args.organizationId;
    }
    if (args.organizationName !== undefined && args.organizationName !== null) {
      this.organizationName = args.organizationName;
    }
    if (args.website !== undefined && args.website !== null) {
      this.website = args.website;
    }
    if (args.logo !== undefined && args.logo !== null) {
      this.logo = new Image(args.logo);
    }
    if (args.techStack !== undefined && args.techStack !== null) {
      this.techStack = args.techStack;
    }
    if (args.owners !== undefined && args.owners !== null) {
      this.owners = Thrift.copyList(args.owners, [null]);
    }
    if (args.organizationEmail !== undefined && args.organizationEmail !== null) {
      this.organizationEmail = args.organizationEmail;
    }
    if (args.stockMarketSymbol !== undefined && args.stockMarketSymbol !== null) {
      this.stockMarketSymbol = args.stockMarketSymbol;
    }
  }
};
Organization.prototype = {};
Organization.prototype.read = function(input) {
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
        this.organizationId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.organizationName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.website = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.logo = new Image();
        this.logo.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.techStack = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.LIST) {
        var _size0 = 0;
        var _rtmp34;
        this.owners = [];
        var _etype3 = 0;
        _rtmp34 = input.readListBegin();
        _etype3 = _rtmp34.etype;
        _size0 = _rtmp34.size;
        for (var _i5 = 0; _i5 < _size0; ++_i5)
        {
          var elem6 = null;
          elem6 = input.readString().value;
          this.owners.push(elem6);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRING) {
        this.organizationEmail = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 8:
      if (ftype == Thrift.Type.STRING) {
        this.stockMarketSymbol = input.readString().value;
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

Organization.prototype.write = function(output) {
  output.writeStructBegin('Organization');
  if (this.organizationId !== null && this.organizationId !== undefined) {
    output.writeFieldBegin('organizationId', Thrift.Type.STRING, 1);
    output.writeString(this.organizationId);
    output.writeFieldEnd();
  }
  if (this.organizationName !== null && this.organizationName !== undefined) {
    output.writeFieldBegin('organizationName', Thrift.Type.STRING, 2);
    output.writeString(this.organizationName);
    output.writeFieldEnd();
  }
  if (this.website !== null && this.website !== undefined) {
    output.writeFieldBegin('website', Thrift.Type.STRING, 3);
    output.writeString(this.website);
    output.writeFieldEnd();
  }
  if (this.logo !== null && this.logo !== undefined) {
    output.writeFieldBegin('logo', Thrift.Type.STRUCT, 4);
    this.logo.write(output);
    output.writeFieldEnd();
  }
  if (this.techStack !== null && this.techStack !== undefined) {
    output.writeFieldBegin('techStack', Thrift.Type.STRING, 5);
    output.writeString(this.techStack);
    output.writeFieldEnd();
  }
  if (this.owners !== null && this.owners !== undefined) {
    output.writeFieldBegin('owners', Thrift.Type.LIST, 6);
    output.writeListBegin(Thrift.Type.STRING, this.owners.length);
    for (var iter7 in this.owners)
    {
      if (this.owners.hasOwnProperty(iter7))
      {
        iter7 = this.owners[iter7];
        output.writeString(iter7);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.organizationEmail !== null && this.organizationEmail !== undefined) {
    output.writeFieldBegin('organizationEmail', Thrift.Type.STRING, 7);
    output.writeString(this.organizationEmail);
    output.writeFieldEnd();
  }
  if (this.stockMarketSymbol !== null && this.stockMarketSymbol !== undefined) {
    output.writeFieldBegin('stockMarketSymbol', Thrift.Type.STRING, 8);
    output.writeString(this.stockMarketSymbol);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

User = function(args) {
  this.email = null;
  this.userId = null;
  this.name = null;
  this.roles = [1];
  this.profileImage = null;
  this.profileImageLink = null;
  if (args) {
    if (args.email !== undefined && args.email !== null) {
      this.email = args.email;
    }
    if (args.userId !== undefined && args.userId !== null) {
      this.userId = args.userId;
    }
    if (args.name !== undefined && args.name !== null) {
      this.name = args.name;
    }
    if (args.roles !== undefined && args.roles !== null) {
      this.roles = Thrift.copyList(args.roles, [null]);
    }
    if (args.profileImage !== undefined && args.profileImage !== null) {
      this.profileImage = new Image(args.profileImage);
    }
    if (args.profileImageLink !== undefined && args.profileImageLink !== null) {
      this.profileImageLink = args.profileImageLink;
    }
  }
};
User.prototype = {};
User.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.STRING) {
        this.userId = input.readString().value;
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
      if (ftype == Thrift.Type.SET) {
        var _size8 = 0;
        var _rtmp312;
        this.roles = [];
        var _etype11 = 0;
        _rtmp312 = input.readSetBegin();
        _etype11 = _rtmp312.etype;
        _size8 = _rtmp312.size;
        for (var _i13 = 0; _i13 < _size8; ++_i13)
        {
          var elem14 = null;
          elem14 = input.readI32().value;
          this.roles.push(elem14);
        }
        input.readSetEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.profileImage = new Image();
        this.profileImage.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRING) {
        this.profileImageLink = input.readString().value;
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

User.prototype.write = function(output) {
  output.writeStructBegin('User');
  if (this.email !== null && this.email !== undefined) {
    output.writeFieldBegin('email', Thrift.Type.STRING, 1);
    output.writeString(this.email);
    output.writeFieldEnd();
  }
  if (this.userId !== null && this.userId !== undefined) {
    output.writeFieldBegin('userId', Thrift.Type.STRING, 2);
    output.writeString(this.userId);
    output.writeFieldEnd();
  }
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 3);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  if (this.roles !== null && this.roles !== undefined) {
    output.writeFieldBegin('roles', Thrift.Type.SET, 4);
    output.writeSetBegin(Thrift.Type.I32, this.roles.length);
    for (var iter15 in this.roles)
    {
      if (this.roles.hasOwnProperty(iter15))
      {
        iter15 = this.roles[iter15];
        output.writeI32(iter15);
      }
    }
    output.writeSetEnd();
    output.writeFieldEnd();
  }
  if (this.profileImage !== null && this.profileImage !== undefined) {
    output.writeFieldBegin('profileImage', Thrift.Type.STRUCT, 5);
    this.profileImage.write(output);
    output.writeFieldEnd();
  }
  if (this.profileImageLink !== null && this.profileImageLink !== undefined) {
    output.writeFieldBegin('profileImageLink', Thrift.Type.STRING, 6);
    output.writeString(this.profileImageLink);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Application = function(args) {
  this.owners = null;
  this.timeOfProvisioning = null;
  this.name = null;
  this.applicationId = null;
  this.totalMessagesSent = null;
  this.icon = null;
  this.programmingLanguage = null;
  this.followers = [];
  this.applicationDescription = null;
  this.organizationId = null;
  if (args) {
    if (args.owners !== undefined && args.owners !== null) {
      this.owners = Thrift.copyList(args.owners, [User]);
    }
    if (args.timeOfProvisioning !== undefined && args.timeOfProvisioning !== null) {
      this.timeOfProvisioning = args.timeOfProvisioning;
    }
    if (args.name !== undefined && args.name !== null) {
      this.name = args.name;
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.totalMessagesSent !== undefined && args.totalMessagesSent !== null) {
      this.totalMessagesSent = args.totalMessagesSent;
    }
    if (args.icon !== undefined && args.icon !== null) {
      this.icon = new Image(args.icon);
    }
    if (args.programmingLanguage !== undefined && args.programmingLanguage !== null) {
      this.programmingLanguage = args.programmingLanguage;
    }
    if (args.followers !== undefined && args.followers !== null) {
      this.followers = Thrift.copyList(args.followers, [null]);
    }
    if (args.applicationDescription !== undefined && args.applicationDescription !== null) {
      this.applicationDescription = args.applicationDescription;
    }
    if (args.organizationId !== undefined && args.organizationId !== null) {
      this.organizationId = args.organizationId;
    }
  }
};
Application.prototype = {};
Application.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.SET) {
        var _size16 = 0;
        var _rtmp320;
        this.owners = [];
        var _etype19 = 0;
        _rtmp320 = input.readSetBegin();
        _etype19 = _rtmp320.etype;
        _size16 = _rtmp320.size;
        for (var _i21 = 0; _i21 < _size16; ++_i21)
        {
          var elem22 = null;
          elem22 = new User();
          elem22.read(input);
          this.owners.push(elem22);
        }
        input.readSetEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.timeOfProvisioning = input.readI64().value;
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
      if (ftype == Thrift.Type.STRING) {
        this.applicationId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.I64) {
        this.totalMessagesSent = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRUCT) {
        this.icon = new Image();
        this.icon.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.I32) {
        this.programmingLanguage = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 8:
      if (ftype == Thrift.Type.SET) {
        var _size23 = 0;
        var _rtmp327;
        this.followers = [];
        var _etype26 = 0;
        _rtmp327 = input.readSetBegin();
        _etype26 = _rtmp327.etype;
        _size23 = _rtmp327.size;
        for (var _i28 = 0; _i28 < _size23; ++_i28)
        {
          var elem29 = null;
          elem29 = input.readString().value;
          this.followers.push(elem29);
        }
        input.readSetEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 9:
      if (ftype == Thrift.Type.STRING) {
        this.applicationDescription = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.organizationId = input.readString().value;
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

Application.prototype.write = function(output) {
  output.writeStructBegin('Application');
  if (this.owners !== null && this.owners !== undefined) {
    output.writeFieldBegin('owners', Thrift.Type.SET, 1);
    output.writeSetBegin(Thrift.Type.STRUCT, this.owners.length);
    for (var iter30 in this.owners)
    {
      if (this.owners.hasOwnProperty(iter30))
      {
        iter30 = this.owners[iter30];
        iter30.write(output);
      }
    }
    output.writeSetEnd();
    output.writeFieldEnd();
  }
  if (this.timeOfProvisioning !== null && this.timeOfProvisioning !== undefined) {
    output.writeFieldBegin('timeOfProvisioning', Thrift.Type.I64, 2);
    output.writeI64(this.timeOfProvisioning);
    output.writeFieldEnd();
  }
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 3);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 4);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  if (this.totalMessagesSent !== null && this.totalMessagesSent !== undefined) {
    output.writeFieldBegin('totalMessagesSent', Thrift.Type.I64, 5);
    output.writeI64(this.totalMessagesSent);
    output.writeFieldEnd();
  }
  if (this.icon !== null && this.icon !== undefined) {
    output.writeFieldBegin('icon', Thrift.Type.STRUCT, 6);
    this.icon.write(output);
    output.writeFieldEnd();
  }
  if (this.programmingLanguage !== null && this.programmingLanguage !== undefined) {
    output.writeFieldBegin('programmingLanguage', Thrift.Type.I32, 7);
    output.writeI32(this.programmingLanguage);
    output.writeFieldEnd();
  }
  if (this.followers !== null && this.followers !== undefined) {
    output.writeFieldBegin('followers', Thrift.Type.SET, 8);
    output.writeSetBegin(Thrift.Type.STRING, this.followers.length);
    for (var iter31 in this.followers)
    {
      if (this.followers.hasOwnProperty(iter31))
      {
        iter31 = this.followers[iter31];
        output.writeString(iter31);
      }
    }
    output.writeSetEnd();
    output.writeFieldEnd();
  }
  if (this.applicationDescription !== null && this.applicationDescription !== undefined) {
    output.writeFieldBegin('applicationDescription', Thrift.Type.STRING, 9);
    output.writeString(this.applicationDescription);
    output.writeFieldEnd();
  }
  if (this.organizationId !== null && this.organizationId !== undefined) {
    output.writeFieldBegin('organizationId', Thrift.Type.STRING, 10);
    output.writeString(this.organizationId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ServiceAnnouncement = function(args) {
  this.message = null;
  this.importance = null;
  this.id = null;
  this.timeOfExpiration = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
    if (args.importance !== undefined && args.importance !== null) {
      this.importance = args.importance;
    }
    if (args.id !== undefined && args.id !== null) {
      this.id = args.id;
    }
    if (args.timeOfExpiration !== undefined && args.timeOfExpiration !== null) {
      this.timeOfExpiration = args.timeOfExpiration;
    }
  }
};
ServiceAnnouncement.prototype = {};
ServiceAnnouncement.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.I32) {
        this.importance = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.id = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.I64) {
        this.timeOfExpiration = input.readI64().value;
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

ServiceAnnouncement.prototype.write = function(output) {
  output.writeStructBegin('ServiceAnnouncement');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  if (this.importance !== null && this.importance !== undefined) {
    output.writeFieldBegin('importance', Thrift.Type.I32, 2);
    output.writeI32(this.importance);
    output.writeFieldEnd();
  }
  if (this.id !== null && this.id !== undefined) {
    output.writeFieldBegin('id', Thrift.Type.STRING, 3);
    output.writeString(this.id);
    output.writeFieldEnd();
  }
  if (this.timeOfExpiration !== null && this.timeOfExpiration !== undefined) {
    output.writeFieldBegin('timeOfExpiration', Thrift.Type.I64, 4);
    output.writeI64(this.timeOfExpiration);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

