// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ESLibrary/Public/DynamicLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicLoader() {}
// Cross Module References
	ESLIBRARY_API UFunction* Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature();
	ESLIBRARY_API UClass* Z_Construct_UClass_UImageLoader();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ESLIBRARY_API UClass* Z_Construct_UClass_UImageLoader_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ESLibrary();
	ESLIBRARY_API UFunction* Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature();
	ESLIBRARY_API UClass* Z_Construct_UClass_AExeActor();
	ESLIBRARY_API UClass* Z_Construct_UClass_AExeActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics
	{
		struct ImageLoader_eventOnImageLoadCompleted_Parms
		{
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageLoader_eventOnImageLoadCompleted_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Declare a broadcast-style delegate type, which is used for the load completed event.\n\x09""Dynamic multicast delegates are the only type of event delegates that Blueprint scripts can bind to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
		{ "ToolTip", "Declare a broadcast-style delegate type, which is used for the load completed event.\nDynamic multicast delegates are the only type of event delegates that Blueprint scripts can bind to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageLoader, nullptr, "OnImageLoadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::ImageLoader_eventOnImageLoadCompleted_Parms), Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UImageLoader::execLoadImageFromDisk)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UImageLoader::LoadImageFromDisk(Z_Param_ImagePath);
		P_NATIVE_END;
	}
	void UImageLoader::StaticRegisterNativesUImageLoader()
	{
		UClass* Class = UImageLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadImageFromDisk", &UImageLoader::execLoadImageFromDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics
	{
		struct ImageLoader_eventLoadImageFromDisk_Parms
		{
			FString ImagePath;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageLoader_eventLoadImageFromDisk_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageLoader_eventLoadImageFromDisk_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageLoader" },
		{ "Comment", "/**\n\x09Loads an image file from disk into a texture. This will block the calling thread until completed.\n\x09@return A texture created from the loaded image file.\n\x09*/" },
		{ "DefaultToSelf", "Outer" },
		{ "HidePin", "Outer" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
		{ "ToolTip", "Loads an image file from disk into a texture. This will block the calling thread until completed.\n@return A texture created from the loaded image file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageLoader, nullptr, "LoadImageFromDisk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::ImageLoader_eventLoadImageFromDisk_Parms), Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageLoader_LoadImageFromDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageLoader_LoadImageFromDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageLoader);
	UClass* Z_Construct_UClass_UImageLoader_NoRegister()
	{
		return UImageLoader::StaticClass();
	}
	struct Z_Construct_UClass_UImageLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageLoader_LoadImageFromDisk, "LoadImageFromDisk" }, // 1063541533
		{ &Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature, "OnImageLoadCompleted__DelegateSignature" }, // 2374453098
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DynamicLoader.h" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageLoader" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted = { "LoadCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImageLoader, LoadCompleted), Z_Construct_UDelegateFunction_UImageLoader_OnImageLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted_MetaData)) }; // 2374453098
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageLoader_Statics::NewProp_LoadCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageLoader_Statics::ClassParams = {
		&UImageLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImageLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoader_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageLoader()
	{
		if (!Z_Registration_Info_UClass_UImageLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageLoader.OuterSingleton, Z_Construct_UClass_UImageLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageLoader.OuterSingleton;
	}
	template<> ESLIBRARY_API UClass* StaticClass<UImageLoader>()
	{
		return UImageLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageLoader);
	struct Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics
	{
		struct ExeActor_eventOnProcShutdown_Parms
		{
			bool IsOver;
		};
		static void NewProp_IsOver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver_SetBit(void* Obj)
	{
		((ExeActor_eventOnProcShutdown_Parms*)Obj)->IsOver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver = { "IsOver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExeActor_eventOnProcShutdown_Parms), &Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::NewProp_IsOver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExeActor, nullptr, "OnProcShutdown__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::ExeActor_eventOnProcShutdown_Parms), Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AExeActor::execGetstat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Getstat();
		P_NATIVE_END;
	}
	void AExeActor::StaticRegisterNativesAExeActor()
	{
		UClass* Class = AExeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Getstat", &AExeActor::execGetstat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExeActor_Getstat_Statics
	{
		struct ExeActor_eventGetstat_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExeActor_eventGetstat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExeActor_eventGetstat_Parms), &Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExeActor_Getstat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExeActor_Getstat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExeActor_Getstat_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFMPEGPortTesting" },
		{ "Keywords", "FFMPEGPort sample test testing" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExeActor_Getstat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExeActor, nullptr, "Getstat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AExeActor_Getstat_Statics::ExeActor_eventGetstat_Parms), Z_Construct_UFunction_AExeActor_Getstat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExeActor_Getstat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExeActor_Getstat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExeActor_Getstat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExeActor_Getstat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExeActor_Getstat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExeActor);
	UClass* Z_Construct_UClass_AExeActor_NoRegister()
	{
		return AExeActor::StaticClass();
	}
	struct Z_Construct_UClass_AExeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcShutdown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProcShutdown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ESLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExeActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExeActor_Getstat, "Getstat" }, // 1887529776
		{ &Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature, "OnProcShutdown__DelegateSignature" }, // 4292335498
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicLoader.h" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FFMPEGPort" },
		{ "ModuleRelativePath", "Public/DynamicLoader.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown = { "ProcShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExeActor, ProcShutdown), Z_Construct_UDelegateFunction_AExeActor_OnProcShutdown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown_MetaData)) }; // 4292335498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExeActor_Statics::NewProp_ProcShutdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExeActor_Statics::ClassParams = {
		&AExeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExeActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExeActor()
	{
		if (!Z_Registration_Info_UClass_AExeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExeActor.OuterSingleton, Z_Construct_UClass_AExeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExeActor.OuterSingleton;
	}
	template<> ESLIBRARY_API UClass* StaticClass<AExeActor>()
	{
		return AExeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExeActor);
	struct Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImageLoader, UImageLoader::StaticClass, TEXT("UImageLoader"), &Z_Registration_Info_UClass_UImageLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageLoader), 3039847830U) },
		{ Z_Construct_UClass_AExeActor, AExeActor::StaticClass, TEXT("AExeActor"), &Z_Registration_Info_UClass_AExeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExeActor), 1596683658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_124660719(TEXT("/Script/ESLibrary"),
		Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_DynamicLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
