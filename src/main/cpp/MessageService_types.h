/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MessageService_TYPES_H
#define MessageService_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Banana_types.h"
#include "Channels_types.h"
#include "Endpoint_types.h"
#include "Events_types.h"
#include "Exceptions_types.h"
#include "ApplicationService_types.h"
#include "BananaService_types.h"


namespace aroma { namespace banana { namespace thrift { namespace message { namespace service {

typedef  ::aroma::banana::thrift::int int;

typedef  ::aroma::banana::thrift::long long;

typedef  ::aroma::banana::thrift::timestamp timestamp;

typedef class  ::aroma::banana::thrift::authentication::ApplicationToken ApplicationToken;

typedef class  ::aroma::banana::thrift::authentication::AuthenticationToken AuthenticationToken;

typedef class  ::aroma::banana::thrift::authentication::UserToken UserToken;

typedef class  ::aroma::banana::thrift::Application Application;

typedef  ::aroma::banana::thrift::Urgency::type Urgency;

typedef class  ::aroma::banana::thrift::events::Event Event;

typedef class  ::aroma::banana::thrift::exceptions::AccountAlreadyExistsException AccountAlreadyExistsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidArgumentException InvalidArgumentException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidCredentialsException InvalidCredentialsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidTokenException InvalidTokenException;

typedef class  ::aroma::banana::thrift::exceptions::OperationFailedException OperationFailedException;

typedef class  ::aroma::banana::thrift::exceptions::ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException;

typedef class  ::aroma::banana::thrift::exceptions::ApplicationDoesNotExistException ApplicationDoesNotExistException;

typedef class  ::aroma::banana::thrift::exceptions::CustomChannelUnreachableException CustomChannelUnreachableException;

typedef class  ::aroma::banana::thrift::exceptions::ChannelDoesNotExistException ChannelDoesNotExistException;

typedef class  ::aroma::banana::thrift::exceptions::UnauthorizedException UnauthorizedException;

typedef class  ::aroma::banana::thrift::application::service::SendMessageRequest SendMessageRequest;

typedef class  ::aroma::banana::thrift::application::service::SendMessageResponse SendMessageResponse;

typedef class  ::aroma::banana::thrift::service::DeleteMessageRequest DeleteMessageRequest;

typedef class  ::aroma::banana::thrift::service::DeleteMessageResponse DeleteMessageResponse;

typedef class  ::aroma::banana::thrift::service::DismissMessageRequest DismissMessageRequest;

typedef class  ::aroma::banana::thrift::service::DismissMessageResponse DismissMessageResponse;

typedef BananaService.GetMessagesRequest GetMessagesRequest;

typedef BananaService.GetMessagesResponse GetMessagesResponse;

typedef class  ::aroma::banana::thrift::service::GetFullMessageRequest GetFullMessageRequest;

typedef class  ::aroma::banana::thrift::service::GetFullMessageResponse GetFullMessageResponse;

}}}}} // namespace

#endif
