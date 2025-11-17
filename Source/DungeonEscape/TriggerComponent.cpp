// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("Trigger Component Begin Play"));
	// Selects the Component we want to interact with
	if (MoverActor != nullptr) 
	{
		Mover = MoverActor->FindComponentByClass<UMoverComponent>();
		if(Mover != nullptr) 
		{
			UE_LOG(LogTemp, Display, TEXT("Mover Component found in Trigger Component"));
			Mover->ShouldMove = true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Mover Component not found in Trigger Component"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Mover Actor is null in Trigger Component"));
	}


}


// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



	



	// ...
}
