// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: buf.proto

#ifndef PROTOBUF_buf_2eproto__INCLUDED
#define PROTOBUF_buf_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace thread_msg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_buf_2eproto();
void protobuf_AssignDesc_buf_2eproto();
void protobuf_ShutdownFile_buf_2eproto();

class Thread_Data;

// ===================================================================

class Thread_Data : public ::google::protobuf::Message {
 public:
  Thread_Data();
  virtual ~Thread_Data();

  Thread_Data(const Thread_Data& from);

  inline Thread_Data& operator=(const Thread_Data& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Thread_Data& default_instance();

  void Swap(Thread_Data* other);

  // implements Message ----------------------------------------------

  Thread_Data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Thread_Data& from);
  void MergeFrom(const Thread_Data& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string cluster = 1;
  inline bool has_cluster() const;
  inline void clear_cluster();
  static const int kClusterFieldNumber = 1;
  inline const ::std::string& cluster() const;
  inline void set_cluster(const ::std::string& value);
  inline void set_cluster(const char* value);
  inline void set_cluster(const char* value, size_t size);
  inline ::std::string* mutable_cluster();
  inline ::std::string* release_cluster();
  inline void set_allocated_cluster(::std::string* cluster);

  // @@protoc_insertion_point(class_scope:thread_msg.Thread_Data)
 private:
  inline void set_has_cluster();
  inline void clear_has_cluster();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* cluster_;
  friend void  protobuf_AddDesc_buf_2eproto();
  friend void protobuf_AssignDesc_buf_2eproto();
  friend void protobuf_ShutdownFile_buf_2eproto();

  void InitAsDefaultInstance();
  static Thread_Data* default_instance_;
};
// ===================================================================


// ===================================================================

// Thread_Data

// optional string cluster = 1;
inline bool Thread_Data::has_cluster() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Thread_Data::set_has_cluster() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Thread_Data::clear_has_cluster() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Thread_Data::clear_cluster() {
  if (cluster_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cluster_->clear();
  }
  clear_has_cluster();
}
inline const ::std::string& Thread_Data::cluster() const {
  // @@protoc_insertion_point(field_get:thread_msg.Thread_Data.cluster)
  return *cluster_;
}
inline void Thread_Data::set_cluster(const ::std::string& value) {
  set_has_cluster();
  if (cluster_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cluster_ = new ::std::string;
  }
  cluster_->assign(value);
  // @@protoc_insertion_point(field_set:thread_msg.Thread_Data.cluster)
}
inline void Thread_Data::set_cluster(const char* value) {
  set_has_cluster();
  if (cluster_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cluster_ = new ::std::string;
  }
  cluster_->assign(value);
  // @@protoc_insertion_point(field_set_char:thread_msg.Thread_Data.cluster)
}
inline void Thread_Data::set_cluster(const char* value, size_t size) {
  set_has_cluster();
  if (cluster_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cluster_ = new ::std::string;
  }
  cluster_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:thread_msg.Thread_Data.cluster)
}
inline ::std::string* Thread_Data::mutable_cluster() {
  set_has_cluster();
  if (cluster_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cluster_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:thread_msg.Thread_Data.cluster)
  return cluster_;
}
inline ::std::string* Thread_Data::release_cluster() {
  clear_has_cluster();
  if (cluster_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = cluster_;
    cluster_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Thread_Data::set_allocated_cluster(::std::string* cluster) {
  if (cluster_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete cluster_;
  }
  if (cluster) {
    set_has_cluster();
    cluster_ = cluster;
  } else {
    clear_has_cluster();
    cluster_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:thread_msg.Thread_Data.cluster)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace thread_msg

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_buf_2eproto__INCLUDED
