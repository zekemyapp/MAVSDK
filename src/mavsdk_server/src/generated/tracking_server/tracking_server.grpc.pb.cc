// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tracking_server/tracking_server.proto

#include "tracking_server/tracking_server.pb.h"
#include "tracking_server/tracking_server.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace tracking_server {

static const char* TrackingServerService_method_names[] = {
  "/mavsdk.rpc.tracking_server.TrackingServerService/SetTrackingPointStatus",
  "/mavsdk.rpc.tracking_server.TrackingServerService/SetTrackingRectangleStatus",
  "/mavsdk.rpc.tracking_server.TrackingServerService/SetTrackingOffStatus",
  "/mavsdk.rpc.tracking_server.TrackingServerService/SubscribeTrackingPointCommand",
  "/mavsdk.rpc.tracking_server.TrackingServerService/SubscribeTrackingRectangleCommand",
  "/mavsdk.rpc.tracking_server.TrackingServerService/SubscribeTrackingOffCommand",
  "/mavsdk.rpc.tracking_server.TrackingServerService/RespondTrackingPointCommand",
  "/mavsdk.rpc.tracking_server.TrackingServerService/RespondTrackingRectangleCommand",
  "/mavsdk.rpc.tracking_server.TrackingServerService/RespondTrackingOffCommand",
};

std::unique_ptr< TrackingServerService::Stub> TrackingServerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TrackingServerService::Stub> stub(new TrackingServerService::Stub(channel));
  return stub;
}

TrackingServerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetTrackingPointStatus_(TrackingServerService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetTrackingRectangleStatus_(TrackingServerService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetTrackingOffStatus_(TrackingServerService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SubscribeTrackingPointCommand_(TrackingServerService_method_names[3], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeTrackingRectangleCommand_(TrackingServerService_method_names[4], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeTrackingOffCommand_(TrackingServerService_method_names[5], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_RespondTrackingPointCommand_(TrackingServerService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RespondTrackingRectangleCommand_(TrackingServerService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RespondTrackingOffCommand_(TrackingServerService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TrackingServerService::Stub::SetTrackingPointStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest& request, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetTrackingPointStatus_, context, request, response);
}

void TrackingServerService::Stub::experimental_async::SetTrackingPointStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTrackingPointStatus_, context, request, response, std::move(f));
}

void TrackingServerService::Stub::experimental_async::SetTrackingPointStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTrackingPointStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse>* TrackingServerService::Stub::PrepareAsyncSetTrackingPointStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetTrackingPointStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse>* TrackingServerService::Stub::AsyncSetTrackingPointStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetTrackingPointStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TrackingServerService::Stub::SetTrackingRectangleStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest& request, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetTrackingRectangleStatus_, context, request, response);
}

void TrackingServerService::Stub::experimental_async::SetTrackingRectangleStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTrackingRectangleStatus_, context, request, response, std::move(f));
}

void TrackingServerService::Stub::experimental_async::SetTrackingRectangleStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTrackingRectangleStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse>* TrackingServerService::Stub::PrepareAsyncSetTrackingRectangleStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetTrackingRectangleStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse>* TrackingServerService::Stub::AsyncSetTrackingRectangleStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetTrackingRectangleStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TrackingServerService::Stub::SetTrackingOffStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest& request, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetTrackingOffStatus_, context, request, response);
}

void TrackingServerService::Stub::experimental_async::SetTrackingOffStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTrackingOffStatus_, context, request, response, std::move(f));
}

void TrackingServerService::Stub::experimental_async::SetTrackingOffStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTrackingOffStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse>* TrackingServerService::Stub::PrepareAsyncSetTrackingOffStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetTrackingOffStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse>* TrackingServerService::Stub::AsyncSetTrackingOffStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetTrackingOffStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>* TrackingServerService::Stub::SubscribeTrackingPointCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingPointCommandRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>::Create(channel_.get(), rpcmethod_SubscribeTrackingPointCommand_, context, request);
}

void TrackingServerService::Stub::experimental_async::SubscribeTrackingPointCommand(::grpc::ClientContext* context, ::mavsdk::rpc::tracking_server::SubscribeTrackingPointCommandRequest* request, ::grpc::experimental::ClientReadReactor< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeTrackingPointCommand_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>* TrackingServerService::Stub::AsyncSubscribeTrackingPointCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingPointCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeTrackingPointCommand_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>* TrackingServerService::Stub::PrepareAsyncSubscribeTrackingPointCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingPointCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeTrackingPointCommand_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>* TrackingServerService::Stub::SubscribeTrackingRectangleCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingRectangleCommandRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>::Create(channel_.get(), rpcmethod_SubscribeTrackingRectangleCommand_, context, request);
}

void TrackingServerService::Stub::experimental_async::SubscribeTrackingRectangleCommand(::grpc::ClientContext* context, ::mavsdk::rpc::tracking_server::SubscribeTrackingRectangleCommandRequest* request, ::grpc::experimental::ClientReadReactor< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeTrackingRectangleCommand_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>* TrackingServerService::Stub::AsyncSubscribeTrackingRectangleCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingRectangleCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeTrackingRectangleCommand_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>* TrackingServerService::Stub::PrepareAsyncSubscribeTrackingRectangleCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingRectangleCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeTrackingRectangleCommand_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>* TrackingServerService::Stub::SubscribeTrackingOffCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingOffCommandRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>::Create(channel_.get(), rpcmethod_SubscribeTrackingOffCommand_, context, request);
}

void TrackingServerService::Stub::experimental_async::SubscribeTrackingOffCommand(::grpc::ClientContext* context, ::mavsdk::rpc::tracking_server::SubscribeTrackingOffCommandRequest* request, ::grpc::experimental::ClientReadReactor< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeTrackingOffCommand_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>* TrackingServerService::Stub::AsyncSubscribeTrackingOffCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingOffCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeTrackingOffCommand_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>* TrackingServerService::Stub::PrepareAsyncSubscribeTrackingOffCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingOffCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeTrackingOffCommand_, context, request, false, nullptr);
}

::grpc::Status TrackingServerService::Stub::RespondTrackingPointCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest& request, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RespondTrackingPointCommand_, context, request, response);
}

void TrackingServerService::Stub::experimental_async::RespondTrackingPointCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RespondTrackingPointCommand_, context, request, response, std::move(f));
}

void TrackingServerService::Stub::experimental_async::RespondTrackingPointCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RespondTrackingPointCommand_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse>* TrackingServerService::Stub::PrepareAsyncRespondTrackingPointCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RespondTrackingPointCommand_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse>* TrackingServerService::Stub::AsyncRespondTrackingPointCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRespondTrackingPointCommandRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TrackingServerService::Stub::RespondTrackingRectangleCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest& request, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RespondTrackingRectangleCommand_, context, request, response);
}

void TrackingServerService::Stub::experimental_async::RespondTrackingRectangleCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RespondTrackingRectangleCommand_, context, request, response, std::move(f));
}

void TrackingServerService::Stub::experimental_async::RespondTrackingRectangleCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RespondTrackingRectangleCommand_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse>* TrackingServerService::Stub::PrepareAsyncRespondTrackingRectangleCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RespondTrackingRectangleCommand_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse>* TrackingServerService::Stub::AsyncRespondTrackingRectangleCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRespondTrackingRectangleCommandRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TrackingServerService::Stub::RespondTrackingOffCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest& request, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RespondTrackingOffCommand_, context, request, response);
}

void TrackingServerService::Stub::experimental_async::RespondTrackingOffCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RespondTrackingOffCommand_, context, request, response, std::move(f));
}

void TrackingServerService::Stub::experimental_async::RespondTrackingOffCommand(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RespondTrackingOffCommand_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse>* TrackingServerService::Stub::PrepareAsyncRespondTrackingOffCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RespondTrackingOffCommand_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse>* TrackingServerService::Stub::AsyncRespondTrackingOffCommandRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRespondTrackingOffCommandRaw(context, request, cq);
  result->StartCall();
  return result;
}

TrackingServerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest* req,
             ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse* resp) {
               return service->SetTrackingPointStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest* req,
             ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse* resp) {
               return service->SetTrackingRectangleStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest* req,
             ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse* resp) {
               return service->SetTrackingOffStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::SubscribeTrackingPointCommandRequest, ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::SubscribeTrackingPointCommandRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>* writer) {
               return service->SubscribeTrackingPointCommand(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[4],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::SubscribeTrackingRectangleCommandRequest, ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::SubscribeTrackingRectangleCommandRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>* writer) {
               return service->SubscribeTrackingRectangleCommand(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::SubscribeTrackingOffCommandRequest, ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::SubscribeTrackingOffCommandRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>* writer) {
               return service->SubscribeTrackingOffCommand(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest* req,
             ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse* resp) {
               return service->RespondTrackingPointCommand(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest* req,
             ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse* resp) {
               return service->RespondTrackingRectangleCommand(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrackingServerService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrackingServerService::Service, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TrackingServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest* req,
             ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse* resp) {
               return service->RespondTrackingOffCommand(ctx, req, resp);
             }, this)));
}

TrackingServerService::Service::~Service() {
}

::grpc::Status TrackingServerService::Service::SetTrackingPointStatus(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingPointStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingPointStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::SetTrackingRectangleStatus(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingRectangleStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::SetTrackingOffStatus(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::SetTrackingOffStatusRequest* request, ::mavsdk::rpc::tracking_server::SetTrackingOffStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::SubscribeTrackingPointCommand(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingPointCommandRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::tracking_server::TrackingPointCommandResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::SubscribeTrackingRectangleCommand(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingRectangleCommandRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::tracking_server::TrackingRectangleCommandResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::SubscribeTrackingOffCommand(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::SubscribeTrackingOffCommandRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::tracking_server::TrackingOffCommandResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::RespondTrackingPointCommand(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingPointCommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::RespondTrackingRectangleCommand(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingRectangleCommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrackingServerService::Service::RespondTrackingOffCommand(::grpc::ServerContext* context, const ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandRequest* request, ::mavsdk::rpc::tracking_server::RespondTrackingOffCommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace tracking_server

