// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReport.h"
#include "GameFramework/Actor.h"
//#include "Math/Vector.h"

// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();
	FVector objectLoc = GetOwner()->GetActorLocation();
	FString objectName = GetOwner()->GetName();
	FString objectPos;
	objectPos = FString::Printf(TEXT("X = %.2f, Y = %.2f, Z = %.2f"), objectLoc.X, objectLoc.Y, objectLoc.Z);
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *objectName, *objectPos );

	// ...
	
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

