// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/UnrealTinyXmlDocument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealTinyXmlDocument() {}
// Cross Module References
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlDocument_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlDocument();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUnrealTinyXmlDocument::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlDocument::execGetRootNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetRootNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlDocument::execLoadXmlFie)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadXmlFie(Z_Param_File);
		P_NATIVE_END;
	}
	void UUnrealTinyXmlDocument::StaticRegisterNativesUUnrealTinyXmlDocument()
	{
		UClass* Class = UUnrealTinyXmlDocument::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UUnrealTinyXmlDocument::execClear },
			{ "GetRootNode", &UUnrealTinyXmlDocument::execGetRootNode },
			{ "LoadXmlFie", &UUnrealTinyXmlDocument::execLoadXmlFie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Clear the document that has this node, resetting it to the initial state(All nodes of this document will become null!).\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
		{ "ToolTip", "Clear the document that has this node, resetting it to the initial state(All nodes of this document will become null!)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlDocument, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics
	{
		struct UnrealTinyXmlDocument_eventGetRootNode_Parms
		{
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlDocument_eventGetRootNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Get the root node of current loaded xml file, returns NULL if it can't be parsed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
		{ "ToolTip", "Get the root node of current loaded xml file, returns NULL if it can't be parsed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlDocument, nullptr, "GetRootNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::UnrealTinyXmlDocument_eventGetRootNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics
	{
		struct UnrealTinyXmlDocument_eventLoadXmlFie_Parms
		{
			FString File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlDocument_eventLoadXmlFie_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File_MetaData)) };
	void Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealTinyXmlDocument_eventLoadXmlFie_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealTinyXmlDocument_eventLoadXmlFie_Parms), &Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Load xml file from disk, return ture if load successful, or it will be false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
		{ "ToolTip", "Load xml file from disk, return ture if load successful, or it will be false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlDocument, nullptr, "LoadXmlFie", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::UnrealTinyXmlDocument_eventLoadXmlFie_Parms), Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealTinyXmlDocument);
	UClass* Z_Construct_UClass_UUnrealTinyXmlDocument_NoRegister()
	{
		return UUnrealTinyXmlDocument::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealTinyXmlDocument_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealTinyXmlDocument_Clear, "Clear" }, // 3784695423
		{ &Z_Construct_UFunction_UUnrealTinyXmlDocument_GetRootNode, "GetRootNode" }, // 969421443
		{ &Z_Construct_UFunction_UUnrealTinyXmlDocument_LoadXmlFie, "LoadXmlFie" }, // 4199310652
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UnrealTinyXmlDocument.h" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlDocument.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealTinyXmlDocument>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::ClassParams = {
		&UUnrealTinyXmlDocument::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealTinyXmlDocument()
	{
		if (!Z_Registration_Info_UClass_UUnrealTinyXmlDocument.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealTinyXmlDocument.OuterSingleton, Z_Construct_UClass_UUnrealTinyXmlDocument_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealTinyXmlDocument.OuterSingleton;
	}
	template<> ESLIBRARY_API UClass* StaticClass<UUnrealTinyXmlDocument>()
	{
		return UUnrealTinyXmlDocument::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealTinyXmlDocument);
	struct Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealTinyXmlDocument, UUnrealTinyXmlDocument::StaticClass, TEXT("UUnrealTinyXmlDocument"), &Z_Registration_Info_UClass_UUnrealTinyXmlDocument, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealTinyXmlDocument), 3657719215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_1745831186(TEXT("/Script/ESLibrary"),
		Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlDocument_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
