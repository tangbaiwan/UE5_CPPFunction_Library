// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FBaiXiaoShengModule : public IModuleInterface
{
public:

	/**∑≈÷√bp */
	UClass* MyActor = LoadClass<AActor>(nullptr, TEXT("Blueprint'/A_rt/BP/_Begine_Play_2._Begine_Play_2_C'"));

	UClass* MyActor1 = LoadClass<AActor>(nullptr, TEXT("Blueprint'/A_rt/BP/BP_Snow.BP_Snow_C'"));

	//UClass* MyActor2 = LoadClass<AActor>(nullptr, TEXT("EditorUtilityWidgetBlueprint'/MovieRenderPipeline/Editor/MovieRenderPipelineExampleEditorWidget.MovieRenderPipelineExampleEditorWidget_C'"));


	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};

