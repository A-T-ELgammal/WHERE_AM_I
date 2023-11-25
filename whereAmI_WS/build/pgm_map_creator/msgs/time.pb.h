// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: time.proto

#ifndef PROTOBUF_INCLUDED_time_2eproto
#define PROTOBUF_INCLUDED_time_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_time_2eproto 

namespace protobuf_time_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_time_2eproto
namespace gazebo {
namespace msgs {
class Time;
class TimeDefaultTypeInternal;
extern TimeDefaultTypeInternal _Time_default_instance_;
}  // namespace msgs
}  // namespace gazebo
namespace google {
namespace protobuf {
template<> ::gazebo::msgs::Time* Arena::CreateMaybeMessage<::gazebo::msgs::Time>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gazebo {
namespace msgs {

// ===================================================================

class Time : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Time) */ {
 public:
  Time();
  virtual ~Time();

  Time(const Time& from);

  inline Time& operator=(const Time& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Time(Time&& from) noexcept
    : Time() {
    *this = ::std::move(from);
  }

  inline Time& operator=(Time&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Time& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Time* internal_default_instance() {
    return reinterpret_cast<const Time*>(
               &_Time_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Time* other);
  friend void swap(Time& a, Time& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Time* New() const final {
    return CreateMaybeMessage<Time>(NULL);
  }

  Time* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Time>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Time& from);
  void MergeFrom(const Time& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Time* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 sec = 1;
  bool has_sec() const;
  void clear_sec();
  static const int kSecFieldNumber = 1;
  ::google::protobuf::int32 sec() const;
  void set_sec(::google::protobuf::int32 value);

  // required int32 nsec = 2;
  bool has_nsec() const;
  void clear_nsec();
  static const int kNsecFieldNumber = 2;
  ::google::protobuf::int32 nsec() const;
  void set_nsec(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Time)
 private:
  void set_has_sec();
  void clear_has_sec();
  void set_has_nsec();
  void clear_has_nsec();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 sec_;
  ::google::protobuf::int32 nsec_;
  friend struct ::protobuf_time_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Time

// required int32 sec = 1;
inline bool Time::has_sec() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Time::set_has_sec() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Time::clear_has_sec() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Time::clear_sec() {
  sec_ = 0;
  clear_has_sec();
}
inline ::google::protobuf::int32 Time::sec() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Time.sec)
  return sec_;
}
inline void Time::set_sec(::google::protobuf::int32 value) {
  set_has_sec();
  sec_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Time.sec)
}

// required int32 nsec = 2;
inline bool Time::has_nsec() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Time::set_has_nsec() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Time::clear_has_nsec() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Time::clear_nsec() {
  nsec_ = 0;
  clear_has_nsec();
}
inline ::google::protobuf::int32 Time::nsec() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Time.nsec)
  return nsec_;
}
inline void Time::set_nsec(::google::protobuf::int32 value) {
  set_has_nsec();
  nsec_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Time.nsec)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_time_2eproto
