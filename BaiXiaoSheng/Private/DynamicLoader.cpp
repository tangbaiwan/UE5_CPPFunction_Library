#include "DynamicLoader.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Core/Public/Async/Async.h"
#include "IImageWrapper.h"
#include "ImageUtils.h"
#include "IImageWrapperModule.h"
#include "BXSLibraryBPLibrary.h"
#include "Engine/Texture2D.h"
#include "RenderUtils.h"





AExeActor::AExeActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

bool AExeActor::Getstat()
{

	bool a = FPlatformProcess::IsProcRunning(CheckProc);

	return a;

	//return true;
}


// Called when the game starts or when spawned
void AExeActor::BeginPlay()
{

	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("EXE Begin"));

}

void AExeActor::Tick(float DeltaTime)
{
	//Super::Tick();

	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("I AM IN There"));

	bool a = FPlatformProcess::IsProcRunning(CheckProc);

	if (!a && !bisShutDown)
	{

		UE_LOG(LogTemp, Warning, TEXT("EXE End"));

		bisShutDown = true;
		ProcShutdown.Broadcast(true);
		PrimaryActorTick.bCanEverTick = false;

		Destroy();

	}
	//return true;
}