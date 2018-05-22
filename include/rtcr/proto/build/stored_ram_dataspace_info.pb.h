// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stored_ram_dataspace_info.proto

#ifndef PROTOBUF_stored_5fram_5fdataspace_5finfo_2eproto__INCLUDED
#define PROTOBUF_stored_5fram_5fdataspace_5finfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_stored_5fram_5fdataspace_5finfo_2eproto {
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
void InitDefaultsStored_ram_dataspace_infoImpl();
void InitDefaultsStored_ram_dataspace_info();
inline void InitDefaults() {
  InitDefaultsStored_ram_dataspace_info();
}
}  // namespace protobuf_stored_5fram_5fdataspace_5finfo_2eproto
namespace protobuf {
class Stored_ram_dataspace_info;
class Stored_ram_dataspace_infoDefaultTypeInternal;
extern Stored_ram_dataspace_infoDefaultTypeInternal _Stored_ram_dataspace_info_default_instance_;
}  // namespace protobuf
namespace protobuf {

// ===================================================================

class Stored_ram_dataspace_info : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protobuf.Stored_ram_dataspace_info) */ {
 public:
  Stored_ram_dataspace_info();
  virtual ~Stored_ram_dataspace_info();

  Stored_ram_dataspace_info(const Stored_ram_dataspace_info& from);

  inline Stored_ram_dataspace_info& operator=(const Stored_ram_dataspace_info& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Stored_ram_dataspace_info(Stored_ram_dataspace_info&& from) noexcept
    : Stored_ram_dataspace_info() {
    *this = ::std::move(from);
  }

  inline Stored_ram_dataspace_info& operator=(Stored_ram_dataspace_info&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Stored_ram_dataspace_info& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Stored_ram_dataspace_info* internal_default_instance() {
    return reinterpret_cast<const Stored_ram_dataspace_info*>(
               &_Stored_ram_dataspace_info_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Stored_ram_dataspace_info* other);
  friend void swap(Stored_ram_dataspace_info& a, Stored_ram_dataspace_info& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Stored_ram_dataspace_info* New() const PROTOBUF_FINAL { return New(NULL); }

  Stored_ram_dataspace_info* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Stored_ram_dataspace_info& from);
  void MergeFrom(const Stored_ram_dataspace_info& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Stored_ram_dataspace_info* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 size = 1;
  void clear_size();
  static const int kSizeFieldNumber = 1;
  ::google::protobuf::uint32 size() const;
  void set_size(::google::protobuf::uint32 value);

  // uint32 cached = 2;
  void clear_cached();
  static const int kCachedFieldNumber = 2;
  ::google::protobuf::uint32 cached() const;
  void set_cached(::google::protobuf::uint32 value);

  // bool managed = 3;
  void clear_managed();
  static const int kManagedFieldNumber = 3;
  bool managed() const;
  void set_managed(bool value);

  // uint32 timestamp = 4;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 4;
  ::google::protobuf::uint32 timestamp() const;
  void set_timestamp(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:protobuf.Stored_ram_dataspace_info)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 size_;
  ::google::protobuf::uint32 cached_;
  bool managed_;
  ::google::protobuf::uint32 timestamp_;
  mutable int _cached_size_;
  friend struct ::protobuf_stored_5fram_5fdataspace_5finfo_2eproto::TableStruct;
  friend void ::protobuf_stored_5fram_5fdataspace_5finfo_2eproto::InitDefaultsStored_ram_dataspace_infoImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Stored_ram_dataspace_info

// uint32 size = 1;
inline void Stored_ram_dataspace_info::clear_size() {
  size_ = 0u;
}
inline ::google::protobuf::uint32 Stored_ram_dataspace_info::size() const {
  // @@protoc_insertion_point(field_get:protobuf.Stored_ram_dataspace_info.size)
  return size_;
}
inline void Stored_ram_dataspace_info::set_size(::google::protobuf::uint32 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:protobuf.Stored_ram_dataspace_info.size)
}

// uint32 cached = 2;
inline void Stored_ram_dataspace_info::clear_cached() {
  cached_ = 0u;
}
inline ::google::protobuf::uint32 Stored_ram_dataspace_info::cached() const {
  // @@protoc_insertion_point(field_get:protobuf.Stored_ram_dataspace_info.cached)
  return cached_;
}
inline void Stored_ram_dataspace_info::set_cached(::google::protobuf::uint32 value) {
  
  cached_ = value;
  // @@protoc_insertion_point(field_set:protobuf.Stored_ram_dataspace_info.cached)
}

// bool managed = 3;
inline void Stored_ram_dataspace_info::clear_managed() {
  managed_ = false;
}
inline bool Stored_ram_dataspace_info::managed() const {
  // @@protoc_insertion_point(field_get:protobuf.Stored_ram_dataspace_info.managed)
  return managed_;
}
inline void Stored_ram_dataspace_info::set_managed(bool value) {
  
  managed_ = value;
  // @@protoc_insertion_point(field_set:protobuf.Stored_ram_dataspace_info.managed)
}

// uint32 timestamp = 4;
inline void Stored_ram_dataspace_info::clear_timestamp() {
  timestamp_ = 0u;
}
inline ::google::protobuf::uint32 Stored_ram_dataspace_info::timestamp() const {
  // @@protoc_insertion_point(field_get:protobuf.Stored_ram_dataspace_info.timestamp)
  return timestamp_;
}
inline void Stored_ram_dataspace_info::set_timestamp(::google::protobuf::uint32 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:protobuf.Stored_ram_dataspace_info.timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_stored_5fram_5fdataspace_5finfo_2eproto__INCLUDED