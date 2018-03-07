#include "BlankActor.h"
#include "BlankObject.h"

// Sets default values
ABlankActor::ABlankActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ABlankActor::BeginPlay()
{
	Super::BeginPlay();
	NewObject<UBlankObject>(this, TEXT("BlankObject"));
}

// Called every frame
void ABlankActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
