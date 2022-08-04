// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/MySQLDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLDatabase() {}
// Cross Module References
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult();
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLDatabase_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTableField();
	ESLIBRARY_API UClass* Z_Construct_UClass_UMySQLConnection_NoRegister();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTable();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair;
class UScriptStruct* FMySQLConnectorKeyValuePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorKeyValuePair"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair.OuterSingleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorKeyValuePair>()
{
	return FMySQLConnectorKeyValuePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorKeyValuePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "ES|MySQLConnector Key Value Pair" },
		{ "Comment", "/** The database table field name */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "The database table field name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorKeyValuePair, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ES|MySQLConnector Key Value Pair" },
		{ "Comment", "/** The value of the field */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "The value of the field" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorKeyValuePair, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorKeyValuePair",
		sizeof(FMySQLConnectorKeyValuePair),
		alignof(FMySQLConnectorKeyValuePair),
		Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair.InnerSingleton, Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow;
class UScriptStruct* FMySQLConnectorQueryResultRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorQueryResultRow"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow.OuterSingleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorQueryResultRow>()
{
	return FMySQLConnectorQueryResultRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorQueryResultRow>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair, METADATA_PARAMS(nullptr, 0) }; // 218504069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** A list of field name, field value pairs */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "A list of field name, field value pairs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorQueryResultRow, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_MetaData)) }; // 218504069
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewProp_Fields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorQueryResultRow",
		sizeof(FMySQLConnectorQueryResultRow),
		alignof(FMySQLConnectorQueryResultRow),
		Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow.InnerSingleton, Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult;
class UScriptStruct* FMySQLConnectoreQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectoreQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult.OuterSingleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectoreQueryResult>()
{
	return FMySQLConnectoreQueryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultRows_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultRows_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectoreQueryResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_Inner = { "ResultRows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow, METADATA_PARAMS(nullptr, 0) }; // 657997431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** The resulting rows from the query */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "The resulting rows from the query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows = { "ResultRows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectoreQueryResult, ResultRows), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_MetaData)) }; // 657997431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** Was the query successful or not */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Was the query successful or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FMySQLConnectoreQueryResult*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMySQLConnectoreQueryResult), &Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "ES|MySQLConnector Query Result" },
		{ "Comment", "/** If the query was unsuccessful a human readable error message will be populated here */" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "If the query was unsuccessful a human readable error message will be populated here" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectoreQueryResult, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ResultRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewProp_ErrorMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectoreQueryResult",
		sizeof(FMySQLConnectoreQueryResult),
		alignof(FMySQLConnectoreQueryResult),
		Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execMySQLConnectorGetData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMySQLConnectoreQueryResult*)Z_Param__Result=UMySQLDatabase::MySQLConnectorGetData(Z_Param_Query,Z_Param_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execMySQLConnectorGetPlayerControllerIP)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IP_int);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorGetPlayerControllerIP(Z_Param_Out_IP,Z_Param_Out_IP_int,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execMySQLConnectorInsertTest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorInsertTest(Z_Param_Query,Z_Param_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execMySQLConnectorVARCHAR)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldLength);
		P_GET_UBOOL(Z_Param_PK);
		P_GET_UBOOL(Z_Param_Unique);
		P_GET_UBOOL(Z_Param_NotNull);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMySQLConnectorTableField*)Z_Param__Result=UMySQLDatabase::MySQLConnectorVARCHAR(Z_Param_FieldName,Z_Param_FieldLength,Z_Param_PK,Z_Param_Unique,Z_Param_NotNull);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execMySQLConnectorINT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_PK);
		P_GET_UBOOL(Z_Param_AI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMySQLConnectorTableField*)Z_Param__Result=UMySQLDatabase::MySQLConnectorINT(Z_Param_FieldName,Z_Param_PK,Z_Param_AI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execCreateTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_TARRAY(FMySQLConnectorTableField,Z_Param_Fields);
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMySQLConnectorTable*)Z_Param__Result=UMySQLDatabase::CreateTable(Z_Param_TableName,Z_Param_Fields,Z_Param_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execTruncateTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySQLDatabase::TruncateTable(Z_Param_TableName,Z_Param_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execDropTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySQLDatabase::DropTable(Z_Param_TableName,Z_Param_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execMySQLConnectorExecuteQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_OBJECT(UMySQLConnection,Z_Param_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySQLDatabase::MySQLConnectorExecuteQuery(Z_Param_Query,Z_Param_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySQLDatabase::execMySQLInitConnection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Host);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserPassword);
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMySQLConnection**)Z_Param__Result=UMySQLDatabase::MySQLInitConnection(Z_Param_Host,Z_Param_UserName,Z_Param_UserPassword,Z_Param_DatabaseName);
		P_NATIVE_END;
	}
	void UMySQLDatabase::StaticRegisterNativesUMySQLDatabase()
	{
		UClass* Class = UMySQLDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTable", &UMySQLDatabase::execCreateTable },
			{ "DropTable", &UMySQLDatabase::execDropTable },
			{ "MySQLConnectorExecuteQuery", &UMySQLDatabase::execMySQLConnectorExecuteQuery },
			{ "MySQLConnectorGetData", &UMySQLDatabase::execMySQLConnectorGetData },
			{ "MySQLConnectorGetPlayerControllerIP", &UMySQLDatabase::execMySQLConnectorGetPlayerControllerIP },
			{ "MySQLConnectorInsertTest", &UMySQLDatabase::execMySQLConnectorInsertTest },
			{ "MySQLConnectorINT", &UMySQLDatabase::execMySQLConnectorINT },
			{ "MySQLConnectorVARCHAR", &UMySQLDatabase::execMySQLConnectorVARCHAR },
			{ "MySQLInitConnection", &UMySQLDatabase::execMySQLInitConnection },
			{ "TruncateTable", &UMySQLDatabase::execTruncateTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics
	{
		struct MySQLDatabase_eventCreateTable_Parms
		{
			FString TableName;
			TArray<FMySQLConnectorTableField> Fields;
			UMySQLConnection* Connection;
			FMySQLConnectorTable ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) }; // 1000898953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_MetaData)) }; // 1000898953
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventCreateTable_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectorTable, METADATA_PARAMS(nullptr, 0) }; // 1088804212
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Fields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Create table in the database. */" },
		{ "DisplayName", "Create Table" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Create table in the database." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "CreateTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::MySQLDatabase_eventCreateTable_Parms), Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_CreateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_CreateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics
	{
		struct MySQLDatabase_eventDropTable_Parms
		{
			FString TableName;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventDropTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventDropTable_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventDropTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventDropTable_Parms), &Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Drop Table*/" },
		{ "DisplayName", "Drop Table" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Drop Table" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "DropTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::MySQLDatabase_eventDropTable_Parms), Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_DropTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_DropTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms
		{
			FString Query;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorExecuteQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::MySQLDatabase_eventMySQLConnectorExecuteQuery_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorGetData_Parms
		{
			FString Query;
			UMySQLConnection* Connection;
			FMySQLConnectoreQueryResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetData_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetData_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult, METADATA_PARAMS(nullptr, 0) }; // 963271818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Get data from the database using a select statement and return the rows. */" },
		{ "DisplayName", "Get Data From Table(s) (manual query)" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Get data from the database using a select statement and return the rows." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorGetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::MySQLDatabase_eventMySQLConnectorGetData_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms
		{
			FString IP;
			int32 IP_int;
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IP_int;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP_int = { "IP_int", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms, IP_int), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_IP_int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Connection" },
		{ "Comment", "/** returns the address or empty String on error, returns address as Integer or -1 on error */" },
		{ "DisplayName", "Get Controller IP-Address" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "returns the address or empty String on error, returns address as Integer or -1 on error" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorGetPlayerControllerIP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::MySQLDatabase_eventMySQLConnectorGetPlayerControllerIP_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorInsertTest_Parms
		{
			FString Query;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorInsertTest_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorInsertTest_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorInsertTest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorInsertTest_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "DisplayName", "InsertTest" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorInsertTest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::MySQLDatabase_eventMySQLConnectorInsertTest_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorINT_Parms
		{
			FString FieldName;
			bool PK;
			bool AI;
			FMySQLConnectorTableField ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AI_MetaData[];
#endif
		static void NewProp_AI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AI;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorINT_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorINT_Parms*)Obj)->PK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorINT_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorINT_Parms*)Obj)->AI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorINT_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorINT_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) }; // 1000898953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_PK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_AI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query|DataTypes" },
		{ "DisplayName", "INT (MySQLConnector)" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorINT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::MySQLDatabase_eventMySQLConnectorINT_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics
	{
		struct MySQLDatabase_eventMySQLConnectorVARCHAR_Parms
		{
			FString FieldName;
			FString FieldLength;
			bool PK;
			bool Unique;
			bool NotNull;
			FMySQLConnectorTableField ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldLength_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unique_MetaData[];
#endif
		static void NewProp_Unique_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Unique;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotNull_MetaData[];
#endif
		static void NewProp_NotNull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NotNull;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength = { "FieldLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms, FieldLength), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorVARCHAR_Parms*)Obj)->PK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorVARCHAR_Parms*)Obj)->Unique = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique = { "Unique", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_SetBit(void* Obj)
	{
		((MySQLDatabase_eventMySQLConnectorVARCHAR_Parms*)Obj)->NotNull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull = { "NotNull", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLConnectorVARCHAR_Parms, ReturnValue), Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) }; // 1000898953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_FieldLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_PK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_Unique,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_NotNull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query|DataTypes" },
		{ "DisplayName", "VARCHAR (MySQLConnector)" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLConnectorVARCHAR", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::MySQLDatabase_eventMySQLConnectorVARCHAR_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics
	{
		struct MySQLDatabase_eventMySQLInitConnection_Parms
		{
			FString Host;
			FString UserName;
			FString UserPassword;
			FString DatabaseName;
			UMySQLConnection* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserPassword;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, Host), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserPassword = { "UserPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, UserPassword), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, DatabaseName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventMySQLInitConnection_Parms, ReturnValue), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_UserPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_DatabaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "MySQLInitConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::MySQLDatabase_eventMySQLInitConnection_Parms), Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics
	{
		struct MySQLDatabase_eventTruncateTable_Parms
		{
			FString TableName;
			UMySQLConnection* Connection;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventTruncateTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySQLDatabase_eventTruncateTable_Parms, Connection), Z_Construct_UClass_UMySQLConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDatabase_eventTruncateTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MySQLDatabase_eventTruncateTable_Parms), &Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|MySQLConnector|Query" },
		{ "Comment", "/** Truncate Table*/" },
		{ "DisplayName", "Truncate Table" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "Truncate Table" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLDatabase, nullptr, "TruncateTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::MySQLDatabase_eventTruncateTable_Parms), Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySQLDatabase_TruncateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLDatabase_TruncateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySQLDatabase);
	UClass* Z_Construct_UClass_UMySQLDatabase_NoRegister()
	{
		return UMySQLDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UMySQLDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySQLDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySQLDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySQLDatabase_CreateTable, "CreateTable" }, // 1931606599
		{ &Z_Construct_UFunction_UMySQLDatabase_DropTable, "DropTable" }, // 1913442913
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorExecuteQuery, "MySQLConnectorExecuteQuery" }, // 3816018036
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetData, "MySQLConnectorGetData" }, // 1419548124
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorGetPlayerControllerIP, "MySQLConnectorGetPlayerControllerIP" }, // 2781551201
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorInsertTest, "MySQLConnectorInsertTest" }, // 4040128434
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorINT, "MySQLConnectorINT" }, // 1205620570
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLConnectorVARCHAR, "MySQLConnectorVARCHAR" }, // 3674284867
		{ &Z_Construct_UFunction_UMySQLDatabase_MySQLInitConnection, "MySQLInitConnection" }, // 1590597361
		{ &Z_Construct_UFunction_UMySQLDatabase_TruncateTable, "TruncateTable" }, // 3613070914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* MySQLConnector main database class.\n*/" },
		{ "IncludePath", "MySQLDatabase.h" },
		{ "ModuleRelativePath", "Public/MySQLDatabase.h" },
		{ "ToolTip", "MySQLConnector main database class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySQLDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySQLDatabase_Statics::ClassParams = {
		&UMySQLDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySQLDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySQLDatabase()
	{
		if (!Z_Registration_Info_UClass_UMySQLDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySQLDatabase.OuterSingleton, Z_Construct_UClass_UMySQLDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySQLDatabase.OuterSingleton;
	}
	template<> ESLIBRARY_API UClass* StaticClass<UMySQLDatabase>()
	{
		return UMySQLDatabase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLDatabase);
	struct Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_Statics::ScriptStructInfo[] = {
		{ FMySQLConnectorKeyValuePair::StaticStruct, Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics::NewStructOps, TEXT("MySQLConnectorKeyValuePair"), &Z_Registration_Info_UScriptStruct_MySQLConnectorKeyValuePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLConnectorKeyValuePair), 218504069U) },
		{ FMySQLConnectorQueryResultRow::StaticStruct, Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics::NewStructOps, TEXT("MySQLConnectorQueryResultRow"), &Z_Registration_Info_UScriptStruct_MySQLConnectorQueryResultRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLConnectorQueryResultRow), 657997431U) },
		{ FMySQLConnectoreQueryResult::StaticStruct, Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics::NewStructOps, TEXT("MySQLConnectoreQueryResult"), &Z_Registration_Info_UScriptStruct_MySQLConnectoreQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLConnectoreQueryResult), 963271818U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySQLDatabase, UMySQLDatabase::StaticClass, TEXT("UMySQLDatabase"), &Z_Registration_Info_UClass_UMySQLDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySQLDatabase), 3782940085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_1799814319(TEXT("/Script/ESLibrary"),
		Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLDatabase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
