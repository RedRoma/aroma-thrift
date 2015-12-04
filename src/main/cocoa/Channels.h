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
#import "Endpoint.h"
#import "Exceptions.h"

typedef int32_t BananaChannels_int;

typedef int64_t BananaChannels_long;

typedef int64_t BananaChannels_timestamp;

@interface BananaChannels_SlackChannel : NSObject <TBase, NSCoding> {
  NSString * __domainName;
  NSString * __channelName;
  NSString * __slackToken;

  BOOL __domainName_isset;
  BOOL __channelName_isset;
  BOOL __slackToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=domainName, setter=setDomainName:) NSString * domainName;
@property (nonatomic, retain, getter=channelName, setter=setChannelName:) NSString * channelName;
@property (nonatomic, retain, getter=slackToken, setter=setSlackToken:) NSString * slackToken;
#endif

- (id) init;
- (id) initWithDomainName: (NSString *) domainName channelName: (NSString *) channelName slackToken: (NSString *) slackToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) domainName;
- (void) setDomainName: (NSString *) domainName;
#endif
- (BOOL) domainNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) channelName;
- (void) setChannelName: (NSString *) channelName;
#endif
- (BOOL) channelNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) slackToken;
- (void) setSlackToken: (NSString *) slackToken;
#endif
- (BOOL) slackTokenIsSet;

@end

@interface BananaChannels_SlackUsername : NSObject <TBase, NSCoding> {
  NSString * __domainName;
  NSString * __username;
  NSString * __slackToken;

  BOOL __domainName_isset;
  BOOL __username_isset;
  BOOL __slackToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=domainName, setter=setDomainName:) NSString * domainName;
@property (nonatomic, retain, getter=username, setter=setUsername:) NSString * username;
@property (nonatomic, retain, getter=slackToken, setter=setSlackToken:) NSString * slackToken;
#endif

- (id) init;
- (id) initWithDomainName: (NSString *) domainName username: (NSString *) username slackToken: (NSString *) slackToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) domainName;
- (void) setDomainName: (NSString *) domainName;
#endif
- (BOOL) domainNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) username;
- (void) setUsername: (NSString *) username;
#endif
- (BOOL) usernameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) slackToken;
- (void) setSlackToken: (NSString *) slackToken;
#endif
- (BOOL) slackTokenIsSet;

@end

@interface BananaChannels_Email : NSObject <TBase, NSCoding> {
  NSString * __emailAddress;
  NSString * __subject;

  BOOL __emailAddress_isset;
  BOOL __subject_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=emailAddress, setter=setEmailAddress:) NSString * emailAddress;
@property (nonatomic, retain, getter=subject, setter=setSubject:) NSString * subject;
#endif

- (id) init;
- (id) initWithEmailAddress: (NSString *) emailAddress subject: (NSString *) subject;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) emailAddress;
- (void) setEmailAddress: (NSString *) emailAddress;
#endif
- (BOOL) emailAddressIsSet;

#if !__has_feature(objc_arc)
- (NSString *) subject;
- (void) setSubject: (NSString *) subject;
#endif
- (BOOL) subjectIsSet;

@end

@interface BananaChannels_CustomChannel : NSObject <TBase, NSCoding> {
  BananaEndpoint_Endpoint * __endpoint;

  BOOL __endpoint_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=endpoint, setter=setEndpoint:) BananaEndpoint_Endpoint * endpoint;
#endif

- (id) init;
- (id) initWithEndpoint: (BananaEndpoint_Endpoint *) endpoint;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaEndpoint_Endpoint *) endpoint;
- (void) setEndpoint: (BananaEndpoint_Endpoint *) endpoint;
#endif
- (BOOL) endpointIsSet;

@end

@interface BananaChannels_BananaChannel : NSObject <TBase, NSCoding> {
  BananaChannels_SlackChannel * __slackChannel;
  BananaChannels_SlackUsername * __slackUsername;
  BananaChannels_Email * __email;
  BananaChannels_CustomChannel * __customChannel;

  BOOL __slackChannel_isset;
  BOOL __slackUsername_isset;
  BOOL __email_isset;
  BOOL __customChannel_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=slackChannel, setter=setSlackChannel:) BananaChannels_SlackChannel * slackChannel;
@property (nonatomic, retain, getter=slackUsername, setter=setSlackUsername:) BananaChannels_SlackUsername * slackUsername;
@property (nonatomic, retain, getter=email, setter=setEmail:) BananaChannels_Email * email;
@property (nonatomic, retain, getter=customChannel, setter=setCustomChannel:) BananaChannels_CustomChannel * customChannel;
#endif

- (id) init;
- (id) initWithSlackChannel: (BananaChannels_SlackChannel *) slackChannel slackUsername: (BananaChannels_SlackUsername *) slackUsername email: (BananaChannels_Email *) email customChannel: (BananaChannels_CustomChannel *) customChannel;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaChannels_SlackChannel *) slackChannel;
- (void) setSlackChannel: (BananaChannels_SlackChannel *) slackChannel;
#endif
- (BOOL) slackChannelIsSet;

#if !__has_feature(objc_arc)
- (BananaChannels_SlackUsername *) slackUsername;
- (void) setSlackUsername: (BananaChannels_SlackUsername *) slackUsername;
#endif
- (BOOL) slackUsernameIsSet;

#if !__has_feature(objc_arc)
- (BananaChannels_Email *) email;
- (void) setEmail: (BananaChannels_Email *) email;
#endif
- (BOOL) emailIsSet;

#if !__has_feature(objc_arc)
- (BananaChannels_CustomChannel *) customChannel;
- (void) setCustomChannel: (BananaChannels_CustomChannel *) customChannel;
#endif
- (BOOL) customChannelIsSet;

@end

@interface BananaChannels_ReceiveMessageRequest : NSObject <TBase, NSCoding> {
  Banana_Message * __message;

  BOOL __message_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) Banana_Message * message;
#endif

- (id) init;
- (id) initWithMessage: (Banana_Message *) message;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (Banana_Message *) message;
- (void) setMessage: (Banana_Message *) message;
#endif
- (BOOL) messageIsSet;

@end

@protocol BananaChannels_CustomBananaChannel <NSObject>
- (void) receiveMessage: (BananaChannels_ReceiveMessageRequest *) request;  // throws TException
@end

@interface BananaChannels_CustomBananaChannelClient : TBaseClient <BananaChannels_CustomBananaChannel> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface BananaChannels_CustomBananaChannelProcessor : NSObject <TProcessor> {
  id <BananaChannels_CustomBananaChannel> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithCustomBananaChannel: (id <BananaChannels_CustomBananaChannel>) service;
- (id<BananaChannels_CustomBananaChannel>) service;
@end

@interface BananaChannels_ChannelsConstants : NSObject {
}
@end
