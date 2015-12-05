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

#import "Banana.h"

#import "Exceptions.h"

@implementation BananaException_InvalidArgumentException

- (id) init
{
  return [super initWithName: @"BananaException_InvalidArgumentException" reason: @"unknown" userInfo: nil];
}

- (id) initWithMessage: (NSString *) message
{
  self = [self init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super initWithCoder: decoder];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  [super encodeWithCoder: encoder];
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
  if (![anObject isKindOfClass:[BananaException_InvalidArgumentException class]]) {
    return NO;
  }
  BananaException_InvalidArgumentException *other = (BananaException_InvalidArgumentException *)anObject;
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

- (NSString *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (NSString *) message {
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
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setMessage: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"InvalidArgumentException"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __message];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaException_InvalidArgumentException("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"\"%@\"", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaException_InvalidCredentialsException

- (id) init
{
  return [super initWithName: @"BananaException_InvalidCredentialsException" reason: @"unknown" userInfo: nil];
}

- (id) initWithMessage: (NSString *) message
{
  self = [self init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super initWithCoder: decoder];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  [super encodeWithCoder: encoder];
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
  if (![anObject isKindOfClass:[BananaException_InvalidCredentialsException class]]) {
    return NO;
  }
  BananaException_InvalidCredentialsException *other = (BananaException_InvalidCredentialsException *)anObject;
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

- (NSString *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (NSString *) message {
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
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setMessage: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"InvalidCredentialsException"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __message];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaException_InvalidCredentialsException("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"\"%@\"", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaException_UnauthorizedException

- (id) init
{
  return [super initWithName: @"BananaException_UnauthorizedException" reason: @"unknown" userInfo: nil];
}

- (id) initWithMessage: (NSString *) message
{
  self = [self init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super initWithCoder: decoder];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  [super encodeWithCoder: encoder];
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
  if (![anObject isKindOfClass:[BananaException_UnauthorizedException class]]) {
    return NO;
  }
  BananaException_UnauthorizedException *other = (BananaException_UnauthorizedException *)anObject;
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

- (NSString *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (NSString *) message {
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
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setMessage: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"UnauthorizedException"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __message];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaException_UnauthorizedException("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"\"%@\"", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaException_ServiceDoesNotExistException

- (id) init
{
  return [super initWithName: @"BananaException_ServiceDoesNotExistException" reason: @"unknown" userInfo: nil];
}

- (id) initWithMessage: (NSString *) message
{
  self = [self init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super initWithCoder: decoder];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  [super encodeWithCoder: encoder];
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
  if (![anObject isKindOfClass:[BananaException_ServiceDoesNotExistException class]]) {
    return NO;
  }
  BananaException_ServiceDoesNotExistException *other = (BananaException_ServiceDoesNotExistException *)anObject;
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

- (NSString *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (NSString *) message {
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
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setMessage: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"ServiceDoesNotExistException"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __message];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaException_ServiceDoesNotExistException("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"\"%@\"", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaException_ServiceAlreadyRegisteredException

- (id) init
{
  return [super initWithName: @"BananaException_ServiceAlreadyRegisteredException" reason: @"unknown" userInfo: nil];
}

- (id) initWithMessage: (NSString *) message
{
  self = [self init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super initWithCoder: decoder];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  [super encodeWithCoder: encoder];
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
  if (![anObject isKindOfClass:[BananaException_ServiceAlreadyRegisteredException class]]) {
    return NO;
  }
  BananaException_ServiceAlreadyRegisteredException *other = (BananaException_ServiceAlreadyRegisteredException *)anObject;
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

- (NSString *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (NSString *) message {
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
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setMessage: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"ServiceAlreadyRegisteredException"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __message];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaException_ServiceAlreadyRegisteredException("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"\"%@\"", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaException_ThroughoutExceededException

- (id) init
{
  return [super initWithName: @"BananaException_ThroughoutExceededException" reason: @"unknown" userInfo: nil];
}

- (id) initWithMessage: (NSString *) message
{
  self = [self init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super initWithCoder: decoder];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  [super encodeWithCoder: encoder];
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
  if (![anObject isKindOfClass:[BananaException_ThroughoutExceededException class]]) {
    return NO;
  }
  BananaException_ThroughoutExceededException *other = (BananaException_ThroughoutExceededException *)anObject;
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

- (NSString *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (NSString *) message {
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
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setMessage: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"ThroughoutExceededException"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __message];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaException_ThroughoutExceededException("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"\"%@\"", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaException_OperationFailedException

- (id) init
{
  return [super initWithName: @"BananaException_OperationFailedException" reason: @"unknown" userInfo: nil];
}

- (id) initWithMessage: (NSString *) message
{
  self = [self init];
  __message = [message retain_stub];
  __message_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super initWithCoder: decoder];
  if ([decoder containsValueForKey: @"message"])
  {
    __message = [[decoder decodeObjectForKey: @"message"] retain_stub];
    __message_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  [super encodeWithCoder: encoder];
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
  if (![anObject isKindOfClass:[BananaException_OperationFailedException class]]) {
    return NO;
  }
  BananaException_OperationFailedException *other = (BananaException_OperationFailedException *)anObject;
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

- (NSString *) message {
  return [[__message retain_stub] autorelease_stub];
}

- (void) setMessage: (NSString *) message {
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
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setMessage: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"OperationFailedException"];
  if (__message_isset) {
    if (__message != nil) {
      [outProtocol writeFieldBeginWithName: @"message" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __message];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaException_OperationFailedException("];
  [ms appendString: @"message:"];
  [ms appendFormat: @"\"%@\"", __message];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end


@implementation BananaException_ExceptionsConstants
+ (void) initialize {
}
@end

