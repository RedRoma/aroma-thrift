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
#import "Notifications.h"

typedef Banana_int BananaService_int;

typedef Banana_long BananaService_long;

typedef Banana_timestamp BananaService_timestamp;

typedef BananaAuthentication_DeveloperToken * BananaService_DeveloperToken;

typedef BananaAuthentication_ServiceToken * BananaService_ServiceToken;

typedef Banana_Dimension * BananaService_Dimension;

typedef Banana_Image * BananaService_Image;

typedef BananaEndpoint_Endpoint * BananaService_Endpoint;

typedef BananaEndpoint_TcpEndpoint * BananaService_TcpEndpoint;

typedef BananaException_InvalidArgumentException * BananaService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * BananaService_InvalidCredentialsException;

typedef BananaException_OperationFailedException * BananaService_OperationFailedException;

typedef BananaException_ServiceAlreadyRegisteredException * BananaService_ServiceAlreadyRegisteredException;

typedef BananaException_ServiceDoesNotExistException * BananaService_ServiceDoesNotExistException;

typedef BananaException_UnauthorizedException * BananaService_UnauthorizedException;

@interface BananaService_SignInRequest : NSObject <TBase, NSCoding> {
  BananaAuthentication_OauthToken * __oathToken;
  NSString * __username;

  BOOL __oathToken_isset;
  BOOL __username_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=oathToken, setter=setOathToken:) BananaAuthentication_OauthToken * oathToken;
@property (nonatomic, retain, getter=username, setter=setUsername:) NSString * username;
#endif

- (id) init;
- (id) initWithOathToken: (BananaAuthentication_OauthToken *) oathToken username: (NSString *) username;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaAuthentication_OauthToken *) oathToken;
- (void) setOathToken: (BananaAuthentication_OauthToken *) oathToken;
#endif
- (BOOL) oathTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) username;
- (void) setUsername: (NSString *) username;
#endif
- (BOOL) usernameIsSet;

@end

@interface BananaService_SignInResponse : NSObject <TBase, NSCoding> {
  BananaService_DeveloperToken __developerToken;

  BOOL __developerToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=developerToken, setter=setDeveloperToken:) BananaService_DeveloperToken developerToken;
#endif

- (id) init;
- (id) initWithDeveloperToken: (BananaService_DeveloperToken) developerToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaService_DeveloperToken) developerToken;
- (void) setDeveloperToken: (BananaService_DeveloperToken) developerToken;
#endif
- (BOOL) developerTokenIsSet;

@end

@interface BananaService_ProvisionServiceRequest : NSObject <TBase, NSCoding> {
  NSString * __token;
  NSString * __serviceName;
  NSString * __programmingLanguage;
  NSString * __organization;
  BananaService_Image __icon;
  BananaService_DeveloperToken __developerToken;

  BOOL __token_isset;
  BOOL __serviceName_isset;
  BOOL __programmingLanguage_isset;
  BOOL __organization_isset;
  BOOL __icon_isset;
  BOOL __developerToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) NSString * token;
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
@property (nonatomic, retain, getter=programmingLanguage, setter=setProgrammingLanguage:) NSString * programmingLanguage;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
@property (nonatomic, retain, getter=icon, setter=setIcon:) BananaService_Image icon;
@property (nonatomic, retain, getter=developerToken, setter=setDeveloperToken:) BananaService_DeveloperToken developerToken;
#endif

- (id) init;
- (id) initWithToken: (NSString *) token serviceName: (NSString *) serviceName programmingLanguage: (NSString *) programmingLanguage organization: (NSString *) organization icon: (BananaService_Image) icon developerToken: (BananaService_DeveloperToken) developerToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) token;
- (void) setToken: (NSString *) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) serviceName;
- (void) setServiceName: (NSString *) serviceName;
#endif
- (BOOL) serviceNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) programmingLanguage;
- (void) setProgrammingLanguage: (NSString *) programmingLanguage;
#endif
- (BOOL) programmingLanguageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organization;
- (void) setOrganization: (NSString *) organization;
#endif
- (BOOL) organizationIsSet;

#if !__has_feature(objc_arc)
- (BananaService_Image) icon;
- (void) setIcon: (BananaService_Image) icon;
#endif
- (BOOL) iconIsSet;

#if !__has_feature(objc_arc)
- (BananaService_DeveloperToken) developerToken;
- (void) setDeveloperToken: (BananaService_DeveloperToken) developerToken;
#endif
- (BOOL) developerTokenIsSet;

@end

@interface BananaService_ProvisionServiceResponse : NSObject <TBase, NSCoding> {
  NSString * __bananaToken;
  NSString * __serviceName;
  BananaService_ServiceToken __serviceToken;

  BOOL __bananaToken_isset;
  BOOL __serviceName_isset;
  BOOL __serviceToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=bananaToken, setter=setBananaToken:) NSString * bananaToken;
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
@property (nonatomic, retain, getter=serviceToken, setter=setServiceToken:) BananaService_ServiceToken serviceToken;
#endif

- (id) init;
- (id) initWithBananaToken: (NSString *) bananaToken serviceName: (NSString *) serviceName serviceToken: (BananaService_ServiceToken) serviceToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) bananaToken;
- (void) setBananaToken: (NSString *) bananaToken;
#endif
- (BOOL) bananaTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) serviceName;
- (void) setServiceName: (NSString *) serviceName;
#endif
- (BOOL) serviceNameIsSet;

#if !__has_feature(objc_arc)
- (BananaService_ServiceToken) serviceToken;
- (void) setServiceToken: (BananaService_ServiceToken) serviceToken;
#endif
- (BOOL) serviceTokenIsSet;

@end

@interface BananaService_SubscribeToServiceRequest : NSObject <TBase, NSCoding> {
  NSString * __token;
  NSString * __serviceName;
  NSString * __organization;
  BOOL __shared;
  BananaService_DeveloperToken __developerToken;

  BOOL __token_isset;
  BOOL __serviceName_isset;
  BOOL __organization_isset;
  BOOL __shared_isset;
  BOOL __developerToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) NSString * token;
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
@property (nonatomic, getter=shared, setter=setShared:) BOOL shared;
@property (nonatomic, retain, getter=developerToken, setter=setDeveloperToken:) BananaService_DeveloperToken developerToken;
#endif

- (id) init;
- (id) initWithToken: (NSString *) token serviceName: (NSString *) serviceName organization: (NSString *) organization shared: (BOOL) shared developerToken: (BananaService_DeveloperToken) developerToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) token;
- (void) setToken: (NSString *) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) serviceName;
- (void) setServiceName: (NSString *) serviceName;
#endif
- (BOOL) serviceNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organization;
- (void) setOrganization: (NSString *) organization;
#endif
- (BOOL) organizationIsSet;

#if !__has_feature(objc_arc)
- (BOOL) shared;
- (void) setShared: (BOOL) shared;
#endif
- (BOOL) sharedIsSet;

#if !__has_feature(objc_arc)
- (BananaService_DeveloperToken) developerToken;
- (void) setDeveloperToken: (BananaService_DeveloperToken) developerToken;
#endif
- (BOOL) developerTokenIsSet;

@end

@interface BananaService_SubscribeToServiceResponse : NSObject <TBase, NSCoding> {
  NSString * __message;
  BananaChannels_BananaChannel * __channel;

  BOOL __message_isset;
  BOOL __channel_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
@property (nonatomic, retain, getter=channel, setter=setChannel:) BananaChannels_BananaChannel * channel;
#endif

- (id) init;
- (id) initWithMessage: (NSString *) message channel: (BananaChannels_BananaChannel *) channel;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

#if !__has_feature(objc_arc)
- (BananaChannels_BananaChannel *) channel;
- (void) setChannel: (BananaChannels_BananaChannel *) channel;
#endif
- (BOOL) channelIsSet;

@end

@interface BananaService_RegisterHealthCheckRequest : NSObject <TBase, NSCoding> {
  BananaService_Endpoint __endpoint;
  BananaService_DeveloperToken __developerToken;

  BOOL __endpoint_isset;
  BOOL __developerToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=endpoint, setter=setEndpoint:) BananaService_Endpoint endpoint;
@property (nonatomic, retain, getter=developerToken, setter=setDeveloperToken:) BananaService_DeveloperToken developerToken;
#endif

- (id) init;
- (id) initWithEndpoint: (BananaService_Endpoint) endpoint developerToken: (BananaService_DeveloperToken) developerToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaService_Endpoint) endpoint;
- (void) setEndpoint: (BananaService_Endpoint) endpoint;
#endif
- (BOOL) endpointIsSet;

#if !__has_feature(objc_arc)
- (BananaService_DeveloperToken) developerToken;
- (void) setDeveloperToken: (BananaService_DeveloperToken) developerToken;
#endif
- (BOOL) developerTokenIsSet;

@end

@interface BananaService_RegisterHealthCheckResponse : NSObject <TBase, NSCoding> {
  NSString * __message;

  BOOL __message_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
#endif

- (id) init;
- (id) initWithMessage: (NSString *) message;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

@end

@interface BananaService_RenewServiceTokenRequest : NSObject <TBase, NSCoding> {
  BananaService_ServiceToken __serviceToken;
  Banana_TimePeriod * __timePeriod;
  BananaService_DeveloperToken __developerToken;

  BOOL __serviceToken_isset;
  BOOL __timePeriod_isset;
  BOOL __developerToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=serviceToken, setter=setServiceToken:) BananaService_ServiceToken serviceToken;
@property (nonatomic, retain, getter=timePeriod, setter=setTimePeriod:) Banana_TimePeriod * timePeriod;
@property (nonatomic, retain, getter=developerToken, setter=setDeveloperToken:) BananaService_DeveloperToken developerToken;
#endif

- (id) init;
- (id) initWithServiceToken: (BananaService_ServiceToken) serviceToken timePeriod: (Banana_TimePeriod *) timePeriod developerToken: (BananaService_DeveloperToken) developerToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaService_ServiceToken) serviceToken;
- (void) setServiceToken: (BananaService_ServiceToken) serviceToken;
#endif
- (BOOL) serviceTokenIsSet;

#if !__has_feature(objc_arc)
- (Banana_TimePeriod *) timePeriod;
- (void) setTimePeriod: (Banana_TimePeriod *) timePeriod;
#endif
- (BOOL) timePeriodIsSet;

#if !__has_feature(objc_arc)
- (BananaService_DeveloperToken) developerToken;
- (void) setDeveloperToken: (BananaService_DeveloperToken) developerToken;
#endif
- (BOOL) developerTokenIsSet;

@end

@interface BananaService_RenewServiceTokenResponse : NSObject <TBase, NSCoding> {
  BananaService_ServiceToken __serviceToken;

  BOOL __serviceToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=serviceToken, setter=setServiceToken:) BananaService_ServiceToken serviceToken;
#endif

- (id) init;
- (id) initWithServiceToken: (BananaService_ServiceToken) serviceToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaService_ServiceToken) serviceToken;
- (void) setServiceToken: (BananaService_ServiceToken) serviceToken;
#endif
- (BOOL) serviceTokenIsSet;

@end

@interface BananaService_RegenerateTokenRequest : NSObject <TBase, NSCoding> {
  NSString * __serviceName;
  BananaService_DeveloperToken __developerToken;

  BOOL __serviceName_isset;
  BOOL __developerToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
@property (nonatomic, retain, getter=developerToken, setter=setDeveloperToken:) BananaService_DeveloperToken developerToken;
#endif

- (id) init;
- (id) initWithServiceName: (NSString *) serviceName developerToken: (BananaService_DeveloperToken) developerToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) serviceName;
- (void) setServiceName: (NSString *) serviceName;
#endif
- (BOOL) serviceNameIsSet;

#if !__has_feature(objc_arc)
- (BananaService_DeveloperToken) developerToken;
- (void) setDeveloperToken: (BananaService_DeveloperToken) developerToken;
#endif
- (BOOL) developerTokenIsSet;

@end

@interface BananaService_RegenerateTokenResponse : NSObject <TBase, NSCoding> {
  BananaService_ServiceToken __serviceToken;

  BOOL __serviceToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=serviceToken, setter=setServiceToken:) BananaService_ServiceToken serviceToken;
#endif

- (id) init;
- (id) initWithServiceToken: (BananaService_ServiceToken) serviceToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaService_ServiceToken) serviceToken;
- (void) setServiceToken: (BananaService_ServiceToken) serviceToken;
#endif
- (BOOL) serviceTokenIsSet;

@end

@interface BananaService_SendMessageRequest : NSObject <TBase, NSCoding> {
  Banana_Message * __message;
  BananaService_ServiceToken __serviceToken;

  BOOL __message_isset;
  BOOL __serviceToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) Banana_Message * message;
@property (nonatomic, retain, getter=serviceToken, setter=setServiceToken:) BananaService_ServiceToken serviceToken;
#endif

- (id) init;
- (id) initWithMessage: (Banana_Message *) message serviceToken: (BananaService_ServiceToken) serviceToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (Banana_Message *) message;
- (void) setMessage: (Banana_Message *) message;
#endif
- (BOOL) messageIsSet;

#if !__has_feature(objc_arc)
- (BananaService_ServiceToken) serviceToken;
- (void) setServiceToken: (BananaService_ServiceToken) serviceToken;
#endif
- (BOOL) serviceTokenIsSet;

@end

@interface BananaService_SendMessageResponse : NSObject <TBase, NSCoding> {
  NSString * __message;

  BOOL __message_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
#endif

- (id) init;
- (id) initWithMessage: (NSString *) message;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

@end

@protocol BananaService_BananaService <NSObject>
- (BananaService_SignInResponse *) signIn: (BananaService_SignInRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, TException
- (BananaService_ProvisionServiceResponse *) provisionService: (BananaService_ProvisionServiceRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, TException
- (BananaService_SubscribeToServiceResponse *) subscribeToService: (BananaService_SubscribeToServiceRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, BananaService_ServiceAlreadyRegisteredException, TException
- (BananaService_RegisterHealthCheckResponse *) registerHealthCheck: (BananaService_RegisterHealthCheckRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, BananaService_UnauthorizedException, TException
- (BananaService_RenewServiceTokenResponse *) renewServiceToken: (BananaService_RenewServiceTokenRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, BananaService_UnauthorizedException, TException
- (BananaService_RegenerateTokenResponse *) regenerateToken: (BananaService_RegenerateTokenRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, BananaService_UnauthorizedException, TException
- (BananaService_SendMessageResponse *) sendMessage: (BananaService_SendMessageRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, TException
- (void) sendMessageAsync: (BananaService_SendMessageRequest *) request;  // throws TException
@end

@interface BananaService_BananaServiceClient : TBaseClient <BananaService_BananaService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface BananaService_BananaServiceProcessor : NSObject <TProcessor> {
  id <BananaService_BananaService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithBananaService: (id <BananaService_BananaService>) service;
- (id<BananaService_BananaService>) service;
@end

@interface BananaService_BananaServiceConstants : NSObject {
}
+ (BananaService_TcpEndpoint) PRODUCTION_ENDPOINT;
+ (BananaService_TcpEndpoint) BETA_ENDPOINT;
+ (BananaService_Dimension) MAX_ICON_DIMENSION;
+ (BananaService_int) MAX_ICON_SIZE_IN_KILOBYTES;
@end
