// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActorTrackingSystem2D.h"

#include "ActorTracking2DProjectSettings.h"
#include "ActorTrackingHandle.h"

#if WITH_EDITOR
#include "ISettingsModule.h"
#endif WITH_EDITOR

DEFINE_LOG_CATEGORY(LogActorTrackingSystem2D);

#define LOCTEXT_NAMESPACE "FActorTrackingSystem2DModule"

void FActorTrackingSystem2DModule::StartupModule()
{
#if WITH_EDITOR

	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "ActorTracking2D",
			NSLOCTEXT("ActorTracking2DPlugin", "ActorTracking2DName", "Actor Tracking 2D"),
			NSLOCTEXT("ActorTracking2DPlugin", "ActorTracking2DDescription", "Configure the Actor Tracking UI Framework"),
			UActorTracking2DProjectSettings::StaticClass());
	}
#endif WITH_EDITOR
}

void FActorTrackingSystem2DModule::ShutdownModule()
{
#if WITH_EDITOR

	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "ActorTracking2D");
	}
#endif WITH_EDITOR
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FActorTrackingSystem2DModule, ActorTrackingSystem2D)