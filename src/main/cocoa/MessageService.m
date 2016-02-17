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
#import "Aroma.h"
#import "Channels.h"
#import "Endpoint.h"
#import "Events.h"
#import "Exceptions.h"
#import "ApplicationService.h"
#import "AromaService.h"

#import "MessageService.h"

static MessageService_int MessageService_SERVICE_PORT = 7011;
static AromaEndpoint_TcpEndpoint * MessageService_PRODUCTION_ENDPOINT;
static AromaEndpoint_TcpEndpoint * MessageService_BETA_ENDPOINT;
static Aroma_LengthOfTime * MessageService_DEFAULT_MESSAGE_LIFETIME;

@implementation MessageService_MessageServiceConstants
+ (void) initialize {
  MessageService_PRODUCTION_ENDPOINT = [[AromaEndpoint_TcpEndpoint alloc] init];
  [MessageService_PRODUCTION_ENDPOINT setHostname:@"message-srv.aroma.tech"];
  [MessageService_PRODUCTION_ENDPOINT setPort:7011];

;
  MessageService_BETA_ENDPOINT = [[AromaEndpoint_TcpEndpoint alloc] init];
  [MessageService_BETA_ENDPOINT setHostname:@"message-srv.beta.aroma.tech"];
  [MessageService_BETA_ENDPOINT setPort:7011];

;
  MessageService_DEFAULT_MESSAGE_LIFETIME = [[Aroma_LengthOfTime alloc] init];
  [MessageService_DEFAULT_MESSAGE_LIFETIME setValue:1];
  [MessageService_DEFAULT_MESSAGE_LIFETIME setUnit:4];

;
}
+ (MessageService_int) SERVICE_PORT{
  return MessageService_SERVICE_PORT;
}
+ (AromaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT{
  return MessageService_PRODUCTION_ENDPOINT;
}
+ (AromaEndpoint_TcpEndpoint *) BETA_ENDPOINT{
  return MessageService_BETA_ENDPOINT;
}
+ (Aroma_LengthOfTime *) DEFAULT_MESSAGE_LIFETIME{
  return MessageService_DEFAULT_MESSAGE_LIFETIME;
}
@end

@interface MessageService_getApiVersion_args : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@implementation MessageService_getApiVersion_args

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
  if (![anObject isKindOfClass:[MessageService_getApiVersion_args class]]) {
    return NO;
  }
  MessageService_getApiVersion_args *other = (MessageService_getApiVersion_args *)anObject;
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
  [outProtocol writeStructBeginWithName: @"getApiVersion_args"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"MessageService_getApiVersion_args("];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@interface MessageService_GetApiVersion_result : NSObject <TBase, NSCoding> {
  double __success;

  BOOL __success_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=success, setter=setSuccess:) double success;
#endif

- (id) init;
- (id) initWithSuccess: (double) success;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (double) success;
- (void) setSuccess: (double) success;
#endif
- (BOOL) successIsSet;

@end

@implementation MessageService_GetApiVersion_result

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithSuccess: (double) success
{
  self = [super init];
  __success = success;
  __success_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"success"])
  {
    __success = [decoder decodeDoubleForKey: @"success"];
    __success_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__success_isset)
  {
    [encoder encodeDouble: __success forKey: @"success"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __success_isset ? 2654435761 : 0;
  if (__success_isset)
  {
    hash = (hash * 31) ^ [@(__success) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[MessageService_GetApiVersion_result class]]) {
    return NO;
  }
  MessageService_GetApiVersion_result *other = (MessageService_GetApiVersion_result *)anObject;
  if ((__success_isset != other->__success_isset) ||
      (__success_isset && (__success != other->__success))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [super dealloc_stub];
}

- (double) success {
  return __success;
}

- (void) setSuccess: (double) success {
  __success = success;
  __success_isset = YES;
}

- (BOOL) successIsSet {
  return __success_isset;
}

- (void) unsetSuccess {
  __success_isset = NO;
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
      case 0:
        if (fieldType == TType_DOUBLE) {
          double fieldValue = [inProtocol readDouble];
          [self setSuccess: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"GetApiVersion_result"];

  if (__success_isset) {
    [outProtocol writeFieldBeginWithName: @"success" type: TType_DOUBLE fieldID: 0];
    [outProtocol writeDouble: __success];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"MessageService_GetApiVersion_result("];
  [ms appendString: @"success:"];
  [ms appendFormat: @"%f", __success];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation MessageService_MessageServiceClient
- (id) initWithProtocol: (id <TProtocol>) protocol
{
  return [self initWithInProtocol: protocol outProtocol: protocol];
}

- (id) initWithInProtocol: (id <TProtocol>) anInProtocol outProtocol: (id <TProtocol>) anOutProtocol
{
  self = [super init];
  inProtocol = [anInProtocol retain_stub];
  outProtocol = [anOutProtocol retain_stub];
  return self;
}

- (void) send_getApiVersion
{
  [outProtocol writeMessageBeginWithName: @"getApiVersion" type: TMessageType_CALL sequenceID: 0];
  [outProtocol writeStructBeginWithName: @"getApiVersion_args"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
  [outProtocol writeMessageEnd];
}

- (double) recv_getApiVersion
{
  TApplicationException * x = [self checkIncomingMessageException];
  if (x != nil)  {
    @throw x;
  }
  MessageService_GetApiVersion_result * result = [[[MessageService_GetApiVersion_result alloc] init] autorelease_stub];
  [result read: inProtocol];
  [inProtocol readMessageEnd];
  if ([result successIsSet]) {
    return [result success];
  }
  @throw [TApplicationException exceptionWithType: TApplicationException_MISSING_RESULT
                                           reason: @"getApiVersion failed: unknown result"];
}

- (double) getApiVersion
{
  [self send_getApiVersion];
  [[outProtocol transport] flush];
  return [self recv_getApiVersion];
}

@end

@implementation MessageService_MessageServiceProcessor

- (id) initWithMessageService: (id <MessageService_MessageService>) service
{
self = [super init];
if (!self) {
  return nil;
}
mService = [service retain_stub];
mMethodMap = [[NSMutableDictionary dictionary] retain_stub];
{
  SEL s = @selector(process_getApiVersion_withSequenceID:inProtocol:outProtocol:);
  NSMethodSignature * sig = [self methodSignatureForSelector: s];
  NSInvocation * invocation = [NSInvocation invocationWithMethodSignature: sig];
  [invocation setSelector: s];
  [invocation retainArguments];
  [mMethodMap setValue: invocation forKey: @"getApiVersion"];
}
return self;
}

- (id<MessageService_MessageService>) service
{
  return [[mService retain_stub] autorelease_stub];
}

- (BOOL) processOnInputProtocol: (id <TProtocol>) inProtocol
                 outputProtocol: (id <TProtocol>) outProtocol
{
  NSString * messageName;
  int messageType;
  int seqID;
  [inProtocol readMessageBeginReturningName: &messageName
                                       type: &messageType
                                 sequenceID: &seqID];
  NSInvocation * invocation = [mMethodMap valueForKey: messageName];
  if (invocation == nil) {
    [TProtocolUtil skipType: TType_STRUCT onProtocol: inProtocol];
    [inProtocol readMessageEnd];
    TApplicationException * x = [TApplicationException exceptionWithType: TApplicationException_UNKNOWN_METHOD reason: [NSString stringWithFormat: @"Invalid method name: '%@'", messageName]];
    [outProtocol writeMessageBeginWithName: messageName
                                      type: TMessageType_EXCEPTION
                                sequenceID: seqID];
    [x write: outProtocol];
    [outProtocol writeMessageEnd];
    [[outProtocol transport] flush];
    return YES;
  }
  // NSInvocation does not conform to NSCopying protocol
  NSInvocation * i = [NSInvocation invocationWithMethodSignature: [invocation methodSignature]];
  [i setSelector: [invocation selector]];
  [i setArgument: &seqID atIndex: 2];
  [i setArgument: &inProtocol atIndex: 3];
  [i setArgument: &outProtocol atIndex: 4];
  [i setTarget: self];
  [i invoke];
  return YES;
}

- (void) process_getApiVersion_withSequenceID: (int32_t) seqID inProtocol: (id<TProtocol>) inProtocol outProtocol: (id<TProtocol>) outProtocol
{
MessageService_getApiVersion_args * args = [[MessageService_getApiVersion_args alloc] init];
[args read: inProtocol];
[inProtocol readMessageEnd];
MessageService_GetApiVersion_result * result = [[MessageService_GetApiVersion_result alloc] init];
[result setSuccess: [mService getApiVersion]];
[outProtocol writeMessageBeginWithName: @"getApiVersion"
                                  type: TMessageType_REPLY
                            sequenceID: seqID];
[result write: outProtocol];
[outProtocol writeMessageEnd];
[[outProtocol transport] flush];
[result release_stub];
[args release_stub];
}

- (void) dealloc
{
[mService release_stub];
[mMethodMap release_stub];
[super dealloc_stub];
}

@end

