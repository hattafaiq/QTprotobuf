// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: road.proto

#include "road.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace databuf {
PROTOBUF_CONSTEXPR pesanSatu::pesanSatu(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.judul_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.integer_)*/0
  , /*decltype(_impl_.floater_)*/0
  , /*decltype(_impl_.dubler_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct pesanSatuDefaultTypeInternal {
  PROTOBUF_CONSTEXPR pesanSatuDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~pesanSatuDefaultTypeInternal() {}
  union {
    pesanSatu _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 pesanSatuDefaultTypeInternal _pesanSatu_default_instance_;
}  // namespace databuf
static ::_pb::Metadata file_level_metadata_road_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_road_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_road_2eproto = nullptr;

const uint32_t TableStruct_road_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::databuf::pesanSatu, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::databuf::pesanSatu, _impl_.judul_),
  PROTOBUF_FIELD_OFFSET(::databuf::pesanSatu, _impl_.integer_),
  PROTOBUF_FIELD_OFFSET(::databuf::pesanSatu, _impl_.floater_),
  PROTOBUF_FIELD_OFFSET(::databuf::pesanSatu, _impl_.dubler_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::databuf::pesanSatu)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::databuf::_pesanSatu_default_instance_._instance,
};

const char descriptor_table_protodef_road_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nroad.proto\022\007databuf\"L\n\tpesanSatu\022\r\n\005ju"
  "dul\030\001 \001(\t\022\017\n\007integer\030\002 \001(\005\022\017\n\007floater\030\003 "
  "\001(\002\022\016\n\006dubler\030\004 \001(\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_road_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_road_2eproto = {
    false, false, 107, descriptor_table_protodef_road_2eproto,
    "road.proto",
    &descriptor_table_road_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_road_2eproto::offsets,
    file_level_metadata_road_2eproto, file_level_enum_descriptors_road_2eproto,
    file_level_service_descriptors_road_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_road_2eproto_getter() {
  return &descriptor_table_road_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_road_2eproto(&descriptor_table_road_2eproto);
namespace databuf {

// ===================================================================

class pesanSatu::_Internal {
 public:
};

pesanSatu::pesanSatu(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:databuf.pesanSatu)
}
pesanSatu::pesanSatu(const pesanSatu& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  pesanSatu* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.judul_){}
    , decltype(_impl_.integer_){}
    , decltype(_impl_.floater_){}
    , decltype(_impl_.dubler_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.judul_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.judul_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_judul().empty()) {
    _this->_impl_.judul_.Set(from._internal_judul(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.integer_, &from._impl_.integer_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.dubler_) -
    reinterpret_cast<char*>(&_impl_.integer_)) + sizeof(_impl_.dubler_));
  // @@protoc_insertion_point(copy_constructor:databuf.pesanSatu)
}

inline void pesanSatu::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.judul_){}
    , decltype(_impl_.integer_){0}
    , decltype(_impl_.floater_){0}
    , decltype(_impl_.dubler_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.judul_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.judul_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

pesanSatu::~pesanSatu() {
  // @@protoc_insertion_point(destructor:databuf.pesanSatu)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void pesanSatu::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.judul_.Destroy();
}

void pesanSatu::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void pesanSatu::Clear() {
// @@protoc_insertion_point(message_clear_start:databuf.pesanSatu)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.judul_.ClearToEmpty();
  ::memset(&_impl_.integer_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.dubler_) -
      reinterpret_cast<char*>(&_impl_.integer_)) + sizeof(_impl_.dubler_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* pesanSatu::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string judul = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_judul();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "databuf.pesanSatu.judul"));
        } else
          goto handle_unusual;
        continue;
      // int32 integer = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.integer_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // float floater = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          _impl_.floater_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // double dubler = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _impl_.dubler_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* pesanSatu::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:databuf.pesanSatu)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string judul = 1;
  if (!this->_internal_judul().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_judul().data(), static_cast<int>(this->_internal_judul().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "databuf.pesanSatu.judul");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_judul(), target);
  }

  // int32 integer = 2;
  if (this->_internal_integer() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_integer(), target);
  }

  // float floater = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_floater = this->_internal_floater();
  uint32_t raw_floater;
  memcpy(&raw_floater, &tmp_floater, sizeof(tmp_floater));
  if (raw_floater != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(3, this->_internal_floater(), target);
  }

  // double dubler = 4;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_dubler = this->_internal_dubler();
  uint64_t raw_dubler;
  memcpy(&raw_dubler, &tmp_dubler, sizeof(tmp_dubler));
  if (raw_dubler != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(4, this->_internal_dubler(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:databuf.pesanSatu)
  return target;
}

size_t pesanSatu::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:databuf.pesanSatu)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string judul = 1;
  if (!this->_internal_judul().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_judul());
  }

  // int32 integer = 2;
  if (this->_internal_integer() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_integer());
  }

  // float floater = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_floater = this->_internal_floater();
  uint32_t raw_floater;
  memcpy(&raw_floater, &tmp_floater, sizeof(tmp_floater));
  if (raw_floater != 0) {
    total_size += 1 + 4;
  }

  // double dubler = 4;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_dubler = this->_internal_dubler();
  uint64_t raw_dubler;
  memcpy(&raw_dubler, &tmp_dubler, sizeof(tmp_dubler));
  if (raw_dubler != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData pesanSatu::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    pesanSatu::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*pesanSatu::GetClassData() const { return &_class_data_; }


void pesanSatu::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<pesanSatu*>(&to_msg);
  auto& from = static_cast<const pesanSatu&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:databuf.pesanSatu)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_judul().empty()) {
    _this->_internal_set_judul(from._internal_judul());
  }
  if (from._internal_integer() != 0) {
    _this->_internal_set_integer(from._internal_integer());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_floater = from._internal_floater();
  uint32_t raw_floater;
  memcpy(&raw_floater, &tmp_floater, sizeof(tmp_floater));
  if (raw_floater != 0) {
    _this->_internal_set_floater(from._internal_floater());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_dubler = from._internal_dubler();
  uint64_t raw_dubler;
  memcpy(&raw_dubler, &tmp_dubler, sizeof(tmp_dubler));
  if (raw_dubler != 0) {
    _this->_internal_set_dubler(from._internal_dubler());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void pesanSatu::CopyFrom(const pesanSatu& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:databuf.pesanSatu)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool pesanSatu::IsInitialized() const {
  return true;
}

void pesanSatu::InternalSwap(pesanSatu* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.judul_, lhs_arena,
      &other->_impl_.judul_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(pesanSatu, _impl_.dubler_)
      + sizeof(pesanSatu::_impl_.dubler_)
      - PROTOBUF_FIELD_OFFSET(pesanSatu, _impl_.integer_)>(
          reinterpret_cast<char*>(&_impl_.integer_),
          reinterpret_cast<char*>(&other->_impl_.integer_));
}

::PROTOBUF_NAMESPACE_ID::Metadata pesanSatu::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_road_2eproto_getter, &descriptor_table_road_2eproto_once,
      file_level_metadata_road_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace databuf
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::databuf::pesanSatu*
Arena::CreateMaybeMessage< ::databuf::pesanSatu >(Arena* arena) {
  return Arena::CreateMessageInternal< ::databuf::pesanSatu >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
