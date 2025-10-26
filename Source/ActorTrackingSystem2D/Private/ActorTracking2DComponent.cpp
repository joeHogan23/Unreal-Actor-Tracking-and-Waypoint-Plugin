// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.


#include "ActorTracking2DComponent.h"

UActorTracking2DComponent::UActorTracking2DComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UActorTracking2DComponent::BeginPlay()
{
	Super::BeginPlay();
}
