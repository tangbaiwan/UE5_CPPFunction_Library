// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BXSLibraryBPLibrary.h"
#include "Engine/StreamableManager.h"
#include "BaiXiaoSheng.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetMathLibrary.h"
#include "HAL/FileManager.h"
#include "AudioDevice.h"
#include "DataTableUtils.h"
#include "Engine/ObjectLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Console.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/InputSettings.h"
#include "InputCoreTypes.h"
#include "Materials/MaterialInterface.h"
#include "Engine/StaticMesh.h"
#include "Components/TextBlock.h"
#include "Styling/SlateTypes.h"
#include "Components/CheckBox.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Widget.h"
#include "DrawDebugHelpers.h"
#include "Framework/Application/SlateApplication.h"
#include "Input/Events.h"
#include "Engine/DemoNetDriver.h"
#include "Engine.h"
#include "GameFramework/PlayerState.h"
#include "Engine/World.h"
#include "Misc/EngineVersion.h"
#include "Serialization/ArchiveSaveCompressedProxy.h"
#include "GameFramework/SaveGame.h"
#include "UObject/UObjectBaseUtility.h"
#include "SaveGameSystem.h"
#include "PlatformFeatures.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/ArchiveLoadCompressedProxy.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "ImageUtils.h"
#include "Engine/Texture2D.h"
#include "../Public/FileHelper.h"
#include "Interfaces/IAudioFormat.h"
#include "VorbisAudioInfo.h"
#include "AIController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Styling/SlateBrush.h"
#include "HAL/PlatformMisc.h"
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformDriver.h"

namespace
{
	float Grad(int hash, float x, float y, float z)
	{
		switch (hash & 0x0F)
		{
		case 0x00:
			return x + y;
		case 0x01:
			return -x + y;
		case 0x02:
			return x - y;
		case 0x03:
			return -x - y;
		case 0x04:
			return x + z;
		case 0x05:
			return -x + z;
		case 0x06:
			return x - z;
		case 0x07:
			return -x - z;
		case 0x08:
			return y + z;
		case 0x09:
			return -y + z;
		case 0x0A:
			return y - z;
		case 0x0B:
			return -y - z;
		case 0x0C:
			return y + x;
		case 0x0D:
			return -y + z;
		case 0x0E:
			return y - x;
		case 0x0F:
			return -y - z;
		}

		// must not reach here.
		return 0.0f;
	}

	float Lerp(float A, float B, float T) noexcept
	{
		return A + (B - A) * T;
	}

	float Fade(float T) noexcept
	{
		// 6T^5 - 15T^4 + 10T^3
		return T * T * T * (T * (T * 6.0 - 15.0) + 10.0);
	}

	int* HashTbl;

	static int HashTblBase[] =
	{
		151, 160, 137, 91, 90, 15,
		131, 13, 201, 95, 96, 53, 194, 233, 7, 225, 140, 36, 103, 30, 69, 142, 8, 99, 37, 240, 21, 10, 23,
		190, 6, 148, 247, 120, 234, 75, 0, 26, 197, 62, 94, 252, 219, 203, 117, 35, 11, 32, 57, 177, 33,
		88, 237, 149, 56, 87, 174, 20, 125, 136, 171, 168, 68, 175, 74, 165, 71, 134, 139, 48, 27, 166,
		77, 146, 158, 231, 83, 111, 229, 122, 60, 211, 133, 230, 220, 105, 92, 41, 55, 46, 245, 40, 244,
		102, 143, 54, 65, 25, 63, 161, 1, 216, 80, 73, 209, 76, 132, 187, 208, 89, 18, 169, 200, 196,
		135, 130, 116, 188, 159, 86, 164, 100, 109, 198, 173, 186, 3, 64, 52, 217, 226, 250, 124, 123,
		5, 202, 38, 147, 118, 126, 255, 82, 85, 212, 207, 206, 59, 227, 47, 16, 58, 17, 182, 189, 28, 42,
		223, 183, 170, 213, 119, 248, 152, 2, 44, 154, 163, 70, 221, 153, 101, 155, 167, 43, 172, 9,
		129, 22, 39, 253, 19, 98, 108, 110, 79, 113, 224, 232, 178, 185, 112, 104, 218, 246, 97, 228,
		251, 34, 242, 193, 238, 210, 144, 12, 191, 179, 162, 241, 81, 51,145, 235, 249, 14, 239, 107,
		49, 192, 214, 31, 181, 199, 106, 157, 184, 84, 204, 176, 115, 121, 50, 45, 127, 4, 150, 254,
		138, 236, 205, 93, 222, 114, 67, 29, 24, 72, 243, 141, 128, 195, 78, 66, 215, 61, 156, 180
	};

	void InitHashTable()
	{
		int HashTableSize = 2 * sizeof(HashTblBase) / sizeof(HashTblBase[0]);

		HashTbl = new int[HashTableSize];
		for (int Index = 0; Index < HashTableSize; Index++)
		{
			HashTbl[Index] = HashTblBase[Index % (HashTableSize / 2)];
		}
	}

	void DeleteHashTable()
	{
		if (HashTbl)
		{
			delete HashTbl;
		}
	}

	static float Perlin(float X, float Y, float Z)
	{
		InitHashTable();

		// calculate a location of unit cube.
		int UnitCubeX = static_cast<int>(X) & 255;
		int UnitCubeY = static_cast<int>(Y) & 255;
		int UnitCubeZ = static_cast<int>(Z) & 255;

		// coordinate in identity cube.
		float OffsetX = X - static_cast<int>(X);
		float OffsetY = Y - static_cast<int>(Y);
		float OffsetZ = Z - static_cast<int>(Z);

		// create weight for lerp.
		float U = Fade(OffsetX);
		float V = Fade(OffsetY);
		float W = Fade(OffsetZ);

		// create hashes.
		int AAA = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY] + UnitCubeZ];
		int ABA = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY + 1] + UnitCubeZ];
		int AAB = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY] + UnitCubeZ + 1];
		int ABB = HashTbl[HashTbl[HashTbl[UnitCubeX] + UnitCubeY + 1] + UnitCubeZ + 1];
		int BAA = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY] + UnitCubeZ];
		int BBA = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY + 1] + UnitCubeZ];
		int BAB = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY] + UnitCubeZ + 1];
		int BBB = HashTbl[HashTbl[HashTbl[UnitCubeX + 1] + UnitCubeY + 1] + UnitCubeZ + 1];

		// create perlin noise.
		float X1, X2, Y1, Y2;
		X1 = Lerp(Grad(AAA, OffsetX, OffsetY, OffsetZ),
			Grad(BAA, OffsetX - 1, OffsetY, OffsetZ),
			U);
		X2 = Lerp(Grad(ABA, OffsetX, OffsetY - 1, OffsetZ),
			Grad(BBA, OffsetX - 1, OffsetY - 1, OffsetZ),
			U);
		Y1 = Lerp(X1, X2, V);
		X1 = Lerp(Grad(AAB, OffsetX, OffsetY, OffsetZ - 1),
			Grad(BAB, OffsetX - 1, OffsetY, OffsetZ - 1),
			U);
		X2 = Lerp(Grad(ABB, OffsetX, OffsetY - 1, OffsetZ - 1),
			Grad(BBB, OffsetX - 1, OffsetY - 1, OffsetZ - 1),
			U);
		Y2 = Lerp(X1, X2, V);

		float Result = (Lerp(Y1, Y2, W) + 1) / 2;

		DeleteHashTable();

		return Result;
	}

	float Perlin(float X, float Y, float Z, int Octaves, float Persistence)
	{
		float Total = 0.0f;
		float Frequency = 1.0f;
		float Amplitude = 1.0f;
		float MaxValue = 1.0f;

		for (int O = 0; O < Octaves; O++) {
			Total += Perlin(X * Frequency, Y * Frequency, Z * Frequency) * Amplitude;
			MaxValue += Amplitude;
			Amplitude *= Persistence;
			Frequency *= 2.0f;
		}

		return Total / MaxValue;
	}

	float ScaleToHashTblSize(float Value)
	{
		return Value * sizeof(HashTblBase);
	}
}   // namespace


#if WITH_EDITOR
#include "Runtime/Core/Public/Internationalization/Regex.h"
#endif

DEFINE_LOG_CATEGORY(LogBXSLibraryBPLibrary);

DECLARE_LOG_CATEGORY_EXTERN(LogStarUnion, Log, All);

DEFINE_LOG_CATEGORY(LogStarUnion);

#define BODY(Operator)	\
In Operator Value;		\
return In;																		

#define vBODY(Operator)	\
In.X Operator Value;	\
In.Y Operator Value;	\
In.Z Operator Value;	\
return In;

UBXSLibraryBPLibrary::UBXSLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{}




//
//
/////////////////////////////////////////////////////////
//     ::ARITHMETICS::                                  //
/////////////////////////////////////////////////////////
//
//
int32 UBXSLibraryBPLibrary::INTPosIncrement(int32 Value)
{
	return Value++;
}
//
int32 UBXSLibraryBPLibrary::INTPreIncrement(int32 Value)
{
	return ++Value;
}
//
int32 UBXSLibraryBPLibrary::INTPosDecrement(int32 Value)
{
	return Value--;
}
//
int32 UBXSLibraryBPLibrary::INTPreDecrement(int32 Value)
{
	return --Value;
}
//
int32 UBXSLibraryBPLibrary::INTIncrement(int32 Value)
{
	return (Value += Value);
}
//
int32 UBXSLibraryBPLibrary::INTDecrement(int32 Value)
{
	return (Value -= Value);
}
//
int32 UBXSLibraryBPLibrary::INTMultiply(int32 Value)
{
	return (Value *= Value);
}
//
int32 UBXSLibraryBPLibrary::INTDivide(int32 Value, int32 i)
{
	return (Value /= (Value * i));
}
//
int32 UBXSLibraryBPLibrary::INTModulo(int32 Value, int32 i)
{
	return (Value %= i);
}
//
int32 UBXSLibraryBPLibrary::INTPercent(int32 Value, int32 i)
{
	return (Value = (Value * i) / 100);
}
//
//
float UBXSLibraryBPLibrary::FPosIncrement(float Value)
{
	return Value++;
}
//
float UBXSLibraryBPLibrary::FPreIncrement(float Value)
{
	return ++Value;
}
//
float UBXSLibraryBPLibrary::FPosDecrement(float Value)
{
	return Value--;
}
//
float UBXSLibraryBPLibrary::FPreDecrement(float Value)
{
	return --Value;
}
//
float UBXSLibraryBPLibrary::FIncrement(float Value)
{
	return (Value += Value);
}
//
float UBXSLibraryBPLibrary::FDecrement(float Value)
{
	return (Value -= Value);
}
//
float UBXSLibraryBPLibrary::FMultiply(float Value)
{
	return (Value *= Value);
}
//
float UBXSLibraryBPLibrary::FDivide(float Value, float f)
{
	return (Value /= (Value * f));
}
//


void UBXSLibraryBPLibrary::OctavePerlinNoise1D(float& Out, float X,
	int Octaves, float Persistence)
{
	float ScaledX = ScaleToHashTblSize(X);

	Out = Perlin(ScaledX, 0.0f, 0.0f, Octaves, Persistence);
}

void UBXSLibraryBPLibrary::OctavePerlinNoise2D(float& Out, float X, float Y,
	int Octaves, float Persistence)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);

	Out = Perlin(ScaledX, ScaledY, 0.0f, Octaves, Persistence);
}

void UBXSLibraryBPLibrary::OctavePerlinNoise3D(float& Out, float X, float Y, float Z,
	int Octaves, float Persistence)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);
	float ScaledZ = ScaleToHashTblSize(Z);

	Out = Perlin(ScaledX, ScaledY, ScaledZ, Octaves, Persistence);
}

void UBXSLibraryBPLibrary::PerlinNoise1D(float& Out, float X,
	float Frequency, float Amplitude)
{
	float ScaledX = ScaleToHashTblSize(X);

	Out = Perlin(ScaledX * Frequency, 0.0f, 0.0f) * Amplitude;
}

void UBXSLibraryBPLibrary::PerlinNoise2D(float& Out, float X, float Y,
	float Frequency, float Amplitude)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);

	Out = Perlin(ScaledX * Frequency, ScaledY * Frequency, 0.0f) * Amplitude;
}

void UBXSLibraryBPLibrary::PerlinNoise3D(float& Out, float X, float Y, float Z,
	float Frequency, float Amplitude)
{
	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);
	float ScaledZ = ScaleToHashTblSize(Z);

	Out = Perlin(ScaledX * Frequency, ScaledY * Frequency, ScaledZ * Frequency) * Amplitude;
}

void UBXSLibraryBPLibrary::AccumulatedPerlinNoise1D(float& Out,
	const TArray<float>& Frequencies,
	const TArray<float>& Amplitudes,
	float X)
{
	if (Frequencies.Num() != Amplitudes.Num())
	{
		UE_LOG(LogTemp, Error,
			TEXT("Number of elements in Frequences and Amplitudes must be same. (Frequences: %d, Amplitudes: %d)"),
			Frequencies.Num(), Amplitudes.Num());
		Out = 0.0f;
		return;
	}

	float ScaledX = ScaleToHashTblSize(X);

	Out = 0.0f;
	for (int Index = 0; Index < Frequencies.Num(); ++Index)
	{
		Out += Perlin(ScaledX * Frequencies[Index], 0.0f, 0.0f) * Amplitudes[Index];
	}
}

void UBXSLibraryBPLibrary::AccumulatedPerlinNoise2D(float& Out,
	const TArray<float>& Frequencies,
	const TArray<float>& Amplitudes,
	float X, float Y)
{
	if (Frequencies.Num() != Amplitudes.Num())
	{
		UE_LOG(LogTemp, Error,
			TEXT("Number of elements in Frequences and Amplitudes must be same. (Frequences: %d, Amplitudes: %d)"),
			Frequencies.Num(), Amplitudes.Num());
		Out = 0.0f;
		return;
	}

	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);

	Out = 0.0f;
	for (int Index = 0; Index < Frequencies.Num(); ++Index)
	{
		Out += Perlin(ScaledX * Frequencies[Index], ScaledY * Frequencies[Index], 0.0f) * Amplitudes[Index];
	}
}

void UBXSLibraryBPLibrary::AccumulatedPerlinNoise3D(float& Out,
	const TArray<float>& Frequencies,
	const TArray<float>& Amplitudes,
	float X, float Y, float Z)
{
	if (Frequencies.Num() != Amplitudes.Num())
	{
		UE_LOG(LogTemp, Error,
			TEXT("Number of elements in Frequences and Amplitudes must be same. (Frequences: %d, Amplitudes: %d)"),
			Frequencies.Num(), Amplitudes.Num());
		Out = 0.0f;
		return;
	}

	float ScaledX = ScaleToHashTblSize(X);
	float ScaledY = ScaleToHashTblSize(Y);
	float ScaledZ = ScaleToHashTblSize(Z);

	Out = 0.0f;
	for (int Index = 0; Index < Frequencies.Num(); ++Index)
	{
		Out += Perlin(ScaledX * Frequencies[Index], ScaledY * Frequencies[Index], ScaledZ * Frequencies[Index]) * Amplitudes[Index];
	}
}


//--------------------PlatformType、ArraySqrt、ServerIP、Audio、physics、UMG lib--------------------
#pragma region Platform Checks

void UBXSLibraryBPLibrary::SwitchOnPlatformType(EPlatformType& Result)
{
	Result = GetPlatformType();
}

EPlatformType UBXSLibraryBPLibrary::GetPlatformType()
{
#if PLATFORM_XBOXONE
	return EPlatformType::XboxOne;
#elif PLATFORM_PS4
	return EPlatformType::PS4;
#elif PLATFORM_SWITCH
	return EPlatformType::Switch;
#else
	return EPlatformType::Desktop;
#endif
}

bool UBXSLibraryBPLibrary::DebugBuild()
{
#if UE_BUILD_DEBUG
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::DevelopmentBuild()
{
#if UE_BUILD_DEVELOPMENT
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::TestBuild()
{
#if UE_BUILD_TEST
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::ShippingBuild()
{
#if UE_BUILD_SHIPPING
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::WithEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::WindowsPlatform()
{
#if PLATFORM_WINDOWS
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::Windows32Platform()
{
#if PLATFORM_WINDOWS
#ifdef _WIN64
	return false;
#else
	return true;
#endif
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::Windows64Platform()
{
#if PLATFORM_WINDOWS
#ifdef _WIN64
	return true;
#else
	return false;
#endif
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::WindowsRtPlatform()
{
#ifdef PLATFORM_WINRT
#if PLATFORM_WINRT
	return true;
#else
	return false;
#endif
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::WindowsRtArmPlatform()
{
#ifdef PLATFORM_WINRT_ARM
#if PLATFORM_WINRT_ARM
	return true;
#else
	return false;
#endif
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::LinuxPlatform()
{
#if PLATFORM_LINUX
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::MacPlatform()
{
#if PLATFORM_MAC
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::Ps4Platform()
{
#if PLATFORM_PS4
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::XboxOnePlatform()
{
#if PLATFORM_XBOXONE
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::SwitchPlatform()
{
#if PLATFORM_SWITCH
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::AndroidPlatform()
{
#if PLATFORM_ANDROID
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::IosPlatform()
{
#if PLATFORM_IOS
	return true;
#else
	return false;
#endif
}

bool UBXSLibraryBPLibrary::DesktopPlatform()
{
#if PLATFORM_DESKTOP
	return true;
#else
	return false;
#endif
}

#pragma endregion
void UBXSLibraryBPLibrary::ForceCrash(const FString& CrashMessage)
{
#if !UE_BUILD_SHIPPING
	// Log the error a bunch to know where it happens exactly
	for (int index = 5; index-- > 0;)
	{
		UE_LOG(LogBXSLibraryBPLibrary, Fatal, TEXT("FORCING CRASH TO HAPPEN: %s"), *CrashMessage);
	}

	// Print that this was intended
	FDebug::AssertFailed("This crash was caused by UBXSLibraryBPLibrary::ForceCrash and was meant to happen.", __FILE__, __LINE__);
#endif
}

void UBXSLibraryBPLibrary::RequestExit(bool bForce)
{
	FGenericPlatformMisc::RequestExit(bForce);
}

//void UBXSLibraryBPLibrary::SetGlobalVolume(UObject* WorldContextObject, float InAmount)
//{
//	if (GEngine)
//	{
//		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
//		{
//			if (FAudioDevice* AudioDevice = World->GetAudioDevice())
//			{
//				AudioDevice->SetTransientMasterVolume(FMath::Max(InAmount, 0.0f));
//			}
//		}
//	}
//}

bool UBXSLibraryBPLibrary::AreObjectsSameClass(UObject* A, UObject* B)
{
	if (A && B)
	{
		return (A->GetClass() == B->GetClass());
	}
	return false;
}

bool UBXSLibraryBPLibrary::IsClassSameAs(UObject* A, UClass* ClassToCompare)
{
	if (!A || !ClassToCompare)
	{
		return false;
	}

	return (A->GetClass() == ClassToCompare);
}

void UBXSLibraryBPLibrary::GetAllLevels(UObject* WorldContextObject, TArray<ULevel*>& Levels)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	Levels = World->GetLevels();
}

UClass* UBXSLibraryBPLibrary::GetClassFromAssetPath(FString Path)
{
	TSubclassOf<UObject> AssetToCheck = NULL;

	// Attempt to load the asset normally
	{
		FString L, R;
		FString AssetName = Path;
		AssetName.Split(".", &L, &R, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

		if (AssetToCheck = LoadClass<UObject>(NULL, *AssetName, *Path))
		{
			return AssetToCheck.Get();
		}
	}
	// If we failed to load it normally then we try unconventional methods(cue Patrick looking menacing meme)

	// Try loading the object as an asset		
	UObject* Asset = StaticLoadObject(UObject::StaticClass(), nullptr, *Path);
	if (Asset)
	{
		UBlueprint* Bp = Cast<UBlueprint>(Asset->GetClass());
		if (Bp)
		{
			// Found asset
			AssetToCheck = Bp->GetClass();
		}
		else
		{
			UE_LOG(LogBXSLibraryBPLibrary, Warning, TEXT("Class not valid"));
		}
	}
	else
	{
		UE_LOG(LogBXSLibraryBPLibrary, Warning, TEXT("Asset is null"));
	}

	return AssetToCheck.Get();
}

void UBXSLibraryBPLibrary::Conv_CollisionChannelsToObjectTypeQuerys(
	TArray<TEnumAsByte<ECollisionChannel>> Channels, TArray<TEnumAsByte<EObjectTypeQuery>>& ConvertedTypes)
{
	ConvertedTypes.Reset();
	for (ECollisionChannel Channel : Channels)
	{
		ConvertedTypes.Add(UEngineTypes::ConvertToObjectType(Channel));
	}
}

TEnumAsByte<EObjectTypeQuery> UBXSLibraryBPLibrary::Conv_CollisionChannelToObjectTypeQuery(
	TEnumAsByte<ECollisionChannel> Channel)
{
	return UEngineTypes::ConvertToObjectType(Channel);
}

FString UBXSLibraryBPLibrary::GetLocalAppDataDirectory()
{
	return (FPaths::ConvertRelativePathToFull(FPaths::ProjectUserDir()));
}

TArray<FString> UBXSLibraryBPLibrary::GetSubDirectories(FString InDir, bool bDeepSearch)
{
	// Turn it into a wildcard search
	FString FinalPath = InDir / TEXT("*");

	TArray<FString> FoundDir;
	// Gets finds the directories only
	IFileManager::Get().FindFiles(FoundDir, *FinalPath, false, true);

	// Loop through and add the directories path
	for (int index = FoundDir.Num(); index-- > 0;)
	{
		FoundDir[index] = (InDir + FoundDir[index] + "/");
	}

	// If we found directories and we're doing a deep search
	if (FoundDir.Num() > 0 && bDeepSearch)
	{
		// For each directory add each once's sub directories recursively
		for (int index = FoundDir.Num(); index-- > 0;)
		{
			// If that subdirectory has a subdirectory then it will keep going till an end is reached
			TArray<FString> SubDir = GetSubDirectories(FoundDir[index], true);
			FoundDir.Append(SubDir);
		}
	}
	return FoundDir;
}

bool UBXSLibraryBPLibrary::DeleteDirectory(FString InDir)
{
	if (FPaths::DirectoryExists(InDir))
	{
		return IFileManager::Get().DeleteDirectory(*InDir, false, true);
	}
	UE_LOG(LogBXSLibraryBPLibrary, Warning, TEXT("Directory: [%s] does not exist, so we're counting this as already deleted!"), *InDir);
	return true;
}

bool UBXSLibraryBPLibrary::DeleteFile(FString InFileDir)
{
	if (FPaths::FileExists(InFileDir))
	{
		return IFileManager::Get().Delete(*InFileDir, false, true, true);
	}
	UE_LOG(LogBXSLibraryBPLibrary, Warning, TEXT("File: [%s] does not exist, so we're counting this as already deleted!"), *InFileDir);
	return true;
}

bool UBXSLibraryBPLibrary::GetObjectsOf(TSubclassOf<UObject> InType,
	TArray<UObject*>& OutputObjects, bool bIsBlueprintClass,
	const FString& InFolder)
{
	// Valid check
	if (!InType || InFolder.IsEmpty())
	{
		UE_LOG(LogBXSLibraryBPLibrary, Warning, TEXT("Invalid parameters to get objects of."));
		return false;
	}

	// Get the objects in folder
	UObjectLibrary* Library = UObjectLibrary::CreateLibrary(InType, bIsBlueprintClass, GIsEditor);
	// Add the object library to asset registry to get the assets from it
	Library->AddToRoot();

	// Load the assets/blueprints
	if (bIsBlueprintClass)
	{
		Library->LoadBlueprintsFromPath(InFolder);
	}
	else
	{

		Library->LoadAssetsFromPath(InFolder);
	}

	// Get the assets from the object libary to return them
	Library->GetObjects<UObject>(OutputObjects);
	Library->RemoveFromRoot();

	if (OutputObjects.Num() > 0)
	{
		// Log how many we found
		UE_LOG(LogBXSLibraryBPLibrary, Display, TEXT("Found %d %s's in directory: %s"),
			OutputObjects.Num(), *InType->GetName(), *InFolder);
	}

	return (OutputObjects.Num() > 0);
}

bool UBXSLibraryBPLibrary::SelectFiles(const FString& Title, const FString& FileTypes, FString& InOutLastPath, const FString& DefaultFile, FString& OutFilename)
{
	OutFilename = FString();

	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bFileChosen = false;
	TArray<FString> OutFilenames;
	if (DesktopPlatform)
	{
		bFileChosen = DesktopPlatform->SaveFileDialog(
			FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
			Title,
			InOutLastPath,
			DefaultFile,
			FileTypes,
			0,
			OutFilenames
		);
	}

	bFileChosen = (OutFilenames.Num() > 0);

	if (bFileChosen)
	{
		// User successfully chose a file; remember the path for the next time the dialog opens.
		InOutLastPath = OutFilenames[0];
		OutFilename = OutFilenames[0];
	}

	return bFileChosen;
}

TArray<FString> UBXSLibraryBPLibrary::SortStrings(const TArray<FString> UnSortedStrings)
{
	TArray<FString> SortedStrings = UnSortedStrings;
	SortedStrings.StableSort();
	return SortedStrings;
}

FString UBXSLibraryBPLibrary::IncreaseVerbosityOfMessage(FString InMessage, bool bIsError)
{
	return (((bIsError) ? "error:" : "warning:") + InMessage);
}

void UBXSLibraryBPLibrary::PrintStringWithCategory(UObject* WorldContextObject,
	const FString& InString, FString InCategory,
	bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	FString Prefix;
	if (World)
	{
		if (World->WorldType == EWorldType::PIE)
		{
			switch (World->GetNetMode())
			{
			case NM_Client:
				Prefix = FString::Printf(TEXT("Client %d: "), GPlayInEditorID - 1);
				break;
			case NM_DedicatedServer:
			case NM_ListenServer:
				Prefix = FString::Printf(TEXT("Server: "));
				break;
			case NM_Standalone:
				break;
			}
		}
	}

	if (InCategory.IsEmpty())
	{
		InCategory = "StaarUnion";
	}

	const FString FinalDisplayString = Prefix + InString;
	FString FinalLogString = FinalDisplayString;

	static const FBoolConfigValueHelper DisplayPrintStringSource(TEXT("Kismet"), TEXT("bLogPrintStringSource"), GEngineIni);
	if (DisplayPrintStringSource)
	{
		const FString SourceObjectPrefix = FString::Printf(TEXT("[%s] "), *GetNameSafe(WorldContextObject));
		FinalLogString = SourceObjectPrefix + FinalLogString;
	}

	if (bPrintToLog)
	{
		UE_LOG(LogStarUnion, Log, TEXT("%s:: %s"), *InCategory, *FinalLogString);

		APlayerController* PC = (WorldContextObject ? UGameplayStatics::GetPlayerController(WorldContextObject, 0) : NULL);
		ULocalPlayer* LocalPlayer = (PC ? Cast<ULocalPlayer>(PC->Player) : NULL);
		if (LocalPlayer && LocalPlayer->ViewportClient && LocalPlayer->ViewportClient->ViewportConsole)
		{
			LocalPlayer->ViewportClient->ViewportConsole->OutputText(FinalDisplayString);
		}
	}
	else
	{
		UE_LOG(LogStarUnion, Verbose, TEXT("%s:: %s"), *InCategory, *FinalLogString);
	}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) // Do not Print in Shipping or Test

	// Also output to the screen, if possible
	if (bPrintToScreen)
	{
		if (GAreScreenMessagesEnabled)
		{
			if (GConfig && Duration < 0)
			{
				GConfig->GetFloat(TEXT("Kismet"), TEXT("PrintStringDuration"), Duration, GEngineIni);
			}
			GEngine->AddOnScreenDebugMessage((uint64)-1, Duration, TextColor.ToFColor(true), FinalDisplayString);
		}
		else
		{
			UE_LOG(LogStarUnion, VeryVerbose, TEXT("Screen messages disabled (!GAreScreenMessagesEnabled).  Cannot print to screen."));
		}
	}
#endif
}

FString UBXSLibraryBPLibrary::ReplaceUnderscore(FString SourceString)
{
	return SourceString.Replace(TEXT("_"), TEXT(" "));
}

FString UBXSLibraryBPLibrary::RemoveSpaces(FString SourceString)
{
	return SourceString.Replace(TEXT(" "), TEXT(""));
}


int UBXSLibraryBPLibrary::GetInputPriority(AActor* InActor)
{
	if (!InActor)
	{
		return 0;
	}

	return InActor->InputPriority;
}

void UBXSLibraryBPLibrary::SetInputPriority(AActor* InActor, int NewInputPriority)
{
	if (!InActor)
	{
		return;
	}

	InActor->InputPriority = NewInputPriority;
}

bool UBXSLibraryBPLibrary::TrySetPlayerInputEnabled(APawn* InPawn, const bool bIsEnabled)
{
	if (InPawn)
	{
		if (APlayerController* PC = Cast<APlayerController>(InPawn->GetController()))
		{
			if (bIsEnabled)
			{
				InPawn->EnableInput(PC);
			}
			else
			{
				InPawn->DisableInput(PC);
			}
			return true;
		}
	}

	return false;
}

APlayerController* UBXSLibraryBPLibrary::TryGetPlayerControllerFromPawn(APawn* InPawn, EExtraSwitch& Result)
{
	Result = EExtraSwitch::OnFailed;
	if (InPawn)
	{
		if (APlayerController* PC = Cast<APlayerController>(InPawn->GetController()))
		{
			Result = EExtraSwitch::OnSucceeded;
			return PC;
		}
	}
	return nullptr;
}




bool UBXSLibraryBPLibrary::IsRotatorZero(FRotator InRot)
{
	return InRot.IsZero();
}

bool UBXSLibraryBPLibrary::MarkRenderDirty(USceneComponent* InComp)
{
	if (!InComp)
	{
		return false;
	}

	InComp->MarkRenderDynamicDataDirty();
	InComp->MarkRenderTransformDirty();
	InComp->MarkRenderStateDirty();
	return true;
}

bool UBXSLibraryBPLibrary::AreObjectsValid(TArray<UObject*> Objects)
{
	if (Objects.Num() == 0)
	{
		return false;
	}

	for (int32 index = Objects.Num(); index-- > 0;)
	{
		// If we run into an invalid object, return that we failed.
		if (!IsValid(Objects[index]))
		{
			return false;
		}
	}

	// If we didnt return then all of them are valid! :D
	return true;
}

bool UBXSLibraryBPLibrary::IsOverlappingAnyActors(UPrimitiveComponent* InComp, bool bExcludeSelf)
{
	// Valid check
	if (InComp)
	{
		TArray<AActor*> FoundActors;
		InComp->GetOverlappingActors(FoundActors);

		// Remove the component's actor
		if (bExcludeSelf)
		{
			FoundActors.Remove(InComp->GetOwner());
		}

		// Check that the array isn't empty
		return (FoundActors.Num() > 0);
	}
	return false;
}

int UBXSLibraryBPLibrary::GetNumberOfActorsOfType(const UObject* WorldContextObject, TSubclassOf<AActor> SearchClass)
{
	int FoundAmount = 0;

	if (UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		// Loop through each actor in the world that is the same class as search class
		for (TActorIterator<AActor> ActorItr(World, SearchClass); ActorItr; ++ActorItr)
		{
			AActor* Actor = *ActorItr;
			if (!Actor)
			{
				FoundAmount++;
			}
		}
	}

	return FoundAmount;
}


void UBXSLibraryBPLibrary::MarkRenderDity_Comps(TArray<USceneComponent*> InComps)
{
	for (USceneComponent* Comp : InComps)
	{
		MarkRenderDirty(Comp);
	}
}

FVector2D UBXSLibraryBPLibrary::GetDirectionalInputsFromDirectionalKeys(const APlayerController* InPlayerController,
	const FKey UpDirectional, const FKey DownDirectional, const FKey RightDirectional, const FKey LeftDirectional)
{
	if (!InPlayerController)
	{
		return FVector2D();
	}

	const FVector2D FinalInput = FVector2D(
	((float)InPlayerController->IsInputKeyDown(LeftDirectional) * -1.0) + (float)InPlayerController->IsInputKeyDown(RightDirectional), // X
		((float)InPlayerController->IsInputKeyDown(DownDirectional) * -1.0f) + (float)InPlayerController->IsInputKeyDown(UpDirectional) // Y
		);

	return FinalInput;
}

float UBXSLibraryBPLibrary::GetAxisValueOfInputs(const APlayerController* InPlayerController, const FKey PositiveKey, const FKey NegativeKey)
{
	if (!InPlayerController)
	{
		return 0.0f;
	}

	return ((float)InPlayerController->IsInputKeyDown(NegativeKey) * -1.0) + (float)InPlayerController->IsInputKeyDown(PositiveKey);
}

int UBXSLibraryBPLibrary::GetLastMaterialIndex(UPrimitiveComponent* Target)
{
	if (!Target)
	{
		return -1;
	}

	return (Target->GetNumMaterials() - 1);
}




bool UBXSLibraryBPLibrary::FindSceneComponentByName(AActor* ActorToSearchIn,
	const FString& CompName, USceneComponent*& FoundComp)
{
	if (ActorToSearchIn && !CompName.IsEmpty())
	{
		for (UActorComponent* Comp : ActorToSearchIn->GetComponents())
		{
			if (USceneComponent* SComp = Cast<USceneComponent>(Comp))
			{
				if (GetNameSafe(SComp) == CompName)
				{
					FoundComp = SComp;
					return true;
				}
			}
		}
	}
	return false;
}

bool UBXSLibraryBPLibrary::FindActorComponentByName(AActor* ActorToSearchIn,
	const FString& CompName, UActorComponent*& FoundComp)
{
	if (ActorToSearchIn && !CompName.IsEmpty())
	{
		for (UActorComponent* Comp : ActorToSearchIn->GetComponents())
		{
			if (GetNameSafe(Comp) == CompName)
			{
				FoundComp = Comp;
				return true;
			}
		}
	}
	return false;
}

UPrimitiveComponent* UBXSLibraryBPLibrary::GetClosestComponentToPoint(TArray<UPrimitiveComponent*> Comps,
	FVector Point, bool Inverse)
{
	UPrimitiveComponent* ClosestComp = nullptr;
	float ClosestDistance = (Inverse) ? 0.0f : MAX_flt;

	for (UPrimitiveComponent* Comp : Comps)
	{
		float CurrentDistance = (Comp->GetComponentLocation() - Point).SizeSquared();
		if (Inverse)
		{
			if (CurrentDistance > ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestComp = Comp;
			}
		}
		else
		{
			if (CurrentDistance < ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestComp = Comp;
			}
		}
	}

	return ClosestComp;
}

AActor* UBXSLibraryBPLibrary::GetClosestActorToPoint(TArray<AActor*> Actors,
	FVector Point, bool Inverse)
{
	AActor* ClosestActor = nullptr;
	float ClosestDistance = (Inverse) ? 0.0f : MAX_flt;

	for (AActor* Actor : Actors)
	{
		float CurrentDistance = (Actor->GetActorLocation() - Point).SizeSquared();

		if (Inverse)
		{
			if (CurrentDistance > ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestActor = Actor;
			}
		}
		else
		{
			if (CurrentDistance < ClosestDistance)
			{
				ClosestDistance = CurrentDistance;
				ClosestActor = Actor;
			}
		}
	}

	return ClosestActor;
}

void UBXSLibraryBPLibrary::DrawDebugCoordinateArrowsAtComponent(USceneComponent* InComponent, FVector Offset, float ArrowLength, float ArrowSize, float ArrowThickness,
	float DebugDisplayTime, FLinearColor ForwardColor, FLinearColor RightColor, FLinearColor UpColor)
{
#if ENABLE_DRAW_DEBUG
	if (!InComponent)
	{
		return;
	}
	else if (UWorld* World = GEngine->GetWorldFromContextObject(InComponent, EGetWorldErrorMode::LogAndReturnNull))
	{
		const FVector StartLoc = (InComponent->GetComponentLocation() + Offset);

		// X
		DrawDebugDirectionalArrow(World, StartLoc, StartLoc + (InComponent->GetForwardVector() * ArrowLength),
			ArrowSize, ForwardColor.ToFColor(true), false, DebugDisplayTime, SDPG_World, ArrowThickness);
		// Y
		DrawDebugDirectionalArrow(World, StartLoc, StartLoc + (InComponent->GetRightVector() * ArrowLength),
			ArrowSize, RightColor.ToFColor(true), false, DebugDisplayTime, SDPG_World, ArrowThickness);
		// Z
		DrawDebugDirectionalArrow(World, StartLoc, StartLoc + (InComponent->GetUpVector() * ArrowLength),
			ArrowSize, UpColor.ToFColor(true), false, DebugDisplayTime, SDPG_World, ArrowThickness);
	}
#endif
}

bool UBXSLibraryBPLibrary::SnapActorToGround(AActor* InActor, float TraceDistance, bool bTraceComplex, ETraceTypeQuery GroundChannel,
	const TArray<AActor*>& ActorsToIgnore, FVector OptionalOffset, bool bDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawDebugTime)
{
	if (InActor)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(InActor, EGetWorldErrorMode::LogAndReturnNull))
		{
			// Setup the variables to use for the trace
			ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(GroundChannel);
			FCollisionQueryParams Params;
			Params.AddIgnoredActors(ActorsToIgnore);
			Params.AddIgnoredActor(InActor); // Ignore the inputted actor
			Params.bTraceComplex = bTraceComplex;

			FVector StartLoc = InActor->GetActorLocation();
			FVector EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));
			FHitResult Hit;

			// Trace
			if (World->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, CollisionChannel, Params))
			{
				// If it hit, update the location of that actor
				InActor->SetActorLocation(Hit.ImpactPoint + OptionalOffset);

#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, Hit.ImpactPoint, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to ImpactPoint
					DrawDebugLine(World, Hit.ImpactPoint, EndLoc, TraceHitColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint to End
					DrawDebugPoint(World, Hit.ImpactPoint, 16.0f, TraceColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint
				}
#endif
				return true;
			}
			else
			{
#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, EndLoc, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to End			
				}
#endif			
			}
		}
	}
	return false;
}

bool UBXSLibraryBPLibrary::IsValidSplinePoint(USplineComponent* SplineComp, int32 InPoint)
{
	if (SplineComp)
	{
		return UKismetMathLibrary::InRange_IntInt(InPoint, 0, (SplineComp->GetNumberOfSplinePoints() - 1));
	}
	return false;
}

int32 UBXSLibraryBPLibrary::GetLastSplinePoint(USplineComponent* SplineComp)
{
	if (SplineComp)
	{
		return (SplineComp->GetNumberOfSplinePoints() - 1);
	}
	return int32();
}

void UBXSLibraryBPLibrary::SnapAllSplinePointsToGround(USplineComponent* SplineComp, float TraceDistance, bool bTraceComplex,
	ETraceTypeQuery TraceChannel, const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug,
	FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawDebugTime)
{
	if (!SplineComp)
	{
		return;
	}
	else if (UWorld* World = GEngine->GetWorldFromContextObject(SplineComp, EGetWorldErrorMode::LogAndReturnNull))
	{
		// Setup the variables to use in the for loop so we're not creating some of these variables for each loop iteration
		ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);
		FCollisionQueryParams Params;
		Params.AddIgnoredActors(ActorsToIgnore);
		Params.AddIgnoredActor(SplineComp->GetOwner()); // Ignore spline components actor
		Params.bTraceComplex = bTraceComplex;

		FVector StartLoc = SplineComp->GetComponentLocation();
		FVector EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));
		FHitResult Hit;

		// Reverse for loop, because its faster than forward for loops
		for (int32 index = (SplineComp->GetNumberOfSplinePoints()); index-- > 0;)
		{
			// Update the trace locations
			StartLoc = SplineComp->GetLocationAtSplinePoint(index, ESplineCoordinateSpace::World);
			EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));

			// Trace
			if (World->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, CollisionChannel, Params))
			{
				// If it hit, update the location of that spline point
				SplineComp->SetLocationAtSplinePoint(index, Hit.ImpactPoint, ESplineCoordinateSpace::World);

#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, Hit.ImpactPoint, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to ImpactPoint
					DrawDebugLine(World, Hit.ImpactPoint, EndLoc, TraceHitColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint to End
					DrawDebugPoint(World, Hit.ImpactPoint, 16.0f, TraceColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint
				}
#endif
			}
			else
			{
#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, EndLoc, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to End			
				}
#endif
			}
		}
	}
}

void UBXSLibraryBPLibrary::SnapSingleSplinePointToGround(USplineComponent* SplineComp,
	int32 SplinePointToSnap, float TraceDistance, bool bTraceComplex, ETraceTypeQuery TraceChannel,
	const TArray<AActor*>& ActorsToIgnore, bool bDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawDebugTime)
{
	if (!SplineComp)
	{
		return;
	}
	else if (IsValidSplinePoint(SplineComp, SplinePointToSnap))
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(SplineComp, EGetWorldErrorMode::LogAndReturnNull))
		{
			// Setup the variables to use in the for loop so we're not creating some of these variables for each loop iteration
			ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);
			FCollisionQueryParams Params;
			Params.AddIgnoredActors(ActorsToIgnore);
			Params.AddIgnoredActor(SplineComp->GetOwner()); // Ignore spline components actor
			Params.bTraceComplex = bTraceComplex;

			FVector StartLoc = SplineComp->GetLocationAtSplinePoint(SplinePointToSnap, ESplineCoordinateSpace::World);
			FVector EndLoc = (StartLoc + (FVector(0.0f, 0.0f, -1.0f) * TraceDistance));
			FHitResult Hit;
			// Trace
			if (World->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, CollisionChannel, Params))
			{
				// If it hit, update the location of that spline point
				SplineComp->SetLocationAtSplinePoint(SplinePointToSnap, Hit.ImpactPoint, ESplineCoordinateSpace::World);

#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, Hit.ImpactPoint, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to ImpactPoint
					DrawDebugLine(World, Hit.ImpactPoint, EndLoc, TraceHitColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint to End
					DrawDebugPoint(World, Hit.ImpactPoint, 16.0f, TraceColor.ToFColor(true), false, DrawDebugTime); // ImpactPoint
				}
#endif
			}
			else
			{
#if ENABLE_DRAW_DEBUG
				if (bDrawDebug)
				{
					DrawDebugLine(World, StartLoc, EndLoc, TraceColor.ToFColor(true), false, DrawDebugTime); // Start to End			
				}
#endif
			}
		}
	}
}

FVector UBXSLibraryBPLibrary::FindLocationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetLocationAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FVector UBXSLibraryBPLibrary::FindTangentAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetTangentAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FVector UBXSLibraryBPLibrary::FindDirectionAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetDirectionAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FRotator UBXSLibraryBPLibrary::FindRotationAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetRotationAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FRotator();
}

FVector UBXSLibraryBPLibrary::FindUpVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetUpVectorAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FVector UBXSLibraryBPLibrary::FindRightVectorAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetRightVectorAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FVector();
}

FTransform UBXSLibraryBPLibrary::FindTransformAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale)
{
	if (SplineComp)
	{
		return SplineComp->GetTransformAtSplineInputKey(InKey, CoordinateSpace);
	}
	return FTransform();
}

float UBXSLibraryBPLibrary::FindRollAtSplineInputKey(USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		return SplineComp->GetRollAtSplineInputKey(InKey, CoordinateSpace);
	}
	return 0.0f;
}

FVector UBXSLibraryBPLibrary::FindScaleAtSplineInputKey(USplineComponent* SplineComp, float InKey)
{
	if (SplineComp)
	{
		return SplineComp->GetScaleAtSplineInputKey(InKey);
	}
	return FVector();
}

void UBXSLibraryBPLibrary::FindLocationAndRotationAtSplineInputKey(FVector& Location, FRotator& Rotation, USplineComponent* SplineComp, float InKey, ESplineCoordinateSpace::Type CoordinateSpace)
{
	if (SplineComp)
	{
		Location = SplineComp->GetLocationAtSplineInputKey(InKey, CoordinateSpace);
		Rotation = SplineComp->GetRotationAtSplineInputKey(InKey, CoordinateSpace);
	}
}

TArray<USplineMeshComponent*> UBXSLibraryBPLibrary::BuildSplineMeshesAlongSpline(
	USplineComponent* SplineComp, UStaticMesh* SplineMesh,
	TArray<UMaterialInterface*> OptionalMaterials,
	UPARAM(ref) const FTransform& RelativeTransform,
	TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis,
	bool bAffectNavigation, bool bGenerateOverlapEvents,
	TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled,
	TEnumAsByte<EObjectTypeQuery> ObjectType,
	EComponentMobility::Type Mobility,
	FVector2D StartScale, FVector2D EndScale)
{
	if (!SplineComp || !SplineMesh)
	{
		return TArray<USplineMeshComponent*>();
	}
	TArray<USplineMeshComponent*> SplineMeshes;

	if (UWorld* const World = SplineComp->GetWorld())
	{
		const ESplineCoordinateSpace::Type CoordinateSpace = ESplineCoordinateSpace::Local;
		const int MaxSplines = (SplineComp->GetNumberOfSplinePoints() - 1);
		for (int index = 0;
			index < MaxSplines; index++)
		{
			if (!IsValidSplinePoint(SplineComp, index))
			{
				break;
			}
			USplineMeshComponent* MeshComp = NewObject<USplineMeshComponent>(SplineComp);
			MeshComp->SetMobility(Mobility);
			if (MeshComp->GetAttachParent() != SplineComp)
			{
				MeshComp->SetupAttachment(SplineComp);
			}
			MeshComp->SetRelativeTransform(RelativeTransform);
			MeshComp->SetStartScale(StartScale);
			MeshComp->SetEndScale(EndScale);
			MeshComp->SetCanEverAffectNavigation(bAffectNavigation);
			MeshComp->SetGenerateOverlapEvents(bGenerateOverlapEvents);
			MeshComp->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(ObjectType));
			MeshComp->SetCollisionEnabled(CollisionEnabled);
			MeshComp->SetForwardAxis(ForwardAxis);
			MeshComp->SetStaticMesh(SplineMesh);

			//// Apply the materials
			//{
			//	TArray<UMaterialInterface*> SplineMaterials = (OptionalMaterials.Num() > 0) ?
			//		OptionalMaterials : GetStaticMaterials(SplineMesh);

			//	if (SplineMaterials.Num() > 0)
			//	{
			//		for (int MatIndex = SplineMaterials.Num(); MatIndex-- > 0;)
			//		{
			//			// Valid check
			//			if (SplineMaterials[MatIndex])
			//			{
			//				MeshComp->SetMaterial(MatIndex, SplineMaterials[MatIndex]);
			//			}
			//		}
			//	}
			//}
			const int NextIndex = (index + 1) % SplineComp->GetNumberOfSplinePoints();
			MeshComp->SetStartAndEnd(
				SplineComp->GetLocationAtSplinePoint(index, CoordinateSpace),
				SplineComp->GetArriveTangentAtSplinePoint(index, CoordinateSpace),
				SplineComp->GetLocationAtSplinePoint(NextIndex, CoordinateSpace),
				SplineComp->GetArriveTangentAtSplinePoint(NextIndex, CoordinateSpace));

			MeshComp->RegisterComponentWithWorld(World);
			SplineMeshes.Add(MeshComp);
		}
	}

	return SplineMeshes;
}




bool UBXSLibraryBPLibrary::IsVaildPath(const FString ImagePath)
{

	if (!FPaths::FileExists(ImagePath))
	{
		return false;
	}

	// Load the compressed byte data from the file
	TArray<uint8> FileData;
	if (!FFileHelper::LoadFileToArray(FileData, *ImagePath))
	{
		return false;
	}

	return true;
}

FString UBXSLibraryBPLibrary::GetFullPath(FString FilePath)
{
	//Check Relative Or absolute path
	FString FullFilePath;
	if (FilePath.StartsWith(".", ESearchCase::CaseSensitive))
	{

		FullFilePath = *FPaths::Combine(FPaths::ProjectContentDir(), FilePath);

		FullFilePath = *FPaths::ConvertRelativePathToFull(FullFilePath);

	}
	else
	{

		FullFilePath = FilePath;
	}

	return FullFilePath;
}

//Discern Texture Type
static TSharedPtr<IImageWrapper> GetImageWrapperByExtention(const FString InImagePath)
{
	IImageWrapperModule& ImageWrapperModule = FModuleManager::GetModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));



	if (InImagePath.EndsWith(".png"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	}
	else if (InImagePath.EndsWith(".jpg") || InImagePath.EndsWith(".jpeg"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
	}
	else if (InImagePath.EndsWith(".bmp"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::BMP);
	}
	else if (InImagePath.EndsWith(".ico"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICO);
	}
	else if (InImagePath.EndsWith(".exr"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::EXR);
	}
	else if (InImagePath.EndsWith(".icns"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICNS);
	}
	return nullptr;
}

UTexture2D* UBXSLibraryBPLibrary::LoadTexture2DFromFile(const FString& FilePath,
	bool& IsValid, int32& Width, int32& Height)
{

	FString FullFilePath = GetFullPath(FilePath);

	if (!IsVaildPath(FullFilePath))
	{
		return NULL;
	}


	IsValid = false;
	UTexture2D* LoadedT2D = NULL;

	//

	//IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = GetImageWrapperByExtention(FullFilePath);

	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath, 0)) return NULL;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		 TArray<uint8> UncompressedBGRA;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))         //TArray<uint8>& OutRawData
		{

			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

			//Valid?
			if (!LoadedT2D) return NULL;
			//~~~~~~~~~~~~~~

			//Out!
			Width = ImageWrapper->GetWidth();
			Height = ImageWrapper->GetHeight();

			//Copy!
			void* TextureData = LoadedT2D-> GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

			//FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
			FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(),0);

			LoadedT2D-> GetPlatformData()->Mips[0].BulkData.Unlock();

			//Update!
			LoadedT2D->UpdateResource();
		}
	}

	// Success!
	IsValid = true;
	return LoadedT2D;
	//return NULL;
}

void UBXSLibraryBPLibrary::ReadConfig(const FString& SectionName, const FString& ValueName, FString &ReturnValue)
{

	//GConfig->Flush(true, GGameIni);

	bool succeed = false;

	 succeed = GConfig->GetString(
		*SectionName,
		*ValueName,
		ReturnValue,
		GGameIni
	);


	UE_LOG(LogTemp, Warning, TEXT("Read Config %s "),succeed ? TEXT("Succeed") : TEXT("Fail"));
	
}


void UBXSLibraryBPLibrary::WriteConfig(const FString& SectionName, const FString& ValueName, const FString &ReturnValue)
{

	//FString newSection = "/Script/CommunicationSetting";
	//FString TA = "DefaultMyConfig";
	GConfig->SetString(
		*SectionName,
		*ValueName,
		*ReturnValue,
		GGameIni
	);

	GConfig->Flush(false, GGameIni);
	/*
		FString log;
		ReadConfig(ReturnValue, ValueName, log);
		UE_LOG(LogTemp, Warning, TEXT("Set Config As %s "), *log);*/

}


bool UBXSLibraryBPLibrary::ReadCustomPathConfig(const FString&FilePath, const FString& SectionName, const FString& ValueName, FString &ReturnString)
{
	FString FullPath = GetFullPath(FilePath);

	GConfig->Flush(true, FullPath);
	bool succeed = GConfig->GetString(*SectionName, *ValueName, ReturnString, FullPath);
	return succeed;

}


 void UBXSLibraryBPLibrary::WriteCustomPathConfig(const FString&FilePath, const FString& SectionName, const FString& ValueName, const FString &WriteString)
{
	FString FullPath = GetFullPath(FilePath);

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	// Does the file exist?
	if (!PlatformFile.FileExists(*FullPath))
	{
		// File doesn't exist; (Attempt to) create a new one.
		FFileHelper::SaveStringToFile(TEXT(""), *FullPath);
	}


	GConfig->SetString(*SectionName, *ValueName, *WriteString, FullPath);

	GConfig->Flush(false, FullPath);

}

 bool UBXSLibraryBPLibrary::ReadFile(const FString FilePath, FString& ReturnString)
 {
	 FString FullPath = GetFullPath(FilePath);

	 FString Cache = "";
	 bool Sucess = false;
	 Sucess = FFileHelper::LoadFileToString(Cache, FullPath.GetCharArray().GetData());
	 ReturnString = Cache;
	 return Sucess;
 }

 bool UBXSLibraryBPLibrary::WriteFile(const FString FilePath, const FString ReturnString)
 {
	 FString FullPath = GetFullPath(FilePath);

	 bool Sucess;
	 Sucess = FFileHelper::SaveStringToFile(ReturnString, *FullPath);
	 return Sucess;
 }

 bool UBXSLibraryBPLibrary::DeleteFileII(const FString FilePath)
 {
	 FString FullPath = GetFullPath(FilePath);

	 IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	 if (PlatformFile.DeleteFile(*FullPath))
	 {
		 UE_LOG(LogTemp, Warning, TEXT("deleteFile: Delete the flie successfully!"));

		 return true;
	 }
	 else
	 {
		 UE_LOG(LogTemp, Warning, TEXT("deleteFile: Not delete the flie!"));

		 return false;
	 }

 }

 FString UBXSLibraryBPLibrary::GetGamePath(DirType E)
 {
	 if (E == DirType::GameDir)
	 {
		 return FPaths::ProjectDir();
	 }
	 return FPaths::ProjectContentDir();

 }

 void  UBXSLibraryBPLibrary::OpenExe(const FString Path,FString& PathPart,FString& FileNamePart,FString& ExtensionPart)
 {
	 FProcHandle currHandle = FPlatformProcess::CreateProc(*Path, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);
	 UE_LOG(LogTemp, Display, TEXT("Path:::%s"), *Path);

	 FPaths::Split(Path, PathPart, FileNamePart, ExtensionPart);


 }

 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetVector(
		 *SectionName,
		 *VariableName,
		 FVector(Value.X, Value.Y, 0),
		 GGameIni
	 );
 }

 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetBool(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32 Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetInt(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetFloat(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetVector(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetRotator(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
	 );
 }
 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetColor(
		 *SectionName,
		 *VariableName,
		 Value.ToFColor(true),
		 GGameIni
	 );
 }
 void UBXSLibraryBPLibrary::VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value)
 {
	 if (!GConfig) return;
	 //~~~~~~~~~~~

	 GConfig->SetString(
		 *SectionName,
		 *VariableName,
		 *Value,
		 GGameIni
	 );
 }

 FRotator UBXSLibraryBPLibrary::TransformVectorToActorSpaceAngle(AActor* Actor, const FVector& InVector)
 {
	 if (!Actor) return FRotator::ZeroRotator;
	 return Actor->ActorToWorld().InverseTransformVector(InVector).Rotation();
 }
 FVector UBXSLibraryBPLibrary::TransformVectorToActorSpace(AActor* Actor, const FVector& InVector)
 {
	 if (!Actor) return FVector::ZeroVector;
	 return Actor->ActorToWorld().InverseTransformVector(InVector);
 }

 UObject* UBXSLibraryBPLibrary::LoadObjectFromAssetPath(TSubclassOf<UObject> ObjectClass, FName Path, bool& IsValid)
 {
	 IsValid = false;

	 if (Path == NAME_None) return NULL;
	 //~~~~~~~~~~~~~~~~~~~~~

	 UObject* LoadedObj = StaticLoadObject(ObjectClass, NULL, *Path.ToString());

	 IsValid = LoadedObj != nullptr;

	 return LoadedObj;
 }
 FName UBXSLibraryBPLibrary::GetObjectPath(UObject* Obj)
 {
	 if (!Obj) return NAME_None;
	 if (!Obj->IsValidLowLevel()) return NAME_None;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~

	 FSoftObjectPath ThePath = FSoftObjectPath(Obj);

	 if (!ThePath.IsValid()) return "";

	 //The Class FString Name For This Object
	 FString str = Obj->GetClass()->GetDescription();

	 //Remove spaces in Material Instance Constant class description!
	 str = str.Replace(TEXT(" "), TEXT(""));

	 str += "'";
	 str += ThePath.ToString();
	 str += "'";

	 return FName(*str);
 }

 void UBXSLibraryBPLibrary::OperatingSystem__GetCurrentPlatform(
	 bool& Windows_, 		//some weird bug of making it all caps engine-side
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
 ) {
	 //#define's in UE4 source code
	 Windows_ = PLATFORM_WINDOWS;
	 Mac = PLATFORM_MAC;
	 Linux = PLATFORM_LINUX;

	 PS4 = PLATFORM_PS4;
	 XBoxOne = PLATFORM_XBOXONE;

	 iOS = PLATFORM_IOS;
	 Android = PLATFORM_ANDROID;
	 Android_ARM = PLATFORM_ANDROID_ARM;
	 Android_Vulkan = PLATFORM_ANDROID;
	 HTML5 = false;//PLATFORM_HTML5;

	 Apple = PLATFORM_APPLE;
 }

 FString UBXSLibraryBPLibrary::RealWorldTime__GetCurrentOSTime(
	 int32& MilliSeconds,
	 int32& Seconds,
	 int32& Minutes,
	 int32& Hours12,
	 int32& Hours24,
	 int32& Day,
	 int32& Month,
	 int32& Year
 ) {
	 const FDateTime Now = FDateTime::Now();

	 MilliSeconds = Now.GetMillisecond();
	 Seconds = Now.GetSecond();
	 Minutes = Now.GetMinute();
	 Hours12 = Now.GetHour12();
	 Hours24 = Now.GetHour(); //24
	 Day = Now.GetDay();
	 Month = Now.GetMonth();
	 Year = Now.GetYear();

	 //MS are not included in FDateTime::ToString(), so adding it
	 //The Parse function accepts if MS are present.
	 FString NowWithMS = Now.ToString();
	 NowWithMS += "." + FString::FromInt(MilliSeconds);
	 return NowWithMS;
 }

 void UBXSLibraryBPLibrary::RealWorldTime__GetTimePassedSincePreviousTime(
	 const FString& PreviousTime,
	 float& Milliseconds,
	 float& Seconds,
	 float& Minutes,
	 float& Hours
 ) {
	 FDateTime ParsedDateTime;
	 FDateTime::Parse(PreviousTime, ParsedDateTime);
	 const FTimespan TimeDiff = FDateTime::Now() - ParsedDateTime;

	 Milliseconds = TimeDiff.GetTotalMilliseconds();
	 Seconds = TimeDiff.GetTotalSeconds();
	 Minutes = TimeDiff.GetTotalMinutes();
	 Hours = TimeDiff.GetTotalHours();
 }

 void UBXSLibraryBPLibrary::RealWorldTime__GetDifferenceBetweenTimes(
	 const FString& PreviousTime1,
	 const FString& PreviousTime2,
	 float& Milliseconds,
	 float& Seconds,
	 float& Minutes,
	 float& Hours
 ) {
	 FDateTime ParsedDateTime1;
	 FDateTime::Parse(PreviousTime1, ParsedDateTime1);

	 FDateTime ParsedDateTime2;
	 FDateTime::Parse(PreviousTime2, ParsedDateTime2);

	 FTimespan TimeDiff;

	 if (PreviousTime1 < PreviousTime2)
	 {
		 TimeDiff = ParsedDateTime2 - ParsedDateTime1;
	 }
	 else
	 {
		 TimeDiff = ParsedDateTime1 - ParsedDateTime2;
	 }

	 Milliseconds = TimeDiff.GetTotalMilliseconds();
	 Seconds = TimeDiff.GetTotalSeconds();
	 Minutes = TimeDiff.GetTotalMinutes();
	 Hours = TimeDiff.GetTotalHours();
 }

 void UBXSLibraryBPLibrary::Open_URL_In_Web_Browser(FString TheURL)
 {
	 FPlatformProcess::LaunchURL(*TheURL, nullptr, nullptr);
 }

 FString UBXSLibraryBPLibrary::VictoryPaths__Win64Dir_BinaryLocation()
 {
	 return FString(FPlatformProcess::BaseDir());
 }

 FString UBXSLibraryBPLibrary::VictoryPaths__WindowsNoEditorDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::RootDir());
 }

 FString UBXSLibraryBPLibrary::VictoryPaths__GameRootDirectory()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());
 }

 FString UBXSLibraryBPLibrary::VictoryPaths__SavedDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir());
 }
 FString UBXSLibraryBPLibrary::VictoryPaths__ConfigDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectConfigDir());
 }

 FString UBXSLibraryBPLibrary::VictoryPaths__ScreenShotsDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ScreenShotDir());
 }

 FString UBXSLibraryBPLibrary::VictoryPaths__LogsDir()
 {
	 return FPaths::ConvertRelativePathToFull(FPaths::ProjectLogDir());
 }

 static bool FolderExists(const FString& Dir)
 {
	 return FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Dir);
 }

 static bool VCreateDirectory(FString FolderToMake) //not const so split can be used, and does not damage input
 {
	 if (FolderExists(FolderToMake))
	 {
		 return true;
	 }

	 // Normalize all / and \ to TEXT("/") and remove any trailing TEXT("/") if the character before that is not a TEXT("/") or a colon
	 FPaths::NormalizeDirectoryName(FolderToMake);

	 //Normalize removes the last "/", but is needed by algorithm
	 //  Guarantees While loop will end in a timely fashion.
	 FolderToMake += "/";

	 FString Base;
	 FString Left;
	 FString Remaining;

	 //Split off the Root
	 FolderToMake.Split(TEXT("/"), &Base, &Remaining);
	 Base += "/"; //add root text and Split Text to Base

	 while (Remaining != "")
	 {
		 Remaining.Split(TEXT("/"), &Left, &Remaining);

		 //Add to the Base
		 Base += Left + FString("/"); //add left and split text to Base

		 //Create Incremental Directory Structure!
		 if (!FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(*Base) &&
			 !FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*Base))
		 {
			 return false;
			 //~~~~~
		 }
	 }

	 return true;
 }

 UTexture2D* UBXSLibraryBPLibrary::LoadTexture2D_FromDDSFile(const FString& FullFilePath)
 {
	 UTexture2D* Texture = NULL;

	 FString TexturePath = FullFilePath;//FPaths::GameContentDir( ) + TEXT( "../Data/" ) + TextureFilename;
	 TArray<uint8> FileData;

	 /* Load DDS texture */
	 if (FFileHelper::LoadFileToArray(FileData, *TexturePath, 0))
	 {
		 FDDSLoadHelper DDSLoadHelper(&FileData[0], FileData.Num());
		 if (DDSLoadHelper.IsValid2DTexture())
		 {
			 int32 NumMips = DDSLoadHelper.ComputeMipMapCount();
			 EPixelFormat Format = DDSLoadHelper.ComputePixelFormat();
			 int32 BlockSize = 16;

			 if (NumMips == 0)
			 {
				 NumMips = 1;
			 }

			 if (Format == PF_DXT1)
			 {
				 BlockSize = 8;
			 }

			 /* Create transient texture */
			 Texture = UTexture2D::CreateTransient(DDSLoadHelper.DDSHeader->dwWidth, DDSLoadHelper.DDSHeader->dwHeight, Format);
			 if (!Texture) return NULL;
			 //Texture->PlatformData->NumSlices = 1;
			 Texture->NeverStream = true;

			 /* Get pointer to actual data */
			 uint8* DataPtr = (uint8*)DDSLoadHelper.GetDDSDataPointer();

			 uint32 CurrentWidth = DDSLoadHelper.DDSHeader->dwWidth;
			 uint32 CurrentHeight = DDSLoadHelper.DDSHeader->dwHeight;

			 /* Iterate through mips */
			 for (int32 i = 0; i < NumMips; i++)
			 {
				 /* Lock to 1x1 as smallest size */
				 CurrentWidth = (CurrentWidth < 1) ? 1 : CurrentWidth;
				 CurrentHeight = (CurrentHeight < 1) ? 1 : CurrentHeight;

				 /* Get number of bytes to read */
				 int32 NumBytes = CurrentWidth * CurrentHeight * 4;
				 if (Format == PF_DXT1 || Format == PF_DXT3 || Format == PF_DXT5)
				 {
					 /* Compressed formats */
					 NumBytes = ((CurrentWidth + 3) / 4) * ((CurrentHeight + 3) / 4) * BlockSize;
				 }

				 /* Write to existing mip */
				 if (i < Texture-> GetPlatformData()->Mips.Num())
				 {
					 FTexture2DMipMap& Mip = Texture-> GetPlatformData()->Mips[i];

					 void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
					 FMemory::Memcpy(Data, DataPtr, NumBytes);
					 Mip.BulkData.Unlock();
				 }

				 /* Add new mip */
				 else
				 {
					 //FTexture2DMipMap* Mip = &Texture->GetPlatformData()->Mips;
					 FTexture2DMipMap* Mip = new(Texture-> GetPlatformData()->Mips) FTexture2DMipMap();
					 Mip->SizeX = CurrentWidth;
					 Mip->SizeY = CurrentHeight;

					 Mip->BulkData.Lock(LOCK_READ_WRITE);
					 Mip->BulkData.Realloc(NumBytes);
					 Mip->BulkData.Unlock();

					 void* Data = Mip->BulkData.Lock(LOCK_READ_WRITE);
					 FMemory::Memcpy(Data, DataPtr, NumBytes);
					 Mip->BulkData.Unlock();
				 }

				 /* Set next mip level */
				 CurrentWidth /= 2;
				 CurrentHeight /= 2;

				 DataPtr += NumBytes;
			 }

			 Texture->UpdateResource();
		 }
	 }

	 return Texture;
 }

 static EImageFormat GetJoyImageFormat(EJoyImageFormats JoyFormat)
 {
	 /*
	 ImageWrapper.h
	 namespace EImageFormat
	 {

	 Enumerates the types of image formats this class can handle

	 enum Type
	 {
		 //Portable Network Graphics
		 PNG,
		 //Joint Photographic Experts Group
		 JPEG,
		 //Single channel jpeg
		 GrayscaleJPEG,
		 //Windows Bitmap
		 BMP,
		 //Windows Icon resource
		 ICO,
		 //OpenEXR (HDR) image file format
		 EXR,
		 //Mac icon
		 ICNS
	 };
 };
	 */
	 switch (JoyFormat)
	 {
	 case EJoyImageFormats::JPG: return EImageFormat::JPEG;
	 case EJoyImageFormats::PNG: return EImageFormat::PNG;
	 case EJoyImageFormats::BMP: return EImageFormat::BMP;
	 case EJoyImageFormats::ICO: return EImageFormat::ICO;
	 case EJoyImageFormats::EXR: return EImageFormat::EXR;
	 case EJoyImageFormats::ICNS: return EImageFormat::ICNS;
	 }
	 return EImageFormat::JPEG;
 }

 UTexture2D* UBXSLibraryBPLibrary::Victory_LoadTexture2D_FromFile(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height)
 {


	 IsValid = false;
	 UTexture2D* LoadedT2D = NULL;

	 IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	 TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));

	 //Load From File
	 TArray<uint8> RawFileData;
	 if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) return NULL;
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	 //Create T2D!
	 if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	 {
// 		 TArrayView64<uint8>* UncompressedBGRA;
// 		 if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
// 		 {
// 			 LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
// 
// 			 //Valid?
// 			 if (!LoadedT2D) return NULL;
// 			 //~~~~~~~~~~~~~~
// 
// 			 //Out!
// 			 Width = ImageWrapper->GetWidth();
// 			 Height = ImageWrapper->GetHeight();
// 
// 			 //Copy!
// 			 void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
// 			 FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
// 			 LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();
// 
// 			 //Update!
// 			 LoadedT2D->UpdateResource();
// 		 }
	 }

	 // Success!
	 IsValid = true;
	 return LoadedT2D;
 }
 //UTexture2D* UBXSLibraryBPLibrary::Victory_LoadTexture2D_FromFile_Pixels(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels)
 //{
	// //Clear any previous data
	// OutPixels.Empty();

	// IsValid = false;
	// UTexture2D* LoadedT2D = NULL;

	// IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	// TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));

	// //Load From File
	// TArray<uint8> RawFileData;
	// if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) return NULL;
	// //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// //Create T2D!
	// if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	// {
	//	 const TArray<uint8>* UncompressedRGBA = NULL;
	//	 if (ImageWrapper->GetRaw(ERGBFormat::RGBA, 8, UncompressedRGBA))
	//	 {
	//		 LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_R8G8B8A8);

	//		 //Valid?
	//		 if (!LoadedT2D) return NULL;
	//		 //~~~~~~~~~~~~~~

	//		 //Out!
	//		 Width = ImageWrapper->GetWidth();
	//		 Height = ImageWrapper->GetHeight();

	//		 const TArray<uint8>& ByteArray = *UncompressedRGBA;
	//		 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//		 for (int32 v = 0; v < ByteArray.Num(); v += 4)
	//		 {
	//			 if (!ByteArray.IsValidIndex(v + 3))
	//			 {
	//				 break;
	//			 }

	//			 OutPixels.Add(
	//				 FLinearColor(
	//					 ByteArray[v],		//R
	//					 ByteArray[v + 1],		//G
	//					 ByteArray[v + 2],		//B
	//					 ByteArray[v + 3] 		//A
	//				 )
	//			 );
	//		 }
	//		 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//		 //Copy!
	//		 void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	//		 FMemory::Memcpy(TextureData, UncompressedRGBA->GetData(), UncompressedRGBA->Num());
	//		 LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

	//		 //Update!
	//		 LoadedT2D->UpdateResource();
	//	 }
	// }

	// // Success!
	// IsValid = true;
	// return LoadedT2D;

 //}
 bool UBXSLibraryBPLibrary::Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 x, int32 y, FLinearColor& FoundColor)
 {
	 int32 Index = y * ImageHeight + x;
	 if (!Pixels.IsValidIndex(Index))
	 {
		 return false;
	 }

	 FoundColor = Pixels[Index];
	 return true;
 }


 bool UBXSLibraryBPLibrary::Victory_SavePixels(
	 const FString& FullFilePath
	 , int32 Width, int32 Height
	 , const TArray<FLinearColor>& ImagePixels
	 , bool SaveAsBMP
	 , bool sRGB
	 , FString& ErrorString
 ) {
	 if (FullFilePath.Len() < 1)
	 {
		 ErrorString = "No file path";
		 return false;
	 }
	 //~~~~~~~~~~~~~~~~~

	 //Ensure target directory exists, 
	 //		_or can be created!_ <3 Rama
	 FString NewAbsoluteFolderPath = FPaths::GetPath(FullFilePath);
	 FPaths::NormalizeDirectoryName(NewAbsoluteFolderPath);
	 if (!VCreateDirectory(NewAbsoluteFolderPath))
	 {
		 ErrorString = "Folder could not be created, check read/write permissions~ " + NewAbsoluteFolderPath;
		 return false;
	 }

	 //Create FColor version
	 TArray<FColor> ColorArray;
	 for (const FLinearColor& Each : ImagePixels)
	 {
		 ColorArray.Add(Each.ToFColor(sRGB));
	 }

	 if (ColorArray.Num() != Width * Height)
	 {
		 ErrorString = "Error ~ height x width is not equal to the total pixel array length!";
		 return false;
	 }

	 //Remove any supplied file extension and/or add accurate one
	 FString FinalFilename = FPaths::GetBaseFilename(FullFilePath, false); //false = dont remove path
	 FinalFilename += (SaveAsBMP) ? ".bmp" : ".png";

	 //~~~

	 if (SaveAsBMP)
	 {
		 ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
		 return FFileHelper::CreateBitmap(
			 *FinalFilename,
			 Width,
			 Height,
			 ColorArray.GetData(), //const struct FColor* Data, 
			 nullptr,//struct FIntRect* SubRectangle = NULL, 
			 &IFileManager::Get(),
			 nullptr, //out filename info only 
			 true //bool bInWriteAlpha 
		 );
	 }
	 else
	 {
		 TArray<uint8> CompressedPNG;
		 FImageUtils::CompressImageArray(
			 Width,
			 Height,
			 ColorArray,
			 CompressedPNG
		 );

		 ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
		 return FFileHelper::SaveArrayToFile(CompressedPNG, *FinalFilename);
	 }

	 /*
	 //Crashed for JPG, worked great for PNG
	 //Maybe also works for BMP so could offer those two as save options?

	 const int32 x = Width;
	 const int32 y = Height;
	 if(ColorArray.Num() != x * y)
	 {
		 ErrorString = "Error ~ height x width is not equal to the total pixel array length!";
		 return false;
	 }

	 //Image Wrapper Module
	 IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));

	 //Create Compressor
	 IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(GetJoyImageFormat(ImageFormat));

	 if(!ImageWrapper.IsValid())
	 {
		 ErrorString = "Error ~ Image wrapper could not be created!";
		 return false;
	 }
	 //~~~~~~~~~~~~~~~~~~~~~~

	 if ( ! ImageWrapper->SetRaw(
			 (void*)&ColorArray[0], 			//mem address of array start
			 sizeof(FColor) * x * y, 			//total size
			 x, y, 								//dimensions
			 ERGBFormat::BGRA,				//LinearColor == RGBA
			 (sizeof(FColor) / 4) * 8			//Bits per pixel
	 )) {
		 ErrorString = "ImageWrapper::SetRaw() did not succeed";
		 return false;
	 }

	 ErrorString = "Success! or if returning false, the saving of file to disk did not succeed for File IO reasons";
	 return FFileHelper::SaveArrayToFile(ImageWrapper->GetCompressed(), *FinalFilename);
	 */
 }

 bool UBXSLibraryBPLibrary::Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor)
 {
	 if (!T2D)
	 {
		 return false;
	 }

	 if (X <= -1 || Y <= -1)
	 {
		 return false;
	 }

	 T2D->SRGB = false;
	 T2D->CompressionSettings = TC_VectorDisplacementmap;

	 //Update settings
	 T2D->UpdateResource();

	 FTexture2DMipMap& MipsMap = T2D-> GetPlatformData()->Mips[0];
	 int32 TextureWidth = MipsMap.SizeX;
	 int32 TextureHeight = MipsMap.SizeY;

	 FByteBulkData* RawImageData = &MipsMap.BulkData;

	 if (!RawImageData)
	 {
		 return false;
	 }

	 FColor* RawColorArray = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));

	 //Safety check!
	 if (X >= TextureWidth || Y >= TextureHeight)
	 {
		 return false;
	 }

	 //Get!, converting FColor to FLinearColor 
	 PixelColor = RawColorArray[Y * TextureWidth + X];

	 RawImageData->Unlock();
	 return true;
 }
 bool UBXSLibraryBPLibrary::Victory_GetPixelsArrayFromT2DDynamic(UTexture2DDynamic* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray)
 {
	 if (!T2D)
	 {
		 return false;
	 }

	 //To prevent overflow in BP if used in a loop
	 PixelArray.Empty();

	 //~~~~~~~~~~~~~~~~~~~~~~
	 // Modifying original here
	 T2D->SRGB = false;
	 T2D->CompressionSettings = TC_VectorDisplacementmap;

	 //Update settings
	 T2D->UpdateResource();
	 //~~~~~~~~~~~~~~~~~~~~~~

	 //Confused, DDC / platform data is invalid for dynamic, how to get its byte data?
	 //FTextureResource from UTexture base class?
	 return false;

	 /*
	 FTexturePlatformData** PtrPtr = T2D->GetRunningPlatformData();
	 if(!PtrPtr) return false;
	 FTexturePlatformData* Ptr = *PtrPtr;
	 if(!Ptr) return false;

	 FTexture2DMipMap& MyMipMap 	= Ptr->Mips[0];
	 TextureWidth = MyMipMap.SizeX;
	 TextureHeight = MyMipMap.SizeY;

	 FByteBulkData* RawImageData 	= &MyMipMap.BulkData;

	 if(!RawImageData)
	 {
		 return false;
	 }

	 FColor* RawColorArray = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));

	 UE_LOG(LogTemp,Warning,TEXT("Victory Plugin, Get Pixels, tex width for mip %d"), TextureWidth);
	 UE_LOG(LogTemp,Warning,TEXT("Victory Plugin, Get Pixels, tex width from T2D ptr %d"), T2D->GetSurfaceWidth());

	 for(int32 x = 0; x < TextureWidth; x++)
	 {
		 for(int32 y = 0; y < TextureHeight; y++)
		 {
			 PixelArray.Add(RawColorArray[x * TextureWidth + y]);
		 }
	 }

	 RawImageData->Unlock();
	 */

	 return true;
 }

 bool UBXSLibraryBPLibrary::Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray)
 {
	 if (!T2D)
	 {
		 return false;
	 }

	 //To prevent overflow in BP if used in a loop
	 PixelArray.Empty();

	 T2D->SRGB = false;
	 T2D->CompressionSettings = TC_VectorDisplacementmap;

	 //Update settings
	 T2D->UpdateResource();

	 FTexture2DMipMap& MyMipMap = T2D-> GetPlatformData()->Mips[0];
	 TextureWidth = MyMipMap.SizeX;
	 TextureHeight = MyMipMap.SizeY;

	 FByteBulkData* RawImageData = &MyMipMap.BulkData;

	 if (!RawImageData)
	 {
		 return false;
	 }

	 FColor* RawColorArray = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));

	 for (int32 x = 0; x < TextureWidth; x++)
	 {
		 for (int32 y = 0; y < TextureHeight; y++)
		 {
			 PixelArray.Add(RawColorArray[x * TextureWidth + y]);
		 }
	 }

	 RawImageData->Unlock();
	 return true;
 }

 bool UBXSLibraryBPLibrary::ReadOggWaveData(class USoundWave* sw, TArray<uint8>* rawFile)
 {
	 FSoundQualityInfo info;
	 FVorbisAudioInfo vorbis_obj;
	 if (!vorbis_obj.ReadCompressedInfo(rawFile->GetData(), rawFile->Num(), &info))
	 {
		 //Debug("Can't load header");
		 return true;
	 }

	 if (!sw) return true;
	 sw->SoundGroup = ESoundGroup::SOUNDGROUP_Default;
	 sw->NumChannels = info.NumChannels;
	 sw->Duration = info.Duration;
	 sw->RawPCMDataSize = info.SampleDataSize;
	 sw->SetSampleRate(info.SampleRate);
	 sw->RawData;

	 return false;
 }

//  class USoundWave* UBXSLibraryBPLibrary::LoadOggDataFromFile(const FString& FilePath)
//  {
// 
// 	 FSoundWaveData* sw = NewObject<FSoundWaveData>(FSoundWaveData::StaticClass());
// 
// 	 //TSharedPtr<FSoundWaveData, ESPMode::ThreadSafe> SoundWaveDataPtr{ MakeShared<FSoundWaveData>() };
// 
// 	 if (!sw)
// 		 return NULL;
// 
// 	 //* If true the song was successfully loaded
// 	 bool loaded = false;
// 
// 	 FString FullPath = GetFullPath(FilePath);
// 
// 
// 	 //* loaded song file (binary, encoded)
// 	 TArray < uint8 > rawFile;
// 
// 	 loaded = FFileHelper::LoadFileToArray(rawFile, FullPath.GetCharArray().GetData());
// 
// 	 if (loaded)
// 	 {
// 		 FByteBulkData* bulkData = &sw->CompressedFormatData.GetFormat(TEXT("OGG"));
// 		 //sw->RawData = sw->CompressedFormatData.GetFormat(TEXT("OGG"));
// 
// 		 bulkData->Lock(LOCK_READ_WRITE);
// 		 FMemory::Memcpy(bulkData->Realloc(rawFile.Num()), rawFile.GetData(), rawFile.Num());
// 		 bulkData->Unlock();
// 
// 		 sw->RawData = *bulkData;
// 
// 		 loaded = ReadOggWaveData(sw, &rawFile) == 0 ? true : false;
// 	 }
// 
// 	 if (!loaded)
// 		 return NULL;
// 
// 	 return sw;
// 
//  }

 class USoundWave* UBXSLibraryBPLibrary::LoadWaveDataFromFile(const FString& FilePath)
 {
	 USoundWave* sw = NewObject<USoundWave>(USoundWave::StaticClass());

	 if (!sw)
		 return nullptr;

	 FString FullPath = GetFullPath(FilePath);

	 TArray < uint8 > rawFile;

	 FFileHelper::LoadFileToArray(rawFile, FullPath.GetCharArray().GetData());
	 FWaveModInfo WaveInfo;

	 if (WaveInfo.ReadWaveInfo(rawFile.GetData(), rawFile.Num()))
	 {
		 sw->InvalidateCompressedData();

		 sw->RawData.Lock(LOCK_READ_WRITE);
		 void* LockedData = sw->RawData.Realloc(rawFile.Num());
		 FMemory::Memcpy(LockedData, rawFile.GetData(), rawFile.Num());
		 sw->RawData.Unlock();

		 int32 DurationDiv = *WaveInfo.pChannels * *WaveInfo.pBitsPerSample * *WaveInfo.pSamplesPerSec;
		 if (DurationDiv)
		 {
			 sw->Duration = *WaveInfo.pWaveDataSize * 8.0f / DurationDiv;
		 }
		 else
		 {
			 sw->Duration = 0.0f;
		 }

		 sw->SetSampleRate(*WaveInfo.pSamplesPerSec);
		 sw->NumChannels = *WaveInfo.pChannels;
		 sw->RawPCMDataSize = WaveInfo.SampleDataSize;
		 sw->SoundGroup = ESoundGroup::SOUNDGROUP_Default;
	 }
	 else {
		 return nullptr;
	 }

	 return sw;
 }

 EPathFollowingRequestResult::Type UBXSLibraryBPLibrary::Victory_AI_MoveToWithFilter(
	 APawn* Pawn,
	 const FVector& Dest,
	 TSubclassOf<UNavigationQueryFilter> FilterClass,
	 float AcceptanceRadius,
	 bool bProjectDestinationToNavigation,
	 bool bStopOnOverlap,
	 bool bCanStrafe
	 ) {
	 if (!Pawn)
	 {
		 return EPathFollowingRequestResult::Failed;
	 }

	 AAIController* AIControl = Cast<AAIController>(Pawn->GetController());
	 if (!AIControl)
	 {
		 return EPathFollowingRequestResult::Failed;
	 }

	 return AIControl->MoveToLocation(
		 Dest,
		 AcceptanceRadius,
		 bStopOnOverlap, 	//bStopOnOverlap
		 true,						//bUsePathfinding 
		 bProjectDestinationToNavigation,
		 bCanStrafe,			//bCanStrafe
		 FilterClass			//<~~~
		 );
 }

 bool UBXSLibraryBPLibrary::IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass)
 {
	 if (!WidgetClass) return false;
	 if (!WorldContextObject) return false;

	 UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	 if (!World) return false;
	 //~~~~~~~~~~~

	 for (TObjectIterator<UUserWidget> Itr; Itr; ++Itr)
	 {
		 if (Itr->GetWorld() != World) continue;
		 //~~~~~~~~~~~~~~~~~~~~~

		 if (!Itr->IsA(WidgetClass)) continue;
		 //~~~~~~~~~~~~~~~~~~~

		 if (Itr->GetIsVisible())			//IsInViewport in 4.6
		 {
			 return true;
		 }
	 }

	 return false;
 }

 UObject* UBXSLibraryBPLibrary::CreateObject(UObject* WorldContextObject, UClass* TheObjectClass)
 {
	 //See deprecation warning
	 //	Deprecation warning makes it no longer appear in context menu as a new node to add
	 return nullptr;
	 /*
	 if(!TheObjectClass) return NULL;
	 //~~~~~~~~~~~~~~~~~

	 //using a context object to get the world!
	 UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	 if(!World) return NULL;
	 //~~~~~~~~~~~

	 //Need to submit pull request for custom name and custom class both
	 return NewObject<UObject>(World,TheObjectClass);
	 */
 }

 UPrimitiveComponent* UBXSLibraryBPLibrary::CreatePrimitiveComponent(
	 UObject* WorldContextObject,
	 TSubclassOf<UPrimitiveComponent> CompClass,
	 FName Name,
	 FVector Location,
	 FRotator Rotation
	 ) {
	 if (!CompClass) return NULL;
	 //~~~~~~~~~~~~~~~~~

	 //using a context object to get the world!
	 UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	 if (!World) return NULL;
	 //~~~~~~~~~~~

	 UPrimitiveComponent* NewComp = NewObject<UPrimitiveComponent>(World, Name);
	 if (!NewComp) return NULL;
	 //~~~~~~~~~~~~~

	 NewComp->SetWorldLocation(Location);
	 NewComp->SetWorldRotation(Rotation);
	 NewComp->RegisterComponentWithWorld(World);

	 return NewComp;
 }




 //
 void UBXSLibraryBPLibrary::ShuffleArrayWithStream_impl(void* TargetArray, const FArrayProperty* ArrayProperty, const FRandomStream& Stream)
 {
	 if (TargetArray)
	 {
		 FScriptArrayHelper ArrayHelper(ArrayProperty, TargetArray);
		 int32 LastIndex = ArrayHelper.Num() - 1;

		 for (int32 i = 0; i < LastIndex; ++i)
		 {
			 int32 Index = Stream.RandRange(0, LastIndex);
			 if (i != Index)
			 {
				 ArrayHelper.SwapValues(i, Index);
			 }
		 }
	 }
 }

 bool UBXSLibraryBPLibrary::SetMousePosition(APlayerController* PC, const float& PosX, const float& PosY)
 {
	 if (!PC) return false;

	 ULocalPlayer* LPlayer = Cast<ULocalPlayer>(PC->Player);

	 if (!LPlayer) return false;

	 UGameViewportClient* ViewportClient = Cast<UGameViewportClient>(LPlayer->ViewportClient);

	 if (!ViewportClient) return false;

	 FViewport* Viewport = ViewportClient->Viewport;

	 if (!Viewport) return false;

	 Viewport->SetMouse(int32(PosX), int32(PosY));

	 return true;
 }

 float UBXSLibraryBPLibrary::GetActorLastRenderTime(AActor* RefActor)
 {
	 return RefActor->GetLastRenderTime();
 }

 bool UBXSLibraryBPLibrary::WasActorRenderedRecently(AActor* RefActor, float MaxRecentTime)
 {
	 float RenderTime = GetActorLastRenderTime(RefActor) + MaxRecentTime;
	 float TimeSinceStartup = UGameplayStatics::GetTimeSeconds(RefActor->GetWorld());
	 return (RenderTime >= TimeSinceStartup);
 }

 bool UBXSLibraryBPLibrary::IsActorWithinFrustum(AActor* RefActor)
 {
	 FVector ActorBoundsOrigin;
	 FVector ActorBoundsExtents;
	 RefActor->GetActorBounds(false, ActorBoundsOrigin, ActorBoundsExtents);

	 ULocalPlayer* LocalPlayer = RefActor->GetWorld()->GetFirstLocalPlayerFromController();

	 FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
		 LocalPlayer->ViewportClient->Viewport,
		 RefActor->GetWorld()->Scene,
		 LocalPlayer->ViewportClient->EngineShowFlags
		 ).SetRealtimeUpdate(true));

	 FVector ViewLocation;
	 FRotator ViewRotation;
	 FSceneView* SceneView = LocalPlayer->CalcSceneView(
		 &ViewFamily,
		 ViewLocation,
		 ViewRotation,
		 LocalPlayer->ViewportClient->Viewport
		 );

	 return SceneView->ViewFrustum.IntersectBox(ActorBoundsOrigin, ActorBoundsExtents);
 }

 TArray<FColor> UBXSLibraryBPLibrary::ConvertLinearColors(const TArray<FLinearColor>& LinearColors)
 {
	 TArray<FColor> OutColors = TArray<FColor>();

	 for (int32 i = 0; i < LinearColors.Num(); i++)
	 {
		 OutColors.Add(LinearColors[i].ToFColor(true));
	 }

	 return OutColors;
 }

 bool UBXSLibraryBPLibrary::HasRuntimeCooking()
 {
#ifdef WITH_RUNTIME_PHYSICS_COOKING
	 return true;
#else
	 return false;
#endif
 }

 FVector UBXSLibraryBPLibrary::MoveTowardsVector(FVector From, FVector To, float MaxDistanceDelta)
 {
	 FVector DiffVector = To - From;
	 float Length = DiffVector.Size();

	 if (Length <= 0.0f || (double)Length <= (double)MaxDistanceDelta)
	 {
		 return To;
	 }

	 return From + DiffVector / Length * MaxDistanceDelta;
 }

 FRotator UBXSLibraryBPLibrary::MoveTowardsRotator(FRotator From, FRotator To, float MaxDistanceDelta)
 {
	 // NOTE: There is probably a better implementation for this
	 float X, Y, Z;
	 X = MoveTowardsAngle(From.Pitch, To.Pitch, MaxDistanceDelta);
	 Y = MoveTowardsAngle(From.Yaw, To.Yaw, MaxDistanceDelta);
	 Z = MoveTowardsAngle(From.Roll, To.Roll, MaxDistanceDelta);
	 return FRotator(X, Y, Z);
 }

 float UBXSLibraryBPLibrary::MoveTowardsAngle(float From, float To, float MaxDelta)
 {
	 To = From + DeltaAngle(From, To);
	 return MoveTowards(From, To, MaxDelta);
 }

 float UBXSLibraryBPLibrary::MoveTowards(float From, float To, float MaxDelta)
 {
	 if ((double)FMath::Abs(To - From) <= (double)MaxDelta)
		 return To;
	 return From + FMath::Sign(To - From) * MaxDelta;
 }

 float UBXSLibraryBPLibrary::DeltaAngle(float From, float To)
 {
	 float Num = RepeatFloat(To - From, 360.0f);
	 if ((double)Num > 180.0)
		 Num -= 360.0f;
	 return Num;
 }

 float UBXSLibraryBPLibrary::RepeatFloat(float T, float Length)
 {
	 return T - FMath::FloorToInt(T / Length) * Length;
 }

 bool UBXSLibraryBPLibrary::PointIsInsideBox(const FBox2D& Box, const FVector2D& Point)
 {
	 return Box.IsInside(Point);
 }

 bool UBXSLibraryBPLibrary::BoxIsInsideBox(const FBox2D& Box, const FBox2D& OtherBox)
 {
	 return Box.IsInside(OtherBox);
 }

 bool UBXSLibraryBPLibrary::BoxIntersectsBox(const FBox2D& Box, const FBox2D& OtherBox)
 {
	 return Box.Intersect(OtherBox);
 }

 void UBXSLibraryBPLibrary::MinAndMaxOfFloatArray(const TArray<float>& Floats, float& Min, float& Max)
 {
	 check(Floats.Num() > 0);

	 Min = Floats[0];
	 Max = Floats[0];

	 if (Floats.Num() > 1)
	 {
		 for (int32 i = 1; i < Floats.Num(); i++)
		 {
			 Min = FMath::Min(Floats[i], Min);
			 Max = FMath::Max(Floats[i], Max);
		 }
	 }
 }

 FBox2D UBXSLibraryBPLibrary::MakeLiteralFBox2D(FVector2D Min, FVector2D Max)
 {
	 return FBox2D(Min, Max);
 }

 bool UBXSLibraryBPLibrary::VectorIsNearlyZero(const FVector& Vector)
 {
	 return Vector.IsNearlyZero();
 }

 void UBXSLibraryBPLibrary::GetActorScreenBox(const APlayerController* Controller, const AActor* TargetActor, bool bOnlyCollidingComponents, bool bScaleByDPI, FBox2D& Box, bool& bAllProjectedSuccessfully)
 {
	 ensure(Controller != NULL);
	 ensure(TargetActor != NULL);


	 // Get Actor Bounds
	 FVector ActorOrigin;
	 FVector ActorExtents;
	 TargetActor->GetActorBounds(bOnlyCollidingComponents, ActorOrigin, ActorExtents);

	 // Make box vertices
	 FVector Top_Left_Forward = ActorOrigin + FVector(-ActorExtents.X, ActorExtents.Y, ActorExtents.Z);	// -++
	 FVector Top_Right_Forward = ActorOrigin + FVector(ActorExtents.X, ActorExtents.Y, ActorExtents.Z);	// +++
	 FVector Top_Right_Back = ActorOrigin + FVector(-ActorExtents.X, -ActorExtents.Y, ActorExtents.Z);	// +-+
	 FVector Top_Left_Back = ActorOrigin + FVector(-ActorExtents.X, -ActorExtents.Y, ActorExtents.Z);	// --+

	 FVector Bottom_Left_Forward = ActorOrigin + FVector(-ActorExtents.X, ActorExtents.Y, -ActorExtents.Z);	// -+-
	 FVector Bottom_Right_Forward = ActorOrigin + FVector(ActorExtents.X, ActorExtents.Y, -ActorExtents.Z);	// ++-
	 FVector Bottom_Right_Back = ActorOrigin + FVector(ActorExtents.X, -ActorExtents.Y, -ActorExtents.Z);	// +--
	 FVector Bottom_Left_Back = ActorOrigin + FVector(-ActorExtents.X, -ActorExtents.Y, -ActorExtents.Z);	// ---

																											 // Convert to screen space
	 FVector2D TLF;
	 FVector2D TRF;
	 FVector2D TRB;
	 FVector2D TLB;

	 FVector2D BLF;
	 FVector2D BRF;
	 FVector2D BRB;
	 FVector2D BLB;

	 bool bTLF = Controller->ProjectWorldLocationToScreen(Top_Left_Forward, TLF);
	 bool bTRF = Controller->ProjectWorldLocationToScreen(Top_Right_Forward, TRF);
	 bool bTRB = Controller->ProjectWorldLocationToScreen(Top_Right_Back, TRB);
	 bool bTLB = Controller->ProjectWorldLocationToScreen(Top_Left_Back, TLB);

	 bool bBLF = Controller->ProjectWorldLocationToScreen(Bottom_Left_Forward, BLF);
	 bool bBRF = Controller->ProjectWorldLocationToScreen(Bottom_Right_Forward, BRF);
	 bool bBRB = Controller->ProjectWorldLocationToScreen(Bottom_Right_Back, BRB);
	 bool bBLB = Controller->ProjectWorldLocationToScreen(Bottom_Left_Back, BLB);

	 bAllProjectedSuccessfully = (bTLF && bTRF && bTRB && bTLB && bBLF && bBRF && bBRB && bBLB);

	 TArray<float> Xs;

	 Xs.Add(TLF.X);
	 Xs.Add(TRF.X);
	 Xs.Add(TRB.X);
	 Xs.Add(TLB.X);

	 Xs.Add(BLF.X);
	 Xs.Add(BRF.X);
	 Xs.Add(BRB.X);
	 Xs.Add(BLB.X);

	 TArray<float> Ys;

	 Ys.Add(TLF.Y);
	 Ys.Add(TRF.Y);
	 Ys.Add(TRB.Y);
	 Ys.Add(TLB.Y);

	 Ys.Add(BLF.Y);
	 Ys.Add(BRF.Y);
	 Ys.Add(BRB.Y);
	 Ys.Add(BLB.Y);

	 // Optionally scale by DPI
	 if (bScaleByDPI)
	 {
		 float DPIScale = UWidgetLayoutLibrary::GetViewportScale((UObject*)Controller);

		 for (int32 i = 0; i < Xs.Num(); i++)
		 {
			 Xs[i] = Xs[i] / DPIScale;
		 }

		 for (int32 i = 0; i < Ys.Num(); i++)
		 {
			 Ys[i] = Ys[i] / DPIScale;
		 }
	 }

	 // Get the extremes
	 float Xmin, Xmax, Ymin, Ymax;
	 MinAndMaxOfFloatArray(Xs, Xmin, Xmax);
	 MinAndMaxOfFloatArray(Ys, Ymin, Ymax);

	 // Construct final screen box
	 FVector2D MinValues = FVector2D(Xmin, Ymin);
	 FVector2D MaxValues = FVector2D(Xmax, Ymax);

	 Box = FBox2D(MinValues, MaxValues);
 }

 void UBXSLibraryBPLibrary::RemoveAllChildren(USceneComponent* parentComp)
 {
	 if (parentComp == nullptr)
	 {
		 return;
	 }

	 while (parentComp->GetNumChildrenComponents() > 0)
	 {
		 parentComp->GetChildComponent(0)->DestroyComponent();
	 }
 }

 bool UBXSLibraryBPLibrary::WorldPointIsInsideBox(const FVector& WorldPoint, const FVector& BoxCenter, const FVector& BoxExtents)
 {
	 return
		 (WorldPoint.X >= BoxCenter.X - BoxExtents.X) && (WorldPoint.X <= BoxCenter.X + BoxExtents.X) &&
		 (WorldPoint.Y >= BoxCenter.Y - BoxExtents.Y) && (WorldPoint.Y <= BoxCenter.Y + BoxExtents.Y) &&
		 (WorldPoint.Z >= BoxCenter.Z - BoxExtents.Z) && (WorldPoint.Z <= BoxCenter.Z + BoxExtents.Z);
 }


 

 

 void UBXSLibraryBPLibrary::Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate)
 {
	 FGPUDriverInfo GPUDriverInfo = FPlatformMisc::GetGPUDriverInfo(GRHIAdapterName);

	 DeviceDescription = GPUDriverInfo.DeviceDescription;
	 Provider = GPUDriverInfo.ProviderName;
	 DriverVersion = GPUDriverInfo.UserDriverVersion;
	 DriverDate = GPUDriverInfo.DriverDate;
 }

 bool UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return false;
	 //~~~~~~~~~~~

	 bool Value;
	 IsValid = GConfig->GetBool(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return Value;
 }
 int32 UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return 0;
	 //~~~~~~~~~~~

	 int32 Value;
	 IsValid = GConfig->GetInt(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return Value;
 }
 float UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return 0;
	 //~~~~~~~~~~~

	 float Value;
	 IsValid = GConfig->GetFloat(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return Value;
 }
 FVector UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return FVector::ZeroVector;
	 //~~~~~~~~~~~

	 FVector Value;
	 IsValid = GConfig->GetVector(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return Value;
 }
 FRotator UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return FRotator::ZeroRotator;
	 //~~~~~~~~~~~

	 FRotator Value;
	 IsValid = GConfig->GetRotator(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return Value;
 }
 FLinearColor UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return FColor::Black;
	 //~~~~~~~~~~~

	 FColor Value;
	 IsValid = GConfig->GetColor(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return FLinearColor(Value);
 }
 FString UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return "";
	 //~~~~~~~~~~~

	 FString Value;
	 IsValid = GConfig->GetString(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return Value;
 }

 FVector2D UBXSLibraryBPLibrary::VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid)
 {
	 if (!GConfig) return FVector2D::ZeroVector;
	 //~~~~~~~~~~~

	 FVector Value;
	 IsValid = GConfig->GetVector(
		 *SectionName,
		 *VariableName,
		 Value,
		 GGameIni
		 );
	 return FVector2D(Value.X, Value.Y);
 }

 FVector2D UBXSLibraryBPLibrary::ProjectWorldToScreenPosition(const FVector& WorldLocation)
 {
	 TObjectIterator<APlayerController> ThePC;
	 if (!ThePC) return FVector2D::ZeroVector;

	 ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(ThePC->Player);
	 if (LocalPlayer != NULL && LocalPlayer->ViewportClient != NULL && LocalPlayer->ViewportClient->Viewport != NULL)
	 {
		 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		 // Create a view family for the game viewport
		 FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
			 LocalPlayer->ViewportClient->Viewport,
			 ThePC->GetWorld()->Scene,
			 LocalPlayer->ViewportClient->EngineShowFlags)
			 .SetRealtimeUpdate(true));

		 // Calculate a view where the player is to update the streaming from the players start location
		 FVector ViewLocation;
		 FRotator ViewRotation;
		 FSceneView* SceneView = LocalPlayer->CalcSceneView(&ViewFamily, /*out*/ ViewLocation, /*out*/ ViewRotation, LocalPlayer->ViewportClient->Viewport);

		 //Valid Scene View?
		 if (SceneView)
		 {
			 //Return
			 FVector2D ScreenLocation;
			 SceneView->WorldToPixel(WorldLocation, ScreenLocation);
			 return ScreenLocation;
		 }
	 }

	 return FVector2D::ZeroVector;
 }


 void UBXSLibraryBPLibrary::Selection_SelectionBox(UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, TSubclassOf<AActor> ClassFilter)
 {
	 if (!WorldContextObject) return;


	 //using a context object to get the world!
	 UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	 if (!World) return;
	 //~~~~~~~~~~~

	 SelectedActors.Empty();

	 FBox2D Box;
	 Box += DraggedPoint;
	 Box += AnchorPoint;

	 for (TActorIterator<AActor> Itr(World); Itr; ++Itr)
	 {
		 if (!Itr->IsA(ClassFilter)) continue;
		 //~~~~~~~~~~~~~~~~~~

		 if (Box.IsInside(UBXSLibraryBPLibrary::ProjectWorldToScreenPosition(Itr->GetActorLocation())))
		 {
			 SelectedActors.Add(*Itr);
		 }
	 }
 }

 bool UBXSLibraryBPLibrary::LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, FString FullFilePath, bool ExcludeEmptyLines)
 {
	 ArraySize = 0;

	 if (FullFilePath == "" || FullFilePath == " ") return false;

	 //Empty any previous contents!
	 StringArray.Empty();

	 TArray<FString> FileArray;

	 if (!FFileHelper::LoadANSITextFileToStrings(*FullFilePath, NULL, FileArray))
	 {
		 return false;
	 }

	 if (ExcludeEmptyLines)
	 {
		 for (const FString& Each : FileArray)
		 {
			 if (Each == "") continue;
			 //~~~~~~~~~~~~~

			 //check for any non whitespace
			 bool FoundNonWhiteSpace = false;
			 for (int32 v = 0; v < Each.Len(); v++)
			 {
				 if (Each[v] != ' ' && Each[v] != '\n')
				 {
					 FoundNonWhiteSpace = true;
					 break;
				 }
				 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			 }

			 if (FoundNonWhiteSpace)
			 {
				 StringArray.Add(Each);
			 }
		 }
	 }
	 else
	 {
		 StringArray.Append(FileArray);
	 }

	 ArraySize = StringArray.Num();
	 return true;
 }

 void UBXSLibraryBPLibrary::VictorySimulateMouseWheel(const float& Delta)
 {
	 FSlateApplication::Get().OnMouseWheel(int32(Delta));
 }

 bool UBXSLibraryBPLibrary::Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw)
 {
	 //Get Owning Character
	 ACharacter* TheCharacter = Cast<ACharacter>(AnimBPOwner);

	 if (!TheCharacter) return false;
	 //~~~~~~~~~~~~~~~

	 //Get Owning Controller Rotation
	 const FRotator TheCtrlRotation = TheCharacter->GetControlRotation();

	 const FVector RotationDir = TheCtrlRotation.Vector();

	 //Inverse of ActorToWorld matrix is Actor to Local Space
		 //so this takes the direction vector, the PC or AI rotation
		 //and outputs what this dir is 
		 //in local actor space &

		 //local actor space is what we want for aiming offsets

	 const FVector LocalDir = TheCharacter->ActorToWorld().InverseTransformVectorNoScale(RotationDir);
	 const FRotator LocalRotation = LocalDir.Rotation();

	 //Pass out Yaw and Pitch
	 Yaw = LocalRotation.Yaw;
	 Pitch = LocalRotation.Pitch;

	 return true;
 }
 bool UBXSLibraryBPLibrary::Animation__GetAimOffsetsFromRotation(AActor* AnimBPOwner, const FRotator& TheRotation, float& Pitch, float& Yaw)
 {
	 //Get Owning Character
	 ACharacter* TheCharacter = Cast<ACharacter>(AnimBPOwner);

	 if (!TheCharacter) return false;
	 //~~~~~~~~~~~~~~~

	 //using supplied rotation
	 const FVector RotationDir = TheRotation.Vector();

	 //Inverse of ActorToWorld matrix is Actor to Local Space
		 //so this takes the direction vector, the PC or AI rotation
		 //and outputs what this dir is 
		 //in local actor space &

		 //local actor space is what we want for aiming offsets

	 const FVector LocalDir = TheCharacter->ActorToWorld().InverseTransformVectorNoScale(RotationDir);
	 const FRotator LocalRotation = LocalDir.Rotation();

	 //Pass out Yaw and Pitch
	 Yaw = LocalRotation.Yaw;
	 Pitch = LocalRotation.Pitch;

	 return true;
 }

 float UBXSLibraryBPLibrary::HorizontalFOV(float VerticalFOV, float AspectRatio)
 {
	 VerticalFOV = FMath::DegreesToRadians(VerticalFOV);
	 return FMath::RadiansToDegrees(2 * FMath::Atan2(FMath::Tan(VerticalFOV * 0.5f) * AspectRatio, 1));
 }

 float UBXSLibraryBPLibrary::VerticalFOV(float HorizontalFOV, float AspectRatio)
 {
	 HorizontalFOV = FMath::DegreesToRadians(HorizontalFOV);
	 return FMath::RadiansToDegrees(2 * FMath::Atan2(FMath::Tan(HorizontalFOV * 0.5f) * (1 / AspectRatio), 1));
 }