/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: t/test-proto3.proto */

#ifndef PROTOBUF_C_t_2ftest_2dproto3_2eproto__INCLUDED
#define PROTOBUF_C_t_2ftest_2dproto3_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Foo__Person Foo__Person;
typedef struct _Foo__Person__PhoneNumber Foo__Person__PhoneNumber;
typedef struct _Foo__Person__PhoneNumber__Comment Foo__Person__PhoneNumber__Comment;
typedef struct _Foo__LookupResult Foo__LookupResult;
typedef struct _Foo__Name Foo__Name;


/* --- enums --- */

typedef enum _Foo__Person__PhoneType {
  FOO__PERSON__PHONE_TYPE__MOBILE = 0,
  FOO__PERSON__PHONE_TYPE__HOME = 1,
  FOO__PERSON__PHONE_TYPE__WORK = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FOO__PERSON__PHONE_TYPE)
} Foo__Person__PhoneType;

/* --- messages --- */

struct  _Foo__Person__PhoneNumber__Comment
{
  ProtobufCMessage base;
  char *comment;
};
#define FOO__PERSON__PHONE_NUMBER__COMMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&foo__person__phone_number__comment__descriptor) \
    , (char *)protobuf_c_empty_string }


struct  _Foo__Person__PhoneNumber
{
  ProtobufCMessage base;
  char *number;
  Foo__Person__PhoneType type;
  Foo__Person__PhoneNumber__Comment *comment;
};
#define FOO__PERSON__PHONE_NUMBER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&foo__person__phone_number__descriptor) \
    , (char *)protobuf_c_empty_string, FOO__PERSON__PHONE_TYPE__MOBILE, NULL }


struct  _Foo__Person
{
  ProtobufCMessage base;
  char *name;
  int32_t id;
  char *email;
  size_t n_phone;
  Foo__Person__PhoneNumber **phone;
};
#define FOO__PERSON__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&foo__person__descriptor) \
    , (char *)protobuf_c_empty_string, 0, (char *)protobuf_c_empty_string, 0,NULL }


struct  _Foo__LookupResult
{
  ProtobufCMessage base;
  Foo__Person *person;
};
#define FOO__LOOKUP_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&foo__lookup_result__descriptor) \
    , NULL }


struct  _Foo__Name
{
  ProtobufCMessage base;
  char *name;
};
#define FOO__NAME__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&foo__name__descriptor) \
    , (char *)protobuf_c_empty_string }


/* Foo__Person__PhoneNumber__Comment methods */
void   foo__person__phone_number__comment__init
                     (Foo__Person__PhoneNumber__Comment         *message);
/* Foo__Person__PhoneNumber methods */
void   foo__person__phone_number__init
                     (Foo__Person__PhoneNumber         *message);
/* Foo__Person methods */
void   foo__person__init
                     (Foo__Person         *message);
size_t foo__person__get_packed_size
                     (const Foo__Person   *message);
size_t foo__person__pack
                     (const Foo__Person   *message,
                      uint8_t             *out);
size_t foo__person__pack_to_buffer
                     (const Foo__Person   *message,
                      ProtobufCBuffer     *buffer);
Foo__Person *
       foo__person__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   foo__person__free_unpacked
                     (Foo__Person *message,
                      ProtobufCAllocator *allocator);
/* Foo__LookupResult methods */
void   foo__lookup_result__init
                     (Foo__LookupResult         *message);
size_t foo__lookup_result__get_packed_size
                     (const Foo__LookupResult   *message);
size_t foo__lookup_result__pack
                     (const Foo__LookupResult   *message,
                      uint8_t             *out);
size_t foo__lookup_result__pack_to_buffer
                     (const Foo__LookupResult   *message,
                      ProtobufCBuffer     *buffer);
Foo__LookupResult *
       foo__lookup_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   foo__lookup_result__free_unpacked
                     (Foo__LookupResult *message,
                      ProtobufCAllocator *allocator);
/* Foo__Name methods */
void   foo__name__init
                     (Foo__Name         *message);
size_t foo__name__get_packed_size
                     (const Foo__Name   *message);
size_t foo__name__pack
                     (const Foo__Name   *message,
                      uint8_t             *out);
size_t foo__name__pack_to_buffer
                     (const Foo__Name   *message,
                      ProtobufCBuffer     *buffer);
Foo__Name *
       foo__name__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   foo__name__free_unpacked
                     (Foo__Name *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Foo__Person__PhoneNumber__Comment_Closure)
                 (const Foo__Person__PhoneNumber__Comment *message,
                  void *closure_data);
typedef void (*Foo__Person__PhoneNumber_Closure)
                 (const Foo__Person__PhoneNumber *message,
                  void *closure_data);
typedef void (*Foo__Person_Closure)
                 (const Foo__Person *message,
                  void *closure_data);
typedef void (*Foo__LookupResult_Closure)
                 (const Foo__LookupResult *message,
                  void *closure_data);
typedef void (*Foo__Name_Closure)
                 (const Foo__Name *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Foo__DirLookup_Service Foo__DirLookup_Service;
struct _Foo__DirLookup_Service
{
  ProtobufCService base;
  void (*by_name)(Foo__DirLookup_Service *service,
                  const Foo__Name *input,
                  Foo__LookupResult_Closure closure,
                  void *closure_data);
};
typedef void (*Foo__DirLookup_ServiceDestroy)(Foo__DirLookup_Service *);
void foo__dir_lookup__init (Foo__DirLookup_Service *service,
                            Foo__DirLookup_ServiceDestroy destroy);
#define FOO__DIR_LOOKUP__BASE_INIT \
    { &foo__dir_lookup__descriptor, protobuf_c_service_invoke_internal, NULL }
#define FOO__DIR_LOOKUP__INIT(function_prefix__) \
    { FOO__DIR_LOOKUP__BASE_INIT,\
      function_prefix__ ## by_name  }
void foo__dir_lookup__by_name(ProtobufCService *service,
                              const Foo__Name *input,
                              Foo__LookupResult_Closure closure,
                              void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor foo__person__descriptor;
extern const ProtobufCMessageDescriptor foo__person__phone_number__descriptor;
extern const ProtobufCMessageDescriptor foo__person__phone_number__comment__descriptor;
extern const ProtobufCEnumDescriptor    foo__person__phone_type__descriptor;
extern const ProtobufCMessageDescriptor foo__lookup_result__descriptor;
extern const ProtobufCMessageDescriptor foo__name__descriptor;
extern const ProtobufCServiceDescriptor foo__dir_lookup__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_t_2ftest_2dproto3_2eproto__INCLUDED */
