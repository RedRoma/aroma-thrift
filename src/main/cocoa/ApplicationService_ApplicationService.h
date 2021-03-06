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

#import "AromaAuthentication_Authentication.h"
#import "Aroma_Aroma.h"
#import "AromaEndpoint_Endpoint.h"
#import "AromaException_Exceptions.h"

typedef Aroma_int ApplicationService_int;

typedef Aroma_long ApplicationService_long;

typedef Aroma_timestamp ApplicationService_timestamp;

typedef AromaAuthentication_ApplicationToken * ApplicationService_ApplicationToken;

typedef Aroma_Application * ApplicationService_Application;

typedef ApplicationService_Urgency ApplicationService_Urgency;

typedef AromaException_AccountAlreadyExistsException * ApplicationService_AccountAlreadyExistsException;

typedef AromaException_InvalidArgumentException * ApplicationService_InvalidArgumentException;

typedef AromaException_InvalidTokenException * ApplicationService_InvalidTokenException;

typedef AromaException_OperationFailedException * ApplicationService_OperationFailedException;

typedef AromaException_ApplicationAlreadyRegisteredException * ApplicationService_ApplicationAlreadyRegisteredException;

typedef AromaException_ApplicationDoesNotExistException * ApplicationService_ApplicationDoesNotExistException;

typedef AromaException_CustomChannelUnreachableException * ApplicationService_CustomChannelUnreachableException;

typedef AromaException_ChannelDoesNotExistException * ApplicationService_ChannelDoesNotExistException;

typedef AromaException_UnauthorizedException * ApplicationService_UnauthorizedException;

@interface ApplicationService_SendMessageRequest : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) ApplicationService_ApplicationToken applicationToken;
@property (assign, nonatomic) BOOL applicationTokenIsSet;
- (void) unsetApplicationToken;

@property (strong, nonatomic) NSString * body;
@property (assign, nonatomic) BOOL bodyIsSet;
- (void) unsetBody;

@property (assign, nonatomic) ApplicationService_Urgency urgency;
@property (assign, nonatomic) BOOL urgencyIsSet;
- (void) unsetUrgency;

@property (assign, nonatomic) ApplicationService_timestamp timeOfMessage;
@property (assign, nonatomic) BOOL timeOfMessageIsSet;
- (void) unsetTimeOfMessage;

@property (strong, nonatomic) NSString * title;
@property (assign, nonatomic) BOOL titleIsSet;
- (void) unsetTitle;

@property (strong, nonatomic) NSString * hostname;
@property (assign, nonatomic) BOOL hostnameIsSet;
- (void) unsetHostname;

@property (strong, nonatomic) NSString * macAddress;
@property (assign, nonatomic) BOOL macAddressIsSet;
- (void) unsetMacAddress;

@property (strong, nonatomic) NSString * ipv4Address;
@property (assign, nonatomic) BOOL ipv4AddressIsSet;
- (void) unsetIpv4Address;

@property (strong, nonatomic) NSString * deviceName;
@property (assign, nonatomic) BOOL deviceNameIsSet;
- (void) unsetDeviceName;

@property (strong, nonatomic) NSString * operatingSystemName;
@property (assign, nonatomic) BOOL operatingSystemNameIsSet;
- (void) unsetOperatingSystemName;


- (instancetype) initWithApplicationToken: (ApplicationService_ApplicationToken) applicationToken body: (NSString *) body urgency: (ApplicationService_Urgency) urgency timeOfMessage: (ApplicationService_timestamp) timeOfMessage title: (NSString *) title hostname: (NSString *) hostname macAddress: (NSString *) macAddress ipv4Address: (NSString *) ipv4Address deviceName: (NSString *) deviceName operatingSystemName: (NSString *) operatingSystemName;

@end

@interface ApplicationService_SendMessageResponse : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * messageId;
@property (assign, nonatomic) BOOL messageIdIsSet;
- (void) unsetMessageId;


- (instancetype) initWithMessageId: (NSString *) messageId;

@end

@protocol ApplicationService_ApplicationService <NSObject>
- (NSNumber *) getApiVersion: (NSError *__autoreleasing *)__thriftError;  // throws TException
- (ApplicationService_SendMessageResponse *) sendMessage: (ApplicationService_SendMessageRequest *) request error: (NSError *__autoreleasing *)__thriftError;  // throws ApplicationService_OperationFailedException, ApplicationService_InvalidArgumentException, ApplicationService_InvalidTokenException, TException
- (BOOL) sendMessageAsync: (ApplicationService_SendMessageRequest *) request error: (NSError *__autoreleasing *)__thriftError;  // throws TException
@end

@interface ApplicationService_ApplicationServiceClient : TBaseClient <ApplicationService_ApplicationService> 
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface ApplicationService_ApplicationServiceProcessor : NSObject <TProcessor> 
- (id) initWithApplicationService: (id <ApplicationService_ApplicationService>) service;
- (id<ApplicationService_ApplicationService>) service;
@end

FOUNDATION_EXPORT NSString *ApplicationService_ApplicationServiceErrorDomain;

FOUNDATION_EXPORT SInt32 ApplicationService_SERVICE_PORT;
FOUNDATION_EXPORT SInt32 ApplicationService_MAX_TITLE_LENGTH;
FOUNDATION_EXPORT SInt32 ApplicationService_MAX_CHARACTERS_IN_BODY;

@interface ApplicationService_ApplicationServiceConstants : NSObject {
}

+ (AromaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;

+ (AromaEndpoint_TcpEndpoint *) BETA_ENDPOINT;

@end
