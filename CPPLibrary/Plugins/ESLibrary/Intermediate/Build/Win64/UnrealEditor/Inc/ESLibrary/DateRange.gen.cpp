// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/DateRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateRange() {}
// Cross Module References
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FDateRangeBound();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ERangeBoundTypes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ESLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FDateRange();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FDateRangeBound_Statics
	{
		struct FDateRangeBound
		{
			TEnumAsByte<ERangeBoundTypes::Type> Type;
			FDateTime Value;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRangeBound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a single bound for a range of values.\n * @note This is a mirror of TRangeBound<float>, defined in RangeBound.h\n */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Defines a single bound for a range of values.\n@note This is a mirror of TRangeBound<float>, defined in RangeBound.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the type of the bound. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the type of the bound." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRangeBound, Type), Z_Construct_UEnum_CoreUObject_ERangeBoundTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type_MetaData)) }; // 364929810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the bound's value. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the bound's value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRangeBound, Value), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDateRangeBound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRangeBound_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateRangeBound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		nullptr,
		"DateRangeBound",
		sizeof(FDateRangeBound),
		alignof(FDateRangeBound),
		Z_Construct_UScriptStruct_FDateRangeBound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRangeBound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRangeBound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDateRangeBound()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDateRangeBound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	struct Z_Construct_UScriptStruct_FDateRange_Statics
	{
		struct FDateRangeBound
		{
			TEnumAsByte<ERangeBoundTypes::Type> Type;
			FDateTime Value;
		};

		struct FDateRange
		{
			FDateRangeBound LowerBound;
			FDateRangeBound UpperBound;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A contiguous set of floats described by lower and upper bound values.\n * @note This is a mirror of TRange<float>, defined in Range.h\n */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "A contiguous set of floats described by lower and upper bound values.\n@note This is a mirror of TRange<float>, defined in Range.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the range's lower bound. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the range's lower bound." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRange, LowerBound), Z_Construct_UScriptStruct_FDateRangeBound, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "/** Holds the range's upper bound. */" },
		{ "ModuleRelativePath", "Public/DateRange.h" },
		{ "ToolTip", "Holds the range's upper bound." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDateRange, UpperBound), Z_Construct_UScriptStruct_FDateRangeBound, METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDateRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDateRange_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
		nullptr,
		nullptr,
		"DateRange",
		sizeof(FDateRange),
		alignof(FDateRange),
		Z_Construct_UScriptStruct_FDateRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDateRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDateRange()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDateRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
