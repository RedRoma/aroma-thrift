/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TProtocolFactory.h"
#import "TApplicationError.h"
#import "TProtocolError.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TBaseClient.h"

#import "Aroma_Aroma.h"
#import "AromaEndpoint_Endpoint.h"
#import "AromaException_Exceptions.h"

typedef Aroma_int AromaChannels_int;

typedef Aroma_long AromaChannels_long;

typedef Aroma_timestamp AromaChannels_timestamp;

typedef Aroma_uuid AromaChannels_uuid;

@interface AromaChannels_IOSDevice : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSData * deviceToken;
@property (assign, nonatomic) BOOL deviceTokenIsSet;
- (void) unsetDeviceToken;


- (instancetype) initWithDeviceToken: (NSData *) deviceToken;

@end

@interface AromaChannels_AndroidDevice : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * registrationId;
@property (assign, nonatomic) BOOL registrationIdIsSet;
- (void) unsetRegistrationId;


- (instancetype) initWithRegistrationId: (NSString *) registrationId;

@end

@interface AromaChannels_WindowsPhoneDevice : NSObject <TBase, NSCoding, NSCopying> 



@end

@interface AromaChannels_MobileDevice : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) AromaChannels_IOSDevice * iosDevice;
@property (assign, nonatomic) BOOL iosDeviceIsSet;
- (void) unsetIosDevice;

@property (strong, nonatomic) AromaChannels_AndroidDevice * androidDevice;
@property (assign, nonatomic) BOOL androidDeviceIsSet;
- (void) unsetAndroidDevice;

@property (strong, nonatomic) AromaChannels_WindowsPhoneDevice * windowsPhoneDevice;
@property (assign, nonatomic) BOOL windowsPhoneDeviceIsSet;
- (void) unsetWindowsPhoneDevice;


- (instancetype) initWithIosDevice: (AromaChannels_IOSDevice *) iosDevice androidDevice: (AromaChannels_AndroidDevice *) androidDevice windowsPhoneDevice: (AromaChannels_WindowsPhoneDevice *) windowsPhoneDevice;

@end

@interface AromaChannels_PushNotificationPayload : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) AromaChannels_uuid messageId;
@property (assign, nonatomic) BOOL messageIdIsSet;
- (void) unsetMessageId;

@property (strong, nonatomic) AromaChannels_uuid applicationId;
@property (assign, nonatomic) BOOL applicationIdIsSet;
- (void) unsetApplicationId;


- (instancetype) initWithMessageId: (AromaChannels_uuid) messageId applicationId: (AromaChannels_uuid) applicationId;

@end

@interface AromaChannels_SlackChannel : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * domainName;
@property (assign, nonatomic) BOOL domainNameIsSet;
- (void) unsetDomainName;

@property (strong, nonatomic) NSString * channelName;
@property (assign, nonatomic) BOOL channelNameIsSet;
- (void) unsetChannelName;

@property (strong, nonatomic) NSString * slackToken;
@property (assign, nonatomic) BOOL slackTokenIsSet;
- (void) unsetSlackToken;


- (instancetype) initWithDomainName: (NSString *) domainName channelName: (NSString *) channelName slackToken: (NSString *) slackToken;

@end

@interface AromaChannels_SlackUsername : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * domainName;
@property (assign, nonatomic) BOOL domainNameIsSet;
- (void) unsetDomainName;

@property (strong, nonatomic) NSString * username;
@property (assign, nonatomic) BOOL usernameIsSet;
- (void) unsetUsername;

@property (strong, nonatomic) NSString * slackToken;
@property (assign, nonatomic) BOOL slackTokenIsSet;
- (void) unsetSlackToken;


- (instancetype) initWithDomainName: (NSString *) domainName username: (NSString *) username slackToken: (NSString *) slackToken;

@end

@interface AromaChannels_Email : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * emailAddress;
@property (assign, nonatomic) BOOL emailAddressIsSet;
- (void) unsetEmailAddress;

@property (strong, nonatomic) NSString * subject;
@property (assign, nonatomic) BOOL subjectIsSet;
- (void) unsetSubject;


- (instancetype) initWithEmailAddress: (NSString *) emailAddress subject: (NSString *) subject;

@end

@interface AromaChannels_CustomChannel : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) AromaEndpoint_Endpoint * endpoint;
@property (assign, nonatomic) BOOL endpointIsSet;
- (void) unsetEndpoint;


- (instancetype) initWithEndpoint: (AromaEndpoint_Endpoint *) endpoint;

@end

@interface AromaChannels_AromaChannel : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) AromaChannels_SlackChannel * slackChannel;
@property (assign, nonatomic) BOOL slackChannelIsSet;
- (void) unsetSlackChannel;

@property (strong, nonatomic) AromaChannels_SlackUsername * slackUsername;
@property (assign, nonatomic) BOOL slackUsernameIsSet;
- (void) unsetSlackUsername;

@property (strong, nonatomic) AromaChannels_Email * email;
@property (assign, nonatomic) BOOL emailIsSet;
- (void) unsetEmail;

@property (strong, nonatomic) AromaChannels_CustomChannel * customChannel;
@property (assign, nonatomic) BOOL customChannelIsSet;
- (void) unsetCustomChannel;

@property (strong, nonatomic) AromaChannels_IOSDevice * iosDevice;
@property (assign, nonatomic) BOOL iosDeviceIsSet;
- (void) unsetIosDevice;

@property (strong, nonatomic) AromaChannels_AndroidDevice * androidDevice;
@property (assign, nonatomic) BOOL androidDeviceIsSet;
- (void) unsetAndroidDevice;

@property (strong, nonatomic) AromaChannels_WindowsPhoneDevice * windowsPhoneDevice;
@property (assign, nonatomic) BOOL windowsPhoneDeviceIsSet;
- (void) unsetWindowsPhoneDevice;


- (instancetype) initWithSlackChannel: (AromaChannels_SlackChannel *) slackChannel slackUsername: (AromaChannels_SlackUsername *) slackUsername email: (AromaChannels_Email *) email customChannel: (AromaChannels_CustomChannel *) customChannel iosDevice: (AromaChannels_IOSDevice *) iosDevice androidDevice: (AromaChannels_AndroidDevice *) androidDevice windowsPhoneDevice: (AromaChannels_WindowsPhoneDevice *) windowsPhoneDevice;

@end

@interface AromaChannels_ChannelInfo : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) AromaChannels_AromaChannel * channel;
@property (assign, nonatomic) BOOL channelIsSet;
- (void) unsetChannel;

@property (assign, nonatomic) AromaChannels_timestamp timeRegistered;
@property (assign, nonatomic) BOOL timeRegisteredIsSet;
- (void) unsetTimeRegistered;

@property (strong, nonatomic) AromaChannels_uuid channelId;
@property (assign, nonatomic) BOOL channelIdIsSet;
- (void) unsetChannelId;


- (instancetype) initWithChannel: (AromaChannels_AromaChannel *) channel timeRegistered: (AromaChannels_timestamp) timeRegistered channelId: (AromaChannels_uuid) channelId;

@end

@interface AromaChannels_ReceiveMessageRequest : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) Aroma_Message * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (Aroma_Message *) message;

@end

@protocol AromaChannels_CustomAromaChannel <NSObject>
- (NSNumber *) ping: (NSError *__autoreleasing *)__thriftError;  // throws TException
- (BOOL) receiveMessage: (AromaChannels_ReceiveMessageRequest *) request error: (NSError *__autoreleasing *)__thriftError;  // throws TException
@end

@interface AromaChannels_CustomAromaChannelClient : TBaseClient <AromaChannels_CustomAromaChannel> 
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface AromaChannels_CustomAromaChannelProcessor : NSObject <TProcessor> 
- (id) initWithCustomAromaChannel: (id <AromaChannels_CustomAromaChannel>) service;
- (id<AromaChannels_CustomAromaChannel>) service;
@end

FOUNDATION_EXPORT NSString *AromaChannels_ChannelsErrorDomain;

FOUNDATION_EXPORT NSString * AromaChannels_PUSH_NOTIFICATION_KEY_FOR_PAYLOAD;

