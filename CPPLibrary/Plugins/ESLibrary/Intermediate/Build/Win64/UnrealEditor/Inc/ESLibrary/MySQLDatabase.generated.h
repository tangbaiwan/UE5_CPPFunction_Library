// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMySQLConnection;
struct FMySQLConnectoreQueryResult;
class APlayerController;
struct FMySQLConnectorTableField;
struct FMySQLConnectorTable;
#ifdef ESLIBRARY_MySQLDatabase_generated_h
#error "MySQLDatabase.generated.h already included, missing '#pragma once' in MySQLDatabase.h"
#endif
#define ESLIBRARY_MySQLDatabase_generated_h

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FMySQLConnectorKeyValuePair>();

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FMySQLConnectorQueryResultRow>();

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FMySQLConnectoreQueryResult>();

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_SPARSE_DATA
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetData); \
	DECLARE_FUNCTION(execMySQLConnectorGetPlayerControllerIP); \
	DECLARE_FUNCTION(execMySQLConnectorInsertTest); \
	DECLARE_FUNCTION(execMySQLConnectorVARCHAR); \
	DECLARE_FUNCTION(execMySQLConnectorINT); \
	DECLARE_FUNCTION(execCreateTable); \
	DECLARE_FUNCTION(execTruncateTable); \
	DECLARE_FUNCTION(execDropTable); \
	DECLARE_FUNCTION(execMySQLConnectorExecuteQuery); \
	DECLARE_FUNCTION(execMySQLInitConnection);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetData); \
	DECLARE_FUNCTION(execMySQLConnectorGetPlayerControllerIP); \
	DECLARE_FUNCTION(execMySQLConnectorInsertTest); \
	DECLARE_FUNCTION(execMySQLConnectorVARCHAR); \
	DECLARE_FUNCTION(execMySQLConnectorINT); \
	DECLARE_FUNCTION(execCreateTable); \
	DECLARE_FUNCTION(execTruncateTable); \
	DECLARE_FUNCTION(execDropTable); \
	DECLARE_FUNCTION(execMySQLConnectorExecuteQuery); \
	DECLARE_FUNCTION(execMySQLInitConnection);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySQLDatabase(); \
	friend struct Z_Construct_UClass_UMySQLDatabase_Statics; \
public: \
	DECLARE_CLASS(UMySQLDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMySQLDatabase)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUMySQLDatabase(); \
	friend struct Z_Construct_UClass_UMySQLDatabase_Statics; \
public: \
	DECLARE_CLASS(UMySQLDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMySQLDatabase)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLDatabase(UMySQLDatabase&&); \
	NO_API UMySQLDatabase(const UMySQLDatabase&); \
public:


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLDatabase(UMySQLDatabase&&); \
	NO_API UMySQLDatabase(const UMySQLDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLDatabase)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_109_PROLOG
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_INCLASS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_112_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MySQLDatabase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UMySQLDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
