// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "BaiXiaoSheng.h"
#define LOCTEXT_NAMESPACE "FBaiXiaoShengModule"



//#include "PlacementMode/Public/IPlacementModeModule.h"
#include "PlacementMode/Public/IPlacementModeModule.h"
void FBaiXiaoShengModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// Register editor category


    FPlacementCategoryInfo MyCategoryInfo(FText::FromString("StarUnion"), FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.DirtyBadge"),"BaiXiaoSheng", "MyTags", 0);
	IPlacementModeModule::Get().RegisterPlacementCategory(MyCategoryInfo);

	IPlacementModeModule::Get().RegisterPlaceableItem(MyCategoryInfo.UniqueHandle,
		MakeShareable(new FPlaceableItem(nullptr, MyActor, 1)));
	IPlacementModeModule::Get().RegisterPlaceableItem(MyCategoryInfo.UniqueHandle,
		MakeShareable(new FPlaceableItem(nullptr, MyActor1, 2)));
// 	IPlacementModeModule::Get().RegisterPlaceableItem(MyCategoryInfo.UniqueHandle,
// 		MakeShareable(new FPlaceableItem(nullptr, MyActor2, 3)));
}

void FBaiXiaoShengModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBaiXiaoShengModule, BaiXiaoSheng)



