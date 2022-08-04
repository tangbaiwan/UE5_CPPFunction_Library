// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/UnrealTinyXmlNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealTinyXmlNode() {}
// Cross Module References
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UUnrealTinyXmlNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execGetAttributeValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execGetNodeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execFindChildNodeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NameToSearch);
		P_GET_PROPERTY(FIntProperty,Z_Param_loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->FindChildNodeByName(Z_Param_NameToSearch,Z_Param_loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execGetFirstChildNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SearchDeep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetFirstChildNode(Z_Param_SearchDeep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execGetNodeValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execGetParentNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetParentNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execGetPreviousNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetPreviousNode(Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealTinyXmlNode::execGetNextNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUnrealTinyXmlNode**)Z_Param__Result=P_THIS->GetNextNode(Z_Param_Step);
		P_NATIVE_END;
	}
	void UUnrealTinyXmlNode::StaticRegisterNativesUUnrealTinyXmlNode()
	{
		UClass* Class = UUnrealTinyXmlNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindChildNodeByName", &UUnrealTinyXmlNode::execFindChildNodeByName },
			{ "GetAttributeValue", &UUnrealTinyXmlNode::execGetAttributeValue },
			{ "GetFirstChildNode", &UUnrealTinyXmlNode::execGetFirstChildNode },
			{ "GetNextNode", &UUnrealTinyXmlNode::execGetNextNode },
			{ "GetNodeName", &UUnrealTinyXmlNode::execGetNodeName },
			{ "GetNodeValue", &UUnrealTinyXmlNode::execGetNodeValue },
			{ "GetParentNode", &UUnrealTinyXmlNode::execGetParentNode },
			{ "GetPreviousNode", &UUnrealTinyXmlNode::execGetPreviousNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics
	{
		struct UnrealTinyXmlNode_eventFindChildNodeByName_Parms
		{
			FString NameToSearch;
			int32 loc;
			UUnrealTinyXmlNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToSearch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameToSearch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loc_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_loc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch = { "NameToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventFindChildNodeByName_Parms, NameToSearch), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventFindChildNodeByName_Parms, loc), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventFindChildNodeByName_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_NameToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Find first(or \"loc\") child  node of this node which has the same name as \"NameToSearch\",Will return Null if can't find.\n\x09*/" },
		{ "CPP_Default_loc", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Find first(or \"loc\") child  node of this node which has the same name as \"NameToSearch\",Will return Null if can't find." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "FindChildNodeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::UnrealTinyXmlNode_eventFindChildNodeByName_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics
	{
		struct UnrealTinyXmlNode_eventGetAttributeValue_Parms
		{
			FString AttributeName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetAttributeValue_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Given an attribute name,returns the value\n\x09\x09""for the attribute of that name, or null if none\n\x09\x09""exists\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Given an attribute name,returns the value\n               for the attribute of that name, or null if none\n               exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::UnrealTinyXmlNode_eventGetAttributeValue_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetFirstChildNode_Parms
		{
			int32 SearchDeep;
			UUnrealTinyXmlNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchDeep_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SearchDeep;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep = { "SearchDeep", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetFirstChildNode_Parms, SearchDeep), METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetFirstChildNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_SearchDeep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the first child of this node which can be iterated into with GetNextNode, can return NULL.\n\x09*/" },
		{ "CPP_Default_SearchDeep", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the first child of this node which can be iterated into with GetNextNode, can return NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetFirstChildNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::UnrealTinyXmlNode_eventGetFirstChildNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetNextNode_Parms
		{
			int32 Step;
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Step;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNextNode_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNextNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets next (Step) node in a list of nodes, can return NULL.if exceeded,return last one.\n\x09*/" },
		{ "CPP_Default_Step", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets next (Step) node in a list of nodes, can return NULL.if exceeded,return last one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetNextNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::UnrealTinyXmlNode_eventGetNextNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics
	{
		struct UnrealTinyXmlNode_eventGetNodeName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the name of current node, can return NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the name of current node, can return NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetNodeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::UnrealTinyXmlNode_eventGetNodeName_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics
	{
		struct UnrealTinyXmlNode_eventGetNodeValue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetNodeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the value of the node.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the value of the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetNodeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::UnrealTinyXmlNode_eventGetNodeValue_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetParentNode_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetParentNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets the next node in a list of nodes, can return NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets the next node in a list of nodes, can return NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetParentNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::UnrealTinyXmlNode_eventGetParentNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics
	{
		struct UnrealTinyXmlNode_eventGetPreviousNode_Parms
		{
			int32 Step;
			UUnrealTinyXmlNode* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Step;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetPreviousNode_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealTinyXmlNode_eventGetPreviousNode_Parms, ReturnValue), Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|TinyXml" },
		{ "Comment", "/**\n\x09* Gets previous (Step) node in a list of nodes, can return NULL.if exceeded,return last one.\n\x09*/" },
		{ "CPP_Default_Step", "1" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
		{ "ToolTip", "Gets previous (Step) node in a list of nodes, can return NULL.if exceeded,return last one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealTinyXmlNode, nullptr, "GetPreviousNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::UnrealTinyXmlNode_eventGetPreviousNode_Parms), Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealTinyXmlNode);
	UClass* Z_Construct_UClass_UUnrealTinyXmlNode_NoRegister()
	{
		return UUnrealTinyXmlNode::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealTinyXmlNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealTinyXmlNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealTinyXmlNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_FindChildNodeByName, "FindChildNodeByName" }, // 3260804864
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetAttributeValue, "GetAttributeValue" }, // 3479077559
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetFirstChildNode, "GetFirstChildNode" }, // 1089388215
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetNextNode, "GetNextNode" }, // 2744659287
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeName, "GetNodeName" }, // 1858041131
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetNodeValue, "GetNodeValue" }, // 2377639076
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetParentNode, "GetParentNode" }, // 1973591002
		{ &Z_Construct_UFunction_UUnrealTinyXmlNode_GetPreviousNode, "GetPreviousNode" }, // 2978283168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealTinyXmlNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UnrealTinyXmlNode.h" },
		{ "ModuleRelativePath", "Public/UnrealTinyXmlNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealTinyXmlNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealTinyXmlNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealTinyXmlNode_Statics::ClassParams = {
		&UUnrealTinyXmlNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealTinyXmlNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealTinyXmlNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealTinyXmlNode()
	{
		if (!Z_Registration_Info_UClass_UUnrealTinyXmlNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealTinyXmlNode.OuterSingleton, Z_Construct_UClass_UUnrealTinyXmlNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealTinyXmlNode.OuterSingleton;
	}
	template<> ESLIBRARY_API UClass* StaticClass<UUnrealTinyXmlNode>()
	{
		return UUnrealTinyXmlNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealTinyXmlNode);
	struct Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealTinyXmlNode, UUnrealTinyXmlNode::StaticClass, TEXT("UUnrealTinyXmlNode"), &Z_Registration_Info_UClass_UUnrealTinyXmlNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealTinyXmlNode), 45868528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_3125720259(TEXT("/Script/ESLibrary"),
		Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_UnrealTinyXmlNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
