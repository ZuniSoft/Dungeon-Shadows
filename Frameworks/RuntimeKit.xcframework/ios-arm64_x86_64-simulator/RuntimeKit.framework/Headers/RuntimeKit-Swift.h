#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef RUNTIMEKIT_SWIFT_H
#define RUNTIMEKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#import <RuntimeKit/RuntimeKit.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RuntimeKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum AssetContentType : NSInteger;
@class AssetLibrary;

SWIFT_CLASS("_TtC10RuntimeKit12AssetContent")
@interface AssetContent : NSObject
@property (nonatomic) enum AssetContentType type;
- (nonnull instancetype)initWithLibrary:(AssetLibrary * _Nonnull)library OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithMedia:(NSString * _Nonnull)media OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) AssetLibrary * _Nullable library;
@property (nonatomic, copy) NSString * _Nullable media;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, AssetContentType, open) {
  AssetContentTypeLibrary = 0,
  AssetContentTypeMedia = 1,
};

@class NSOperationQueue;

SWIFT_CLASS("_TtC10RuntimeKit16DirectoryMonitor")
@interface DirectoryMonitor : NSObject <NSFilePresenter>
@property (nonatomic, copy) NSURL * _Nullable presentedItemURL;
@property (nonatomic, strong) NSOperationQueue * _Nonnull presentedItemOperationQueue;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates OBJC_DESIGNATED_INITIALIZER;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)updateUrlCache;
- (void)presentedSubitemAtURL:(NSURL * _Nonnull)oldURL didMoveToURL:(NSURL * _Nonnull)newURL;
- (void)presentedSubitemDidChangeAtURL:(NSURL * _Nonnull)url;
+ (NSURL * _Nonnull)standardizedDirectoryURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class AssetContentStorage;

SWIFT_CLASS("_TtC10RuntimeKit12AssetLibrary")
@interface AssetLibrary : DirectoryMonitor
@property (nonatomic, copy) void (^ _Nullable cacheInvalidated)(void);
@property (nonatomic, readonly, copy) NSString * _Nonnull libraryName;
@property (nonatomic, readonly, strong) AssetContentStorage * _Nonnull contents;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
+ (NSString * _Nullable)safeNameWithFileName:(NSString * _Nonnull)fileName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates SWIFT_UNAVAILABLE;
@end


@interface AssetManager (SWIFT_EXTENSION(RuntimeKit))
- (void)addShaderBundleAssetPackWithUrl:(NSURL * _Nonnull)url;
@end


SWIFT_CLASS("_TtC10RuntimeKit12AudioManager")
@interface AudioManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AudioManager * _Nonnull shared;)
+ (AudioManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic, readonly) double micAmplitude;
@property (nonatomic, readonly) double micFrequency;
- (void)startMicTracker;
- (void)stopMicTracker;
@end


@class ProjectCollection;

SWIFT_PROTOCOL("_TtP10RuntimeKit25ProjectCollectionDelegate_")
@protocol ProjectCollectionDelegate <NSObject>
- (void)projectCollection:(ProjectCollection * _Nonnull)collection removedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection insertedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection modifiedProjectAtIndex:(NSInteger)index;
- (void)reloadProjectCollection:(ProjectCollection * _Nonnull)collection;
@end

@protocol ProjectCollectionRepositoryDelegate;
@class Project;

/// Monitors a local directory on the file system and creates
/// project collections for each subdirectory
/// This also creates a project collection representing the top-
/// level directory
SWIFT_CLASS("_TtC10RuntimeKit22LocalProjectRepository")
@interface LocalProjectRepository : DirectoryMonitor <ProjectCollectionDelegate>
@property (nonatomic, weak) id <ProjectCollectionRepositoryDelegate> _Nullable delegate;
@property (nonatomic, readonly, copy) NSArray<ProjectCollection *> * _Nonnull collections;
- (BOOL)isCollectionVisibleAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)setCollectionVisibleAtIndex:(NSInteger)index visible:(BOOL)visible;
- (NSString * _Nullable)localizedNameAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)applyLocalizationKeys:(NSDictionary<NSString *, NSString *> * _Nonnull)localizationKeys;
- (BOOL)createCollectionWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection removedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection insertedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection modifiedProjectAtIndex:(NSInteger)index;
- (void)reloadProjectCollection:(ProjectCollection * _Nonnull)collection;
- (NSIndexPath * _Nullable)indexPathFor:(Project * _Nonnull)project SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates OBJC_DESIGNATED_INITIALIZER;
@end

@class OSCMessage;

SWIFT_CLASS("_TtC10RuntimeKit10OSCManager")
@interface OSCManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) OSCManager * _Nonnull shared;)
+ (OSCManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nonnull host;
@property (nonatomic) NSInteger port;
@property (nonatomic, copy) void (^ _Nonnull messageHandler)(OSCMessage * _Nonnull);
- (void)startServerWithPort:(NSInteger)port completion:(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)stopServer;
- (void)sendMessage:(NSString * _Nonnull)address contents:(NSArray * _Nonnull)contents;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ProjectManager;

@interface Project (SWIFT_EXTENSION(RuntimeKit))
- (void)fixDependencies:(ProjectManager * _Nonnull)projectManager;
@end


@interface Project (SWIFT_EXTENSION(RuntimeKit))
- (NSArray<Project *> * _Nonnull)dependentProjectsWithProjectManager:(ProjectManager * _Nonnull)projectManager SWIFT_WARN_UNUSED_RESULT;
@end

@class NSFileWrapper;
enum ProjectCollectionSorting : NSInteger;

/// Monitors a directory on the system and maintains a list
/// of Codea projects in that directory
SWIFT_CLASS("_TtC10RuntimeKit17ProjectCollection")
@interface ProjectCollection : DirectoryMonitor
/// The delegate will get callbacks relating to project
/// deletion, insertion and modification
/// Setting a delegate suppresses notifications through
/// NotificationCenter
@property (nonatomic, weak) id <ProjectCollectionDelegate> _Nullable delegate;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (BOOL)renameProject:(Project * _Nonnull)project name:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (BOOL)createProjectWithFileWrapper:(NSFileWrapper * _Nonnull)wrapper named:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (BOOL)deleteProject:(Project * _Nonnull)project SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasProject:(Project * _Nonnull)project SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasProjectWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (Project * _Nullable)projectWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSInteger count;
@property (nonatomic) enum ProjectCollectionSorting sortOrder;
@property (nonatomic, readonly, copy) NSArray<Project *> * _Nonnull sortedProjects;
@end



SWIFT_PROTOCOL("_TtP10RuntimeKit35ProjectCollectionRepositoryDelegate_")
@protocol ProjectCollectionRepositoryDelegate
- (void)repository:(LocalProjectRepository * _Nonnull)repository didInsertProjectAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didRemoveProjectAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didModifyProjectAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didInsertCollectionAtIndex:(NSInteger)index;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didRemoveCollectionAtIndex:(NSInteger)index;
- (void)repository:(LocalProjectRepository * _Nonnull)repository reloadedCollectionAtIndex:(NSInteger)index;
- (void)repositoryDidReload:(LocalProjectRepository * _Nonnull)repository;
@end

typedef SWIFT_ENUM(NSInteger, ProjectCollectionSorting, open) {
  ProjectCollectionSortingDate = 0,
  ProjectCollectionSortingName = 1,
  ProjectCollectionSortingOrdered = 2,
};


@interface ProjectManager (SWIFT_EXTENSION(RuntimeKit))
- (NSSet<Project *> * _Nonnull)allDependentProjectsForProject:(Project * _Nonnull)project shouldFix:(BOOL)fix SWIFT_WARN_UNUSED_RESULT;
- (NSSet<Project *> * _Nonnull)allDependentProjectsForProject:(Project * _Nonnull)project shouldFix:(BOOL)fix dependencies:(NSSet<Project *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@end

@class UIFont;

SWIFT_CLASS("_TtC10RuntimeKit12RuntimeStyle")
@interface RuntimeStyle : NSObject
+ (UIFont * _Nonnull)codeFontWithSize:(CGFloat)size weight:(UIFontWeight)weight SWIFT_WARN_UNUSED_RESULT;
+ (UIFont * _Nonnull)defaultFontWithSize:(CGFloat)size weight:(UIFontWeight)weight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull sidebarTitleFont;)
+ (UIFont * _Nonnull)sidebarTitleFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterTitleFont;)
+ (UIFont * _Nonnull)parameterTitleFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterValueFont;)
+ (UIFont * _Nonnull)parameterValueFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterActionFont;)
+ (UIFont * _Nonnull)parameterActionFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterTextFont;)
+ (UIFont * _Nonnull)parameterTextFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull capturePanelTitleFont;)
+ (UIFont * _Nonnull)capturePanelTitleFont SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef RUNTIMEKIT_SWIFT_H
#define RUNTIMEKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#import <RuntimeKit/RuntimeKit.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RuntimeKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum AssetContentType : NSInteger;
@class AssetLibrary;

SWIFT_CLASS("_TtC10RuntimeKit12AssetContent")
@interface AssetContent : NSObject
@property (nonatomic) enum AssetContentType type;
- (nonnull instancetype)initWithLibrary:(AssetLibrary * _Nonnull)library OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithMedia:(NSString * _Nonnull)media OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) AssetLibrary * _Nullable library;
@property (nonatomic, copy) NSString * _Nullable media;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, AssetContentType, open) {
  AssetContentTypeLibrary = 0,
  AssetContentTypeMedia = 1,
};

@class NSOperationQueue;

SWIFT_CLASS("_TtC10RuntimeKit16DirectoryMonitor")
@interface DirectoryMonitor : NSObject <NSFilePresenter>
@property (nonatomic, copy) NSURL * _Nullable presentedItemURL;
@property (nonatomic, strong) NSOperationQueue * _Nonnull presentedItemOperationQueue;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates OBJC_DESIGNATED_INITIALIZER;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)updateUrlCache;
- (void)presentedSubitemAtURL:(NSURL * _Nonnull)oldURL didMoveToURL:(NSURL * _Nonnull)newURL;
- (void)presentedSubitemDidChangeAtURL:(NSURL * _Nonnull)url;
+ (NSURL * _Nonnull)standardizedDirectoryURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class AssetContentStorage;

SWIFT_CLASS("_TtC10RuntimeKit12AssetLibrary")
@interface AssetLibrary : DirectoryMonitor
@property (nonatomic, copy) void (^ _Nullable cacheInvalidated)(void);
@property (nonatomic, readonly, copy) NSString * _Nonnull libraryName;
@property (nonatomic, readonly, strong) AssetContentStorage * _Nonnull contents;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
+ (NSString * _Nullable)safeNameWithFileName:(NSString * _Nonnull)fileName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates SWIFT_UNAVAILABLE;
@end


@interface AssetManager (SWIFT_EXTENSION(RuntimeKit))
- (void)addShaderBundleAssetPackWithUrl:(NSURL * _Nonnull)url;
@end


SWIFT_CLASS("_TtC10RuntimeKit12AudioManager")
@interface AudioManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AudioManager * _Nonnull shared;)
+ (AudioManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic, readonly) double micAmplitude;
@property (nonatomic, readonly) double micFrequency;
- (void)startMicTracker;
- (void)stopMicTracker;
@end


@class ProjectCollection;

SWIFT_PROTOCOL("_TtP10RuntimeKit25ProjectCollectionDelegate_")
@protocol ProjectCollectionDelegate <NSObject>
- (void)projectCollection:(ProjectCollection * _Nonnull)collection removedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection insertedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection modifiedProjectAtIndex:(NSInteger)index;
- (void)reloadProjectCollection:(ProjectCollection * _Nonnull)collection;
@end

@protocol ProjectCollectionRepositoryDelegate;
@class Project;

/// Monitors a local directory on the file system and creates
/// project collections for each subdirectory
/// This also creates a project collection representing the top-
/// level directory
SWIFT_CLASS("_TtC10RuntimeKit22LocalProjectRepository")
@interface LocalProjectRepository : DirectoryMonitor <ProjectCollectionDelegate>
@property (nonatomic, weak) id <ProjectCollectionRepositoryDelegate> _Nullable delegate;
@property (nonatomic, readonly, copy) NSArray<ProjectCollection *> * _Nonnull collections;
- (BOOL)isCollectionVisibleAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)setCollectionVisibleAtIndex:(NSInteger)index visible:(BOOL)visible;
- (NSString * _Nullable)localizedNameAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)applyLocalizationKeys:(NSDictionary<NSString *, NSString *> * _Nonnull)localizationKeys;
- (BOOL)createCollectionWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection removedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection insertedProjectAtIndex:(NSInteger)index;
- (void)projectCollection:(ProjectCollection * _Nonnull)collection modifiedProjectAtIndex:(NSInteger)index;
- (void)reloadProjectCollection:(ProjectCollection * _Nonnull)collection;
- (NSIndexPath * _Nullable)indexPathFor:(Project * _Nonnull)project SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates OBJC_DESIGNATED_INITIALIZER;
@end

@class OSCMessage;

SWIFT_CLASS("_TtC10RuntimeKit10OSCManager")
@interface OSCManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) OSCManager * _Nonnull shared;)
+ (OSCManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nonnull host;
@property (nonatomic) NSInteger port;
@property (nonatomic, copy) void (^ _Nonnull messageHandler)(OSCMessage * _Nonnull);
- (void)startServerWithPort:(NSInteger)port completion:(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)stopServer;
- (void)sendMessage:(NSString * _Nonnull)address contents:(NSArray * _Nonnull)contents;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ProjectManager;

@interface Project (SWIFT_EXTENSION(RuntimeKit))
- (void)fixDependencies:(ProjectManager * _Nonnull)projectManager;
@end


@interface Project (SWIFT_EXTENSION(RuntimeKit))
- (NSArray<Project *> * _Nonnull)dependentProjectsWithProjectManager:(ProjectManager * _Nonnull)projectManager SWIFT_WARN_UNUSED_RESULT;
@end

@class NSFileWrapper;
enum ProjectCollectionSorting : NSInteger;

/// Monitors a directory on the system and maintains a list
/// of Codea projects in that directory
SWIFT_CLASS("_TtC10RuntimeKit17ProjectCollection")
@interface ProjectCollection : DirectoryMonitor
/// The delegate will get callbacks relating to project
/// deletion, insertion and modification
/// Setting a delegate suppresses notifications through
/// NotificationCenter
@property (nonatomic, weak) id <ProjectCollectionDelegate> _Nullable delegate;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url monitorForUpdates:(BOOL)monitorForUpdates OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (BOOL)renameProject:(Project * _Nonnull)project name:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (BOOL)createProjectWithFileWrapper:(NSFileWrapper * _Nonnull)wrapper named:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (BOOL)deleteProject:(Project * _Nonnull)project SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasProject:(Project * _Nonnull)project SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasProjectWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (Project * _Nullable)projectWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSInteger count;
@property (nonatomic) enum ProjectCollectionSorting sortOrder;
@property (nonatomic, readonly, copy) NSArray<Project *> * _Nonnull sortedProjects;
@end



SWIFT_PROTOCOL("_TtP10RuntimeKit35ProjectCollectionRepositoryDelegate_")
@protocol ProjectCollectionRepositoryDelegate
- (void)repository:(LocalProjectRepository * _Nonnull)repository didInsertProjectAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didRemoveProjectAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didModifyProjectAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didInsertCollectionAtIndex:(NSInteger)index;
- (void)repository:(LocalProjectRepository * _Nonnull)repository didRemoveCollectionAtIndex:(NSInteger)index;
- (void)repository:(LocalProjectRepository * _Nonnull)repository reloadedCollectionAtIndex:(NSInteger)index;
- (void)repositoryDidReload:(LocalProjectRepository * _Nonnull)repository;
@end

typedef SWIFT_ENUM(NSInteger, ProjectCollectionSorting, open) {
  ProjectCollectionSortingDate = 0,
  ProjectCollectionSortingName = 1,
  ProjectCollectionSortingOrdered = 2,
};


@interface ProjectManager (SWIFT_EXTENSION(RuntimeKit))
- (NSSet<Project *> * _Nonnull)allDependentProjectsForProject:(Project * _Nonnull)project shouldFix:(BOOL)fix SWIFT_WARN_UNUSED_RESULT;
- (NSSet<Project *> * _Nonnull)allDependentProjectsForProject:(Project * _Nonnull)project shouldFix:(BOOL)fix dependencies:(NSSet<Project *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@end

@class UIFont;

SWIFT_CLASS("_TtC10RuntimeKit12RuntimeStyle")
@interface RuntimeStyle : NSObject
+ (UIFont * _Nonnull)codeFontWithSize:(CGFloat)size weight:(UIFontWeight)weight SWIFT_WARN_UNUSED_RESULT;
+ (UIFont * _Nonnull)defaultFontWithSize:(CGFloat)size weight:(UIFontWeight)weight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull sidebarTitleFont;)
+ (UIFont * _Nonnull)sidebarTitleFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterTitleFont;)
+ (UIFont * _Nonnull)parameterTitleFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterValueFont;)
+ (UIFont * _Nonnull)parameterValueFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterActionFont;)
+ (UIFont * _Nonnull)parameterActionFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull parameterTextFont;)
+ (UIFont * _Nonnull)parameterTextFont SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIFont * _Nonnull capturePanelTitleFont;)
+ (UIFont * _Nonnull)capturePanelTitleFont SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
