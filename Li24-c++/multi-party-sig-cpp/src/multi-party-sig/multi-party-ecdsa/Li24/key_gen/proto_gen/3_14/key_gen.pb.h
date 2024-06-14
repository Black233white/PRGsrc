// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Li24/key_gen.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Li24_2fkey_5fgen_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Li24_2fkey_5fgen_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "crypto-suites/crypto-commitment/proto_gen/commitment.pb.switch.h"
#include "crypto-suites/crypto-curve/proto_gen/curve_point.pb.switch.h"
#include "crypto-suites/crypto-paillier/proto_gen/paillier.pb.switch.h"
#include "crypto-suites/crypto-zkp/proto_gen/zkp.pb.switch.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Li24_2fkey_5fgen_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Li24_2fkey_5fgen_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Li24_2fkey_5fgen_2eproto;
namespace safeheron {
namespace proto {
namespace multi_party_ecdsa {
namespace Li24 {
namespace key_gen {
class Round0BCMessage;
class Round0BCMessageDefaultTypeInternal;
extern Round0BCMessageDefaultTypeInternal _Round0BCMessage_default_instance_;
class Round0P2PMessage;
class Round0P2PMessageDefaultTypeInternal;
extern Round0P2PMessageDefaultTypeInternal _Round0P2PMessage_default_instance_;
}  // namespace key_gen
}  // namespace Li24
}  // namespace multi_party_ecdsa
}  // namespace proto
}  // namespace safeheron
PROTOBUF_NAMESPACE_OPEN
template<> ::safeheron::proto::multi_party_ecdsa::Li24::key_gen::Round0BCMessage* Arena::CreateMaybeMessage<::safeheron::proto::multi_party_ecdsa::Li24::key_gen::Round0BCMessage>(Arena*);
template<> ::safeheron::proto::multi_party_ecdsa::Li24::key_gen::Round0P2PMessage* Arena::CreateMaybeMessage<::safeheron::proto::multi_party_ecdsa::Li24::key_gen::Round0P2PMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace safeheron {
namespace proto {
namespace multi_party_ecdsa {
namespace Li24 {
namespace key_gen {

// ===================================================================

class Round0BCMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage) */ {
 public:
  inline Round0BCMessage() : Round0BCMessage(nullptr) {}
  virtual ~Round0BCMessage();

  Round0BCMessage(const Round0BCMessage& from);
  Round0BCMessage(Round0BCMessage&& from) noexcept
    : Round0BCMessage() {
    *this = ::std::move(from);
  }

  inline Round0BCMessage& operator=(const Round0BCMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline Round0BCMessage& operator=(Round0BCMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Round0BCMessage& default_instance();

  static inline const Round0BCMessage* internal_default_instance() {
    return reinterpret_cast<const Round0BCMessage*>(
               &_Round0BCMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Round0BCMessage& a, Round0BCMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(Round0BCMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Round0BCMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Round0BCMessage* New() const final {
    return CreateMaybeMessage<Round0BCMessage>(nullptr);
  }

  Round0BCMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Round0BCMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Round0BCMessage& from);
  void MergeFrom(const Round0BCMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Round0BCMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage";
  }
  protected:
  explicit Round0BCMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Li24_2fkey_5fgen_2eproto);
    return ::descriptor_table_Li24_2fkey_5fgen_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVsFieldNumber = 1,
  };
  // repeated .safeheron.proto.CurvePoint vs = 1;
  int vs_size() const;
  private:
  int _internal_vs_size() const;
  public:
  void clear_vs();
  ::safeheron::proto::CurvePoint* mutable_vs(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safeheron::proto::CurvePoint >*
      mutable_vs();
  private:
  const ::safeheron::proto::CurvePoint& _internal_vs(int index) const;
  ::safeheron::proto::CurvePoint* _internal_add_vs();
  public:
  const ::safeheron::proto::CurvePoint& vs(int index) const;
  ::safeheron::proto::CurvePoint* add_vs();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safeheron::proto::CurvePoint >&
      vs() const;

  // @@protoc_insertion_point(class_scope:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safeheron::proto::CurvePoint > vs_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Li24_2fkey_5fgen_2eproto;
};
// -------------------------------------------------------------------

class Round0P2PMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage) */ {
 public:
  inline Round0P2PMessage() : Round0P2PMessage(nullptr) {}
  virtual ~Round0P2PMessage();

  Round0P2PMessage(const Round0P2PMessage& from);
  Round0P2PMessage(Round0P2PMessage&& from) noexcept
    : Round0P2PMessage() {
    *this = ::std::move(from);
  }

  inline Round0P2PMessage& operator=(const Round0P2PMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline Round0P2PMessage& operator=(Round0P2PMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Round0P2PMessage& default_instance();

  static inline const Round0P2PMessage* internal_default_instance() {
    return reinterpret_cast<const Round0P2PMessage*>(
               &_Round0P2PMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Round0P2PMessage& a, Round0P2PMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(Round0P2PMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Round0P2PMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Round0P2PMessage* New() const final {
    return CreateMaybeMessage<Round0P2PMessage>(nullptr);
  }

  Round0P2PMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Round0P2PMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Round0P2PMessage& from);
  void MergeFrom(const Round0P2PMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Round0P2PMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage";
  }
  protected:
  explicit Round0P2PMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Li24_2fkey_5fgen_2eproto);
    return ::descriptor_table_Li24_2fkey_5fgen_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEIjFieldNumber = 1,
    kXIjFieldNumber = 2,
  };
  // string e_ij = 1;
  void clear_e_ij();
  const std::string& e_ij() const;
  void set_e_ij(const std::string& value);
  void set_e_ij(std::string&& value);
  void set_e_ij(const char* value);
  void set_e_ij(const char* value, size_t size);
  std::string* mutable_e_ij();
  std::string* release_e_ij();
  void set_allocated_e_ij(std::string* e_ij);
  private:
  const std::string& _internal_e_ij() const;
  void _internal_set_e_ij(const std::string& value);
  std::string* _internal_mutable_e_ij();
  public:

  // string x_ij = 2;
  void clear_x_ij();
  const std::string& x_ij() const;
  void set_x_ij(const std::string& value);
  void set_x_ij(std::string&& value);
  void set_x_ij(const char* value);
  void set_x_ij(const char* value, size_t size);
  std::string* mutable_x_ij();
  std::string* release_x_ij();
  void set_allocated_x_ij(std::string* x_ij);
  private:
  const std::string& _internal_x_ij() const;
  void _internal_set_x_ij(const std::string& value);
  std::string* _internal_mutable_x_ij();
  public:

  // @@protoc_insertion_point(class_scope:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr e_ij_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr x_ij_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Li24_2fkey_5fgen_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Round0BCMessage

// repeated .safeheron.proto.CurvePoint vs = 1;
inline int Round0BCMessage::_internal_vs_size() const {
  return vs_.size();
}
inline int Round0BCMessage::vs_size() const {
  return _internal_vs_size();
}
inline ::safeheron::proto::CurvePoint* Round0BCMessage::mutable_vs(int index) {
  // @@protoc_insertion_point(field_mutable:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage.vs)
  return vs_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safeheron::proto::CurvePoint >*
Round0BCMessage::mutable_vs() {
  // @@protoc_insertion_point(field_mutable_list:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage.vs)
  return &vs_;
}
inline const ::safeheron::proto::CurvePoint& Round0BCMessage::_internal_vs(int index) const {
  return vs_.Get(index);
}
inline const ::safeheron::proto::CurvePoint& Round0BCMessage::vs(int index) const {
  // @@protoc_insertion_point(field_get:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage.vs)
  return _internal_vs(index);
}
inline ::safeheron::proto::CurvePoint* Round0BCMessage::_internal_add_vs() {
  return vs_.Add();
}
inline ::safeheron::proto::CurvePoint* Round0BCMessage::add_vs() {
  // @@protoc_insertion_point(field_add:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage.vs)
  return _internal_add_vs();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safeheron::proto::CurvePoint >&
Round0BCMessage::vs() const {
  // @@protoc_insertion_point(field_list:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0BCMessage.vs)
  return vs_;
}

// -------------------------------------------------------------------

// Round0P2PMessage

// string e_ij = 1;
inline void Round0P2PMessage::clear_e_ij() {
  e_ij_.ClearToEmpty();
}
inline const std::string& Round0P2PMessage::e_ij() const {
  // @@protoc_insertion_point(field_get:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
  return _internal_e_ij();
}
inline void Round0P2PMessage::set_e_ij(const std::string& value) {
  _internal_set_e_ij(value);
  // @@protoc_insertion_point(field_set:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
}
inline std::string* Round0P2PMessage::mutable_e_ij() {
  // @@protoc_insertion_point(field_mutable:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
  return _internal_mutable_e_ij();
}
inline const std::string& Round0P2PMessage::_internal_e_ij() const {
  return e_ij_.Get();
}
inline void Round0P2PMessage::_internal_set_e_ij(const std::string& value) {
  
  e_ij_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Round0P2PMessage::set_e_ij(std::string&& value) {
  
  e_ij_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
}
inline void Round0P2PMessage::set_e_ij(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  e_ij_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
}
inline void Round0P2PMessage::set_e_ij(const char* value,
    size_t size) {
  
  e_ij_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
}
inline std::string* Round0P2PMessage::_internal_mutable_e_ij() {
  
  return e_ij_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Round0P2PMessage::release_e_ij() {
  // @@protoc_insertion_point(field_release:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
  return e_ij_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Round0P2PMessage::set_allocated_e_ij(std::string* e_ij) {
  if (e_ij != nullptr) {
    
  } else {
    
  }
  e_ij_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), e_ij,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.e_ij)
}

// string x_ij = 2;
inline void Round0P2PMessage::clear_x_ij() {
  x_ij_.ClearToEmpty();
}
inline const std::string& Round0P2PMessage::x_ij() const {
  // @@protoc_insertion_point(field_get:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
  return _internal_x_ij();
}
inline void Round0P2PMessage::set_x_ij(const std::string& value) {
  _internal_set_x_ij(value);
  // @@protoc_insertion_point(field_set:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
}
inline std::string* Round0P2PMessage::mutable_x_ij() {
  // @@protoc_insertion_point(field_mutable:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
  return _internal_mutable_x_ij();
}
inline const std::string& Round0P2PMessage::_internal_x_ij() const {
  return x_ij_.Get();
}
inline void Round0P2PMessage::_internal_set_x_ij(const std::string& value) {
  
  x_ij_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Round0P2PMessage::set_x_ij(std::string&& value) {
  
  x_ij_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
}
inline void Round0P2PMessage::set_x_ij(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  x_ij_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
}
inline void Round0P2PMessage::set_x_ij(const char* value,
    size_t size) {
  
  x_ij_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
}
inline std::string* Round0P2PMessage::_internal_mutable_x_ij() {
  
  return x_ij_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Round0P2PMessage::release_x_ij() {
  // @@protoc_insertion_point(field_release:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
  return x_ij_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Round0P2PMessage::set_allocated_x_ij(std::string* x_ij) {
  if (x_ij != nullptr) {
    
  } else {
    
  }
  x_ij_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), x_ij,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:safeheron.proto.multi_party_ecdsa.Li24.key_gen.Round0P2PMessage.x_ij)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace key_gen
}  // namespace Li24
}  // namespace multi_party_ecdsa
}  // namespace proto
}  // namespace safeheron

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Li24_2fkey_5fgen_2eproto
