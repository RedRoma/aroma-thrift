/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TProtocolFactory.h"
#import "TBaseClient.h"

#import "Authentication.h"
#import "Banana.h"

#import "Notifications.h"

@implementation BananaNotifications_HealthCheckFailed

- (id) init
{
  self = [super init];
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaNotifications_HealthCheckFailed class]]) {
    return NO;
  }
  BananaNotifications_HealthCheckFailed *other = (BananaNotifications_HealthCheckFailed *)anObject;
  return YES;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"HealthCheckFailed"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaNotifications_HealthCheckFailed("];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaNotifications_HealthCheckBackToNormal

- (id) init
{
  self = [super init];
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaNotifications_HealthCheckBackToNormal class]]) {
    return NO;
  }
  BananaNotifications_HealthCheckBackToNormal *other = (BananaNotifications_HealthCheckBackToNormal *)anObject;
  return YES;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"HealthCheckBackToNormal"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaNotifications_HealthCheckBackToNormal("];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaNotifications_ServiceTokenRenewed

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithDeveloper: (BananaNotifications_Developer) developer serviceToken: (BananaNotifications_ServiceToken) serviceToken
{
  self = [super init];
  __developer = [developer retain_stub];
  __developer_isset = YES;
  __serviceToken = [serviceToken retain_stub];
  __serviceToken_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"developer"])
  {
    __developer = [[decoder decodeObjectForKey: @"developer"] retain_stub];
    __developer_isset = YES;
  }
  if ([decoder containsValueForKey: @"serviceToken"])
  {
    __serviceToken = [[decoder decodeObjectForKey: @"serviceToken"] retain_stub];
    __serviceToken_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__developer_isset)
  {
    [encoder encodeObject: __developer forKey: @"developer"];
  }
  if (__serviceToken_isset)
  {
    [encoder encodeObject: __serviceToken forKey: @"serviceToken"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __developer_isset ? 2654435761 : 0;
  if (__developer_isset)
  {
    hash = (hash * 31) ^ [__developer hash];
  }
  hash = (hash * 31) ^ __serviceToken_isset ? 2654435761 : 0;
  if (__serviceToken_isset)
  {
    hash = (hash * 31) ^ [__serviceToken hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaNotifications_ServiceTokenRenewed class]]) {
    return NO;
  }
  BananaNotifications_ServiceTokenRenewed *other = (BananaNotifications_ServiceTokenRenewed *)anObject;
  if ((__developer_isset != other->__developer_isset) ||
      (__developer_isset && ((__developer || other->__developer) && ![__developer isEqual:other->__developer]))) {
    return NO;
  }
  if ((__serviceToken_isset != other->__serviceToken_isset) ||
      (__serviceToken_isset && ((__serviceToken || other->__serviceToken) && ![__serviceToken isEqual:other->__serviceToken]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__developer release_stub];
  [__serviceToken release_stub];
  [super dealloc_stub];
}

- (BananaAuthentication_Developer *) developer {
  return [[__developer retain_stub] autorelease_stub];
}

- (void) setDeveloper: (BananaAuthentication_Developer *) developer {
  [developer retain_stub];
  [__developer release_stub];
  __developer = developer;
  __developer_isset = YES;
}

- (BOOL) developerIsSet {
  return __developer_isset;
}

- (void) unsetDeveloper {
  [__developer release_stub];
  __developer = nil;
  __developer_isset = NO;
}

- (BananaAuthentication_ServiceToken *) serviceToken {
  return [[__serviceToken retain_stub] autorelease_stub];
}

- (void) setServiceToken: (BananaAuthentication_ServiceToken *) serviceToken {
  [serviceToken retain_stub];
  [__serviceToken release_stub];
  __serviceToken = serviceToken;
  __serviceToken_isset = YES;
}

- (BOOL) serviceTokenIsSet {
  return __serviceToken_isset;
}

- (void) unsetServiceToken {
  [__serviceToken release_stub];
  __serviceToken = nil;
  __serviceToken_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRUCT) {
          BananaAuthentication_Developer *fieldValue = [[BananaAuthentication_Developer alloc] init];
          [fieldValue read: inProtocol];
          [self setDeveloper: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRUCT) {
          BananaAuthentication_ServiceToken *fieldValue = [[BananaAuthentication_ServiceToken alloc] init];
          [fieldValue read: inProtocol];
          [self setServiceToken: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"ServiceTokenRenewed"];
  if (__developer_isset) {
    if (__developer != nil) {
      [outProtocol writeFieldBeginWithName: @"developer" type: TType_STRUCT fieldID: 1];
      [__developer write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  if (__serviceToken_isset) {
    if (__serviceToken != nil) {
      [outProtocol writeFieldBeginWithName: @"serviceToken" type: TType_STRUCT fieldID: 2];
      [__serviceToken write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaNotifications_ServiceTokenRenewed("];
  [ms appendString: @"developer:"];
  [ms appendFormat: @"%@", __developer];
  [ms appendString: @",serviceToken:"];
  [ms appendFormat: @"%@", __serviceToken];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaNotifications_ServiceTokenRegenerated

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithDeveloper: (BananaNotifications_Developer) developer serviceToken: (BananaNotifications_ServiceToken) serviceToken
{
  self = [super init];
  __developer = [developer retain_stub];
  __developer_isset = YES;
  __serviceToken = [serviceToken retain_stub];
  __serviceToken_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"developer"])
  {
    __developer = [[decoder decodeObjectForKey: @"developer"] retain_stub];
    __developer_isset = YES;
  }
  if ([decoder containsValueForKey: @"serviceToken"])
  {
    __serviceToken = [[decoder decodeObjectForKey: @"serviceToken"] retain_stub];
    __serviceToken_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__developer_isset)
  {
    [encoder encodeObject: __developer forKey: @"developer"];
  }
  if (__serviceToken_isset)
  {
    [encoder encodeObject: __serviceToken forKey: @"serviceToken"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __developer_isset ? 2654435761 : 0;
  if (__developer_isset)
  {
    hash = (hash * 31) ^ [__developer hash];
  }
  hash = (hash * 31) ^ __serviceToken_isset ? 2654435761 : 0;
  if (__serviceToken_isset)
  {
    hash = (hash * 31) ^ [__serviceToken hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaNotifications_ServiceTokenRegenerated class]]) {
    return NO;
  }
  BananaNotifications_ServiceTokenRegenerated *other = (BananaNotifications_ServiceTokenRegenerated *)anObject;
  if ((__developer_isset != other->__developer_isset) ||
      (__developer_isset && ((__developer || other->__developer) && ![__developer isEqual:other->__developer]))) {
    return NO;
  }
  if ((__serviceToken_isset != other->__serviceToken_isset) ||
      (__serviceToken_isset && ((__serviceToken || other->__serviceToken) && ![__serviceToken isEqual:other->__serviceToken]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__developer release_stub];
  [__serviceToken release_stub];
  [super dealloc_stub];
}

- (BananaAuthentication_Developer *) developer {
  return [[__developer retain_stub] autorelease_stub];
}

- (void) setDeveloper: (BananaAuthentication_Developer *) developer {
  [developer retain_stub];
  [__developer release_stub];
  __developer = developer;
  __developer_isset = YES;
}

- (BOOL) developerIsSet {
  return __developer_isset;
}

- (void) unsetDeveloper {
  [__developer release_stub];
  __developer = nil;
  __developer_isset = NO;
}

- (BananaAuthentication_ServiceToken *) serviceToken {
  return [[__serviceToken retain_stub] autorelease_stub];
}

- (void) setServiceToken: (BananaAuthentication_ServiceToken *) serviceToken {
  [serviceToken retain_stub];
  [__serviceToken release_stub];
  __serviceToken = serviceToken;
  __serviceToken_isset = YES;
}

- (BOOL) serviceTokenIsSet {
  return __serviceToken_isset;
}

- (void) unsetServiceToken {
  [__serviceToken release_stub];
  __serviceToken = nil;
  __serviceToken_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRUCT) {
          BananaAuthentication_Developer *fieldValue = [[BananaAuthentication_Developer alloc] init];
          [fieldValue read: inProtocol];
          [self setDeveloper: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRUCT) {
          BananaAuthentication_ServiceToken *fieldValue = [[BananaAuthentication_ServiceToken alloc] init];
          [fieldValue read: inProtocol];
          [self setServiceToken: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"ServiceTokenRegenerated"];
  if (__developer_isset) {
    if (__developer != nil) {
      [outProtocol writeFieldBeginWithName: @"developer" type: TType_STRUCT fieldID: 1];
      [__developer write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  if (__serviceToken_isset) {
    if (__serviceToken != nil) {
      [outProtocol writeFieldBeginWithName: @"serviceToken" type: TType_STRUCT fieldID: 2];
      [__serviceToken write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaNotifications_ServiceTokenRegenerated("];
  [ms appendString: @"developer:"];
  [ms appendFormat: @"%@", __developer];
  [ms appendString: @",serviceToken:"];
  [ms appendFormat: @"%@", __serviceToken];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaNotifications_ServiceSentMessage

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithMessage: (Banana_Message *) message
{
  self = [super init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__message_isset)
  {
    [encoder encodeObject: __message forKey: @"message"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __message_isset ? 2654435761 : 0;
  if (__message_isset)
  {
    hash = (hash * 31) ^ [__message hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaNotifications_ServiceSentMessage class]]) {
    return NO;
  }
  BananaNotifications_ServiceSentMessage *other = (BananaNotifications_ServiceSentMessage *)anObject;
  if ((__message_isset != other->__message_isset) ||
      (__message_isset && ((__message || other->__message) && ![__message isEqual:other->__message]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__message release_stub];
  [super dealloc_stub];
}

- (Banana_Message *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (Banana_Message *) message {
  [message retain_stub];
  [__message release_stub];
  __message = message;
  __message_isset = YES;
}

- (BOOL) messageIsSet {
  return __message_isset;
}

- (void) unsetMessage {
  [__message release_stub];
  __message = nil;
  __message_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRUCT) {
          Banana_Message *fieldValue = [[Banana_Message alloc] init];
          [fieldValue read: inProtocol];
          [self setMessage: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"ServiceSentMessage"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRUCT fieldID: 1];
      [__message write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaNotifications_ServiceSentMessage("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"%@", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaNotifications_Event

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithHealthCheckFailed: (BananaNotifications_HealthCheckFailed *) healthCheckFailed
{
  self = [super init];
  __healthCheckFailed = [healthCheckFailed retain_stub];
  __healthCheckFailed_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"healthCheckFailed"])
  {
    __healthCheckFailed = [[decoder decodeObjectForKey: @"healthCheckFailed"] retain_stub];
    __healthCheckFailed_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__healthCheckFailed_isset)
  {
    [encoder encodeObject: __healthCheckFailed forKey: @"healthCheckFailed"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __healthCheckFailed_isset ? 2654435761 : 0;
  if (__healthCheckFailed_isset)
  {
    hash = (hash * 31) ^ [__healthCheckFailed hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaNotifications_Event class]]) {
    return NO;
  }
  BananaNotifications_Event *other = (BananaNotifications_Event *)anObject;
  if ((__healthCheckFailed_isset != other->__healthCheckFailed_isset) ||
      (__healthCheckFailed_isset && ((__healthCheckFailed || other->__healthCheckFailed) && ![__healthCheckFailed isEqual:other->__healthCheckFailed]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__healthCheckFailed release_stub];
  [super dealloc_stub];
}

- (BananaNotifications_HealthCheckFailed *) healthCheckFailed {
  return [[__healthCheckFailed retain_stub] autorelease_stub];
}

- (void) setHealthCheckFailed: (BananaNotifications_HealthCheckFailed *) healthCheckFailed {
  [healthCheckFailed retain_stub];
  [__healthCheckFailed release_stub];
  __healthCheckFailed = healthCheckFailed;
  __healthCheckFailed_isset = YES;
}

- (BOOL) healthCheckFailedIsSet {
  return __healthCheckFailed_isset;
}

- (void) unsetHealthCheckFailed {
  [__healthCheckFailed release_stub];
  __healthCheckFailed = nil;
  __healthCheckFailed_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRUCT) {
          BananaNotifications_HealthCheckFailed *fieldValue = [[BananaNotifications_HealthCheckFailed alloc] init];
          [fieldValue read: inProtocol];
          [self setHealthCheckFailed: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Event"];
  if (__healthCheckFailed_isset) {
    if (__healthCheckFailed != nil) {
      [outProtocol writeFieldBeginWithName: @"healthCheckFailed" type: TType_STRUCT fieldID: 1];
      [__healthCheckFailed write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaNotifications_Event("];
  [ms appendString: @"healthCheckFailed:"];
  [ms appendFormat: @"%@", __healthCheckFailed];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaNotifications_Notification

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithEvent: (BananaNotifications_Event *) event timestamp: (BananaNotifications_timestamp) timestamp
{
  self = [super init];
  __event = [event retain_stub];
  __event_isset = YES;
  __timestamp = timestamp;
  __timestamp_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"event"])
  {
    __event = [[decoder decodeObjectForKey: @"event"] retain_stub];
    __event_isset = YES;
  }
  if ([decoder containsValueForKey: @"timestamp"])
  {
    __timestamp = [decoder decodeInt64ForKey: @"timestamp"];
    __timestamp_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__event_isset)
  {
    [encoder encodeObject: __event forKey: @"event"];
  }
  if (__timestamp_isset)
  {
    [encoder encodeInt64: __timestamp forKey: @"timestamp"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __event_isset ? 2654435761 : 0;
  if (__event_isset)
  {
    hash = (hash * 31) ^ [__event hash];
  }
  hash = (hash * 31) ^ __timestamp_isset ? 2654435761 : 0;
  if (__timestamp_isset)
  {
    hash = (hash * 31) ^ [@(__timestamp) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaNotifications_Notification class]]) {
    return NO;
  }
  BananaNotifications_Notification *other = (BananaNotifications_Notification *)anObject;
  if ((__event_isset != other->__event_isset) ||
      (__event_isset && ((__event || other->__event) && ![__event isEqual:other->__event]))) {
    return NO;
  }
  if ((__timestamp_isset != other->__timestamp_isset) ||
      (__timestamp_isset && (__timestamp != other->__timestamp))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__event release_stub];
  [super dealloc_stub];
}

- (BananaNotifications_Event *) event {
  return [[__event retain_stub] autorelease_stub];
}

- (void) setEvent: (BananaNotifications_Event *) event {
  [event retain_stub];
  [__event release_stub];
  __event = event;
  __event_isset = YES;
}

- (BOOL) eventIsSet {
  return __event_isset;
}

- (void) unsetEvent {
  [__event release_stub];
  __event = nil;
  __event_isset = NO;
}

- (int64_t) timestamp {
  return __timestamp;
}

- (void) setTimestamp: (int64_t) timestamp {
  __timestamp = timestamp;
  __timestamp_isset = YES;
}

- (BOOL) timestampIsSet {
  return __timestamp_isset;
}

- (void) unsetTimestamp {
  __timestamp_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRUCT) {
          BananaNotifications_Event *fieldValue = [[BananaNotifications_Event alloc] init];
          [fieldValue read: inProtocol];
          [self setEvent: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_I64) {
          int64_t fieldValue = [inProtocol readI64];
          [self setTimestamp: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Notification"];
  if (__event_isset) {
    if (__event != nil) {
      [outProtocol writeFieldBeginWithName: @"event" type: TType_STRUCT fieldID: 1];
      [__event write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  if (__timestamp_isset) {
    [outProtocol writeFieldBeginWithName: @"timestamp" type: TType_I64 fieldID: 2];
    [outProtocol writeI64: __timestamp];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaNotifications_Notification("];
  [ms appendString: @"event:"];
  [ms appendFormat: @"%@", __event];
  [ms appendString: @",timestamp:"];
  [ms appendFormat: @"%qi", __timestamp];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end


@implementation BananaNotifications_NotificationsConstants
+ (void) initialize {
}
@end

