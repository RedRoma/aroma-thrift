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
#import "Channels.h"
#import "Endpoint.h"
#import "Exceptions.h"
#import "Notification.h"

typedef Banana_int NotificationService_int;

typedef Banana_long NotificationService_long;

typedef Banana_timestamp NotificationService_timestamp;

typedef BananaAuthentication_AuthenticationToken * NotificationService_AuthenticationToken;

typedef Banana_Application * NotificationService_Application;

typedef int NotificationService_Urgency;

typedef BananaChannels_BananaChannel * NotificationService_BananaChannel;

typedef BananaNotifications_Event * NotificationService_Event;

typedef BananaException_AccountAlreadyExistsException * NotificationService_AccountAlreadyExistsException;

typedef BananaException_InvalidArgumentException * NotificationService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * NotificationService_InvalidCredentialsException;

typedef BananaException_InvalidTokenException * NotificationService_InvalidTokenException;

typedef BananaException_OperationFailedException * NotificationService_OperationFailedException;

typedef BananaException_ApplicationAlreadyRegisteredException * NotificationService_ApplicationAlreadyRegisteredException;

typedef BananaException_ApplicationDoesNotExistException * NotificationService_ApplicationDoesNotExistException;

typedef BananaException_CustomChannelUnreachableException * NotificationService_CustomChannelUnreachableException;

typedef BananaException_ChannelDoesNotExistException * NotificationService_ChannelDoesNotExistException;

typedef BananaException_UnauthorizedException * NotificationService_UnauthorizedException;

@interface NotificationService_SendNotificationRequest : NSObject <TBase, NSCoding> {
  NotificationService_AuthenticationToken __token;
  NotificationService_Event __event;
  NSMutableArray * __channels;

  BOOL __token_isset;
  BOOL __event_isset;
  BOOL __channels_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) NotificationService_AuthenticationToken token;
@property (nonatomic, retain, getter=event, setter=setEvent:) NotificationService_Event event;
@property (nonatomic, retain, getter=channels, setter=setChannels:) NSMutableArray * channels;
#endif

- (id) init;
- (id) initWithToken: (NotificationService_AuthenticationToken) token event: (NotificationService_Event) event channels: (NSMutableArray *) channels;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NotificationService_AuthenticationToken) token;
- (void) setToken: (NotificationService_AuthenticationToken) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NotificationService_Event) event;
- (void) setEvent: (NotificationService_Event) event;
#endif
- (BOOL) eventIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) channels;
- (void) setChannels: (NSMutableArray *) channels;
#endif
- (BOOL) channelsIsSet;

@end

@interface NotificationService_SendNotificationResponse : NSObject <TBase, NSCoding> {
  NSString * __notificationId;

  BOOL __notificationId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=notificationId, setter=setNotificationId:) NSString * notificationId;
#endif

- (id) init;
- (id) initWithNotificationId: (NSString *) notificationId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) notificationId;
- (void) setNotificationId: (NSString *) notificationId;
#endif
- (BOOL) notificationIdIsSet;

@end

@protocol NotificationService_NotificationService <NSObject>
- (double) getApiVersion;  // throws TException
- (NotificationService_SendNotificationResponse *) sendNotification: (NotificationService_SendNotificationRequest *) request;  // throws NotificationService_InvalidArgumentException, NotificationService_OperationFailedException, NotificationService_InvalidTokenException, TException
@end

@interface NotificationService_NotificationServiceClient : TBaseClient <NotificationService_NotificationService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface NotificationService_NotificationServiceProcessor : NSObject <TProcessor> {
  id <NotificationService_NotificationService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithNotificationService: (id <NotificationService_NotificationService>) service;
- (id<NotificationService_NotificationService>) service;
@end

@interface NotificationService_NotificationServiceConstants : NSObject {
}
+ (double) API_VERSION;
+ (NotificationService_int) SERVICE_PORT;
+ (BananaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;
+ (BananaEndpoint_TcpEndpoint *) BETA_ENDPOINT;
@end
