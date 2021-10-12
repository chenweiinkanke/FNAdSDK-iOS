// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/wrappers.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(UbiX_GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define UbiX_GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if UbiX_GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/UbiXGPBDescriptor.h>
 #import <Protobuf/UbiXGPBMessage.h>
 #import <Protobuf/UbiXGPBRootObject.h>
#else
 #import "UbiXGPBDescriptor.h"
 #import "UbiXGPBMessage.h"
 #import "UbiXGPBRootObject.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - UbiXGPBWrappersRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (UbiXGPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c UbiXGPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
UbiX_GPB_FINAL @interface UbiXGPBWrappersRoot : UbiXGPBRootObject
@end

#pragma mark - UbiXGPBDoubleValue

typedef UbiX_GPB_ENUM(UbiXGPBDoubleValue_FieldNumber) {
  UbiXGPBDoubleValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `double`.
 *
 * The JSON representation for `DoubleValue` is JSON number.
 **/
UbiX_GPB_FINAL @interface UbiXGPBDoubleValue : UbiXGPBMessage

/** The double value. */
@property(nonatomic, readwrite) double value;

@end

#pragma mark - UbiXGPBFloatValue

typedef UbiX_GPB_ENUM(UbiXGPBFloatValue_FieldNumber) {
  UbiXGPBFloatValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `float`.
 *
 * The JSON representation for `FloatValue` is JSON number.
 **/
UbiX_GPB_FINAL @interface UbiXGPBFloatValue : UbiXGPBMessage

/** The float value. */
@property(nonatomic, readwrite) float value;

@end

#pragma mark - UbiXGPBInt64Value

typedef UbiX_GPB_ENUM(UbiXGPBInt64Value_FieldNumber) {
  UbiXGPBInt64Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `int64`.
 *
 * The JSON representation for `Int64Value` is JSON string.
 **/
UbiX_GPB_FINAL @interface UbiXGPBInt64Value : UbiXGPBMessage

/** The int64 value. */
@property(nonatomic, readwrite) int64_t value;

@end

#pragma mark - UbiXGPBUInt64Value

typedef UbiX_GPB_ENUM(UbiXGPBUInt64Value_FieldNumber) {
  UbiXGPBUInt64Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `uint64`.
 *
 * The JSON representation for `UInt64Value` is JSON string.
 **/
UbiX_GPB_FINAL @interface UbiXGPBUInt64Value : UbiXGPBMessage

/** The uint64 value. */
@property(nonatomic, readwrite) uint64_t value;

@end

#pragma mark - UbiXGPBInt32Value

typedef UbiX_GPB_ENUM(UbiXGPBInt32Value_FieldNumber) {
  UbiXGPBInt32Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `int32`.
 *
 * The JSON representation for `Int32Value` is JSON number.
 **/
UbiX_GPB_FINAL @interface UbiXGPBInt32Value : UbiXGPBMessage

/** The int32 value. */
@property(nonatomic, readwrite) int32_t value;

@end

#pragma mark - UbiXGPBUInt32Value

typedef UbiX_GPB_ENUM(UbiXGPBUInt32Value_FieldNumber) {
  UbiXGPBUInt32Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `uint32`.
 *
 * The JSON representation for `UInt32Value` is JSON number.
 **/
UbiX_GPB_FINAL @interface UbiXGPBUInt32Value : UbiXGPBMessage

/** The uint32 value. */
@property(nonatomic, readwrite) uint32_t value;

@end

#pragma mark - UbiXGPBBoolValue

typedef UbiX_GPB_ENUM(UbiXGPBBoolValue_FieldNumber) {
  UbiXGPBBoolValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `bool`.
 *
 * The JSON representation for `BoolValue` is JSON `true` and `false`.
 **/
UbiX_GPB_FINAL @interface UbiXGPBBoolValue : UbiXGPBMessage

/** The bool value. */
@property(nonatomic, readwrite) BOOL value;

@end

#pragma mark - UbiXGPBStringValue

typedef UbiX_GPB_ENUM(UbiXGPBStringValue_FieldNumber) {
  UbiXGPBStringValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `string`.
 *
 * The JSON representation for `StringValue` is JSON string.
 **/
UbiX_GPB_FINAL @interface UbiXGPBStringValue : UbiXGPBMessage

/** The string value. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@end

#pragma mark - UbiXGPBBytesValue

typedef UbiX_GPB_ENUM(UbiXGPBBytesValue_FieldNumber) {
  UbiXGPBBytesValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `bytes`.
 *
 * The JSON representation for `BytesValue` is JSON string.
 **/
UbiX_GPB_FINAL @interface UbiXGPBBytesValue : UbiXGPBMessage

/** The bytes value. */
@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)