// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"

#include "GameFramework/PlayerInput.h"
#include "Styling/SlateColor.h"
#include "InputCoreTypes.h"
#include "Components/Widget.h"
#include "Components/SplineMeshComponent.h"
#include "Styling/SlateTypes.h"
#include "Components/SplineComponent.h"
#include "GameFramework/SaveGame.h"
#include "DDSLoader.h"
#include "DynamicLoader.h"
#include "Navigation/PathFollowingComponent.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Math/RangeBound.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Engine/LevelStreaming.h"
#include "SlateCore\Public\Styling\SlateBrush.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BXSLibraryBPLibrary.generated.h"



UENUM(BlueprintType)
enum class EN_IsValid : uint8 
{
	IsValid UMETA(DisplayName = "IsValid"),
	IsNot	UMETA(DisplayName = "IsNot")
};

UENUM(BlueprintType)
enum class EN_Equals : uint8 
{
	IfEquals UMETA(DisplayName = "IfEquals"),
	IfNot	 UMETA(DisplayName = "IfNot")
};

UENUM(BlueprintType)
enum class EN_NotEqual : uint8 
{
	IfNotEqual UMETA(DisplayName = "IfNotEqual"),
	IfSo	   UMETA(DisplayName = "IfSo")
};

UENUM(BlueprintType)
enum class EN_Match : uint8 
{
	IfMatch UMETA(DisplayName = "IfMatch"),
	IfNot	UMETA(DisplayName = "IfNot")
};

UENUM(BlueprintType)
enum class EN_IfThenElse : uint8 
{
	IfTrue,
	ElseDo
};

UENUM(BlueprintType)
enum class EPlatformType : uint8
{
	/** Xbox One */
	XboxOne UMETA(DisplayName = "Xbox One"),
	/** Playstation 4*/
	PS4 UMETA(DisplayName = "PS4"),
	/** Nintendo Switch */
	Switch UMETA(DisplayName = "Switch"),
	/** Windows, Mac, or Linux */
	Desktop UMETA(DisplayName = "Desktop")
};

UENUM()
enum class EExtraSwitch : uint8
{
	// On Success
	OnSucceeded,
	// On Failure
	OnFailed

	// meta = (ExpandEnumAsExecs = "Result")
	// EExtraSwitch &Result
};

UENUM(BlueprintType)
enum class EFocusCausedBy : uint8
{
	/** Focus was changed because of a mouse action. */
	Mouse					UMETA(DisplayName = "Mouse"),

	/** Focus was changed in response to a navigation, such as the arrow keys, TAB key, controller DPad, ... */
	Navigation				UMETA(DisplayName = "Navigation"),

	/** Focus was changed because someone asked the application to change it. */
	SetDirectly				UMETA(DisplayName = "Set Directly"),

	/** Focus was explicitly cleared via the escape key or other similar action. */
	Cleared					UMETA(DisplayName = "Cleared"),

	/** Focus was changed because another widget lost focus, and focus moved to a new widget. */
	OtherWidgetLostFocus	UMETA(DisplayName = "Other Widget Lost Focus"),

	/** Focus was set in response to the owning window being activated. */
	WindowActivate			UMETA(DisplayName = "Window Activate")
};

UENUM(BlueprintType)
enum class DirType : uint8
{
	GameDir,
	ContentDir
};

UENUM(BlueprintType)
enum class EJoyImageFormats : uint8
{
	JPG		UMETA(DisplayName = "JPG        "),
	PNG		UMETA(DisplayName = "PNG        "),
	BMP		UMETA(DisplayName = "BMP        "),
	ICO		UMETA(DisplayName = "ICO        "),
	EXR		UMETA(DisplayName = "EXR        "),
	ICNS	UMETA(DisplayName = "ICNS        ")
};

USTRUCT(BlueprintType)
struct FLevelStreamInstanceInfo
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		FName PackageName;

	UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		FName PackageNameToLoad;

	UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		FVector Location;

	UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		FRotator Rotation;

	UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		uint8 bShouldBeLoaded : 1;

	UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		uint8 bShouldBeVisible : 1;

	UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		uint8 bShouldBlockOnLoad : 1;

	UPROPERTY(Category = "BXS|LevelStreaming", BlueprintReadWrite)
		int32 LODIndex;

	FLevelStreamInstanceInfo() {}

	FLevelStreamInstanceInfo(ULevelStreamingDynamic* LevelInstance);

	FString ToString() const
	{
		return FString::Printf(TEXT("PackageName: %s\nPackageNameToLoad:%s\nLocation:%s\nRotation:%s\nbShouldBeLoaded:%s\nbShouldBeVisible:%s\nbShouldBlockOnLoad:%s\nLODIndex:%i")
			, *PackageName.ToString()
			, *PackageNameToLoad.ToString()
			, *Location.ToString()
			, *Rotation.ToString()
			, (bShouldBeLoaded) ? TEXT("True") : TEXT("False")
			, (bShouldBeVisible) ? TEXT("True") : TEXT("False")
			, (bShouldBlockOnLoad) ? TEXT("True") : TEXT("False")
			, LODIndex);
	}
};

UENUM(BlueprintType)
enum class EEasingType : uint8
{
	Linear UMETA(DisplayName = "Linear"),
	SineIn UMETA(DisplayName = "Sine In"),
	SineOut UMETA(DisplayName = "Sine Out"),
	SineInOut UMETA(DisplayName = "Sine In Out"),
	QuadIn UMETA(DisplayName = "Quad In"),
	QuadOut UMETA(DisplayName = "Quad Out"),
	QuadInOut UMETA(DisplayName = "Quad In Out"),
	CubicIn UMETA(DisplayName = "Cubic In"),
	CubicOut UMETA(DisplayName = "Cubic Out"),
	CubicInOut UMETA(DisplayName = "Cubic In Out"),
	QuartIn UMETA(DisplayName = "Quartic In"),
	QuartOut UMETA(DisplayName = "Quartic Out"),
	QuartInOut UMETA(DisplayName = "Quartic In Out"),
	QuintIn UMETA(DisplayName = "Quintic In"),
	QuintOut UMETA(DisplayName = "Quintic Out"),
	QuintInOut UMETA(DisplayName = "Quintic In Out"),
	ExpoIn UMETA(DisplayName = "Exponential In"),
	ExpoOut UMETA(DisplayName = "Exponential Out"),
	ExpoInOut UMETA(DisplayName = "Exponential In Out"),
	CircIn UMETA(DisplayName = "Circular In"),
	CircOut UMETA(DisplayName = "Circular Out"),
	CircInOut UMETA(DisplayName = "Circular In Out"),
	BackIn UMETA(DisplayName = "Back In"),
	BackOut UMETA(DisplayName = "Back Out"),
	BackInOut UMETA(DisplayName = "Back In Out"),
	ElasticIn UMETA(DisplayName = "Elastic In"),
	ElasticOut UMETA(DisplayName = "Elastic Out"),
	ElasticInOut UMETA(DisplayName = "Elastic In Out"),
	BounceIn UMETA(DisplayName = "Bounce In"),
	BounceOut UMETA(DisplayName = "Bounce Out"),
	BounceInOut UMETA(DisplayName = "Bounce In Out"),

	SineOutIn UMETA(DisplayName = "Sine Out In"),
	QuadOutIn UMETA(DisplayName = "Quad Out In"),
	CubicOutIn UMETA(DisplayName = "Cubic Out In"),
	QuartOutIn UMETA(DisplayName = "Quartic Out In"),
	QuintOutIn UMETA(DisplayName = "Quintic Out In"),
	ExpoOutIn UMETA(DisplayName = "Exponential Out In"),
	CircOutIn UMETA(DisplayName = "Circular Out In"),
	BackOutIn UMETA(DisplayName = "Back Out In"),
	ElasticOutIn UMETA(DisplayName = "Elastic Out In"),
	BounceOutIn UMETA(DisplayName = "Bounce Out In"),
};

DECLARE_DELEGATE_OneParam(FMKTweenDelegate, float);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMKTweenDynamicDelegate, float, TweenedValue);

struct FMKUnifiedDelegate
{
	FMKTweenDelegate FuncDelegate;
	FMKTweenDynamicDelegate FuncDynDelegate;

	FMKUnifiedDelegate() {};
	FMKUnifiedDelegate(FMKTweenDelegate const& D) : FuncDelegate(D) {};
	FMKUnifiedDelegate(FMKTweenDynamicDelegate const& D) : FuncDynDelegate(D) {};

	inline void Execute(float val)
	{
		if (FuncDelegate.IsBound())
		{
			FuncDelegate.Execute(val);
		}
		else if (FuncDynDelegate.IsBound())
		{
			FuncDynDelegate.Execute(val);
		}
	}

	inline bool IsBound() const
	{
		return (FuncDelegate.IsBound() || FuncDynDelegate.IsBound());
	}

	inline void Unbind()
	{
		FuncDelegate.Unbind();
		FuncDynDelegate.Unbind();
	}
};

class AGameMode;
class USplineMeshComponent;
class UCheckBox;
class UUserWidget;
class UWidget;
class UPanelWidget;
class UTextBlock;
class UInputSettings;
class UStaticMesh;

DECLARE_LOG_CATEGORY_EXTERN(LogBXSLibraryBPLibrary, Log, All);

UCLASS()
class UBXSLibraryBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	static void GetCSVRowDataAndProperty(UDataTable* Table, FName InRowName, FName InColumnName, uint8*& OutRowData, FProperty*& OutProperty);

public:

	//
	//
	/////////////////////////////////////////////////////////
	//     ::ARITHMETICS::                                  //
	/////////////////////////////////////////////////////////
	//
	//
	/** Math:: (Pos)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pos)increment", Keywords = "bxbl int increment ++"))
		static int32 INTPosIncrement(int32 Value);
	//
	/** Math:: (Pre)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pre)increment", Keywords = "bxbl int increment ++"))
		static int32 INTPreIncrement(int32 Value);
	//
	/** Math:: (Pos)decrements Value. (Value-1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pos)decrement", Keywords = "bxbl int increment --"))
		static int32 INTPosDecrement(int32 Value);
	//
	/** Math:: (Pre)decrements Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pre)decrement", Keywords = "bxbl int increment --"))
		static int32 INTPreDecrement(int32 Value);
	//
	/** Math:: Increments Value. (Value+Value). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "+=", DisplayName = "Increment", Keywords = "bxbl int increment +="))
		static int32 INTIncrement(int32 Value);
	/** Math:: Decrements Value. (Value-Value). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "-=", DisplayName = "Decrement", Keywords = "bxbl int decrement -="))
		static int32 INTDecrement(int32 Value);
	//
	/** Math:: Multiply Value. (Value*Value). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "*=", DisplayName = "Multiply", Keywords = "bxbl int multiply *="))
		static int32 INTMultiply(int32 Value);
	//
	/** Math:: Divide Value. (Value/Value*i). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "/=", DisplayName = "Divide", Keywords = "bxbl int divide /="))
		static int32 INTDivide(int32 Value, int32 i);
	//
	/** Math:: Mod. (Value=Value%i). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%=", DisplayName = "Modulo", Keywords = "bxbl int modulo %="))
		static int32 INTModulo(int32 Value, int32 i);
	//
	/** Math:: Percent (Value=Value*i/100). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%%", DisplayName = "Percent", Keywords = "bxbl int percent %%"))
		static int32 INTPercent(int32 Value, int32 i);
	//
	//
	/** Math:: (Pos)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pos)increment", Keywords = "bxbl float increment ++"))
		static float FPosIncrement(float Value);
	//
	/** Math:: (Pre)increments Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "++", DisplayName = "(Pre)increment", Keywords = "bxbl float increment ++"))
		static float FPreIncrement(float Value);
	//
	/** Math:: (Pos)decrements Value. (Value-1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pos)decrement", Keywords = "bxbl float increment --"))
		static float FPosDecrement(float Value);
	//
	/** Math:: (Pre)decrements Value. (Value+1) */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "--", DisplayName = "(Pre)decrement", Keywords = "bxbl float increment --"))
		static float FPreDecrement(float Value);
	//
	/** Math:: Increments Value. (Value+Value). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "+=", DisplayName = "Increment", Keywords = "bxbl float increment +="))
		static float FIncrement(float Value);
	/** Math:: Decrements Value. (Value-Value). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "-=", DisplayName = "Decrement", Keywords = "bxbl float decrement -="))
		static float FDecrement(float Value);
	//
	/** Math:: Multiply Value. (Value*Value). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "*=", DisplayName = "Multiply", Keywords = "bxbl float multiply *="))
		static float FMultiply(float Value);
	//
	/** Math:: Divide Value. (Value/Value*i). */
	UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "/=", DisplayName = "Divide", Keywords = "bxbl int divide /="))
		static float FDivide(float Value, float f);
	//
	///** Math:: Percent (Value=Value*i/100). */
	//UFUNCTION(BlueprintPure, Category = "BXS|Math", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", CompactNodeTitle = "%%", DisplayName = "Percent", Keywords = "bxbl int percent %%"))
	//	static float FPercent(float Value, float f);

	//--------------------noise lib--------------------
	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void OctavePerlinNoise1D(float& Out, float X = 0.0f,
			int Octaves = 1, float Persistence = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void OctavePerlinNoise2D(float& Out, float X = 0.0f, float Y = 0.0f,
			int Octaves = 1, float Persistence = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void OctavePerlinNoise3D(float& Out, float X = 0.0f, float Y = 0.0f, float Z = 0.0f,
			int Octaves = 1, float Persistence = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void PerlinNoise1D(float& Out, float X = 0.0f,
			float Frequency = 1.0f, float Amplitude = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void PerlinNoise2D(float& Out, float X = 0.0f, float Y = 0.0f,
			float Frequency = 1.0f, float Amplitude = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void PerlinNoise3D(float& Out, float X = 0.0f, float Y = 0.0f, float Z = 0.0f,
			float Frequency = 1, float Amplitude = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void AccumulatedPerlinNoise1D(float& Out,
			const TArray<float>& Frequencies,
			const TArray<float>& Amplitudes,
			float X = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void AccumulatedPerlinNoise2D(float& Out,
			const TArray<float>& Frequencies,
			const TArray<float>& Amplitudes,
			float X = 0.0f, float Y = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "BXS|Math|Noise")
		static void AccumulatedPerlinNoise3D(float& Out,
			const TArray<float>& Frequencies,
			const TArray<float>& Amplitudes,
			float X = 0.0f, float Y = 0.0f, float Z = 0.0f);


	//--------------------PlatformType、ArraySqrt、ServerIP、Audio、physics、UMG lib--------------------
#pragma region Platform Checks

/** Shorthand function for checking what platform type this application is currently running on. */
	UFUNCTION(BlueprintCallable, Category = "BXS|Platform",
		meta = (Keywords = "type platform", ExpandEnumAsExecs = "Result"))
		static void SwitchOnPlatformType(EPlatformType& Result);

	/**
	* Returns the current platform type.
	* Defaults to Desktop if on a platform that isn't accounted for.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (Keywords = "type platform"))
		static EPlatformType GetPlatformType();

	/**
	* Returns true if this is a debug build (UE_BUILD_DEBUG), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform|Build",
		meta = (DisplayName = "Is Debug Build",
			Keywords = "compile export mode version type build platform"))
		static bool DebugBuild();

	/**
	* Returns true if this is a debug build (UE_BUILD_DEVELOPMENT), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform|Build",
		meta = (DisplayName = "Is Development Build",
			Keywords = "compile export mode version type build platform"))
		static bool DevelopmentBuild();

	/**
	* Returns true if this is a debug build (UE_BUILD_TEST), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform|Build",
		meta = (DisplayName = "Is Test Build",
			Keywords = "compile export mode version type build platform"))
		static bool TestBuild();

	/**
	* Returns true if this is a debug build (UE_BUILD_SHIPPING), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform|Build",
		meta = (DisplayName = "Is Shipping Build",
			Keywords = "compile export mode version type build platform"))
		static bool ShippingBuild();

	/**
	* Returns true if this is inside the editor (WITH_EDITOR), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform|Build",
		meta = (DisplayName = "With Editor",
			Keywords = "compile export mode version type build platform in inside using"))
		static bool WithEditor();

	/**
	* Returns true if this is the Windows platform (PLATFORM_WINDOWS), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Windows Platform",
			Keywords = "compile export mode version type build platform"))
		static bool WindowsPlatform();

	/**
	* Returns true if this is the Windows platform running on 32 bit (PLATFORM_WINDOWS and not _WIN64), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Windows Platform (32 bit)",
			Keywords = "compile export mode version type build platform"))
		static bool Windows32Platform();

	/**
	* Returns true if this is the Windows platform running on 64 bit (PLATFORM_WINDOWS and _WIN64), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Windows Platform (64 bit)",
			Keywords = "compile export mode version type build platform"))
		static bool Windows64Platform();

	/**
	* Returns true if this is the Windows RT platform (PLATFORM_WINRT), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Windows Rt Platform",
			Keywords = "compile export mode version type build platform"))
		static bool WindowsRtPlatform();

	/**
	* Returns true if this is the Windows RT ARM platform (PLATFORM_WINRT_ARM), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Windows Rt Arm Platform",
			Keywords = "compile export mode version type build platform"))
		static bool WindowsRtArmPlatform();

	/**
	* Returns true if this is the Linux platform (PLATFORM_LINUX), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Linux Platform",
			Keywords = "compile export mode version type build platform"))
		static bool LinuxPlatform();

	/**
	* Returns true if this is the Mac platform (PLATFORM_MAC), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Mac Platform",
			Keywords = "compile export mode version type build platform"))
		static bool MacPlatform();

	/**
	* Returns true if this is the PS4 platform (PLATFORM_PS4), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Ps4 Platform",
			Keywords = "compile export mode version type build platform"))
		static bool Ps4Platform();

	/**
	* Returns true if this is the Xbox One platform (PLATFORM_XBOXONE), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Xbox One Platform",
			Keywords = "compile export mode version type build platform"))
		static bool XboxOnePlatform();

	/**
	* Returns true if this is the Switch platform (PLATFORM_SWITCH), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Switch Platform",
			Keywords = "compile export mode version type build platform"))
		static bool SwitchPlatform();

	/**
	* Returns true if this is the Android platform (PLATFORM_ANDROID), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Android Platform",
			Keywords = "compile export mode version type build platform"))
		static bool AndroidPlatform();

	/**
	* Returns true if this is the IOS platform (PLATFORM_IOS), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Ios Platform",
			Keywords = "compile export mode version type build platform"))
		static bool IosPlatform();

	/**
	* Returns true if this is a desktop (PLATFORM_DESKTOP), returns false otherwise.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Platform",
		meta = (DisplayName = "Is Desktop",
			Keywords = "compile export mode version type build platform"))
		static bool DesktopPlatform();

#pragma endregion
	/**
		* Forces the game to crash, this is intended for debugging purposes and should not be used in packaged builds.
		* This will print a log message before the crash as a heads up.
		*/
	UFUNCTION(BlueprintCallable, Category = "BXS|Test", meta = (DevelopmentOnly))
		static void ForceCrash(const FString& CrashMessage = "Generic Testing Purposes");

	/** Requests this application to close itself. */
	UFUNCTION(BlueprintCallable, Category = "BXS",
		meta = (DisplayName = "Shutdown", Keywords = "Shutdown"))
		static void RequestExit(bool bForce);

	/** Handles updating the global audio device's volume ingame. DO NOT USE FOR SETTINGS */
	/*UFUNCTION(BlueprintCallable, Category = "BXS", meta = (WorldContext = "WorldContextObject"))
		static void SetGlobalVolume(UObject* WorldContextObject, float InAmount);*/

	/** Returns true if both objects are the same class, false if otherwise(or if either or null) */
	UFUNCTION(BlueprintPure, Category = "BXS")
		static bool AreObjectsSameClass(UObject* A, UObject* B);

	UFUNCTION(BlueprintPure, Category = "BXS")
		static bool IsClassSameAs(UObject* A, UClass* ClassToCompare);

	UFUNCTION(BlueprintCallable, Category = "BXS",
		meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext,
			DisplayName = "Get All Levels", Keywords = "Get All Levels"))
		static void GetAllLevels(UObject* WorldContextObject, TArray<ULevel*>& Levels);

	UFUNCTION(BlueprintPure, Category = "BXS")
		static UClass* GetClassFromAssetPath(FString Path);

	/** Converts a linear color to a slate color */
	UFUNCTION(BlueprintPure, Category = "BXS|Conversions",
		meta = (DisplayName = "ToSlateColor (Linear Color)",
			CompactNodeTitle = "->", BlueprintAutocast))
		static FSlateColor Conv_LinearColorToSlateColor(FLinearColor InLinearColor) { return FSlateColor(InLinearColor); }

	/** Converts an array of collision channel's to object type query's */
	UFUNCTION(BlueprintPure, Category = "BXS|Conversions",
		meta = (DisplayName = "ToObjectTypeQuery's (Collision Channel's)",
			CompactNodeTitle = "->"))
		static void Conv_CollisionChannelsToObjectTypeQuerys(
			TArray<TEnumAsByte<ECollisionChannel>> Channels, TArray<TEnumAsByte<EObjectTypeQuery>>& ConvertedTypes);

	/** Converts an collision channel to object type query */
	UFUNCTION(BlueprintPure, Category = "BXS|Conversions",
		meta = (DisplayName = "ToObjectTypeQuery (Collision Channel)",
			CompactNodeTitle = "->", BlueprintAutocast))
		static TEnumAsByte<EObjectTypeQuery> Conv_CollisionChannelToObjectTypeQuery(TEnumAsByte<ECollisionChannel> Channel);

#pragma region Directory Stuff

	/** Handles getting the local app data directory, in editor will return the entire project directory(IF USING DELETE DIRECTORY WITH THIS ONE, MAKE SURE ITS NOT IN EDITOR) */
	UFUNCTION(BlueprintPure, Category = "BXS|Files")
		static FString GetLocalAppDataDirectory();

	/**
	* Gets the sub directories within the inputted directory,
	* *NOTE* this can cause hitches!
	* @param bDeepSearch Recursively loop through each directory searching for them, will increase hitch time.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|Files")
		static TArray<FString> GetSubDirectories(FString InDir, bool bDeepSearch);

	/** Deletes the inputted directory if found. */
	UFUNCTION(BlueprintCallable, Category = "BXS|Files")
		static bool DeleteDirectory(FString InDir);

	/** Deletes the inputted file at the directory if found. */
	UFUNCTION(BlueprintCallable, Category = "BXS|Files")
		static bool DeleteFile(FString InFileDir);


	UFUNCTION(BlueprintCallable, Category = "BXS|Files", meta =
	(UnsafeDuringActorConstruction = "true",
		DeterminesOutputType = "InType", DynamicOutputParam = "OutputObjects"))
		static bool GetObjectsOf(TSubclassOf<UObject> InType,
			TArray<UObject*>& OutputObjects, bool bIsBlueprintClass,
			const FString& InFolder = "/Game/");

#pragma endregion

	/** Select the inputted file at the directory if found. 
	FString ZipName = TEXT("1.pdf");//
	FString CadPath = "";

	FString LastUsedPath;
	FString ExportFilename;

	this->SelectFiles(NSLOCTEXT("UnrealEd", "Export", "Export").ToString(), TEXT("PDF (*.pdf)|*.pdf"), LastUsedPath, FPaths::GetBaseFilename(ZipName), ExportFilename);

	UE_LOG(LogTemp, Warning, TEXT("hshs%s"), *ExportFilename);
	*/
	UFUNCTION(BlueprintCallable, Category = "BXS|Files")
		bool SelectFiles(const FString& Title, const FString& FileTypes, FString& InOutLastPath, const FString& DefaultFile, FString& OutFilename);

#pragma region String Stuff

	/** Handles sorting an array of strings to be alphabetical */
	UFUNCTION(BlueprintPure, Category = "BXS|String|Strings")
		static TArray<FString> SortStrings(const TArray<FString> UnSortedStrings);

	/**
	* Increases the verbosity of the inputted message for printing a string in blueprint to be either a warning or error by adding a blueprint friendly prefix.
	* Example: printing out "This is a test" as a warning will print in the log "warning:This is a test" and the prefix for an error would be "error:"
	* @param bIsError If true will return a version of the message that will be an error, false will return a version of the message that will be a warning.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS|String")
		static FString IncreaseVerbosityOfMessage(FString InMessage, bool bIsError = false);

	/**
	 * Prints a string to the log with a custom category type incase you want to search for that, and optionally, to the screen
	 * If Print To Log is true, it will be visible in the Output Log window.  Otherwise it will be logged only as 'Verbose', so it generally won't show up.
	 * So a example log would be: [LogStarUnion: Custom Category:: Hello]
	 *
	 * @param	InString		The string to log out
	 * @param	InCategory		The custom category that gets appended ontu the LogStarUnion category. If empty will use "StarUnion".
	 * @param	bPrintToScreen	Whether or not to print the output to the screen. Will not print to the screen in shipping or test builds.
	 * @param	bPrintToLog		Whether or not to print the output to the log
	 * @param	TextColor		Whether or not to print the output to the log
	 * @param	Duration		The display duration (if Print to Screen is True). Using negative number will result in loading the duration time from the config.
	 */
	UFUNCTION(BlueprintCallable, Category = "BXS|String",
		meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext,
			Keywords = "log print", AdvancedDisplay = "3", DevelopmentOnly))
		static void PrintStringWithCategory(UObject* WorldContextObject,
			const FString& InString = FString(TEXT("Hello")),
			FString InCategory = FString(TEXT("StarUnion")),
			bool bPrintToScreen = true, bool bPrintToLog = true,
			FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0), float Duration = 2.f);


	/** Returns a non destructive copy of SourceString with all underscores replaced with a space. */
	UFUNCTION(BlueprintPure, Category = "BXS|String")
		static FString ReplaceUnderscore(FString SourceString);

	/** Returns a non destructive copy of SourceString with all spaces removed. */
	UFUNCTION(BlueprintPure, Category = "BXS|String")
		static FString RemoveSpaces(FString SourceString);

	/** Returns true if SourceString is empty. */
	UFUNCTION(BlueprintPure, Category = "BXS|String",
		meta = (DisplayName = "Is Empty (String)", BlueprintAutocast))
		static bool IsEmpty_String(const FString& SourceString) { return SourceString.IsEmpty(); }

#pragma endregion
	/** Returns true if SourceName is empty. */
	UFUNCTION(BlueprintPure, Category = "BXS|Name",
		meta = (DisplayName = "Is Empty (Name)", BlueprintAutocast))
		static bool IsEmpty_Name(const FName& SourceName) { return SourceName == NAME_None; }


#pragma region Player Stuff

	/** Returns the input priority of the inputted actor, returns zero if actor is invalid. */
	UFUNCTION(BlueprintPure, Category = "BXS|Player")
		static int GetInputPriority(AActor* InActor);

	/** Handles setting the input priority for the inputted actor. */
	UFUNCTION(BlueprintCallable, Category = "BXS|Player")
		static void SetInputPriority(AActor* InActor, int NewInputPriority);

	/**
	* Shorthand function for easily enabling/disabling input for a pawn if its possessed by a player controller.
	* @return Returns if successfully set or not.
	*/
	UFUNCTION(BlueprintCallable, Category = "BXS|Player")
		static bool TrySetPlayerInputEnabled(APawn* InPawn, const bool bIsEnabled);

	/** Attempts to get the player controller from the inputted pawn. */
	UFUNCTION(BlueprintCallable, Category = "BXS|Player", meta = (ExpandEnumAsExecs = "Result"))
		static APlayerController* TryGetPlayerControllerFromPawn(APawn* InPawn, EExtraSwitch& Result);

#pragma endregion



	/** Returns true if the inputted rotator is equal to zero. */
	UFUNCTION(BlueprintPure, Category = "BXS|Transformation")
		static bool IsRotatorZero(FRotator InRot);

	/** Marks the inputted component's render state dirty in all aspects possible. */
	UFUNCTION(BlueprintCallable, Category = "BXS")
		static bool MarkRenderDirty(USceneComponent* InComp);

	/** Checks if all objects inputted into the array are valid. False if empty, True if all objects are valid. */
	UFUNCTION(BlueprintPure, Category = "BXS", meta = (Keywords = "valid isvalid"))
		static bool AreObjectsValid(TArray<UObject*> Objects);

	/** Returns true if any actors are overlapping this component, will return false if component is invalid. */
	UFUNCTION(BlueprintPure, Category = "BXS")
		static bool IsOverlappingAnyActors(UPrimitiveComponent* InComp, bool bExcludeSelf = true);

	/** Returns the amount of actors in the world that are of type SearchClass */
	UFUNCTION(BlueprintCallable, Category = "BXS",
		meta = (WorldContext = "WorldContextObject"))
		static int GetNumberOfActorsOfType(const UObject* WorldContextObject, TSubclassOf<AActor> SearchClass);

	

	/** Marks multiple inputted component's render state dirty. */
	UFUNCTION(BlueprintCallable, Category = "BXS", meta = (DisplayName = "Mark Render Dirty (Array)"))
		static void MarkRenderDity_Comps(TArray<USceneComponent*> InComps);

	/**
	* Returns axis values based on if inputs are pressed/released within InPlayerController.
	* Having to specify each directional input allows for agnostic values.
	* EX: UpDirectional = Up on DPad is pressed = 1 on Y, DownDirectional = Down on DPad is pressed = -1 on Y. And same for Left(-1 on X) and Right(1 on X).
	* @param UpDirectional Will be positive Y value when pressed.
	* @param DownDirectional Will be negative Y value when pressed.
	* @param RightDirectional Will be positive X value when pressed.
	* @param LeftDirectional Will be negative X value when pressed.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS")
		static FVector2D GetDirectionalInputsFromDirectionalKeys(const APlayerController* InPlayerController, const FKey UpDirectional, const FKey DownDirectional,
			const FKey RightDirectional, const FKey LeftDirectional);

	/**
	* Returns a axis value based on if inputs are pressed/released within InPlayerController.
	* Having to specify each input allows for agnostic values.
	*/
	UFUNCTION(BlueprintPure, Category = "BXS")
		static float GetAxisValueOfInputs(const APlayerController* InPlayerController,
			const FKey PositiveKey, const FKey NegativeKey);

	/** Shorthand function for getting the last index of material array in Primitive Component. RETURNS -1 IF TARGET IS INVALID */
	UFUNCTION(BlueprintPure, Category = "BXS", meta = (CompactNodeTitle = "LAST INDEX"))
		static int GetLastMaterialIndex(UPrimitiveComponent* Target);

	/** Returns the static(default) material instances for the inputted static mesh. */
	/*UFUNCTION(BlueprintPure, Category = "BXS")
		static TArray<UMaterialInterface*> GetStaticMaterials(UStaticMesh* InMesh);*/




	/** Searches for an scene component that's name is matching the inputted search name. Returns true if success, and false if otherwise. */
	UFUNCTION(BlueprintPure, Category = "BXS")
		static bool FindSceneComponentByName(AActor* ActorToSearchIn,
			const FString& CompName, USceneComponent*& FoundComp);

	/** Searches for an actor component that's name is matching the inputted search name. Returns true if success, and false if otherwise. */
	UFUNCTION(BlueprintPure, Category = "BXS")
		static bool FindActorComponentByName(AActor* ActorToSearchIn,
			const FString& CompName, UActorComponent*& FoundComp);

	/** Gets the closest component to the inputted point(in world space) from the inputted array of components */
	UFUNCTION(BlueprintPure, Category = "BXS")
		static UPrimitiveComponent* GetClosestComponentToPoint(TArray<UPrimitiveComponent*> Comps,
			FVector Point, bool Inverse);

	/** Gets the closest actor to the inputted point(in world space) from the inputted array of actors */
	UFUNCTION(BlueprintPure, Category = "BXS")
		static AActor* GetClosestActorToPoint(TArray<AActor*> Actors, FVector Point, bool Inverse);

	/**
	* Draws coordinate arrows at InComponent's world location for DebugDisplayTime's seconds if InComponent is valid.
	* @param ForwardColor Forward Vector of InComponent(X).
	* @param RightColor Right Vector of InComponent(Y).
	* @param UpColor Up Vector of InComponent(Z).
	*/
	UFUNCTION(BlueprintCallable, Category = "BXS|Debug",
		meta = (DevelopmentOnly, ArrowLength = "200.0", ArrowSize = "100.0", ArrowThickness = "5.0", AdvancedDisplay = "ForwardColor,RightColor,UpColor"))
		static void DrawDebugCoordinateArrowsAtComponent(USceneComponent* InComponent, FVector Offset,
			float ArrowLength, float ArrowSize, float ArrowThickness, float DebugDisplayTime = 5.0f,
			FLinearColor ForwardColor = FLinearColor::Red, FLinearColor RightColor = FLinearColor::Green, FLinearColor UpColor = FLinearColor::Blue);

	/**
	* Attempts to snap the inputted actor (using the pivot point) to the ground(which is really just a down direction)
	* @param TraceDistance The distance to trace for
	* @param GroundChannel The ground collision channel to trace against and will snap to
	* @param ActorsToIgnore Automatically adds the Spline Component's actor(ignores self)
	* @param OptionalOffset -Optional- Offsets the actor's snap to point on the ground by this value
	* @param bDrawDebug When true will show the trace using debug lines for DrawDebugTime's duration using the colors from TraceColor(Start to ImpactPoint or end if no hit) and TraceHitColor(ImpactPoint to End)
	* @return Returns true if successfully snapped actor to ground, false if actor is invalid or hit nothing to snap to.
	*/
	UFUNCTION(BlueprintCallable, Category = "BXS",
		meta = (TraceDistance = "1000.0", AutoCreateRefTerm = "ActorsToIgnore", AdvancedDisplay = "TraceColor,TraceHitColor,DrawDebugTime"))
		static bool SnapActorToGround(AActor* InActor, float TraceDistance, bool bTraceComplex,
			ETraceTypeQuery GroundChannel, const TArray<AActor*>& ActorsToIgnore, FVector OptionalOffset, bool bDrawDebug = false,
			FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawDebugTime = 5.0f);

#pragma region Spline Component Stuff

	/** Returns true if InPoint is a valid spline point. False if otherwise. */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static bool IsValidSplinePoint(USplineComponent* SplineComp, int32 InPoint);

	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static int32 GetLastSplinePoint(USplineComponent* SplineComp);

	/**
	* Attempts to snap all spline points in the inputted spline component to the ground(which is really just a down direction).
	* @param TraceDistance The distance to trace for
	* @param TraceChannel The collision channels to trace against and will snap to
	* @param ActorsToIgnore Automatically adds the Spline Component's actor(ignores self)
	* @param bDrawDebug When true will show the trace using debug lines for DrawDebugTime's duration using the colors from TraceColor(Start to ImpactPoint or end if no hit) and TraceHitColor(ImpactPoint to End)
	*/
	UFUNCTION(BlueprintCallable, Category = "BXS|Spline",
		meta = (TraceDistance = "1000.0", AutoCreateRefTerm = "ActorsToIgnore", AdvancedDisplay = "TraceColor,TraceHitColor,DrawDebugTime"))
		static void SnapAllSplinePointsToGround(USplineComponent* SplineComp, float TraceDistance, bool bTraceComplex,
			ETraceTypeQuery TraceChannel, const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug = false,
			FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawDebugTime = 5.0f);

	/**
	* Attempts to snap a single spline point in the inputted spline component to the ground(which is really just a down direction).
	* @param TraceDistance The distance to trace for
	* @param TraceChannel The collision channels to trace against and will snap to
	* @param ActorsToIgnore Automatically adds the Spline Component's actor(ignores self)
	* @param bDrawDebug When true will show the trace using debug lines for DrawDebugTime's duration using the colors from TraceColor(Start to ImpactPoint or end if no hit) and TraceHitColor(ImpactPoint to End)
	*/
	UFUNCTION(BlueprintCallable, Category = "BXS|Spline",
		meta = (TraceDistance = "1000.0", AutoCreateRefTerm = "ActorsToIgnore", AdvancedDisplay = "TraceColor,TraceHitColor,DrawDebugTime"))
		static void SnapSingleSplinePointToGround(USplineComponent* SplineComp, int32 SplinePointToSnap, float TraceDistance, bool bTraceComplex,
			ETraceTypeQuery TraceChannel, const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug = false,
			FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawDebugTime = 5.0f);

	/** Get location along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FVector FindLocationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get tangent along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FVector FindTangentAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get unit direction along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FVector FindDirectionAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get rotator corresponding to rotation along spline at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FRotator FindRotationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get up vector at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FVector FindUpVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get up vector at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FVector FindRightVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get transform at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FTransform FindTransformAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale = false);

	/** Get roll in degrees at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static float FindRollAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	/** Get scale at the provided input key value along spline */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static FVector FindScaleAtSplineInputKey(USplineComponent* SplineComp, float InKey);

	/** Gets the location and rotation along spline, both at the provided input key value */
	UFUNCTION(BlueprintPure, Category = "BXS|Spline")
		static void FindLocationAndRotationAtSplineInputKey(FVector& Location, FRotator& Rotation, USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace);

	UFUNCTION(BlueprintCallable, Category = "BXS|Spline",
		meta = (AutoCreateRefTerm = "OptionalMaterials, RelativeTransform"))
		static TArray<USplineMeshComponent*> BuildSplineMeshesAlongSpline(
			USplineComponent* SplineComp, UStaticMesh* SplineMesh,
			TArray<UMaterialInterface*> OptionalMaterials,
			UPARAM(ref) const FTransform& RelativeTransform,
			TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis,
			bool bAffectNavigation, bool bGenerateOverlapEvents,
			TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled,
			TEnumAsByte<EObjectTypeQuery> ObjectType,
			EComponentMobility::Type Mobility,
			FVector2D StartScale = FVector2D(1.0f, 1.0f), FVector2D EndScale = FVector2D(1.0f, 1.0f));

#pragma endregion



	
	//--------------------utility--------------------
	/** Load Texture2D */
	UFUNCTION(BlueprintPure, Category = "BXS|Loader", meta = (Keywords = "image png jpg jpeg bmp bitmap ico icon exr icns"))
		static UTexture2D* LoadTexture2DFromFile(const FString& FilePath, bool& IsValid, int32& Width, int32& Height);
	UFUNCTION(BlueprintPure, Category = "BXS|Files", meta = (Keywords = ""))
		static bool IsVaildPath(const FString FilePath);
	static FString GetFullPath(FString FilePath);

	/**                  Config                           */

	UFUNCTION(BlueprintCallable, Category = "BXS|Config", meta = (Keywords = ""))
		static void ReadConfig(const FString& SectionName, const FString& ValueName, FString& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BXS|Config", meta = (Keywords = ""))
		static void WriteConfig(const FString& SectionName, const FString& ValueName, const FString& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BXS|Config", meta = (Keywords = ""))
		static bool ReadCustomPathConfig(const FString& FilePath, const FString& SectionName, const FString& ValueName, FString& ReturnString);

	UFUNCTION(BlueprintCallable, Category = "BXS|Config", meta = (Keywords = ""))
		static void WriteCustomPathConfig(const FString& FilePath, const FString& SectionName, const FString& ValueName, const FString& WriteString);

	/**                   File                           */

	/** Read Or Write Custom Text */
	UFUNCTION(BlueprintCallable, Category = "BXS|Files", meta = (Keywords = ""))
		static bool ReadFile(const FString FilePath, FString& ReturnString);

	UFUNCTION(BlueprintCallable, Category = "BXS|Files", meta = (Keywords = ""))
		static bool WriteFile(const FString FilePath, const FString ReturnString);

	UFUNCTION(BlueprintCallable, Category = "BXS|Files", meta = (Keywords = ""))
		static bool DeleteFileII(const FString FilePath);

	/** Get Path */
	UFUNCTION(BlueprintPure, Category = "BXS|Files", meta = (Keywords = ""))
		static FString GetGamePath(DirType E);

	UFUNCTION(BlueprintCallable, Category = "BXS|OS", meta = (Keywords = "exe"))
		static void OpenExe(const FString Path,FString& PathPart,FString& FileNamePart,FString& ExtensionPart); 

	//--------------------vir lb--------------------

	//~~~~~~~~~~~~~~~~~~~~

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32 Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value);

	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value);


	/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Custom Config Vars")
		static void VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value);

	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Transform")
		FRotator TransformVectorToActorSpaceAngle(AActor* Actor, const FVector& InVector);

	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Transform")
		FVector TransformVectorToActorSpace(AActor* Actor, const FVector& InVector);

	/** The FName that is expected is the exact same format as when you right click on asset -> Copy Reference! You can directly paste copied references into this node! IsValid lets you know if the path was correct or not and I was able to load the object. MAKE SURE TO SAVE THE RETURNED OBJECT AS A VARIABLE. Otherwise your shiny new asset will get garbage collected. I recommend you cast the return value to the appropriate object and then promote it to a variable :)  -Rama */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Misc")
		static UObject* LoadObjectFromAssetPath(TSubclassOf<UObject> ObjectClass, FName Path, bool& IsValid);

	/** Uses the same format as I use for LoadObjectFromAssetPath! Use this node to get the asset path of objects in the world! -Rama */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Misc")
		static FName GetObjectPath(UObject* Obj);

	/** Returns which platform the game code is running in.*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BXS|VictoryBP|System")
		static void OperatingSystem__GetCurrentPlatform(
			bool& Windows_,
			bool& Mac,
			bool& Linux,
			bool& iOS,
			bool& Android,
			bool& Android_ARM,
			bool& Android_Vulkan,
			bool& PS4,
			bool& XBoxOne,
			bool& HTML5,
			bool& Apple
		);

	//~~~

	/** Retrieves the OS system Date and Time as a string at the instant this BP node runs. Use my other RealWorldTime node to get the time passed since the return value of this node! You can use this to record milliseconds/seconds/minutes/hours between events in game logic! */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BXS|VictoryBP|System")
		static FString RealWorldTime__GetCurrentOSTime(
			int32& MilliSeconds,
			int32& Seconds,
			int32& Minutes,
			int32& Hours12,
			int32& Hours24,
			int32& Day,
			int32& Month,
			int32& Year
		);

	/** Get the amount of seconds/minutes/hours since the the supplied DateTime string! You can use this to record milliseconds/seconds/minutes/hours between events in game logic! */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BXS|VictoryBP|System")
		static void RealWorldTime__GetTimePassedSincePreviousTime(
			const FString& PreviousTime,
			float& Milliseconds,
			float& Seconds,
			float& Minutes,
			float& Hours
		);

	/** Get the difference between two recorded times! You can use this to record milliseconds/seconds/minutes/hours between events in game logic! */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BXS|VictoryBP|System")
		static void RealWorldTime__GetDifferenceBetweenTimes(
			const FString& PreviousTime1,
			const FString& PreviousTime2,
			float& Milliseconds,
			float& Seconds,
			float& Minutes,
			float& Hours
		);

	/** Launches the specified URL in the OS default web browser :) <3 Rama */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|System")
		static void Open_URL_In_Web_Browser(FString TheURL);

	//			  			Paths

	/** InstallDir/GameName/Binaries/Win64 */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Paths")
		static FString VictoryPaths__Win64Dir_BinaryLocation();

	/** InstallDir/WindowsNoEditor/ */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Paths")
		static FString VictoryPaths__WindowsNoEditorDir();

	/** InstallDir/GameName */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Paths")
		static FString VictoryPaths__GameRootDirectory();

	/** InstallDir/GameName/Saved */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Paths")
		static FString VictoryPaths__SavedDir();

	/** InstallDir/GameName/Saved/Config/ */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Paths")
		static FString VictoryPaths__ConfigDir();

	/** InstallDir/GameName/Saved/Screenshots/Windows */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Paths")
		static FString VictoryPaths__ScreenShotsDir();

	/** InstallDir/GameName/Saved/Logs */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Paths")
		static FString VictoryPaths__LogsDir();

	/** Load a Texture 2D from a DDS file! Contributed by UE4 forum member n00854180t! */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Load Texture From File", meta = (Keywords = "image DDS"))
		static UTexture2D* LoadTexture2D_FromDDSFile(const FString& FullFilePath);

	/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Load Texture From File", meta = (Keywords = "image png jpg jpeg bmp bitmap ico icon exr icns"))
		static UTexture2D* Victory_LoadTexture2D_FromFile(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height);


	/** Retrieve a pixel color value given the pixel array, the image height, and the coordinates. Returns false if the coordinates were not valid. Pixel coordinates start from upper left corner as 0,0. X= horizontal, Y = vertical */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Load Texture From File", meta = (Keywords = "image coordinate index map value"))
		static bool Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 x, int32 y, FLinearColor& FoundColor);

	/** Save an array of pixels to disk as a PNG! It is very important that you supply the curret width and height of the image! Returns false if Width * Height != Array length or file could not be saved to the location specified. I return an ErrorString to clarify what the exact issue was. -Rama */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Load Texture From File", meta = (Keywords = "create image png jpg jpeg bmp bitmap ico icon exr icns"))
		static bool Victory_SavePixels(const FString& FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama*/
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Load Texture From File", meta = (Keywords = "create image png jpg jpeg bmp bitmap ico icon exr icns"))
		static bool Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama*/
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Load Texture From File", meta = (Keywords = "create image png jpg jpeg bmp bitmap ico icon exr icns"))
		static bool Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray);

	/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama*/
	//UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Load Texture From File",meta=(Keywords="create image png jpg jpeg bmp bitmap ico icon exr icns"))
	static bool Victory_GetPixelsArrayFromT2DDynamic(UTexture2DDynamic* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray);

	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Misc")
		static UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32 Width = 256, int32 Height = 256, FLinearColor ClearColor = FLinearColor::White, float Gamma = 1)
	{
		UTextureRenderTarget2D* NewRenderTarget2D = NewObject<UTextureRenderTarget2D>();
		if (!NewRenderTarget2D)
		{
			return nullptr;
		}
		NewRenderTarget2D->ClearColor = FLinearColor::White;
		NewRenderTarget2D->TargetGamma = Gamma;
		NewRenderTarget2D->InitAutoFormat(Width, Height);
		return NewRenderTarget2D;
	}

	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|AI")
		static EPathFollowingRequestResult::Type Victory_AI_MoveToWithFilter(
			APawn* Pawn,
			const FVector& Dest,
			TSubclassOf<UNavigationQueryFilter> FilterClass = NULL,
			float AcceptanceRadius = 0,
			bool bProjectDestinationToNavigation = false,
			bool bStopOnOverlap = false,
			bool bCanStrafe = false
			);

	/** Make sure to save off the return value as a global variable in one of your BPs or else it will get garbage collected! */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Misc", meta = (DeprecatedFunction, DeprecationMessage = "Epic has introduced Construct Object as of 4.9.0, I recommend you use that instead! -Rama", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static UObject* CreateObject(UObject* WorldContextObject, UClass* TheObjectClass);

	/** Make sure to save off the return value as a global variable in one of your BPs or else it will get garbage collected! */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Misc", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static UPrimitiveComponent* CreatePrimitiveComponent(UObject* WorldContextObject, TSubclassOf<UPrimitiveComponent> CompClass, FName Name, FVector Location, FRotator Rotation);

	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|UMG", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static bool IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);



	UFUNCTION(Category = "BXS|VictoryBP|LevelStreaming", BlueprintCallable, Meta = (keywords = "remove"))
		static void HideStreamingLevel(ULevelStreamingDynamic* LevelInstance)
	{
		if (LevelInstance) LevelInstance->SetShouldBeVisible(false);
	}

	UFUNCTION(Category = "BXS|VictoryBP|LevelStreaming", BlueprintCallable, Meta = (keywords = "remove"))
		static void UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance)
	{
		if (LevelInstance) LevelInstance->SetShouldBeLoaded(false);
	}

	/** Implementation of a Selection Marquee / Selection Box as a BP Node. AnchorPoint is the first clicked point, which user then drags from to make the box. Class filter is optional way to narrow the scope of actors that can be selected by the selection box! -Rama*/
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Misc", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
		static void Selection_SelectionBox(UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, TSubclassOf<AActor> ClassFilter);

	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Misc")
		static FVector2D ProjectWorldToScreenPosition(const FVector& WorldLocation);

	UFUNCTION(BlueprintPure, Category = "BXS|GPU")
		static void Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate);

	/** Retrieves command line arguments that were passed into unreal */
	UFUNCTION(BlueprintPure, Category = "BXS|System")
		static const FString GetCommandLine()
	{
		return FCommandLine::Get();
	}

	UFUNCTION(Category = "BXS|VictoryBP|Game|Viewport", BlueprintPure)
		static float HorizontalFOV(float VerticalFOV, float AspectRatio);

	UFUNCTION(Category = "BXS|VictoryBP|Game|Viewport", BlueprintPure)
		static float VerticalFOV(float HorizontalFOV, float AspectRatio);

	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Input")
		static void VictorySimulateMouseWheel(const float& Delta);

	/** Loads a text file from hard disk and parses it into a String array, where each entry in the string array is 1 line from the text file. Option to exclude lines that are only whitespace characters or '\n'. Returns the size of the final String Array that was created. Returns false if the file could be loaded from hard disk. */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|File IO")
		static bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, FString FullFilePath = "Enter Full File Path", bool ExcludeEmptyLines = false);

	/** Load a text file to a single string that you can use ParseIntoArray on newline characters if you want same format as LoadStringArrayFromFile. This version supports unicode characters! */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|File IO")
		static bool LoadStringFromFile(FString& Result, FString FullFilePath = "Enter Full File Path")
	{
		return FFileHelper::LoadFileToString(Result, *FullFilePath);
	}

	/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\n\nRetrieves the Aim Offsets Pitch & Yaw Based On the Rotation of the Controller of The Character Owning The Anim Instance.\n\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\n   Returns true if function filled the pitch and yaw vars successfully */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Aim Offset")
		static bool Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw);

	/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\n\nRetrieves the Aim Offsets Pitch & Yaw for the AnimBPOwner Based On the supplied Rotation.\n\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\n    Returns true if function filled the pitch and yaw vars successfully */
	UFUNCTION(BlueprintCallable, Category = "BXS|VictoryBP|Aim Offset")
		static bool Animation__GetAimOffsetsFromRotation(AActor* AnimBPOwner, const FRotator& TheRotation, float& Pitch, float& Yaw);


	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static bool VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static int32 VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static float VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static FVector VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static FRotator VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static FLinearColor VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid);

	/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */
	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static FString VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);

	UFUNCTION(BlueprintPure, Category = "BXS|VictoryBP|Custom Config Vars")
		static FVector2D VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);

	/** Load a Sound from a file!  */
	/*UFUNCTION(BlueprintCallable, Category = "BXS|Loader", meta = (Keywords = ""))
		static class USoundWave* LoadOggDataFromFile(const FString& FilePath);*/

	UFUNCTION(BlueprintCallable, Category = "BXS|Loader", meta = (Keywords = ""))
		static class USoundWave* LoadWaveDataFromFile(const FString& FilePath);

	static bool ReadOggWaveData(USoundWave* sw, TArray<uint8>* rawFile);

	/** bp ux  */
	static void ShuffleArrayWithStream_impl(void* TargetArray, const FArrayProperty* ArrayProperty, const FRandomStream& Stream); // Real implementation

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Mouse Position", Keywords = "Set Mouse Position"), Category = "BXS|Utilities")
		static bool SetMousePosition(APlayerController* PC, const float& PosX, const float& PosY);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Actor Last Render Time", Keywords = "Actor Render Time"), Category = "BXS|Utilities")
		static float GetActorLastRenderTime(AActor* RefActor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Was Actor Rendered Recently", Keywords = "Actor Rendered Recently"), Category = "BXS|Utilities")
		static bool WasActorRenderedRecently(AActor* RefActor, float MaxRecentTime = 0.1f);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Actor Within Frustum", Keywords = "Actor Within Frustum"), Category = "BXS|Utilities")
		static bool IsActorWithinFrustum(AActor* RefActor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Convert Linear Colors", Keywords = "Color Convert Linear"), Category = "BXS|Utilities")
		static TArray<FColor> ConvertLinearColors(const TArray<FLinearColor>& LinearColors);

	UFUNCTION(BlueprintPure, Category = "BXS|UtilitiBXS|Testing")
		static bool HasRuntimeCooking();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Vector)", Keywords = "Vector FVector Move Towards"), Category = "BXS|Utilities")
		static FVector MoveTowardsVector(FVector From, FVector To, float MaxDistanceDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Rotator)", Keywords = "Rotator FRotator Move Towards"), Category = "BXS|Utilities")
		static FRotator MoveTowardsRotator(FRotator From, FRotator To, float MaxDistanceDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Angle)", Keywords = "Angle Move Towards"), Category = "BXS|Utilities")
		static float MoveTowardsAngle(float From, float To, float MaxDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Move Towards (Float)", Keywords = "Float Move Towards"), Category = "BXS|Utilities")
		static float MoveTowards(float From, float To, float MaxDelta);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Delta Angle", Keywords = "Angle Delta"), Category = "BXS|Utilities")
		static float DeltaAngle(float From, float To);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Repeat Float", Keywords = "Repeat Float"), Category = "BXS|Utilities")
		static float RepeatFloat(float T, float Length);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Point Is Inside Box", Keywords = "Point Inside Box"), Category = "BXS|Utilities")
		static bool PointIsInsideBox(const FBox2D& Box, const FVector2D& Point);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Box Is Inside Box", Keywords = "Box Inside Box2D FBox2D"), Category = "BXS|Utilities")
		static bool BoxIsInsideBox(const FBox2D& Box, const FBox2D& OtherBox);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Box Intersects Box", Keywords = "Box Intersect Box2D FBox2D"), Category = "BXS|Utilities")
		static bool BoxIntersectsBox(const FBox2D& Box, const FBox2D& OtherBox);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Min and Max of Array (float)"), Category = "BXS|Utilities")
		static void MinAndMaxOfFloatArray(const TArray<float>& Floats, float& Min, float& Max);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Make Literal Box2D"), Category = "BXS|Utilities")
		static FBox2D MakeLiteralFBox2D(FVector2D Min, FVector2D Max);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Vector is nearly zero", Keywords = "Vector FVector Zero Nearly"), Category = "BXS|Utilities")
		static bool VectorIsNearlyZero(const FVector& Vector);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Actor Screen Box", Keywords = "Actor Screen Box FBox2D"), Category = "BXS|Utilities")
		static void GetActorScreenBox(const APlayerController* Controller, const AActor* TargetActor, bool bOnlyCollidingComponents, bool bScaleByDPI, FBox2D& Box, bool& bAllProjectedSuccessfully);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove All Children", Keywords = "Clear Destroy Remove Kill Child Children"), Category = "BXS|Utilities")
		static void RemoveAllChildren(USceneComponent* parentComp);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is World Point Inside Box", Keywords = "World Point Inside Within Intersect Box"), Category = "BXS|Utilities")
		static bool WorldPointIsInsideBox(const FVector& WorldPoint, const FVector& BoxCenter, const FVector& BoxExtents);


	

	/** C++ only functions */

	template<typename T>
	static FString EnumToString(const FString& enumName, const T value)
	{
		UEnum* pEnum = FindObject<UEnum>(ANY_PACKAGE, *enumName, true);
		return pEnum
			? pEnum->GetDisplayNameTextByIndex(static_cast<uint8>(value)).ToString()
			: TEXT("<invalid>");
	}

	

#pragma region FDateTime
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Get Lower Bound Value (Date)"))
		static FDateTime GetLowerBoundValue_Date(FDateRange const& Range) { return Range.GetLowerBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Get Upper Bound Value (Date)"))
		static FDateTime GetUpperBoundValue_Date(FDateRange const& Range) { return Range.GetUpperBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Contains (Date)"))
		static bool Contains_Date(FDateRange const& Range, FDateRange OtherRange) { return Range.Contains(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Contigous (Date)"))
		static bool Contiguous_Date(FDateRange const& Range, FDateRange OtherRange) { return Range.Contiguous(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Has Lower Bound (Date)"))
		static bool HasLowerBound_Date(FDateRange const& Range) { return Range.HasLowerBound(); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Has Upper Bound (Date)"))
		static bool HasUpperBound_Date(FDateRange const& Range) { return Range.HasUpperBound(); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Is Degenerate (Date)"))
		static bool IsDegenerate_Date(FDateRange const& Range) { return Range.IsDegenerate(); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Is Empty (Date)"))
		static bool IsEmpty_Date(FDateRange const& Range) { return Range.IsEmpty(); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Size (Date)"))
		static FTimespan Size_Date(FDateRange const& Range) { return Range.Size<FTimespan>(); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Split (Date)"))
		static TArray<FDateRange> Split_Date(FDateRange const& Range, FDateTime InElement) { return Range.Split(InElement); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Difference (Date)"))
		static TArray<FDateRange> Difference_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Difference(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Hull (Date)"))
		static FDateRange Hull_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Hull(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Intersection (Date)"))
		static FDateRange Intersection_Date(TArray<FDateRange> const& Ranges) { return FDateRange::Intersection(Ranges); }
	UFUNCTION(BlueprintPure, Category = "BXS|Utils|Range|Date", meta = (DisplayName = "Union (Date)"))
		static TArray<FDateRange> Union_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Union(Range, OtherRange); }
#pragma endregion 



};
