// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ActorTrackingDescriptor.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ActorTracking2DComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ACTORTRACKINGSYSTEM2D_API UActorTracking2DComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UActorTracking2DComponent();

protected:
	virtual void BeginPlay() override;

};
