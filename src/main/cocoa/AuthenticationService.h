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

enum AuthenticationService_TokenType {
  TokenType_APPLICATION = 1,
  TokenType_USER = 2
};

typedef Banana_int AuthenticationService_int;

typedef Banana_long AuthenticationService_long;

typedef Banana_timestamp AuthenticationService_timestamp;

typedef Banana_LengthOfTime * AuthenticationService_LengthOfTime;

typedef BananaAuthentication_ApplicationToken * AuthenticationService_ApplicationToken;

typedef BananaAuthentication_UserToken * AuthenticationService_UserToken;

typedef BananaException_AccountAlreadyExistsException * AuthenticationService_AccountAlreadyExistsException;

typedef BananaException_InvalidArgumentException * AuthenticationService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * AuthenticationService_InvalidCredentialsException;

typedef BananaException_InvalidTokenException * AuthenticationService_InvalidTokenException;

typedef BananaException_OperationFailedException * AuthenticationService_OperationFailedException;

typedef BananaException_UnauthorizedException * AuthenticationService_UnauthorizedException;

@interface AuthenticationService_AuthenticationToken : NSObject <TBase, NSCoding> {
  AuthenticationService_ApplicationToken __applicationToken;
  AuthenticationService_UserToken __userToken;

  BOOL __applicationToken_isset;
  BOOL __userToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=applicationToken, setter=setApplicationToken:) AuthenticationService_ApplicationToken applicationToken;
@property (nonatomic, retain, getter=userToken, setter=setUserToken:) AuthenticationService_UserToken userToken;
#endif

- (id) init;
- (id) initWithApplicationToken: (AuthenticationService_ApplicationToken) applicationToken userToken: (AuthenticationService_UserToken) userToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_ApplicationToken) applicationToken;
- (void) setApplicationToken: (AuthenticationService_ApplicationToken) applicationToken;
#endif
- (BOOL) applicationTokenIsSet;

#if !__has_feature(objc_arc)
- (AuthenticationService_UserToken) userToken;
- (void) setUserToken: (AuthenticationService_UserToken) userToken;
#endif
- (BOOL) userTokenIsSet;

@end

@interface AuthenticationService_CreateTokenRequest : NSObject <TBase, NSCoding> {
  NSString * __userId;
  AuthenticationService_LengthOfTime __lifetime;
  int __desiredTokenType;

  BOOL __userId_isset;
  BOOL __lifetime_isset;
  BOOL __desiredTokenType_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=userId, setter=setUserId:) NSString * userId;
@property (nonatomic, retain, getter=lifetime, setter=setLifetime:) AuthenticationService_LengthOfTime lifetime;
@property (nonatomic, getter=desiredTokenType, setter=setDesiredTokenType:) int desiredTokenType;
#endif

- (id) init;
- (id) initWithUserId: (NSString *) userId lifetime: (AuthenticationService_LengthOfTime) lifetime desiredTokenType: (int) desiredTokenType;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) userId;
- (void) setUserId: (NSString *) userId;
#endif
- (BOOL) userIdIsSet;

#if !__has_feature(objc_arc)
- (AuthenticationService_LengthOfTime) lifetime;
- (void) setLifetime: (AuthenticationService_LengthOfTime) lifetime;
#endif
- (BOOL) lifetimeIsSet;

#if !__has_feature(objc_arc)
- (int) desiredTokenType;
- (void) setDesiredTokenType: (int) desiredTokenType;
#endif
- (BOOL) desiredTokenTypeIsSet;

@end

@interface AuthenticationService_CreateTokenResponse : NSObject <TBase, NSCoding> {
  AuthenticationService_AuthenticationToken * __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_AuthenticationToken * token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_AuthenticationToken *) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_AuthenticationToken *) token;
- (void) setToken: (AuthenticationService_AuthenticationToken *) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_GetTokenInfoRequest : NSObject <TBase, NSCoding> {
  NSString * __tokenId;
  int __tokenType;

  BOOL __tokenId_isset;
  BOOL __tokenType_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=tokenId, setter=setTokenId:) NSString * tokenId;
@property (nonatomic, getter=tokenType, setter=setTokenType:) int tokenType;
#endif

- (id) init;
- (id) initWithTokenId: (NSString *) tokenId tokenType: (int) tokenType;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) tokenId;
- (void) setTokenId: (NSString *) tokenId;
#endif
- (BOOL) tokenIdIsSet;

#if !__has_feature(objc_arc)
- (int) tokenType;
- (void) setTokenType: (int) tokenType;
#endif
- (BOOL) tokenTypeIsSet;

@end

@interface AuthenticationService_GetTokenInfoResponse : NSObject <TBase, NSCoding> {
  AuthenticationService_AuthenticationToken * __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_AuthenticationToken * token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_AuthenticationToken *) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_AuthenticationToken *) token;
- (void) setToken: (AuthenticationService_AuthenticationToken *) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_InvalidateTokenRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_AuthenticationToken * __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_AuthenticationToken * token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_AuthenticationToken *) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_AuthenticationToken *) token;
- (void) setToken: (AuthenticationService_AuthenticationToken *) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_InvalidateTokenResponse : NSObject <TBase, NSCoding> {
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

@interface AuthenticationService_VerifyTokenRequest : NSObject <TBase, NSCoding> {
  NSString * __tokenId;
  NSString * __ownerId;

  BOOL __tokenId_isset;
  BOOL __ownerId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=tokenId, setter=setTokenId:) NSString * tokenId;
@property (nonatomic, retain, getter=ownerId, setter=setOwnerId:) NSString * ownerId;
#endif

- (id) init;
- (id) initWithTokenId: (NSString *) tokenId ownerId: (NSString *) ownerId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) tokenId;
- (void) setTokenId: (NSString *) tokenId;
#endif
- (BOOL) tokenIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) ownerId;
- (void) setOwnerId: (NSString *) ownerId;
#endif
- (BOOL) ownerIdIsSet;

@end

@interface AuthenticationService_VerifyTokenResponse : NSObject <TBase, NSCoding> {
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
- (AuthenticationService_CreateTokenResponse *) createToken: (AuthenticationService_CreateTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, TException
- (AuthenticationService_GetTokenInfoResponse *) getTokenInfo: (AuthenticationService_GetTokenInfoRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
- (AuthenticationService_InvalidateTokenResponse *) invalidateToken: (AuthenticationService_InvalidateTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
- (AuthenticationService_VerifyTokenResponse *) verifyToken: (AuthenticationService_VerifyTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
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
