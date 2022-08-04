// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateRange;
struct FDateTime;
struct FTimespan;
struct FInt32Range;
struct FFloatRange;
class UUnrealTinyXmlDocument;
enum class EEasingType : uint8;
class USceneComponent;
class APlayerController;
class AActor;
struct FLinearColor;
struct FColor;
class USoundWave;
class UObject;
class ULevelStreamingDynamic;
struct FLevelStreamInstanceInfo;
class UUserWidget;
class UPrimitiveComponent;
class APawn;
class UNavigationQueryFilter;
class UTextureRenderTarget2D;
class UTexture2D;
enum class EJoyImageFormats : uint8;
class AExeActor;
enum class DirType : uint8;
class USaveGame;
struct FHitResult;
class USplineComponent;
class UStaticMesh;
class UMaterialInterface;
class USplineMeshComponent;
class UActorComponent;
class UCheckBox;
struct FCheckBoxStyle;
enum class ECheckBoxState : uint8;
class UPanelWidget;
class UTextBlock;
struct FFontOutlineSettings;
class UWidget;
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;
class UInputSettings;
struct FKey;
enum class EExtraSwitch : uint8;
class AGameMode;
struct FSlateColor;
class ULevel;
enum class EPlatformType : uint8;
struct FIntPoint;
enum class EN_Match : uint8;
enum class EN_NotEqual : uint8;
enum class EN_Equals : uint8;
enum class EN_IfThenElse : uint8;
class UDataTable;
class UTexture;
#ifdef ESLIBRARY_ESLibraryBPLibrary_generated_h
#error "ESLibraryBPLibrary.generated.h already included, missing '#pragma once' in ESLibraryBPLibrary.h"
#endif
#define ESLIBRARY_ESLibraryBPLibrary_generated_h

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelStreamInstanceInfo_Statics; \
	ESLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ESLIBRARY_API UScriptStruct* StaticStruct<struct FLevelStreamInstanceInfo>();

#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_227_DELEGATE \
struct _Script_ESLibrary_eventMKTweenDynamicDelegate_Parms \
{ \
	float TweenedValue; \
}; \
static inline void FMKTweenDynamicDelegate_DelegateWrapper(const FScriptDelegate& MKTweenDynamicDelegate, float TweenedValue) \
{ \
	_Script_ESLibrary_eventMKTweenDynamicDelegate_Parms Parms; \
	Parms.TweenedValue=TweenedValue; \
	MKTweenDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_SPARSE_DATA
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnion_Date); \
	DECLARE_FUNCTION(execIntersection_Date); \
	DECLARE_FUNCTION(execHull_Date); \
	DECLARE_FUNCTION(execDifference_Date); \
	DECLARE_FUNCTION(execSplit_Date); \
	DECLARE_FUNCTION(execSize_Date); \
	DECLARE_FUNCTION(execIsEmpty_Date); \
	DECLARE_FUNCTION(execIsDegenerate_Date); \
	DECLARE_FUNCTION(execHasUpperBound_Date); \
	DECLARE_FUNCTION(execHasLowerBound_Date); \
	DECLARE_FUNCTION(execContiguous_Date); \
	DECLARE_FUNCTION(execContains_Date); \
	DECLARE_FUNCTION(execGetUpperBoundValue_Date); \
	DECLARE_FUNCTION(execGetLowerBoundValue_Date); \
	DECLARE_FUNCTION(execUnion_Int); \
	DECLARE_FUNCTION(execIntersection_Int); \
	DECLARE_FUNCTION(execHull_Int); \
	DECLARE_FUNCTION(execDifference_Int); \
	DECLARE_FUNCTION(execSplit_Int); \
	DECLARE_FUNCTION(execSize_Int); \
	DECLARE_FUNCTION(execIsEmpty_Int); \
	DECLARE_FUNCTION(execIsDegenerate_Int); \
	DECLARE_FUNCTION(execHasUpperBound_Int); \
	DECLARE_FUNCTION(execHasLowerBound_Int); \
	DECLARE_FUNCTION(execContiguous_Int); \
	DECLARE_FUNCTION(execContains_Int); \
	DECLARE_FUNCTION(execGetUpperBoundValue_Int); \
	DECLARE_FUNCTION(execGetLowerBoundValue_Int); \
	DECLARE_FUNCTION(execUnion_Float); \
	DECLARE_FUNCTION(execIntersection_Float); \
	DECLARE_FUNCTION(execHull_Float); \
	DECLARE_FUNCTION(execDifference_Float); \
	DECLARE_FUNCTION(execSplit_Float); \
	DECLARE_FUNCTION(execSize_Float); \
	DECLARE_FUNCTION(execIsEmpty_Float); \
	DECLARE_FUNCTION(execIsDegenerate_Float); \
	DECLARE_FUNCTION(execHasUpperBound_Float); \
	DECLARE_FUNCTION(execHasLowerBound_Float); \
	DECLARE_FUNCTION(execContiguous_Float); \
	DECLARE_FUNCTION(execContains_Float); \
	DECLARE_FUNCTION(execGetUpperBoundValue_Float); \
	DECLARE_FUNCTION(execGetLowerBoundValue_Float); \
	DECLARE_FUNCTION(execDivide_vf); \
	DECLARE_FUNCTION(execMultiply_vf); \
	DECLARE_FUNCTION(execSubtract_vf); \
	DECLARE_FUNCTION(execAdd_vf); \
	DECLARE_FUNCTION(execDivide_vi); \
	DECLARE_FUNCTION(execMultiply_vi); \
	DECLARE_FUNCTION(execSubtract_vi); \
	DECLARE_FUNCTION(execAdd_vi); \
	DECLARE_FUNCTION(execDivide_v); \
	DECLARE_FUNCTION(execMultiply_v); \
	DECLARE_FUNCTION(execSubtract_v); \
	DECLARE_FUNCTION(execAdd_v); \
	DECLARE_FUNCTION(execDivide_fi); \
	DECLARE_FUNCTION(execMultiply_fi); \
	DECLARE_FUNCTION(execSubtract_fi); \
	DECLARE_FUNCTION(execAdd_fi); \
	DECLARE_FUNCTION(execDivide_f); \
	DECLARE_FUNCTION(execMultiply_f); \
	DECLARE_FUNCTION(execSubtract_f); \
	DECLARE_FUNCTION(execAdd_f); \
	DECLARE_FUNCTION(execDivide_if); \
	DECLARE_FUNCTION(execMultiply_if); \
	DECLARE_FUNCTION(execSubtract_if); \
	DECLARE_FUNCTION(execAdd_if); \
	DECLARE_FUNCTION(execDivide_i); \
	DECLARE_FUNCTION(execMultiply_i); \
	DECLARE_FUNCTION(execSubtract_i); \
	DECLARE_FUNCTION(execAdd_i); \
	DECLARE_FUNCTION(execNewXmlDocument); \
	DECLARE_FUNCTION(execEaseBounceOutIn); \
	DECLARE_FUNCTION(execEaseElasticOutIn); \
	DECLARE_FUNCTION(execEaseBackOutIn); \
	DECLARE_FUNCTION(execEaseCircOutIn); \
	DECLARE_FUNCTION(execEaseExpoOutIn); \
	DECLARE_FUNCTION(execEaseQuintOutIn); \
	DECLARE_FUNCTION(execEaseQuartOutIn); \
	DECLARE_FUNCTION(execEaseCubicOutIn); \
	DECLARE_FUNCTION(execEaseQuadOutIn); \
	DECLARE_FUNCTION(execEaseSineOutIn); \
	DECLARE_FUNCTION(execEaseBounceInOut); \
	DECLARE_FUNCTION(execEaseBounceOut); \
	DECLARE_FUNCTION(execEaseBounceIn); \
	DECLARE_FUNCTION(execEaseElasticInOut); \
	DECLARE_FUNCTION(execEaseElasticOut); \
	DECLARE_FUNCTION(execEaseElasticIn); \
	DECLARE_FUNCTION(execEaseBackInOut); \
	DECLARE_FUNCTION(execEaseBackOut); \
	DECLARE_FUNCTION(execEaseBackIn); \
	DECLARE_FUNCTION(execEaseCircInOut); \
	DECLARE_FUNCTION(execEaseCircOut); \
	DECLARE_FUNCTION(execEaseCircIn); \
	DECLARE_FUNCTION(execEaseExpoInOut); \
	DECLARE_FUNCTION(execEaseExpoOut); \
	DECLARE_FUNCTION(execEaseExpoIn); \
	DECLARE_FUNCTION(execEaseQuintInOut); \
	DECLARE_FUNCTION(execEaseQuintOut); \
	DECLARE_FUNCTION(execEaseQuintIn); \
	DECLARE_FUNCTION(execEaseQuartInOut); \
	DECLARE_FUNCTION(execEaseQuartOut); \
	DECLARE_FUNCTION(execEaseQuartIn); \
	DECLARE_FUNCTION(execEaseCubicInOut); \
	DECLARE_FUNCTION(execEaseCubicOut); \
	DECLARE_FUNCTION(execEaseCubicIn); \
	DECLARE_FUNCTION(execEaseQuadInOut); \
	DECLARE_FUNCTION(execEaseQuadOut); \
	DECLARE_FUNCTION(execEaseQuadIn); \
	DECLARE_FUNCTION(execEaseSineInOut); \
	DECLARE_FUNCTION(execEaseSineOut); \
	DECLARE_FUNCTION(execEaseSineIn); \
	DECLARE_FUNCTION(execEaseLinear); \
	DECLARE_FUNCTION(execEaseInterpolate); \
	DECLARE_FUNCTION(execWorldPointIsInsideBox); \
	DECLARE_FUNCTION(execRemoveAllChildren); \
	DECLARE_FUNCTION(execGetActorScreenBox); \
	DECLARE_FUNCTION(execVectorIsNearlyZero); \
	DECLARE_FUNCTION(execMakeLiteralFBox2D); \
	DECLARE_FUNCTION(execMinAndMaxOfFloatArray); \
	DECLARE_FUNCTION(execBoxIntersectsBox); \
	DECLARE_FUNCTION(execBoxIsInsideBox); \
	DECLARE_FUNCTION(execPointIsInsideBox); \
	DECLARE_FUNCTION(execRepeatFloat); \
	DECLARE_FUNCTION(execDeltaAngle); \
	DECLARE_FUNCTION(execMoveTowards); \
	DECLARE_FUNCTION(execMoveTowardsAngle); \
	DECLARE_FUNCTION(execMoveTowardsRotator); \
	DECLARE_FUNCTION(execMoveTowardsVector); \
	DECLARE_FUNCTION(execHasRuntimeCooking); \
	DECLARE_FUNCTION(execConvertLinearColors); \
	DECLARE_FUNCTION(execIsActorWithinFrustum); \
	DECLARE_FUNCTION(execWasActorRenderedRecently); \
	DECLARE_FUNCTION(execGetActorLastRenderTime); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execLoadWaveDataFromFile); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsetsFromRotation); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsets); \
	DECLARE_FUNCTION(execLoadStringFromFile); \
	DECLARE_FUNCTION(execLoadStringArrayFromFile); \
	DECLARE_FUNCTION(execVictorySimulateMouseWheel); \
	DECLARE_FUNCTION(execVerticalFOV); \
	DECLARE_FUNCTION(execHorizontalFOV); \
	DECLARE_FUNCTION(execGetCommandLine); \
	DECLARE_FUNCTION(execVictory_GetGPUInfo); \
	DECLARE_FUNCTION(execProjectWorldToScreenPosition); \
	DECLARE_FUNCTION(execSelection_SelectionBox); \
	DECLARE_FUNCTION(execUnloadStreamingLevel); \
	DECLARE_FUNCTION(execHideStreamingLevel); \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels); \
	DECLARE_FUNCTION(execAddToStreamingLevels); \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport); \
	DECLARE_FUNCTION(execCreatePrimitiveComponent); \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter); \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D); \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D); \
	DECLARE_FUNCTION(execVictory_SavePixels); \
	DECLARE_FUNCTION(execVictory_Get_Pixel); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile); \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile); \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir); \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir); \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory); \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir); \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation); \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser); \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes); \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime); \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime); \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform); \
	DECLARE_FUNCTION(execGetObjectPath); \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath); \
	DECLARE_FUNCTION(execTransformVectorToActorSpace); \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execOpenExe); \
	DECLARE_FUNCTION(execGetGamePath); \
	DECLARE_FUNCTION(execDeleteFileII); \
	DECLARE_FUNCTION(execWriteFile); \
	DECLARE_FUNCTION(execReadFile); \
	DECLARE_FUNCTION(execWriteCustomPathConfig); \
	DECLARE_FUNCTION(execReadCustomPathConfig); \
	DECLARE_FUNCTION(execWriteConfig); \
	DECLARE_FUNCTION(execReadConfig); \
	DECLARE_FUNCTION(execIsVaildPath); \
	DECLARE_FUNCTION(execLoadTexture2DFromFile); \
	DECLARE_FUNCTION(execLoadGameFromSlotCompressed); \
	DECLARE_FUNCTION(execSaveGameToSlotCompressed); \
	DECLARE_FUNCTION(execGetHitTraceEnd); \
	DECLARE_FUNCTION(execGetHitTraceStart); \
	DECLARE_FUNCTION(execGetHitFaceIndex); \
	DECLARE_FUNCTION(execGetHitItem); \
	DECLARE_FUNCTION(execGetHitBoneName); \
	DECLARE_FUNCTION(execGetHitComponent); \
	DECLARE_FUNCTION(execGetHitActor); \
	DECLARE_FUNCTION(execGetHitImpactNormal); \
	DECLARE_FUNCTION(execGetHitNormal); \
	DECLARE_FUNCTION(execGetHitImpactPoint); \
	DECLARE_FUNCTION(execGetHitLocation); \
	DECLARE_FUNCTION(execGetHitDistance); \
	DECLARE_FUNCTION(execGetHitTime); \
	DECLARE_FUNCTION(execGetHitInitialOverlap); \
	DECLARE_FUNCTION(execGetHitBlockingHit); \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds); \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds); \
	DECLARE_FUNCTION(execGetReplayPlaybackSpeed); \
	DECLARE_FUNCTION(execSetReplayPlaybackSpeed); \
	DECLARE_FUNCTION(execSetReplayPausedState); \
	DECLARE_FUNCTION(execJumpToTimeInReplay); \
	DECLARE_FUNCTION(execAddUserToReplay); \
	DECLARE_FUNCTION(execPlayReplay); \
	DECLARE_FUNCTION(execStopRecordingReplay); \
	DECLARE_FUNCTION(execStartRecordingReplay); \
	DECLARE_FUNCTION(execBuildSplineMeshesAlongSpline); \
	DECLARE_FUNCTION(execFindLocationAndRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execFindScaleAtSplineInputKey); \
	DECLARE_FUNCTION(execFindRollAtSplineInputKey); \
	DECLARE_FUNCTION(execFindTransformAtSplineInputKey); \
	DECLARE_FUNCTION(execFindRightVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execFindUpVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execFindRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execFindDirectionAtSplineInputKey); \
	DECLARE_FUNCTION(execFindTangentAtSplineInputKey); \
	DECLARE_FUNCTION(execFindLocationAtSplineInputKey); \
	DECLARE_FUNCTION(execSnapSingleSplinePointToGround); \
	DECLARE_FUNCTION(execSnapAllSplinePointsToGround); \
	DECLARE_FUNCTION(execGetLastSplinePoint); \
	DECLARE_FUNCTION(execIsValidSplinePoint); \
	DECLARE_FUNCTION(execSnapActorToGround); \
	DECLARE_FUNCTION(execDrawDebugCoordinateArrowsAtComponent); \
	DECLARE_FUNCTION(execGetClosestActorToPoint); \
	DECLARE_FUNCTION(execGetClosestComponentToPoint); \
	DECLARE_FUNCTION(execFindActorComponentByName); \
	DECLARE_FUNCTION(execFindSceneComponentByName); \
	DECLARE_FUNCTION(execGetCurrentCheckboxImage); \
	DECLARE_FUNCTION(execSetCheckboxStyleToImage); \
	DECLARE_FUNCTION(execIsValidChildIndexInPanel); \
	DECLARE_FUNCTION(execGetLastChildIndex); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execSetFontTypeface); \
	DECLARE_FUNCTION(execSetFontOutline); \
	DECLARE_FUNCTION(execSetFontMaterial); \
	DECLARE_FUNCTION(execSetFontFamily); \
	DECLARE_FUNCTION(execGetAllWidgetsOfTypeInUserWidget); \
	DECLARE_FUNCTION(execClearAllUserFocus); \
	DECLARE_FUNCTION(execGetAllSubWidgetsInParent); \
	DECLARE_FUNCTION(execGetWidgetInFocus); \
	DECLARE_FUNCTION(execEquals_InputActionKeyMapping); \
	DECLARE_FUNCTION(execEquals_InputAxisKeyMapping); \
	DECLARE_FUNCTION(execClearInputMappings); \
	DECLARE_FUNCTION(execGetLastMaterialIndex); \
	DECLARE_FUNCTION(execGetAxisValueOfInputs); \
	DECLARE_FUNCTION(execGetDirectionalInputsFromDirectionalKeys); \
	DECLARE_FUNCTION(execMarkRenderDity_Comps); \
	DECLARE_FUNCTION(execFindFirstInstanceOfActorType); \
	DECLARE_FUNCTION(execGetNumberOfActorsOfType); \
	DECLARE_FUNCTION(execIsOverlappingAnyActors); \
	DECLARE_FUNCTION(execAreObjectsValid); \
	DECLARE_FUNCTION(execMarkRenderDirty); \
	DECLARE_FUNCTION(execIsRotatorZero); \
	DECLARE_FUNCTION(execGetSocketRelativeRotation); \
	DECLARE_FUNCTION(execGetSocketRelativeLocation); \
	DECLARE_FUNCTION(execSetAngularVelocityInRadiansToComponentBody); \
	DECLARE_FUNCTION(execSetLinearVelocityToComponentBody); \
	DECLARE_FUNCTION(execAddAngularImpulseInRadiansToComponentBody); \
	DECLARE_FUNCTION(execAddTorqueInRadiansToComponentBody); \
	DECLARE_FUNCTION(execAddImpulseToComponentBody); \
	DECLARE_FUNCTION(execAddImpulseAtPositionToComponentBody); \
	DECLARE_FUNCTION(execAddForceAtPositionToComponentBody); \
	DECLARE_FUNCTION(execAddForceToComponentBody); \
	DECLARE_FUNCTION(execTryGetPlayerControllerFromPawn); \
	DECLARE_FUNCTION(execTrySetPlayerInputEnabled); \
	DECLARE_FUNCTION(execSetInputPriority); \
	DECLARE_FUNCTION(execGetInputPriority); \
	DECLARE_FUNCTION(execGetPlayerIP); \
	DECLARE_FUNCTION(execGetServerIP); \
	DECLARE_FUNCTION(execGetServerIpFromGamemode); \
	DECLARE_FUNCTION(execGetConnectedClientIPs); \
	DECLARE_FUNCTION(execIsEmpty_Name); \
	DECLARE_FUNCTION(execIsEmpty_String); \
	DECLARE_FUNCTION(execRemoveSpaces); \
	DECLARE_FUNCTION(execReplaceUnderscore); \
	DECLARE_FUNCTION(execPrintStringWithCategory); \
	DECLARE_FUNCTION(execIncreaseVerbosityOfMessage); \
	DECLARE_FUNCTION(execSortStrings); \
	DECLARE_FUNCTION(execGetObjectsOf); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execGetSubDirectories); \
	DECLARE_FUNCTION(execGetLocalAppDataDirectory); \
	DECLARE_FUNCTION(execConv_CollisionChannelToObjectTypeQuery); \
	DECLARE_FUNCTION(execConv_CollisionChannelsToObjectTypeQuerys); \
	DECLARE_FUNCTION(execConv_LinearColorToSlateColor); \
	DECLARE_FUNCTION(execGetClassFromAssetPath); \
	DECLARE_FUNCTION(execGetAllLevels); \
	DECLARE_FUNCTION(execIsClassSameAs); \
	DECLARE_FUNCTION(execAreObjectsSameClass); \
	DECLARE_FUNCTION(execRequestExit); \
	DECLARE_FUNCTION(execForceCrash); \
	DECLARE_FUNCTION(execDesktopPlatform); \
	DECLARE_FUNCTION(execIosPlatform); \
	DECLARE_FUNCTION(execAndroidPlatform); \
	DECLARE_FUNCTION(execSwitchPlatform); \
	DECLARE_FUNCTION(execXboxOnePlatform); \
	DECLARE_FUNCTION(execPs4Platform); \
	DECLARE_FUNCTION(execMacPlatform); \
	DECLARE_FUNCTION(execLinuxPlatform); \
	DECLARE_FUNCTION(execWindowsRtArmPlatform); \
	DECLARE_FUNCTION(execWindowsRtPlatform); \
	DECLARE_FUNCTION(execWindows64Platform); \
	DECLARE_FUNCTION(execWindows32Platform); \
	DECLARE_FUNCTION(execWindowsPlatform); \
	DECLARE_FUNCTION(execWithEditor); \
	DECLARE_FUNCTION(execShippingBuild); \
	DECLARE_FUNCTION(execTestBuild); \
	DECLARE_FUNCTION(execDevelopmentBuild); \
	DECLARE_FUNCTION(execDebugBuild); \
	DECLARE_FUNCTION(execGetPlatformType); \
	DECLARE_FUNCTION(execSwitchOnPlatformType); \
	DECLARE_FUNCTION(execGridSnapRotation); \
	DECLARE_FUNCTION(execRotatorDifference); \
	DECLARE_FUNCTION(execClampToBounds); \
	DECLARE_FUNCTION(execGetCenterBetweenPoints); \
	DECLARE_FUNCTION(execRoundVector); \
	DECLARE_FUNCTION(execClampVector2D); \
	DECLARE_FUNCTION(execVector2D_Max); \
	DECLARE_FUNCTION(execVector2D_Min); \
	DECLARE_FUNCTION(execGetCenterBetweenPoints2D); \
	DECLARE_FUNCTION(execInRange); \
	DECLARE_FUNCTION(execRound2DVector); \
	DECLARE_FUNCTION(execNegate_Float); \
	DECLARE_FUNCTION(execSort_Float); \
	DECLARE_FUNCTION(execRandomFloatInRange_Vector2D); \
	DECLARE_FUNCTION(execLoopToRange_Float); \
	DECLARE_FUNCTION(execOneMinus); \
	DECLARE_FUNCTION(execNegate_Int); \
	DECLARE_FUNCTION(execSort_Int); \
	DECLARE_FUNCTION(execRandomIntegerInRange_IntPoint); \
	DECLARE_FUNCTION(execLoopToRange_Int); \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise3D); \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise2D); \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise1D); \
	DECLARE_FUNCTION(execPerlinNoise3D); \
	DECLARE_FUNCTION(execPerlinNoise2D); \
	DECLARE_FUNCTION(execPerlinNoise1D); \
	DECLARE_FUNCTION(execOctavePerlinNoise3D); \
	DECLARE_FUNCTION(execOctavePerlinNoise2D); \
	DECLARE_FUNCTION(execOctavePerlinNoise1D); \
	DECLARE_FUNCTION(execQuatToVector); \
	DECLARE_FUNCTION(execInverse); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execFindBetweenNormals); \
	DECLARE_FUNCTION(execQuatAxisAngleDeg); \
	DECLARE_FUNCTION(execQuatAxisAngleRad); \
	DECLARE_FUNCTION(execBreakTransformQuat); \
	DECLARE_FUNCTION(execGetTransformQuat); \
	DECLARE_FUNCTION(execSetComponentWorldRotation); \
	DECLARE_FUNCTION(execSetComponentRelativeRotation); \
	DECLARE_FUNCTION(execSetActorRotation); \
	DECLARE_FUNCTION(execSetActorRelativeRotation); \
	DECLARE_FUNCTION(execAddComponentWorldRotation); \
	DECLARE_FUNCTION(execAddComponentRelativeRotation); \
	DECLARE_FUNCTION(execAddComponentLocalRotation); \
	DECLARE_FUNCTION(execAddActorWorldRotation); \
	DECLARE_FUNCTION(execAddActorLocalRotation); \
	DECLARE_FUNCTION(execQuatToString); \
	DECLARE_FUNCTION(execAreQuatsEqual); \
	DECLARE_FUNCTION(execQuatDivFloatScale); \
	DECLARE_FUNCTION(execQuatMultiplyFloatScale); \
	DECLARE_FUNCTION(execQuatMultiplyQuat); \
	DECLARE_FUNCTION(execQuatMinusQuat); \
	DECLARE_FUNCTION(execQuatPlusQuat); \
	DECLARE_FUNCTION(execQuatToEulerDeg); \
	DECLARE_FUNCTION(execEulerDegToQuat); \
	DECLARE_FUNCTION(execAngleBetweenQuatsDeg); \
	DECLARE_FUNCTION(execAngleBetweenQuatsRad); \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsDeg); \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsRad); \
	DECLARE_FUNCTION(execQuatToRotator); \
	DECLARE_FUNCTION(execRotatorToQuat); \
	DECLARE_FUNCTION(execVectorToOrientationRotator); \
	DECLARE_FUNCTION(execVectorToOrientationQuat); \
	DECLARE_FUNCTION(execDot); \
	DECLARE_FUNCTION(execSlerp_NotNormalized); \
	DECLARE_FUNCTION(execSlerp); \
	DECLARE_FUNCTION(execFastBiLerp); \
	DECLARE_FUNCTION(execBiLerp); \
	DECLARE_FUNCTION(execFastLerp); \
	DECLARE_FUNCTION(execLerp); \
	DECLARE_FUNCTION(execFPercent); \
	DECLARE_FUNCTION(execFDivide); \
	DECLARE_FUNCTION(execFMultiply); \
	DECLARE_FUNCTION(execFDecrement); \
	DECLARE_FUNCTION(execFIncrement); \
	DECLARE_FUNCTION(execFPreDecrement); \
	DECLARE_FUNCTION(execFPosDecrement); \
	DECLARE_FUNCTION(execFPreIncrement); \
	DECLARE_FUNCTION(execFPosIncrement); \
	DECLARE_FUNCTION(execINTPercent); \
	DECLARE_FUNCTION(execINTModulo); \
	DECLARE_FUNCTION(execINTDivide); \
	DECLARE_FUNCTION(execINTMultiply); \
	DECLARE_FUNCTION(execINTDecrement); \
	DECLARE_FUNCTION(execINTIncrement); \
	DECLARE_FUNCTION(execINTPreDecrement); \
	DECLARE_FUNCTION(execINTPosDecrement); \
	DECLARE_FUNCTION(execINTPreIncrement); \
	DECLARE_FUNCTION(execINTPosIncrement); \
	DECLARE_FUNCTION(execBranch_PhysMat); \
	DECLARE_FUNCTION(execBranch_Trace); \
	DECLARE_FUNCTION(execBranch_PCNotEqual); \
	DECLARE_FUNCTION(execBranch_PCEquals); \
	DECLARE_FUNCTION(execBranch_SCNotEqual); \
	DECLARE_FUNCTION(execBranch_SCEquals); \
	DECLARE_FUNCTION(execBranch_ANotEqual); \
	DECLARE_FUNCTION(execBranch_AEquals); \
	DECLARE_FUNCTION(execBranch_Color); \
	DECLARE_FUNCTION(execBranch_FGreaterOREqual); \
	DECLARE_FUNCTION(execBranch_FLessOREqual); \
	DECLARE_FUNCTION(execBranch_FGreaterThan); \
	DECLARE_FUNCTION(execBranch_FLessThan); \
	DECLARE_FUNCTION(execBranch_FNotEqual); \
	DECLARE_FUNCTION(execBranch_FEquals); \
	DECLARE_FUNCTION(execBranch_INTGreaterOREqual); \
	DECLARE_FUNCTION(execBranch_INTLessOREqual); \
	DECLARE_FUNCTION(execBranch_INTGreaterThan); \
	DECLARE_FUNCTION(execBranch_INTLessThan); \
	DECLARE_FUNCTION(execBranch_INTNotEqual); \
	DECLARE_FUNCTION(execBranch_INTEquals); \
	DECLARE_FUNCTION(execBranch_TXEquals); \
	DECLARE_FUNCTION(execBranch_STEquals); \
	DECLARE_FUNCTION(execBranch_ONotEqual); \
	DECLARE_FUNCTION(execBranch_OEquals); \
	DECLARE_FUNCTION(execGetTextureFromDataTable); \
	DECLARE_FUNCTION(execGetStringValueFromDataTable); \
	DECLARE_FUNCTION(execGetFloatValueFromDataTable); \
	DECLARE_FUNCTION(execGetIntValueFromDataTable); \
	DECLARE_FUNCTION(execGetCSVRowNames); \
	DECLARE_FUNCTION(execGetCSVTableString);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnion_Date); \
	DECLARE_FUNCTION(execIntersection_Date); \
	DECLARE_FUNCTION(execHull_Date); \
	DECLARE_FUNCTION(execDifference_Date); \
	DECLARE_FUNCTION(execSplit_Date); \
	DECLARE_FUNCTION(execSize_Date); \
	DECLARE_FUNCTION(execIsEmpty_Date); \
	DECLARE_FUNCTION(execIsDegenerate_Date); \
	DECLARE_FUNCTION(execHasUpperBound_Date); \
	DECLARE_FUNCTION(execHasLowerBound_Date); \
	DECLARE_FUNCTION(execContiguous_Date); \
	DECLARE_FUNCTION(execContains_Date); \
	DECLARE_FUNCTION(execGetUpperBoundValue_Date); \
	DECLARE_FUNCTION(execGetLowerBoundValue_Date); \
	DECLARE_FUNCTION(execUnion_Int); \
	DECLARE_FUNCTION(execIntersection_Int); \
	DECLARE_FUNCTION(execHull_Int); \
	DECLARE_FUNCTION(execDifference_Int); \
	DECLARE_FUNCTION(execSplit_Int); \
	DECLARE_FUNCTION(execSize_Int); \
	DECLARE_FUNCTION(execIsEmpty_Int); \
	DECLARE_FUNCTION(execIsDegenerate_Int); \
	DECLARE_FUNCTION(execHasUpperBound_Int); \
	DECLARE_FUNCTION(execHasLowerBound_Int); \
	DECLARE_FUNCTION(execContiguous_Int); \
	DECLARE_FUNCTION(execContains_Int); \
	DECLARE_FUNCTION(execGetUpperBoundValue_Int); \
	DECLARE_FUNCTION(execGetLowerBoundValue_Int); \
	DECLARE_FUNCTION(execUnion_Float); \
	DECLARE_FUNCTION(execIntersection_Float); \
	DECLARE_FUNCTION(execHull_Float); \
	DECLARE_FUNCTION(execDifference_Float); \
	DECLARE_FUNCTION(execSplit_Float); \
	DECLARE_FUNCTION(execSize_Float); \
	DECLARE_FUNCTION(execIsEmpty_Float); \
	DECLARE_FUNCTION(execIsDegenerate_Float); \
	DECLARE_FUNCTION(execHasUpperBound_Float); \
	DECLARE_FUNCTION(execHasLowerBound_Float); \
	DECLARE_FUNCTION(execContiguous_Float); \
	DECLARE_FUNCTION(execContains_Float); \
	DECLARE_FUNCTION(execGetUpperBoundValue_Float); \
	DECLARE_FUNCTION(execGetLowerBoundValue_Float); \
	DECLARE_FUNCTION(execDivide_vf); \
	DECLARE_FUNCTION(execMultiply_vf); \
	DECLARE_FUNCTION(execSubtract_vf); \
	DECLARE_FUNCTION(execAdd_vf); \
	DECLARE_FUNCTION(execDivide_vi); \
	DECLARE_FUNCTION(execMultiply_vi); \
	DECLARE_FUNCTION(execSubtract_vi); \
	DECLARE_FUNCTION(execAdd_vi); \
	DECLARE_FUNCTION(execDivide_v); \
	DECLARE_FUNCTION(execMultiply_v); \
	DECLARE_FUNCTION(execSubtract_v); \
	DECLARE_FUNCTION(execAdd_v); \
	DECLARE_FUNCTION(execDivide_fi); \
	DECLARE_FUNCTION(execMultiply_fi); \
	DECLARE_FUNCTION(execSubtract_fi); \
	DECLARE_FUNCTION(execAdd_fi); \
	DECLARE_FUNCTION(execDivide_f); \
	DECLARE_FUNCTION(execMultiply_f); \
	DECLARE_FUNCTION(execSubtract_f); \
	DECLARE_FUNCTION(execAdd_f); \
	DECLARE_FUNCTION(execDivide_if); \
	DECLARE_FUNCTION(execMultiply_if); \
	DECLARE_FUNCTION(execSubtract_if); \
	DECLARE_FUNCTION(execAdd_if); \
	DECLARE_FUNCTION(execDivide_i); \
	DECLARE_FUNCTION(execMultiply_i); \
	DECLARE_FUNCTION(execSubtract_i); \
	DECLARE_FUNCTION(execAdd_i); \
	DECLARE_FUNCTION(execNewXmlDocument); \
	DECLARE_FUNCTION(execEaseBounceOutIn); \
	DECLARE_FUNCTION(execEaseElasticOutIn); \
	DECLARE_FUNCTION(execEaseBackOutIn); \
	DECLARE_FUNCTION(execEaseCircOutIn); \
	DECLARE_FUNCTION(execEaseExpoOutIn); \
	DECLARE_FUNCTION(execEaseQuintOutIn); \
	DECLARE_FUNCTION(execEaseQuartOutIn); \
	DECLARE_FUNCTION(execEaseCubicOutIn); \
	DECLARE_FUNCTION(execEaseQuadOutIn); \
	DECLARE_FUNCTION(execEaseSineOutIn); \
	DECLARE_FUNCTION(execEaseBounceInOut); \
	DECLARE_FUNCTION(execEaseBounceOut); \
	DECLARE_FUNCTION(execEaseBounceIn); \
	DECLARE_FUNCTION(execEaseElasticInOut); \
	DECLARE_FUNCTION(execEaseElasticOut); \
	DECLARE_FUNCTION(execEaseElasticIn); \
	DECLARE_FUNCTION(execEaseBackInOut); \
	DECLARE_FUNCTION(execEaseBackOut); \
	DECLARE_FUNCTION(execEaseBackIn); \
	DECLARE_FUNCTION(execEaseCircInOut); \
	DECLARE_FUNCTION(execEaseCircOut); \
	DECLARE_FUNCTION(execEaseCircIn); \
	DECLARE_FUNCTION(execEaseExpoInOut); \
	DECLARE_FUNCTION(execEaseExpoOut); \
	DECLARE_FUNCTION(execEaseExpoIn); \
	DECLARE_FUNCTION(execEaseQuintInOut); \
	DECLARE_FUNCTION(execEaseQuintOut); \
	DECLARE_FUNCTION(execEaseQuintIn); \
	DECLARE_FUNCTION(execEaseQuartInOut); \
	DECLARE_FUNCTION(execEaseQuartOut); \
	DECLARE_FUNCTION(execEaseQuartIn); \
	DECLARE_FUNCTION(execEaseCubicInOut); \
	DECLARE_FUNCTION(execEaseCubicOut); \
	DECLARE_FUNCTION(execEaseCubicIn); \
	DECLARE_FUNCTION(execEaseQuadInOut); \
	DECLARE_FUNCTION(execEaseQuadOut); \
	DECLARE_FUNCTION(execEaseQuadIn); \
	DECLARE_FUNCTION(execEaseSineInOut); \
	DECLARE_FUNCTION(execEaseSineOut); \
	DECLARE_FUNCTION(execEaseSineIn); \
	DECLARE_FUNCTION(execEaseLinear); \
	DECLARE_FUNCTION(execEaseInterpolate); \
	DECLARE_FUNCTION(execWorldPointIsInsideBox); \
	DECLARE_FUNCTION(execRemoveAllChildren); \
	DECLARE_FUNCTION(execGetActorScreenBox); \
	DECLARE_FUNCTION(execVectorIsNearlyZero); \
	DECLARE_FUNCTION(execMakeLiteralFBox2D); \
	DECLARE_FUNCTION(execMinAndMaxOfFloatArray); \
	DECLARE_FUNCTION(execBoxIntersectsBox); \
	DECLARE_FUNCTION(execBoxIsInsideBox); \
	DECLARE_FUNCTION(execPointIsInsideBox); \
	DECLARE_FUNCTION(execRepeatFloat); \
	DECLARE_FUNCTION(execDeltaAngle); \
	DECLARE_FUNCTION(execMoveTowards); \
	DECLARE_FUNCTION(execMoveTowardsAngle); \
	DECLARE_FUNCTION(execMoveTowardsRotator); \
	DECLARE_FUNCTION(execMoveTowardsVector); \
	DECLARE_FUNCTION(execHasRuntimeCooking); \
	DECLARE_FUNCTION(execConvertLinearColors); \
	DECLARE_FUNCTION(execIsActorWithinFrustum); \
	DECLARE_FUNCTION(execWasActorRenderedRecently); \
	DECLARE_FUNCTION(execGetActorLastRenderTime); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execLoadWaveDataFromFile); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsetsFromRotation); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsets); \
	DECLARE_FUNCTION(execLoadStringFromFile); \
	DECLARE_FUNCTION(execLoadStringArrayFromFile); \
	DECLARE_FUNCTION(execVictorySimulateMouseWheel); \
	DECLARE_FUNCTION(execVerticalFOV); \
	DECLARE_FUNCTION(execHorizontalFOV); \
	DECLARE_FUNCTION(execGetCommandLine); \
	DECLARE_FUNCTION(execVictory_GetGPUInfo); \
	DECLARE_FUNCTION(execProjectWorldToScreenPosition); \
	DECLARE_FUNCTION(execSelection_SelectionBox); \
	DECLARE_FUNCTION(execUnloadStreamingLevel); \
	DECLARE_FUNCTION(execHideStreamingLevel); \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels); \
	DECLARE_FUNCTION(execAddToStreamingLevels); \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport); \
	DECLARE_FUNCTION(execCreatePrimitiveComponent); \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter); \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D); \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D); \
	DECLARE_FUNCTION(execVictory_SavePixels); \
	DECLARE_FUNCTION(execVictory_Get_Pixel); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile); \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile); \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir); \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir); \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory); \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir); \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation); \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser); \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes); \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime); \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime); \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform); \
	DECLARE_FUNCTION(execGetObjectPath); \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath); \
	DECLARE_FUNCTION(execTransformVectorToActorSpace); \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execOpenExe); \
	DECLARE_FUNCTION(execGetGamePath); \
	DECLARE_FUNCTION(execDeleteFileII); \
	DECLARE_FUNCTION(execWriteFile); \
	DECLARE_FUNCTION(execReadFile); \
	DECLARE_FUNCTION(execWriteCustomPathConfig); \
	DECLARE_FUNCTION(execReadCustomPathConfig); \
	DECLARE_FUNCTION(execWriteConfig); \
	DECLARE_FUNCTION(execReadConfig); \
	DECLARE_FUNCTION(execIsVaildPath); \
	DECLARE_FUNCTION(execLoadTexture2DFromFile); \
	DECLARE_FUNCTION(execLoadGameFromSlotCompressed); \
	DECLARE_FUNCTION(execSaveGameToSlotCompressed); \
	DECLARE_FUNCTION(execGetHitTraceEnd); \
	DECLARE_FUNCTION(execGetHitTraceStart); \
	DECLARE_FUNCTION(execGetHitFaceIndex); \
	DECLARE_FUNCTION(execGetHitItem); \
	DECLARE_FUNCTION(execGetHitBoneName); \
	DECLARE_FUNCTION(execGetHitComponent); \
	DECLARE_FUNCTION(execGetHitActor); \
	DECLARE_FUNCTION(execGetHitImpactNormal); \
	DECLARE_FUNCTION(execGetHitNormal); \
	DECLARE_FUNCTION(execGetHitImpactPoint); \
	DECLARE_FUNCTION(execGetHitLocation); \
	DECLARE_FUNCTION(execGetHitDistance); \
	DECLARE_FUNCTION(execGetHitTime); \
	DECLARE_FUNCTION(execGetHitInitialOverlap); \
	DECLARE_FUNCTION(execGetHitBlockingHit); \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds); \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds); \
	DECLARE_FUNCTION(execGetReplayPlaybackSpeed); \
	DECLARE_FUNCTION(execSetReplayPlaybackSpeed); \
	DECLARE_FUNCTION(execSetReplayPausedState); \
	DECLARE_FUNCTION(execJumpToTimeInReplay); \
	DECLARE_FUNCTION(execAddUserToReplay); \
	DECLARE_FUNCTION(execPlayReplay); \
	DECLARE_FUNCTION(execStopRecordingReplay); \
	DECLARE_FUNCTION(execStartRecordingReplay); \
	DECLARE_FUNCTION(execBuildSplineMeshesAlongSpline); \
	DECLARE_FUNCTION(execFindLocationAndRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execFindScaleAtSplineInputKey); \
	DECLARE_FUNCTION(execFindRollAtSplineInputKey); \
	DECLARE_FUNCTION(execFindTransformAtSplineInputKey); \
	DECLARE_FUNCTION(execFindRightVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execFindUpVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execFindRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execFindDirectionAtSplineInputKey); \
	DECLARE_FUNCTION(execFindTangentAtSplineInputKey); \
	DECLARE_FUNCTION(execFindLocationAtSplineInputKey); \
	DECLARE_FUNCTION(execSnapSingleSplinePointToGround); \
	DECLARE_FUNCTION(execSnapAllSplinePointsToGround); \
	DECLARE_FUNCTION(execGetLastSplinePoint); \
	DECLARE_FUNCTION(execIsValidSplinePoint); \
	DECLARE_FUNCTION(execSnapActorToGround); \
	DECLARE_FUNCTION(execDrawDebugCoordinateArrowsAtComponent); \
	DECLARE_FUNCTION(execGetClosestActorToPoint); \
	DECLARE_FUNCTION(execGetClosestComponentToPoint); \
	DECLARE_FUNCTION(execFindActorComponentByName); \
	DECLARE_FUNCTION(execFindSceneComponentByName); \
	DECLARE_FUNCTION(execGetCurrentCheckboxImage); \
	DECLARE_FUNCTION(execSetCheckboxStyleToImage); \
	DECLARE_FUNCTION(execIsValidChildIndexInPanel); \
	DECLARE_FUNCTION(execGetLastChildIndex); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execSetFontTypeface); \
	DECLARE_FUNCTION(execSetFontOutline); \
	DECLARE_FUNCTION(execSetFontMaterial); \
	DECLARE_FUNCTION(execSetFontFamily); \
	DECLARE_FUNCTION(execGetAllWidgetsOfTypeInUserWidget); \
	DECLARE_FUNCTION(execClearAllUserFocus); \
	DECLARE_FUNCTION(execGetAllSubWidgetsInParent); \
	DECLARE_FUNCTION(execGetWidgetInFocus); \
	DECLARE_FUNCTION(execEquals_InputActionKeyMapping); \
	DECLARE_FUNCTION(execEquals_InputAxisKeyMapping); \
	DECLARE_FUNCTION(execClearInputMappings); \
	DECLARE_FUNCTION(execGetLastMaterialIndex); \
	DECLARE_FUNCTION(execGetAxisValueOfInputs); \
	DECLARE_FUNCTION(execGetDirectionalInputsFromDirectionalKeys); \
	DECLARE_FUNCTION(execMarkRenderDity_Comps); \
	DECLARE_FUNCTION(execFindFirstInstanceOfActorType); \
	DECLARE_FUNCTION(execGetNumberOfActorsOfType); \
	DECLARE_FUNCTION(execIsOverlappingAnyActors); \
	DECLARE_FUNCTION(execAreObjectsValid); \
	DECLARE_FUNCTION(execMarkRenderDirty); \
	DECLARE_FUNCTION(execIsRotatorZero); \
	DECLARE_FUNCTION(execGetSocketRelativeRotation); \
	DECLARE_FUNCTION(execGetSocketRelativeLocation); \
	DECLARE_FUNCTION(execSetAngularVelocityInRadiansToComponentBody); \
	DECLARE_FUNCTION(execSetLinearVelocityToComponentBody); \
	DECLARE_FUNCTION(execAddAngularImpulseInRadiansToComponentBody); \
	DECLARE_FUNCTION(execAddTorqueInRadiansToComponentBody); \
	DECLARE_FUNCTION(execAddImpulseToComponentBody); \
	DECLARE_FUNCTION(execAddImpulseAtPositionToComponentBody); \
	DECLARE_FUNCTION(execAddForceAtPositionToComponentBody); \
	DECLARE_FUNCTION(execAddForceToComponentBody); \
	DECLARE_FUNCTION(execTryGetPlayerControllerFromPawn); \
	DECLARE_FUNCTION(execTrySetPlayerInputEnabled); \
	DECLARE_FUNCTION(execSetInputPriority); \
	DECLARE_FUNCTION(execGetInputPriority); \
	DECLARE_FUNCTION(execGetPlayerIP); \
	DECLARE_FUNCTION(execGetServerIP); \
	DECLARE_FUNCTION(execGetServerIpFromGamemode); \
	DECLARE_FUNCTION(execGetConnectedClientIPs); \
	DECLARE_FUNCTION(execIsEmpty_Name); \
	DECLARE_FUNCTION(execIsEmpty_String); \
	DECLARE_FUNCTION(execRemoveSpaces); \
	DECLARE_FUNCTION(execReplaceUnderscore); \
	DECLARE_FUNCTION(execPrintStringWithCategory); \
	DECLARE_FUNCTION(execIncreaseVerbosityOfMessage); \
	DECLARE_FUNCTION(execSortStrings); \
	DECLARE_FUNCTION(execGetObjectsOf); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execGetSubDirectories); \
	DECLARE_FUNCTION(execGetLocalAppDataDirectory); \
	DECLARE_FUNCTION(execConv_CollisionChannelToObjectTypeQuery); \
	DECLARE_FUNCTION(execConv_CollisionChannelsToObjectTypeQuerys); \
	DECLARE_FUNCTION(execConv_LinearColorToSlateColor); \
	DECLARE_FUNCTION(execGetClassFromAssetPath); \
	DECLARE_FUNCTION(execGetAllLevels); \
	DECLARE_FUNCTION(execIsClassSameAs); \
	DECLARE_FUNCTION(execAreObjectsSameClass); \
	DECLARE_FUNCTION(execRequestExit); \
	DECLARE_FUNCTION(execForceCrash); \
	DECLARE_FUNCTION(execDesktopPlatform); \
	DECLARE_FUNCTION(execIosPlatform); \
	DECLARE_FUNCTION(execAndroidPlatform); \
	DECLARE_FUNCTION(execSwitchPlatform); \
	DECLARE_FUNCTION(execXboxOnePlatform); \
	DECLARE_FUNCTION(execPs4Platform); \
	DECLARE_FUNCTION(execMacPlatform); \
	DECLARE_FUNCTION(execLinuxPlatform); \
	DECLARE_FUNCTION(execWindowsRtArmPlatform); \
	DECLARE_FUNCTION(execWindowsRtPlatform); \
	DECLARE_FUNCTION(execWindows64Platform); \
	DECLARE_FUNCTION(execWindows32Platform); \
	DECLARE_FUNCTION(execWindowsPlatform); \
	DECLARE_FUNCTION(execWithEditor); \
	DECLARE_FUNCTION(execShippingBuild); \
	DECLARE_FUNCTION(execTestBuild); \
	DECLARE_FUNCTION(execDevelopmentBuild); \
	DECLARE_FUNCTION(execDebugBuild); \
	DECLARE_FUNCTION(execGetPlatformType); \
	DECLARE_FUNCTION(execSwitchOnPlatformType); \
	DECLARE_FUNCTION(execGridSnapRotation); \
	DECLARE_FUNCTION(execRotatorDifference); \
	DECLARE_FUNCTION(execClampToBounds); \
	DECLARE_FUNCTION(execGetCenterBetweenPoints); \
	DECLARE_FUNCTION(execRoundVector); \
	DECLARE_FUNCTION(execClampVector2D); \
	DECLARE_FUNCTION(execVector2D_Max); \
	DECLARE_FUNCTION(execVector2D_Min); \
	DECLARE_FUNCTION(execGetCenterBetweenPoints2D); \
	DECLARE_FUNCTION(execInRange); \
	DECLARE_FUNCTION(execRound2DVector); \
	DECLARE_FUNCTION(execNegate_Float); \
	DECLARE_FUNCTION(execSort_Float); \
	DECLARE_FUNCTION(execRandomFloatInRange_Vector2D); \
	DECLARE_FUNCTION(execLoopToRange_Float); \
	DECLARE_FUNCTION(execOneMinus); \
	DECLARE_FUNCTION(execNegate_Int); \
	DECLARE_FUNCTION(execSort_Int); \
	DECLARE_FUNCTION(execRandomIntegerInRange_IntPoint); \
	DECLARE_FUNCTION(execLoopToRange_Int); \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise3D); \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise2D); \
	DECLARE_FUNCTION(execAccumulatedPerlinNoise1D); \
	DECLARE_FUNCTION(execPerlinNoise3D); \
	DECLARE_FUNCTION(execPerlinNoise2D); \
	DECLARE_FUNCTION(execPerlinNoise1D); \
	DECLARE_FUNCTION(execOctavePerlinNoise3D); \
	DECLARE_FUNCTION(execOctavePerlinNoise2D); \
	DECLARE_FUNCTION(execOctavePerlinNoise1D); \
	DECLARE_FUNCTION(execQuatToVector); \
	DECLARE_FUNCTION(execInverse); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execFindBetweenNormals); \
	DECLARE_FUNCTION(execQuatAxisAngleDeg); \
	DECLARE_FUNCTION(execQuatAxisAngleRad); \
	DECLARE_FUNCTION(execBreakTransformQuat); \
	DECLARE_FUNCTION(execGetTransformQuat); \
	DECLARE_FUNCTION(execSetComponentWorldRotation); \
	DECLARE_FUNCTION(execSetComponentRelativeRotation); \
	DECLARE_FUNCTION(execSetActorRotation); \
	DECLARE_FUNCTION(execSetActorRelativeRotation); \
	DECLARE_FUNCTION(execAddComponentWorldRotation); \
	DECLARE_FUNCTION(execAddComponentRelativeRotation); \
	DECLARE_FUNCTION(execAddComponentLocalRotation); \
	DECLARE_FUNCTION(execAddActorWorldRotation); \
	DECLARE_FUNCTION(execAddActorLocalRotation); \
	DECLARE_FUNCTION(execQuatToString); \
	DECLARE_FUNCTION(execAreQuatsEqual); \
	DECLARE_FUNCTION(execQuatDivFloatScale); \
	DECLARE_FUNCTION(execQuatMultiplyFloatScale); \
	DECLARE_FUNCTION(execQuatMultiplyQuat); \
	DECLARE_FUNCTION(execQuatMinusQuat); \
	DECLARE_FUNCTION(execQuatPlusQuat); \
	DECLARE_FUNCTION(execQuatToEulerDeg); \
	DECLARE_FUNCTION(execEulerDegToQuat); \
	DECLARE_FUNCTION(execAngleBetweenQuatsDeg); \
	DECLARE_FUNCTION(execAngleBetweenQuatsRad); \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsDeg); \
	DECLARE_FUNCTION(execAngleBetweenDirectionVectorsRad); \
	DECLARE_FUNCTION(execQuatToRotator); \
	DECLARE_FUNCTION(execRotatorToQuat); \
	DECLARE_FUNCTION(execVectorToOrientationRotator); \
	DECLARE_FUNCTION(execVectorToOrientationQuat); \
	DECLARE_FUNCTION(execDot); \
	DECLARE_FUNCTION(execSlerp_NotNormalized); \
	DECLARE_FUNCTION(execSlerp); \
	DECLARE_FUNCTION(execFastBiLerp); \
	DECLARE_FUNCTION(execBiLerp); \
	DECLARE_FUNCTION(execFastLerp); \
	DECLARE_FUNCTION(execLerp); \
	DECLARE_FUNCTION(execFPercent); \
	DECLARE_FUNCTION(execFDivide); \
	DECLARE_FUNCTION(execFMultiply); \
	DECLARE_FUNCTION(execFDecrement); \
	DECLARE_FUNCTION(execFIncrement); \
	DECLARE_FUNCTION(execFPreDecrement); \
	DECLARE_FUNCTION(execFPosDecrement); \
	DECLARE_FUNCTION(execFPreIncrement); \
	DECLARE_FUNCTION(execFPosIncrement); \
	DECLARE_FUNCTION(execINTPercent); \
	DECLARE_FUNCTION(execINTModulo); \
	DECLARE_FUNCTION(execINTDivide); \
	DECLARE_FUNCTION(execINTMultiply); \
	DECLARE_FUNCTION(execINTDecrement); \
	DECLARE_FUNCTION(execINTIncrement); \
	DECLARE_FUNCTION(execINTPreDecrement); \
	DECLARE_FUNCTION(execINTPosDecrement); \
	DECLARE_FUNCTION(execINTPreIncrement); \
	DECLARE_FUNCTION(execINTPosIncrement); \
	DECLARE_FUNCTION(execBranch_PhysMat); \
	DECLARE_FUNCTION(execBranch_Trace); \
	DECLARE_FUNCTION(execBranch_PCNotEqual); \
	DECLARE_FUNCTION(execBranch_PCEquals); \
	DECLARE_FUNCTION(execBranch_SCNotEqual); \
	DECLARE_FUNCTION(execBranch_SCEquals); \
	DECLARE_FUNCTION(execBranch_ANotEqual); \
	DECLARE_FUNCTION(execBranch_AEquals); \
	DECLARE_FUNCTION(execBranch_Color); \
	DECLARE_FUNCTION(execBranch_FGreaterOREqual); \
	DECLARE_FUNCTION(execBranch_FLessOREqual); \
	DECLARE_FUNCTION(execBranch_FGreaterThan); \
	DECLARE_FUNCTION(execBranch_FLessThan); \
	DECLARE_FUNCTION(execBranch_FNotEqual); \
	DECLARE_FUNCTION(execBranch_FEquals); \
	DECLARE_FUNCTION(execBranch_INTGreaterOREqual); \
	DECLARE_FUNCTION(execBranch_INTLessOREqual); \
	DECLARE_FUNCTION(execBranch_INTGreaterThan); \
	DECLARE_FUNCTION(execBranch_INTLessThan); \
	DECLARE_FUNCTION(execBranch_INTNotEqual); \
	DECLARE_FUNCTION(execBranch_INTEquals); \
	DECLARE_FUNCTION(execBranch_TXEquals); \
	DECLARE_FUNCTION(execBranch_STEquals); \
	DECLARE_FUNCTION(execBranch_ONotEqual); \
	DECLARE_FUNCTION(execBranch_OEquals); \
	DECLARE_FUNCTION(execGetTextureFromDataTable); \
	DECLARE_FUNCTION(execGetStringValueFromDataTable); \
	DECLARE_FUNCTION(execGetFloatValueFromDataTable); \
	DECLARE_FUNCTION(execGetIntValueFromDataTable); \
	DECLARE_FUNCTION(execGetCSVRowNames); \
	DECLARE_FUNCTION(execGetCSVTableString);


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUESLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UESLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UESLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UESLibraryBPLibrary)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS \
private: \
	static void StaticRegisterNativesUESLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UESLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UESLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ESLibrary"), NO_API) \
	DECLARE_SERIALIZER(UESLibraryBPLibrary)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESLibraryBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESLibraryBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESLibraryBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESLibraryBPLibrary(UESLibraryBPLibrary&&); \
	NO_API UESLibraryBPLibrary(const UESLibraryBPLibrary&); \
public:


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UESLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UESLibraryBPLibrary(UESLibraryBPLibrary&&); \
	NO_API UESLibraryBPLibrary(const UESLibraryBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UESLibraryBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UESLibraryBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UESLibraryBPLibrary)


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_274_PROLOG
#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_SPARSE_DATA \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_INCLASS_NO_PURE_DECLS \
	FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h_277_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ESLibraryBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESLIBRARY_API UClass* StaticClass<class UESLibraryBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPPLibrary_Plugins_ESLibrary_Source_ESLibrary_Public_ESLibraryBPLibrary_h


#define FOREACH_ENUM_EN_ISVALID(op) \
	op(EN_IsValid::IsValid) \
	op(EN_IsValid::IsNot) 

enum class EN_IsValid : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_IsValid>();

#define FOREACH_ENUM_EN_EQUALS(op) \
	op(EN_Equals::IfEquals) \
	op(EN_Equals::IfNot) 

enum class EN_Equals : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_Equals>();

#define FOREACH_ENUM_EN_NOTEQUAL(op) \
	op(EN_NotEqual::IfNotEqual) \
	op(EN_NotEqual::IfSo) 

enum class EN_NotEqual : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_NotEqual>();

#define FOREACH_ENUM_EN_MATCH(op) \
	op(EN_Match::IfMatch) \
	op(EN_Match::IfNot) 

enum class EN_Match : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_Match>();

#define FOREACH_ENUM_EN_IFTHENELSE(op) \
	op(EN_IfThenElse::IfTrue) \
	op(EN_IfThenElse::ElseDo) 

enum class EN_IfThenElse : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EN_IfThenElse>();

#define FOREACH_ENUM_EPLATFORMTYPE(op) \
	op(EPlatformType::XboxOne) \
	op(EPlatformType::PS4) \
	op(EPlatformType::Switch) \
	op(EPlatformType::Desktop) 

enum class EPlatformType : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EPlatformType>();

#define FOREACH_ENUM_EEXTRASWITCH(op) \
	op(EExtraSwitch::OnSucceeded) \
	op(EExtraSwitch::OnFailed) 

enum class EExtraSwitch : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EExtraSwitch>();

#define FOREACH_ENUM_EFOCUSCAUSEDBY(op) \
	op(EFocusCausedBy::Mouse) \
	op(EFocusCausedBy::Navigation) \
	op(EFocusCausedBy::SetDirectly) \
	op(EFocusCausedBy::Cleared) \
	op(EFocusCausedBy::OtherWidgetLostFocus) \
	op(EFocusCausedBy::WindowActivate) 

enum class EFocusCausedBy : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EFocusCausedBy>();

#define FOREACH_ENUM_DIRTYPE(op) \
	op(DirType::GameDir) \
	op(DirType::ContentDir) 

enum class DirType : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<DirType>();

#define FOREACH_ENUM_EJOYIMAGEFORMATS(op) \
	op(EJoyImageFormats::JPG) \
	op(EJoyImageFormats::PNG) \
	op(EJoyImageFormats::BMP) \
	op(EJoyImageFormats::ICO) \
	op(EJoyImageFormats::EXR) \
	op(EJoyImageFormats::ICNS) 

enum class EJoyImageFormats : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EJoyImageFormats>();

#define FOREACH_ENUM_EEASINGTYPE(op) \
	op(EEasingType::Linear) \
	op(EEasingType::SineIn) \
	op(EEasingType::SineOut) \
	op(EEasingType::SineInOut) \
	op(EEasingType::QuadIn) \
	op(EEasingType::QuadOut) \
	op(EEasingType::QuadInOut) \
	op(EEasingType::CubicIn) \
	op(EEasingType::CubicOut) \
	op(EEasingType::CubicInOut) \
	op(EEasingType::QuartIn) \
	op(EEasingType::QuartOut) \
	op(EEasingType::QuartInOut) \
	op(EEasingType::QuintIn) \
	op(EEasingType::QuintOut) \
	op(EEasingType::QuintInOut) \
	op(EEasingType::ExpoIn) \
	op(EEasingType::ExpoOut) \
	op(EEasingType::ExpoInOut) \
	op(EEasingType::CircIn) \
	op(EEasingType::CircOut) \
	op(EEasingType::CircInOut) \
	op(EEasingType::BackIn) \
	op(EEasingType::BackOut) \
	op(EEasingType::BackInOut) \
	op(EEasingType::ElasticIn) \
	op(EEasingType::ElasticOut) \
	op(EEasingType::ElasticInOut) \
	op(EEasingType::BounceIn) \
	op(EEasingType::BounceOut) \
	op(EEasingType::BounceInOut) \
	op(EEasingType::SineOutIn) \
	op(EEasingType::QuadOutIn) \
	op(EEasingType::CubicOutIn) \
	op(EEasingType::QuartOutIn) \
	op(EEasingType::QuintOutIn) \
	op(EEasingType::ExpoOutIn) \
	op(EEasingType::CircOutIn) \
	op(EEasingType::BackOutIn) \
	op(EEasingType::ElasticOutIn) \
	op(EEasingType::BounceOutIn) 

enum class EEasingType : uint8;
template<> ESLIBRARY_API UEnum* StaticEnum<EEasingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
