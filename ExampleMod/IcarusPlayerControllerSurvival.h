#pragma once
#include "Mod/Mod.h"
#include "Utilities/MinHook.h"

struct ABP_IcarusPlayerControllerSurvival_C : UE4::APlayerController {
	void Server_UnstuckAtRespawnShip();
};