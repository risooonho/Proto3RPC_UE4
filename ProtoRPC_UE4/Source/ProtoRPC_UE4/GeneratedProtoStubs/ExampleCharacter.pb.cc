// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExampleCharacter.proto

#if WITH_GOOGLE_PROTOBUF_BINDING == 1
#include "AllowWindowsPlatformTypes.h"
#endif // WITH_GOOGLE_PROTOBUF_BINDING

#if _MSC_VER >= 1300
#ifndef _PS3
#pragma warning(push)
#pragma warning(disable : 4530)	// warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4512)	// warning C4512: assignment operator could not be generated
#pragma warning(disable : 4244)	// warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)	// warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)	// warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)	// warning C4127: conditional expression is constant
#pragma warning(disable : 4100)	// warning C4100: 'op' : unreferenced formal parameter
#endif // _PS3
#endif // _MSC_VER
#if _GNUC
#ifndef _PS3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif // _PS3
#endif // _GNUC

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ExampleCharacter.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace paddlecreekgames {

namespace {

const ::google::protobuf::Descriptor* ExampleCharacter_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExampleCharacter_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ExampleCharacter_2eproto() {
  protobuf_AddDesc_ExampleCharacter_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ExampleCharacter.proto");
  GOOGLE_CHECK(file != NULL);
  ExampleCharacter_descriptor_ = file->message_type(0);
  static const int ExampleCharacter_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExampleCharacter, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExampleCharacter, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExampleCharacter, health_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExampleCharacter, armor_),
  };
  ExampleCharacter_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ExampleCharacter_descriptor_,
      ExampleCharacter::default_instance_,
      ExampleCharacter_offsets_,
      -1,
      -1,
      -1,
      sizeof(ExampleCharacter),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExampleCharacter, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExampleCharacter, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ExampleCharacter_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ExampleCharacter_descriptor_, &ExampleCharacter::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ExampleCharacter_2eproto() {
  delete ExampleCharacter::default_instance_;
  delete ExampleCharacter_reflection_;
}

void protobuf_AddDesc_ExampleCharacter_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026ExampleCharacter.proto\022\024com.paddlecree"
    "kgames\"K\n\020ExampleCharacter\022\n\n\002Id\030\001 \001(\t\022\014"
    "\n\004Name\030\002 \001(\t\022\016\n\006Health\030\003 \001(\003\022\r\n\005Armor\030\004 "
    "\001(\003b\006proto3", 131);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ExampleCharacter.proto", &protobuf_RegisterTypes);
  ExampleCharacter::default_instance_ = new ExampleCharacter();
  ExampleCharacter::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ExampleCharacter_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ExampleCharacter_2eproto {
  StaticDescriptorInitializer_ExampleCharacter_2eproto() {
    protobuf_AddDesc_ExampleCharacter_2eproto();
  }
} static_descriptor_initializer_ExampleCharacter_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int ExampleCharacter::kIdFieldNumber;
const int ExampleCharacter::kNameFieldNumber;
const int ExampleCharacter::kHealthFieldNumber;
const int ExampleCharacter::kArmorFieldNumber;
#endif  // !_MSC_VER

ExampleCharacter::ExampleCharacter()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.paddlecreekgames.ExampleCharacter)
}

void ExampleCharacter::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ExampleCharacter::ExampleCharacter(const ExampleCharacter& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:com.paddlecreekgames.ExampleCharacter)
}

void ExampleCharacter::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  health_ = GOOGLE_LONGLONG(0);
  armor_ = GOOGLE_LONGLONG(0);
}

ExampleCharacter::~ExampleCharacter() {
  // @@protoc_insertion_point(destructor:com.paddlecreekgames.ExampleCharacter)
  SharedDtor();
}

void ExampleCharacter::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ExampleCharacter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExampleCharacter::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExampleCharacter_descriptor_;
}

const ExampleCharacter& ExampleCharacter::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ExampleCharacter_2eproto();
  return *default_instance_;
}

ExampleCharacter* ExampleCharacter::default_instance_ = NULL;

ExampleCharacter* ExampleCharacter::New(::google::protobuf::Arena* arena) const {
  ExampleCharacter* n = new ExampleCharacter;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExampleCharacter::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ExampleCharacter*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(health_, armor_);
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool ExampleCharacter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.paddlecreekgames.ExampleCharacter)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string Id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.paddlecreekgames.ExampleCharacter.Id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Name;
        break;
      }

      // optional string Name = 2;
      case 2: {
        if (tag == 18) {
         parse_Name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.paddlecreekgames.ExampleCharacter.Name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_Health;
        break;
      }

      // optional int64 Health = 3;
      case 3: {
        if (tag == 24) {
         parse_Health:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &health_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_Armor;
        break;
      }

      // optional int64 Armor = 4;
      case 4: {
        if (tag == 32) {
         parse_Armor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &armor_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.paddlecreekgames.ExampleCharacter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.paddlecreekgames.ExampleCharacter)
  return false;
#undef DO_
}

void ExampleCharacter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.paddlecreekgames.ExampleCharacter)
  // optional string Id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.paddlecreekgames.ExampleCharacter.Id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional string Name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.paddlecreekgames.ExampleCharacter.Name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional int64 Health = 3;
  if (this->health() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->health(), output);
  }

  // optional int64 Armor = 4;
  if (this->armor() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->armor(), output);
  }

  // @@protoc_insertion_point(serialize_end:com.paddlecreekgames.ExampleCharacter)
}

::google::protobuf::uint8* ExampleCharacter::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.paddlecreekgames.ExampleCharacter)
  // optional string Id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.paddlecreekgames.ExampleCharacter.Id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // optional string Name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.paddlecreekgames.ExampleCharacter.Name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional int64 Health = 3;
  if (this->health() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->health(), target);
  }

  // optional int64 Armor = 4;
  if (this->armor() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->armor(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:com.paddlecreekgames.ExampleCharacter)
  return target;
}

int ExampleCharacter::ByteSize() const {
  int total_size = 0;

  // optional string Id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // optional string Name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional int64 Health = 3;
  if (this->health() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->health());
  }

  // optional int64 Armor = 4;
  if (this->armor() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->armor());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExampleCharacter::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ExampleCharacter* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ExampleCharacter>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExampleCharacter::MergeFrom(const ExampleCharacter& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.health() != 0) {
    set_health(from.health());
  }
  if (from.armor() != 0) {
    set_armor(from.armor());
  }
}

void ExampleCharacter::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExampleCharacter::CopyFrom(const ExampleCharacter& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExampleCharacter::IsInitialized() const {

  return true;
}

void ExampleCharacter::Swap(ExampleCharacter* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExampleCharacter::InternalSwap(ExampleCharacter* other) {
  id_.Swap(&other->id_);
  name_.Swap(&other->name_);
  std::swap(health_, other->health_);
  std::swap(armor_, other->armor_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ExampleCharacter::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExampleCharacter_descriptor_;
  metadata.reflection = ExampleCharacter_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExampleCharacter

// optional string Id = 1;
void ExampleCharacter::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ExampleCharacter::id() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.ExampleCharacter.Id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExampleCharacter::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.ExampleCharacter.Id)
}
 void ExampleCharacter::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.paddlecreekgames.ExampleCharacter.Id)
}
 void ExampleCharacter::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.paddlecreekgames.ExampleCharacter.Id)
}
 ::std::string* ExampleCharacter::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.ExampleCharacter.Id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ExampleCharacter::release_id() {
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExampleCharacter::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.ExampleCharacter.Id)
}

// optional string Name = 2;
void ExampleCharacter::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ExampleCharacter::name() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.ExampleCharacter.Name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExampleCharacter::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.ExampleCharacter.Name)
}
 void ExampleCharacter::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.paddlecreekgames.ExampleCharacter.Name)
}
 void ExampleCharacter::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.paddlecreekgames.ExampleCharacter.Name)
}
 ::std::string* ExampleCharacter::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.ExampleCharacter.Name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ExampleCharacter::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExampleCharacter::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.ExampleCharacter.Name)
}

// optional int64 Health = 3;
void ExampleCharacter::clear_health() {
  health_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ExampleCharacter::health() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.ExampleCharacter.Health)
  return health_;
}
 void ExampleCharacter::set_health(::google::protobuf::int64 value) {
  
  health_ = value;
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.ExampleCharacter.Health)
}

// optional int64 Armor = 4;
void ExampleCharacter::clear_armor() {
  armor_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ExampleCharacter::armor() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.ExampleCharacter.Armor)
  return armor_;
}
 void ExampleCharacter::set_armor(::google::protobuf::int64 value) {
  
  armor_ = value;
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.ExampleCharacter.Armor)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace paddlecreekgames
}  // namespace com

// @@protoc_insertion_point(global_scope)

#if _MSC_VER >= 1300
#ifndef _PS3
#pragma warning( pop )
#endif // _PS3
#endif // _MSC_VER
#if _GNUC
#ifndef _PS3
#pragma GCC diagnostic pop
#endif // _PS3
#endif // _GNUC

