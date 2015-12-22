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
#import "Endpoint.h"
#import "Exceptions.h"

typedef Banana_int AuthenticationService_int;

typedef Banana_long AuthenticationService_long;

typedef Banana_timestamp AuthenticationService_timestamp;

typedef BananaAuthentication_ApplicationToken * AuthenticationService_ApplicationToken;

typedef BananaAuthentication_UserToken * AuthenticationService_UserToken;

typedef BananaException_AccountAlreadyExistsException * AuthenticationService_AccountAlreadyExistsException;

typedef BananaException_InvalidArgumentException * AuthenticationService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * AuthenticationService_InvalidCredentialsException;

typedef BananaException_OperationFailedException * AuthenticationService_OperationFailedException;

typedef BananaException_ApplicationAlreadyRegisteredException * AuthenticationService_ApplicationAlreadyRegisteredException;

typedef BananaException_ApplicationDoesNotExistException * AuthenticationService_ApplicationDoesNotExistException;

typedef BananaException_CustomChannelUnreachableException * AuthenticationService_CustomChannelUnreachableException;

typedef BananaException_ChannelDoesNotExistException * AuthenticationService_ChannelDoesNotExistException;

typedef BananaException_UnauthorizedException * AuthenticationService_UnauthorizedException;

@interface AuthenticationService_VerifyUserTokenRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_UserToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_UserToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_UserToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_UserToken) token;
- (void) setToken: (AuthenticationService_UserToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_VerifyUserTokenResponse : NSObject <TBase, NSCoding> {
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

@interface AuthenticationService_VerifyApplicationTokenRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_ApplicationToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_ApplicationToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_ApplicationToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_ApplicationToken) token;
- (void) setToken: (AuthenticationService_ApplicationToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_VerifyApplicationTokenResponse : NSObject <TBase, NSCoding> {
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

@protocol AuthenticationService_AuthenticationService <NSObject>
- (double) getApiVersion;  // throws TException
@end

@interface AuthenticationService_AuthenticationServiceClient : TBaseClient <AuthenticationService_AuthenticationService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface AuthenticationService_AuthenticationServiceProcessor : NSObject <TProcessor> {
  id <AuthenticationService_AuthenticationService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithAuthenticationService: (id <AuthenticationService_AuthenticationService>) service;
- (id<AuthenticationService_AuthenticationService>) service;
@end

@interface AuthenticationService_AuthenticationServiceConstants : NSObject {
}
+ (double) API_VERSION;
+ (AuthenticationService_int) SERVICE_PORT;
+ (BananaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;
+ (BananaEndpoint_TcpEndpoint *) BETA_ENDPOINT;
@end