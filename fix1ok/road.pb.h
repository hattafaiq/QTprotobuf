// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: road.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_road_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_road_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021011 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_road_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_road_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_road_2eproto;
namespace databuf {
class pesanSatu;
struct pesanSatuDefaultTypeInternal;
extern pesanSatuDefaultTypeInternal _pesanSatu_default_instance_;
}  // namespace databuf
PROTOBUF_NAMESPACE_OPEN
template<> ::databuf::pesanSatu* Arena::CreateMaybeMessage<::databuf::pesanSatu>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace databuf {

// ===================================================================

class pesanSatu final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:databuf.pesanSatu) */ {
 public:
  inline pesanSatu() : pesanSatu(nullptr) {}
  ~pesanSatu() override;
  explicit PROTOBUF_CONSTEXPR pesanSatu(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  pesanSatu(const pesanSatu& from);
  pesanSatu(pesanSatu&& from) noexcept
    : pesanSatu() {
    *this = ::std::move(from);
  }

  inline pesanSatu& operator=(const pesanSatu& from) {
    CopyFrom(from);
    return *this;
  }
  inline pesanSatu& operator=(pesanSatu&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const pesanSatu& default_instance() {
    return *internal_default_instance();
  }
  static inline const pesanSatu* internal_default_instance() {
    return reinterpret_cast<const pesanSatu*>(
               &_pesanSatu_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(pesanSatu& a, pesanSatu& b) {
    a.Swap(&b);
  }
  inline void Swap(pesanSatu* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(pesanSatu* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  pesanSatu* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<pesanSatu>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const pesanSatu& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const pesanSatu& from) {
    pesanSatu::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(pesanSatu* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "databuf.pesanSatu";
  }
  protected:
  explicit pesanSatu(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kJudulFieldNumber = 1,
    kIntegerFieldNumber = 2,
    kFloaterFieldNumber = 3,
    kDublerFieldNumber = 4,
  };
  // string judul = 1;
  void clear_judul();
  const std::string& judul() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_judul(ArgT0&& arg0, ArgT... args);
  std::string* mutable_judul();
  PROTOBUF_NODISCARD std::string* release_judul();
  void set_allocated_judul(std::string* judul);
  private:
  const std::string& _internal_judul() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_judul(const std::string& value);
  std::string* _internal_mutable_judul();
  public:

  // int32 integer = 2;
  void clear_integer();
  int32_t integer() const;
  void set_integer(int32_t value);
  private:
  int32_t _internal_integer() const;
  void _internal_set_integer(int32_t value);
  public:

  // float floater = 3;
  void clear_floater();
  float floater() const;
  void set_floater(float value);
  private:
  float _internal_floater() const;
  void _internal_set_floater(float value);
  public:

  // double dubler = 4;
  void clear_dubler();
  double dubler() const;
  void set_dubler(double value);
  private:
  double _internal_dubler() const;
  void _internal_set_dubler(double value);
  public:

  // @@protoc_insertion_point(class_scope:databuf.pesanSatu)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr judul_;
    int32_t integer_;
    float floater_;
    double dubler_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_road_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// pesanSatu

// string judul = 1;
inline void pesanSatu::clear_judul() {
  _impl_.judul_.ClearToEmpty();
}
inline const std::string& pesanSatu::judul() const {
  // @@protoc_insertion_point(field_get:databuf.pesanSatu.judul)
  return _internal_judul();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void pesanSatu::set_judul(ArgT0&& arg0, ArgT... args) {
 
 _impl_.judul_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:databuf.pesanSatu.judul)
}
inline std::string* pesanSatu::mutable_judul() {
  std::string* _s = _internal_mutable_judul();
  // @@protoc_insertion_point(field_mutable:databuf.pesanSatu.judul)
  return _s;
}
inline const std::string& pesanSatu::_internal_judul() const {
  return _impl_.judul_.Get();
}
inline void pesanSatu::_internal_set_judul(const std::string& value) {
  
  _impl_.judul_.Set(value, GetArenaForAllocation());
}
inline std::string* pesanSatu::_internal_mutable_judul() {
  
  return _impl_.judul_.Mutable(GetArenaForAllocation());
}
inline std::string* pesanSatu::release_judul() {
  // @@protoc_insertion_point(field_release:databuf.pesanSatu.judul)
  return _impl_.judul_.Release();
}
inline void pesanSatu::set_allocated_judul(std::string* judul) {
  if (judul != nullptr) {
    
  } else {
    
  }
  _impl_.judul_.SetAllocated(judul, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.judul_.IsDefault()) {
    _impl_.judul_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:databuf.pesanSatu.judul)
}

// int32 integer = 2;
inline void pesanSatu::clear_integer() {
  _impl_.integer_ = 0;
}
inline int32_t pesanSatu::_internal_integer() const {
  return _impl_.integer_;
}
inline int32_t pesanSatu::integer() const {
  // @@protoc_insertion_point(field_get:databuf.pesanSatu.integer)
  return _internal_integer();
}
inline void pesanSatu::_internal_set_integer(int32_t value) {
  
  _impl_.integer_ = value;
}
inline void pesanSatu::set_integer(int32_t value) {
  _internal_set_integer(value);
  // @@protoc_insertion_point(field_set:databuf.pesanSatu.integer)
}

// float floater = 3;
inline void pesanSatu::clear_floater() {
  _impl_.floater_ = 0;
}
inline float pesanSatu::_internal_floater() const {
  return _impl_.floater_;
}
inline float pesanSatu::floater() const {
  // @@protoc_insertion_point(field_get:databuf.pesanSatu.floater)
  return _internal_floater();
}
inline void pesanSatu::_internal_set_floater(float value) {
  
  _impl_.floater_ = value;
}
inline void pesanSatu::set_floater(float value) {
  _internal_set_floater(value);
  // @@protoc_insertion_point(field_set:databuf.pesanSatu.floater)
}

// double dubler = 4;
inline void pesanSatu::clear_dubler() {
  _impl_.dubler_ = 0;
}
inline double pesanSatu::_internal_dubler() const {
  return _impl_.dubler_;
}
inline double pesanSatu::dubler() const {
  // @@protoc_insertion_point(field_get:databuf.pesanSatu.dubler)
  return _internal_dubler();
}
inline void pesanSatu::_internal_set_dubler(double value) {
  
  _impl_.dubler_ = value;
}
inline void pesanSatu::set_dubler(double value) {
  _internal_set_dubler(value);
  // @@protoc_insertion_point(field_set:databuf.pesanSatu.dubler)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace databuf

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_road_2eproto