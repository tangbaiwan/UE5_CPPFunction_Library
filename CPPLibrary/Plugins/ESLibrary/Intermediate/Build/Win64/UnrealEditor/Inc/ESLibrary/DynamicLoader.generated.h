// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef ESLIBRARY_DynamicLoader_generated_h
#error "DynamicLoader.generated.h already included, missing '#pragma once' in DynamicLoader.h"
#endif
#define ESLIBRARY_DynamicLoader_generated_h

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_39_DELEGATE \
struct ImageLoader_eventOnImageLoadCompleted_Parms \
{ \
	UTexture2D* Texture; \
}; \
static inline void FOnImageLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnImageLoadCompleted, UTexture2D* Texture) \
{ \
	ImageLoader_eventOnImageLoadCompleted_Parms Parms; \
	Parms.Texture=Texture; \
	OnImageLoadCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_SPARSE_DATA
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadImageFromDisk);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadImageFromDisk);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageLoader(); \
	friend struct Z_Construct_UClass_UImageLoader_Statics; \
public: \
	DECLARE_CLASS(UImageLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UImageLoader)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUImageLoader(); \
	friend struct Z_Construct_UClass_UImageLoader_Statics; \
public: \
	DECLARE_CLASS(UImageLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UImageLoader)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageLoader(UImageLoader&&); \
	NO_API UImageLoader(const UImageLoader&); \
public:


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageLoader(UImageLoader&&); \
	NO_API UImageLoader(const UImageLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageLoader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageLoader)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_19_PROLOG
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_RPC_WRAPPERS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_INCLASS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_INCLASS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UImageLoader>();

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_87_DELEGATE \
struct ExeActor_eventOnProcShutdown_Parms \
{ \
	bool IsOver; \
}; \
static inline void FOnProcShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnProcShutdown, bool IsOver) \
{ \
	ExeActor_eventOnProcShutdown_Parms Parms; \
	Parms.IsOver=IsOver ? true : false; \
	OnProcShutdown.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_SPARSE_DATA
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetstat);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetstat);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExeActor(); \
	friend struct Z_Construct_UClass_AExeActor_Statics; \
public: \
	DECLARE_CLASS(AExeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(AExeActor)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_INCLASS \
private: \
	static void StaticRegisterNativesAExeActor(); \
	friend struct Z_Construct_UClass_AExeActor_Statics; \
public: \
	DECLARE_CLASS(AExeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(AExeActor)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExeActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExeActor(AExeActor&&); \
	NO_API AExeActor(const AExeActor&); \
public:


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExeActor(AExeActor&&); \
	NO_API AExeActor(const AExeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExeActor)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_67_PROLOG
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_RPC_WRAPPERS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_INCLASS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_INCLASS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class AExeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
