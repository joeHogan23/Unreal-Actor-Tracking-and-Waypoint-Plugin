// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActorTracking2DProjectSettings.generated.h"

/**
 * 
 */
UCLASS(Config=Game, DefaultConfig)
class ACTORTRACKINGSYSTEM2D_API UActorTracking2DProjectSettings : public UObject
{
	GENERATED_BODY()

public:
	static const UActorTracking2DProjectSettings& Get() { return *GetDefault<UActorTracking2DProjectSettings>(); }

	static int32 GetScreenEdgeMarginPercent() { return Get().EdgeOfScreenPercent; }
	static bool IsWidgetPoolingEnabled() { return Get().bWidgetPoolingEnabled; }
	
private:
	UPROPERTY(EditAnywhere, Config, Category=Design, meta=(Units="Percent", ClampMin="50", UIMin="50", ClampMax="100", UIMax="100"))
	float EdgeOfScreenPercent = 80.f;
	
	UPROPERTY(EditAnywhere, Config, Category=Optimization)
	bool bWidgetPoolingEnabled = true;
};
