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

#import "Aroma.h"
#import "Endpoint.h"
#import "Exceptions.h"

typedef Aroma_int AromaChannels_int;

typedef Aroma_long AromaChannels_long;

typedef Aroma_timestamp AromaChannels_timestamp;

@interface AromaChannels_SlackChannel : NSObject <TBase, NSCoding> {
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

@interface AromaChannels_SlackUsername : NSObject <TBase, NSCoding> {
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

@interface AromaChannels_Email : NSObject <TBase, NSCoding> {
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

@interface AromaChannels_CustomChannel : NSObject <TBase, NSCoding> {
  AromaEndpoint_Endpoint * __endpoint;

  BOOL __endpoint_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=endpoint, setter=setEndpoint:) AromaEndpoint_Endpoint * endpoint;
#endif

- (id) init;
- (id) initWithEndpoint: (AromaEndpoint_Endpoint *) endpoint;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaEndpoint_Endpoint *) endpoint;
- (void) setEndpoint: (AromaEndpoint_Endpoint *) endpoint;
#endif
- (BOOL) endpointIsSet;

@end

@interface AromaChannels_AromaChannel : NSObject <TBase, NSCoding> {
  AromaChannels_SlackChannel * __slackChannel;
  AromaChannels_SlackUsername * __slackUsername;
  AromaChannels_Email * __email;
  AromaChannels_CustomChannel * __customChannel;

  BOOL __slackChannel_isset;
  BOOL __slackUsername_isset;
  BOOL __email_isset;
  BOOL __customChannel_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=slackChannel, setter=setSlackChannel:) AromaChannels_SlackChannel * slackChannel;
@property (nonatomic, retain, getter=slackUsername, setter=setSlackUsername:) AromaChannels_SlackUsername * slackUsername;
@property (nonatomic, retain, getter=email, setter=setEmail:) AromaChannels_Email * email;
@property (nonatomic, retain, getter=customChannel, setter=setCustomChannel:) AromaChannels_CustomChannel * customChannel;
#endif

- (id) init;
- (id) initWithSlackChannel: (AromaChannels_SlackChannel *) slackChannel slackUsername: (AromaChannels_SlackUsername *) slackUsername email: (AromaChannels_Email *) email customChannel: (AromaChannels_CustomChannel *) customChannel;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaChannels_SlackChannel *) slackChannel;
- (void) setSlackChannel: (AromaChannels_SlackChannel *) slackChannel;
#endif
- (BOOL) slackChannelIsSet;

#if !__has_feature(objc_arc)
- (AromaChannels_SlackUsername *) slackUsername;
- (void) setSlackUsername: (AromaChannels_SlackUsername *) slackUsername;
#endif
- (BOOL) slackUsernameIsSet;

#if !__has_feature(objc_arc)
- (AromaChannels_Email *) email;
- (void) setEmail: (AromaChannels_Email *) email;
#endif
- (BOOL) emailIsSet;

#if !__has_feature(objc_arc)
- (AromaChannels_CustomChannel *) customChannel;
- (void) setCustomChannel: (AromaChannels_CustomChannel *) customChannel;
#endif
- (BOOL) customChannelIsSet;

@end

@interface AromaChannels_ChannelInfo : NSObject <TBase, NSCoding> {
  AromaChannels_AromaChannel * __channel;
  AromaChannels_timestamp __timeRegistered;

  BOOL __channel_isset;
  BOOL __timeRegistered_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=channel, setter=setChannel:) AromaChannels_AromaChannel * channel;
@property (nonatomic, getter=timeRegistered, setter=setTimeRegistered:) AromaChannels_timestamp timeRegistered;
#endif

- (id) init;
- (id) initWithChannel: (AromaChannels_AromaChannel *) channel timeRegistered: (AromaChannels_timestamp) timeRegistered;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaChannels_AromaChannel *) channel;
- (void) setChannel: (AromaChannels_AromaChannel *) channel;
#endif
- (BOOL) channelIsSet;

#if !__has_feature(objc_arc)
- (AromaChannels_timestamp) timeRegistered;
- (void) setTimeRegistered: (AromaChannels_timestamp) timeRegistered;
#endif
- (BOOL) timeRegisteredIsSet;

@end

@interface AromaChannels_ReceiveMessageRequest : NSObject <TBase, NSCoding> {
  Aroma_Message * __message;

  BOOL __message_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) Aroma_Message * message;
#endif

- (id) init;
- (id) initWithMessage: (Aroma_Message *) message;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (Aroma_Message *) message;
- (void) setMessage: (Aroma_Message *) message;
#endif
- (BOOL) messageIsSet;

@end

@protocol AromaChannels_CustomAromaChannel <NSObject>
- (AromaChannels_int) ping;  // throws TException
- (void) receiveMessage: (AromaChannels_ReceiveMessageRequest *) request;  // throws TException
@end

@interface AromaChannels_CustomAromaChannelClient : TBaseClient <AromaChannels_CustomAromaChannel> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface AromaChannels_CustomAromaChannelProcessor : NSObject <TProcessor> {
  id <AromaChannels_CustomAromaChannel> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithCustomAromaChannel: (id <AromaChannels_CustomAromaChannel>) service;
- (id<AromaChannels_CustomAromaChannel>) service;
@end

@interface AromaChannels_ChannelsConstants : NSObject {
}
@end
