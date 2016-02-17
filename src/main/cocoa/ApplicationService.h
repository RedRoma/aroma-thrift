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
#import "Endpoint.h"
#import "Exceptions.h"

typedef Aroma_int ApplicationService_int;

typedef Aroma_long ApplicationService_long;

typedef Aroma_timestamp ApplicationService_timestamp;

typedef BananaAuthentication_ApplicationToken * ApplicationService_ApplicationToken;

typedef Aroma_Application * ApplicationService_Application;

typedef int ApplicationService_Urgency;

typedef AromaException_AccountAlreadyExistsException * ApplicationService_AccountAlreadyExistsException;

typedef AromaException_InvalidArgumentException * ApplicationService_InvalidArgumentException;

typedef AromaException_InvalidTokenException * ApplicationService_InvalidTokenException;

typedef AromaException_OperationFailedException * ApplicationService_OperationFailedException;

typedef AromaException_ApplicationAlreadyRegisteredException * ApplicationService_ApplicationAlreadyRegisteredException;

typedef AromaException_ApplicationDoesNotExistException * ApplicationService_ApplicationDoesNotExistException;

typedef AromaException_CustomChannelUnreachableException * ApplicationService_CustomChannelUnreachableException;

typedef AromaException_ChannelDoesNotExistException * ApplicationService_ChannelDoesNotExistException;

typedef AromaException_UnauthorizedException * ApplicationService_UnauthorizedException;

@interface ApplicationService_SendMessageRequest : NSObject <TBase, NSCoding> {
  ApplicationService_ApplicationToken __applicationToken;
  NSString * __body;
  ApplicationService_Urgency __urgency;
  ApplicationService_timestamp __timeOfMessage;
  NSString * __title;
  NSString * __hostname;
  NSString * __macAddress;
  NSString * __ipv4Address;

  BOOL __applicationToken_isset;
  BOOL __body_isset;
  BOOL __urgency_isset;
  BOOL __timeOfMessage_isset;
  BOOL __title_isset;
  BOOL __hostname_isset;
  BOOL __macAddress_isset;
  BOOL __ipv4Address_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=applicationToken, setter=setApplicationToken:) ApplicationService_ApplicationToken applicationToken;
@property (nonatomic, retain, getter=body, setter=setBody:) NSString * body;
@property (nonatomic, getter=urgency, setter=setUrgency:) ApplicationService_Urgency urgency;
@property (nonatomic, getter=timeOfMessage, setter=setTimeOfMessage:) ApplicationService_timestamp timeOfMessage;
@property (nonatomic, retain, getter=title, setter=setTitle:) NSString * title;
@property (nonatomic, retain, getter=hostname, setter=setHostname:) NSString * hostname;
@property (nonatomic, retain, getter=macAddress, setter=setMacAddress:) NSString * macAddress;
@property (nonatomic, retain, getter=ipv4Address, setter=setIpv4Address:) NSString * ipv4Address;
#endif

- (id) init;
- (id) initWithApplicationToken: (ApplicationService_ApplicationToken) applicationToken body: (NSString *) body urgency: (ApplicationService_Urgency) urgency timeOfMessage: (ApplicationService_timestamp) timeOfMessage title: (NSString *) title hostname: (NSString *) hostname macAddress: (NSString *) macAddress ipv4Address: (NSString *) ipv4Address;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (ApplicationService_ApplicationToken) applicationToken;
- (void) setApplicationToken: (ApplicationService_ApplicationToken) applicationToken;
#endif
- (BOOL) applicationTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) body;
- (void) setBody: (NSString *) body;
#endif
- (BOOL) bodyIsSet;

#if !__has_feature(objc_arc)
- (ApplicationService_Urgency) urgency;
- (void) setUrgency: (ApplicationService_Urgency) urgency;
#endif
- (BOOL) urgencyIsSet;

#if !__has_feature(objc_arc)
- (ApplicationService_timestamp) timeOfMessage;
- (void) setTimeOfMessage: (ApplicationService_timestamp) timeOfMessage;
#endif
- (BOOL) timeOfMessageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) title;
- (void) setTitle: (NSString *) title;
#endif
- (BOOL) titleIsSet;

#if !__has_feature(objc_arc)
- (NSString *) hostname;
- (void) setHostname: (NSString *) hostname;
#endif
- (BOOL) hostnameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) macAddress;
- (void) setMacAddress: (NSString *) macAddress;
#endif
- (BOOL) macAddressIsSet;

#if !__has_feature(objc_arc)
- (NSString *) ipv4Address;
- (void) setIpv4Address: (NSString *) ipv4Address;
#endif
- (BOOL) ipv4AddressIsSet;

@end

@interface ApplicationService_SendMessageResponse : NSObject <TBase, NSCoding> {
  NSString * __messageId;

  BOOL __messageId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=messageId, setter=setMessageId:) NSString * messageId;
#endif

- (id) init;
- (id) initWithMessageId: (NSString *) messageId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) messageId;
- (void) setMessageId: (NSString *) messageId;
#endif
- (BOOL) messageIdIsSet;

@end

@protocol ApplicationService_ApplicationService <NSObject>
- (double) getApiVersion;  // throws TException
- (ApplicationService_SendMessageResponse *) sendMessage: (ApplicationService_SendMessageRequest *) request;  // throws ApplicationService_OperationFailedException, ApplicationService_InvalidArgumentException, ApplicationService_InvalidTokenException, TException
- (void) sendMessageAsync: (ApplicationService_SendMessageRequest *) request;  // throws TException
@end

@interface ApplicationService_ApplicationServiceClient : TBaseClient <ApplicationService_ApplicationService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface ApplicationService_ApplicationServiceProcessor : NSObject <TProcessor> {
  id <ApplicationService_ApplicationService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithApplicationService: (id <ApplicationService_ApplicationService>) service;
- (id<ApplicationService_ApplicationService>) service;
@end

@interface ApplicationService_ApplicationServiceConstants : NSObject {
}
+ (ApplicationService_int) SERVICE_PORT;
+ (AromaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;
+ (AromaEndpoint_TcpEndpoint *) BETA_ENDPOINT;
@end
