//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


ApplicationMessagesDeleted = function(args) {
  this.totalMessagesDeleted = null;
  this.message = 'Application\'s messages have been deleted';
  if (args) {
    if (args.totalMessagesDeleted !== undefined && args.totalMessagesDeleted !== null) {
      this.totalMessagesDeleted = args.totalMessagesDeleted;
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationMessagesDeleted.prototype = {};
ApplicationMessagesDeleted.prototype.read = function(input) {
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
        this.totalMessagesDeleted = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString().value;
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

ApplicationMessagesDeleted.prototype.write = function(output) {
  output.writeStructBegin('ApplicationMessagesDeleted');
  if (this.totalMessagesDeleted !== null && this.totalMessagesDeleted !== undefined) {
    output.writeFieldBegin('totalMessagesDeleted', Thrift.Type.I32, 1);
    output.writeI32(this.totalMessagesDeleted);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 2);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationTokenRenewed = function(args) {
  this.applicationToken = null;
  this.message = 'Application Token has been renewed';
  if (args) {
    if (args.applicationToken !== undefined && args.applicationToken !== null) {
      this.applicationToken = new ApplicationToken(args.applicationToken);
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationTokenRenewed.prototype = {};
ApplicationTokenRenewed.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString().value;
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

ApplicationTokenRenewed.prototype.write = function(output) {
  output.writeStructBegin('ApplicationTokenRenewed');
  if (this.applicationToken !== null && this.applicationToken !== undefined) {
    output.writeFieldBegin('applicationToken', Thrift.Type.STRUCT, 1);
    this.applicationToken.write(output);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 2);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationTokenRegenerated = function(args) {
  this.applicationToken = null;
  this.actor = null;
  this.message = 'Application Token has been re-created';
  if (args) {
    if (args.applicationToken !== undefined && args.applicationToken !== null) {
      this.applicationToken = new ApplicationToken(args.applicationToken);
    }
    if (args.actor !== undefined && args.actor !== null) {
      this.actor = new User(args.actor);
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationTokenRegenerated.prototype = {};
ApplicationTokenRegenerated.prototype.read = function(input) {
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
        this.actor = new User();
        this.actor.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString().value;
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

ApplicationTokenRegenerated.prototype.write = function(output) {
  output.writeStructBegin('ApplicationTokenRegenerated');
  if (this.applicationToken !== null && this.applicationToken !== undefined) {
    output.writeFieldBegin('applicationToken', Thrift.Type.STRUCT, 1);
    this.applicationToken.write(output);
    output.writeFieldEnd();
  }
  if (this.actor !== null && this.actor !== undefined) {
    output.writeFieldBegin('actor', Thrift.Type.STRUCT, 2);
    this.actor.write(output);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 3);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationSentMessage = function(args) {
  this.messageId = null;
  this.messageSentByApplication = null;
  this.message = 'Application has sent an Alert';
  if (args) {
    if (args.messageId !== undefined && args.messageId !== null) {
      this.messageId = args.messageId;
    }
    if (args.messageSentByApplication !== undefined && args.messageSentByApplication !== null) {
      this.messageSentByApplication = new Message(args.messageSentByApplication);
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationSentMessage.prototype = {};
ApplicationSentMessage.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.STRUCT) {
        this.messageSentByApplication = new Message();
        this.messageSentByApplication.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString().value;
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

ApplicationSentMessage.prototype.write = function(output) {
  output.writeStructBegin('ApplicationSentMessage');
  if (this.messageId !== null && this.messageId !== undefined) {
    output.writeFieldBegin('messageId', Thrift.Type.STRING, 1);
    output.writeString(this.messageId);
    output.writeFieldEnd();
  }
  if (this.messageSentByApplication !== null && this.messageSentByApplication !== undefined) {
    output.writeFieldBegin('messageSentByApplication', Thrift.Type.STRUCT, 2);
    this.messageSentByApplication.write(output);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 3);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationDeleted = function(args) {
  this.message = 'Application has been deleted';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationDeleted.prototype = {};
ApplicationDeleted.prototype.read = function(input) {
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

ApplicationDeleted.prototype.write = function(output) {
  output.writeStructBegin('ApplicationDeleted');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationFollowed = function(args) {
  this.message = 'Application Followed';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationFollowed.prototype = {};
ApplicationFollowed.prototype.read = function(input) {
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

ApplicationFollowed.prototype.write = function(output) {
  output.writeStructBegin('ApplicationFollowed');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationUnfollowed = function(args) {
  this.message = 'Application Unfollowed';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationUnfollowed.prototype = {};
ApplicationUnfollowed.prototype.read = function(input) {
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

ApplicationUnfollowed.prototype.write = function(output) {
  output.writeStructBegin('ApplicationUnfollowed');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationUpdated = function(args) {
  this.message = 'Application Updated';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
ApplicationUpdated.prototype = {};
ApplicationUpdated.prototype.read = function(input) {
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

ApplicationUpdated.prototype.write = function(output) {
  output.writeStructBegin('ApplicationUpdated');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

HealthCheckFailed = function(args) {
  this.hostname = null;
  this.message = 'Application failed a Health Check';
  if (args) {
    if (args.hostname !== undefined && args.hostname !== null) {
      this.hostname = args.hostname;
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
HealthCheckFailed.prototype = {};
HealthCheckFailed.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString().value;
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

HealthCheckFailed.prototype.write = function(output) {
  output.writeStructBegin('HealthCheckFailed');
  if (this.hostname !== null && this.hostname !== undefined) {
    output.writeFieldBegin('hostname', Thrift.Type.STRING, 1);
    output.writeString(this.hostname);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 2);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

HealthCheckBackToNormal = function(args) {
  this.message = 'Application\'s Health is back to normal';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
HealthCheckBackToNormal.prototype = {};
HealthCheckBackToNormal.prototype.read = function(input) {
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

HealthCheckBackToNormal.prototype.write = function(output) {
  output.writeStructBegin('HealthCheckBackToNormal');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

OwnerAdded = function(args) {
  this.userIdOfNewOwner = null;
  this.newOwner = null;
  this.message = 'New Owner Added';
  if (args) {
    if (args.userIdOfNewOwner !== undefined && args.userIdOfNewOwner !== null) {
      this.userIdOfNewOwner = args.userIdOfNewOwner;
    }
    if (args.newOwner !== undefined && args.newOwner !== null) {
      this.newOwner = new User(args.newOwner);
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
OwnerAdded.prototype = {};
OwnerAdded.prototype.read = function(input) {
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
        this.userIdOfNewOwner = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.newOwner = new User();
        this.newOwner.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.message = input.readString().value;
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

OwnerAdded.prototype.write = function(output) {
  output.writeStructBegin('OwnerAdded');
  if (this.userIdOfNewOwner !== null && this.userIdOfNewOwner !== undefined) {
    output.writeFieldBegin('userIdOfNewOwner', Thrift.Type.STRING, 1);
    output.writeString(this.userIdOfNewOwner);
    output.writeFieldEnd();
  }
  if (this.newOwner !== null && this.newOwner !== undefined) {
    output.writeFieldBegin('newOwner', Thrift.Type.STRUCT, 2);
    this.newOwner.write(output);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 3);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

OwnerApprovedRequest = function(args) {
  this.message = 'Application Owner approved your request';
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
OwnerApprovedRequest.prototype = {};
OwnerApprovedRequest.prototype.read = function(input) {
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

OwnerApprovedRequest.prototype.write = function(output) {
  output.writeStructBegin('OwnerApprovedRequest');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GeneralEvent = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
GeneralEvent.prototype = {};
GeneralEvent.prototype.read = function(input) {
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

GeneralEvent.prototype.write = function(output) {
  output.writeStructBegin('GeneralEvent');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

EventType = function(args) {
  this.applicationMessageDeleted = null;
  this.healthCheckFailed = null;
  this.healthCheckBackToNormal = null;
  this.applicationFollowed = null;
  this.applicationDeleted = null;
  this.applicationTokenRenewed = null;
  this.applicationTokenRegenerated = null;
  this.applicationSentMessage = null;
  this.applicationUnfollowed = null;
  this.applicationUpdated = null;
  this.ownerApprovedRequest = null;
  this.ownerAdded = null;
  this.generalEvent = null;
  if (args) {
    if (args.applicationMessageDeleted !== undefined && args.applicationMessageDeleted !== null) {
      this.applicationMessageDeleted = new ApplicationMessagesDeleted(args.applicationMessageDeleted);
    }
    if (args.healthCheckFailed !== undefined && args.healthCheckFailed !== null) {
      this.healthCheckFailed = new HealthCheckFailed(args.healthCheckFailed);
    }
    if (args.healthCheckBackToNormal !== undefined && args.healthCheckBackToNormal !== null) {
      this.healthCheckBackToNormal = new HealthCheckBackToNormal(args.healthCheckBackToNormal);
    }
    if (args.applicationFollowed !== undefined && args.applicationFollowed !== null) {
      this.applicationFollowed = new ApplicationFollowed(args.applicationFollowed);
    }
    if (args.applicationDeleted !== undefined && args.applicationDeleted !== null) {
      this.applicationDeleted = new ApplicationDeleted(args.applicationDeleted);
    }
    if (args.applicationTokenRenewed !== undefined && args.applicationTokenRenewed !== null) {
      this.applicationTokenRenewed = new ApplicationTokenRenewed(args.applicationTokenRenewed);
    }
    if (args.applicationTokenRegenerated !== undefined && args.applicationTokenRegenerated !== null) {
      this.applicationTokenRegenerated = new ApplicationTokenRegenerated(args.applicationTokenRegenerated);
    }
    if (args.applicationSentMessage !== undefined && args.applicationSentMessage !== null) {
      this.applicationSentMessage = new ApplicationSentMessage(args.applicationSentMessage);
    }
    if (args.applicationUnfollowed !== undefined && args.applicationUnfollowed !== null) {
      this.applicationUnfollowed = new ApplicationUnfollowed(args.applicationUnfollowed);
    }
    if (args.applicationUpdated !== undefined && args.applicationUpdated !== null) {
      this.applicationUpdated = new ApplicationUpdated(args.applicationUpdated);
    }
    if (args.ownerApprovedRequest !== undefined && args.ownerApprovedRequest !== null) {
      this.ownerApprovedRequest = new OwnerApprovedRequest(args.ownerApprovedRequest);
    }
    if (args.ownerAdded !== undefined && args.ownerAdded !== null) {
      this.ownerAdded = new OwnerAdded(args.ownerAdded);
    }
    if (args.generalEvent !== undefined && args.generalEvent !== null) {
      this.generalEvent = new GeneralEvent(args.generalEvent);
    }
  }
};
EventType.prototype = {};
EventType.prototype.read = function(input) {
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
        this.applicationMessageDeleted = new ApplicationMessagesDeleted();
        this.applicationMessageDeleted.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.healthCheckFailed = new HealthCheckFailed();
        this.healthCheckFailed.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.healthCheckBackToNormal = new HealthCheckBackToNormal();
        this.healthCheckBackToNormal.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationFollowed = new ApplicationFollowed();
        this.applicationFollowed.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationDeleted = new ApplicationDeleted();
        this.applicationDeleted.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationTokenRenewed = new ApplicationTokenRenewed();
        this.applicationTokenRenewed.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationTokenRegenerated = new ApplicationTokenRegenerated();
        this.applicationTokenRegenerated.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 8:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationSentMessage = new ApplicationSentMessage();
        this.applicationSentMessage.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 12:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationUnfollowed = new ApplicationUnfollowed();
        this.applicationUnfollowed.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 13:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationUpdated = new ApplicationUpdated();
        this.applicationUpdated.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 9:
      if (ftype == Thrift.Type.STRUCT) {
        this.ownerApprovedRequest = new OwnerApprovedRequest();
        this.ownerApprovedRequest.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRUCT) {
        this.ownerAdded = new OwnerAdded();
        this.ownerAdded.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.STRUCT) {
        this.generalEvent = new GeneralEvent();
        this.generalEvent.read(input);
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

EventType.prototype.write = function(output) {
  output.writeStructBegin('EventType');
  if (this.applicationMessageDeleted !== null && this.applicationMessageDeleted !== undefined) {
    output.writeFieldBegin('applicationMessageDeleted', Thrift.Type.STRUCT, 1);
    this.applicationMessageDeleted.write(output);
    output.writeFieldEnd();
  }
  if (this.healthCheckFailed !== null && this.healthCheckFailed !== undefined) {
    output.writeFieldBegin('healthCheckFailed', Thrift.Type.STRUCT, 2);
    this.healthCheckFailed.write(output);
    output.writeFieldEnd();
  }
  if (this.healthCheckBackToNormal !== null && this.healthCheckBackToNormal !== undefined) {
    output.writeFieldBegin('healthCheckBackToNormal', Thrift.Type.STRUCT, 3);
    this.healthCheckBackToNormal.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationFollowed !== null && this.applicationFollowed !== undefined) {
    output.writeFieldBegin('applicationFollowed', Thrift.Type.STRUCT, 4);
    this.applicationFollowed.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationDeleted !== null && this.applicationDeleted !== undefined) {
    output.writeFieldBegin('applicationDeleted', Thrift.Type.STRUCT, 5);
    this.applicationDeleted.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationTokenRenewed !== null && this.applicationTokenRenewed !== undefined) {
    output.writeFieldBegin('applicationTokenRenewed', Thrift.Type.STRUCT, 6);
    this.applicationTokenRenewed.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationTokenRegenerated !== null && this.applicationTokenRegenerated !== undefined) {
    output.writeFieldBegin('applicationTokenRegenerated', Thrift.Type.STRUCT, 7);
    this.applicationTokenRegenerated.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationSentMessage !== null && this.applicationSentMessage !== undefined) {
    output.writeFieldBegin('applicationSentMessage', Thrift.Type.STRUCT, 8);
    this.applicationSentMessage.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationUnfollowed !== null && this.applicationUnfollowed !== undefined) {
    output.writeFieldBegin('applicationUnfollowed', Thrift.Type.STRUCT, 12);
    this.applicationUnfollowed.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationUpdated !== null && this.applicationUpdated !== undefined) {
    output.writeFieldBegin('applicationUpdated', Thrift.Type.STRUCT, 13);
    this.applicationUpdated.write(output);
    output.writeFieldEnd();
  }
  if (this.ownerApprovedRequest !== null && this.ownerApprovedRequest !== undefined) {
    output.writeFieldBegin('ownerApprovedRequest', Thrift.Type.STRUCT, 9);
    this.ownerApprovedRequest.write(output);
    output.writeFieldEnd();
  }
  if (this.ownerAdded !== null && this.ownerAdded !== undefined) {
    output.writeFieldBegin('ownerAdded', Thrift.Type.STRUCT, 10);
    this.ownerAdded.write(output);
    output.writeFieldEnd();
  }
  if (this.generalEvent !== null && this.generalEvent !== undefined) {
    output.writeFieldBegin('generalEvent', Thrift.Type.STRUCT, 11);
    this.generalEvent.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Event = function(args) {
  this.eventId = null;
  this.userIdOfActor = null;
  this.actor = null;
  this.applicationId = null;
  this.application = null;
  this.eventType = null;
  this.timestamp = null;
  if (args) {
    if (args.eventId !== undefined && args.eventId !== null) {
      this.eventId = args.eventId;
    }
    if (args.userIdOfActor !== undefined && args.userIdOfActor !== null) {
      this.userIdOfActor = args.userIdOfActor;
    }
    if (args.actor !== undefined && args.actor !== null) {
      this.actor = new User(args.actor);
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.application !== undefined && args.application !== null) {
      this.application = new Application(args.application);
    }
    if (args.eventType !== undefined && args.eventType !== null) {
      this.eventType = new EventType(args.eventType);
    }
    if (args.timestamp !== undefined && args.timestamp !== null) {
      this.timestamp = args.timestamp;
    }
  }
};
Event.prototype = {};
Event.prototype.read = function(input) {
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
        this.eventId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.userIdOfActor = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.actor = new User();
        this.actor.read(input);
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
      if (ftype == Thrift.Type.STRUCT) {
        this.application = new Application();
        this.application.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRUCT) {
        this.eventType = new EventType();
        this.eventType.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.I64) {
        this.timestamp = input.readI64().value;
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

Event.prototype.write = function(output) {
  output.writeStructBegin('Event');
  if (this.eventId !== null && this.eventId !== undefined) {
    output.writeFieldBegin('eventId', Thrift.Type.STRING, 1);
    output.writeString(this.eventId);
    output.writeFieldEnd();
  }
  if (this.userIdOfActor !== null && this.userIdOfActor !== undefined) {
    output.writeFieldBegin('userIdOfActor', Thrift.Type.STRING, 2);
    output.writeString(this.userIdOfActor);
    output.writeFieldEnd();
  }
  if (this.actor !== null && this.actor !== undefined) {
    output.writeFieldBegin('actor', Thrift.Type.STRUCT, 3);
    this.actor.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 4);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  if (this.application !== null && this.application !== undefined) {
    output.writeFieldBegin('application', Thrift.Type.STRUCT, 5);
    this.application.write(output);
    output.writeFieldEnd();
  }
  if (this.eventType !== null && this.eventType !== undefined) {
    output.writeFieldBegin('eventType', Thrift.Type.STRUCT, 6);
    this.eventType.write(output);
    output.writeFieldEnd();
  }
  if (this.timestamp !== null && this.timestamp !== undefined) {
    output.writeFieldBegin('timestamp', Thrift.Type.I64, 7);
    output.writeI64(this.timestamp);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

