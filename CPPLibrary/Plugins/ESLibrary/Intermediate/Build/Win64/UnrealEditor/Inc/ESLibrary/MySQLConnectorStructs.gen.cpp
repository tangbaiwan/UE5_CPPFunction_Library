// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/MySQLConnectorStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLConnectorStructs() {}
// Cross Module References
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTableField();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTable();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLConnectorTableField;
class UScriptStruct* FMySQLConnectorTableField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLConnectorTableField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLConnectorTableField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorTableField, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorTableField"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLConnectorTableField.OuterSingleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorTableField>()
{
	return FMySQLConnectorTableField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResultStr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorTableField>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** String with piece if SQL script*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "String with piece if SQL script" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, ResultStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Field name*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Field name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Field type*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Field type" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType = { "FieldType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, FieldType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Field value*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Field value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTableField, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_ResultStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewProp_FieldValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorTableField",
		sizeof(FMySQLConnectorTableField),
		alignof(FMySQLConnectorTableField),
		Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTableField()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLConnectorTableField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLConnectorTableField.InnerSingleton, Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLConnectorTableField.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey;
class UScriptStruct* FMySQLConnectorPrimaryKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorPrimaryKey"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey.OuterSingleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorPrimaryKey>()
{
	return FMySQLConnectorPrimaryKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResultStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorPrimaryKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** String with piece if SQL script*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "String with piece if SQL script" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorPrimaryKey, ResultStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewProp_ResultStr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorPrimaryKey",
		sizeof(FMySQLConnectorPrimaryKey),
		alignof(FMySQLConnectorPrimaryKey),
		Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey.InnerSingleton, Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLConnectorTable;
class UScriptStruct* FMySQLConnectorTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLConnectorTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLConnectorTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLConnectorTable, Z_Construct_UPackage__Script_ESLibrary(), TEXT("MySQLConnectorTable"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLConnectorTable.OuterSingleton;
}
template<> ESLIBRARY_API UScriptStruct* StaticStruct<FMySQLConnectorTable>()
{
	return FMySQLConnectorTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static void NewProp_Created_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Created;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLConnectorTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Database name*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Database name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTable, DatabaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Table name*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Table name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTable, TableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMySQLConnectorTableField, METADATA_PARAMS(nullptr, 0) }; // 1000898953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Array with Fields*/" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Array with Fields" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMySQLConnectorTable, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_MetaData)) }; // 1000898953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "ES|MySQLConnector|Tables|Fields" },
		{ "Comment", "/** Created Key */" },
		{ "ModuleRelativePath", "Public/MySQLConnectorStructs.h" },
		{ "ToolTip", "Created Key" },
	};
#endif
	void Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_SetBit(void* Obj)
	{
		((FMySQLConnectorTable*)Obj)->Created = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMySQLConnectorTable), &Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_DatabaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Fields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewProp_Created,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		&NewStructOps,
		"MySQLConnectorTable",
		sizeof(FMySQLConnectorTable),
		alignof(FMySQLConnectorTable),
		Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLConnectorTable()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLConnectorTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLConnectorTable.InnerSingleton, Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLConnectorTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnectorStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnectorStructs_h_Statics::ScriptStructInfo[] = {
		{ FMySQLConnectorTableField::StaticStruct, Z_Construct_UScriptStruct_FMySQLConnectorTableField_Statics::NewStructOps, TEXT("MySQLConnectorTableField"), &Z_Registration_Info_UScriptStruct_MySQLConnectorTableField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLConnectorTableField), 1000898953U) },
		{ FMySQLConnectorPrimaryKey::StaticStruct, Z_Construct_UScriptStruct_FMySQLConnectorPrimaryKey_Statics::NewStructOps, TEXT("MySQLConnectorPrimaryKey"), &Z_Registration_Info_UScriptStruct_MySQLConnectorPrimaryKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLConnectorPrimaryKey), 2820254114U) },
		{ FMySQLConnectorTable::StaticStruct, Z_Construct_UScriptStruct_FMySQLConnectorTable_Statics::NewStructOps, TEXT("MySQLConnectorTable"), &Z_Registration_Info_UScriptStruct_MySQLConnectorTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLConnectorTable), 1088804212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnectorStructs_h_265922519(TEXT("/Script/ESLibrary"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnectorStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_MySQLConnectorStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
