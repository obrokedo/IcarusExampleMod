// BlueprintGeneratedClass BP_DisasterController.BP_DisasterController_C
// Size: 0x434 (Inherited: 0x230)
struct ABP_DisasterController_C : ADisasterController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_FLODInfluence_Lightning_C* FLODInfluence_Lightning; // 0x238(0x08)
	struct UBP_FLODInfluence_TreeToppler_C* FLODInfluence_TreeToppler; // 0x240(0x08)
	struct TMap<struct FBiomesEnum, struct FFBiomeLightning> BiomeLightningMap; // 0x248(0x50)
	float LightningTreeStrikeRadius; // 0x298(0x04)
	float LightningCosmeticMinDistance; // 0x29c(0x04)
	float LightningCosmeticMaxDistance; // 0x2a0(0x04)
	int32_t MaxActiveToppleTrees; // 0x2a4(0x04)
	int32_t ActiveToppleTrees; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TMap<enum class ETreePrimitiveDetachContext, float> ToppleCandidateChance; // 0x2b0(0x50)
	struct TMap<struct FBiomesEnum, struct FFBiomeStormWindInfo> BiomeStormWindMap; // 0x300(0x50)
	float WindTreeToppleMaxRadius; // 0x350(0x04)
	float WindTreeToppleCloseRadius; // 0x354(0x04)
	int32_t MinimumTreesRequiredToTopple; // 0x358(0x04)
	float LightningBlueprintMinDistance; // 0x35c(0x04)
	float LightningBlueprintMaxDistance; // 0x360(0x04)
	int32_t LightningHitTypeMaxRoll; // 0x364(0x04)
	float ChanceOfBlueprintLightning; // 0x368(0x04)
	float BuildingLightingChance%; // 0x36c(0x04)
	float TreeLightningChance%; // 0x370(0x04)
	float PlayerLightningChance%; // 0x374(0x04)
	struct FRandomStream RandomStream; // 0x378(0x08)
	struct TMap<struct UIcarusWeatherAction*, struct FScriptedEventsRowHandle> ScheduledScriptedEvents; // 0x380(0x50)
	struct TMap<struct FBiomesEnum, struct AScriptedEvent*> ActiveScriptedEvents; // 0x3d0(0x50)
	struct TArray<struct FTimerHandle> ToppledTreesCooldown; // 0x420(0x10)
	float TreeToppleCooldownTime; // 0x430(0x04)

	void TreeToppleCooldownEnded(); // Function BP_DisasterController.BP_DisasterController_C.TreeToppleCooldownEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeatherActionCompleted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // Function BP_DisasterController.BP_DisasterController_C.OnWeatherActionCompleted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BeginScriptedEvent(struct FScriptedEventsRowHandle Event, struct FBiomesRowHandle AssociatedBiome); // Function BP_DisasterController.BP_DisasterController_C.BeginScriptedEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeatherEventStarted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // Function BP_DisasterController.BP_DisasterController_C.OnWeatherEventStarted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetUncoveredPlayer(struct TArray<struct ABP_IcarusPlayerCharacterSurvival_C*>& BiomeCharacters, struct ABP_IcarusPlayerCharacterSurvival_C*& TargetCharacter); // Function BP_DisasterController.BP_DisasterController_C.GetUncoveredPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsLightningRodCloser(struct AActor* CurrentTarget, bool& LightningRod, struct AActor*& ChosenTarget); // Function BP_DisasterController.BP_DisasterController_C.IsLightningRodCloser // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopStormTreeToppling(struct FBiomesEnum Biome); // Function BP_DisasterController.BP_DisasterController_C.StopStormTreeToppling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartStormTreeToppling(struct FVector WindDirection, float MinInterval, float MaxInterval, float WindStrengthThreshold, struct FBiomesEnum Biome); // Function BP_DisasterController.BP_DisasterController_C.StartStormTreeToppling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindTreeToppleCandidatesInBiome(struct FBiomesEnum Biome, struct FFBiomeStormWindInfo WindInfo); // Function BP_DisasterController.BP_DisasterController_C.FindTreeToppleCandidatesInBiome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckForWindTreeTopples(); // Function BP_DisasterController.BP_DisasterController_C.CheckForWindTreeTopples // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MakeToppleTreeCandidate(struct FFLODInstanceID Instance, enum class ETreePrimitiveDetachContext Context, struct FVector ToppleDirection); // Function BP_DisasterController.BP_DisasterController_C.MakeToppleTreeCandidate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToppleTree(struct FFLODInstanceID Instance, struct FTreeToppleInfo ToppleInfo); // Function BP_DisasterController.BP_DisasterController_C.ToppleTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckForNewLightningStrike(); // Function BP_DisasterController.BP_DisasterController_C.CheckForNewLightningStrike // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RollNextEventTime(float Min, float Max, int32_t& NextStrikeTime); // Function BP_DisasterController.BP_DisasterController_C.RollNextEventTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void StartGeneratingLightning(float MinInterval, float MaxInterval, struct FBiomesEnum Biome); // Function BP_DisasterController.BP_DisasterController_C.StartGeneratingLightning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_GenerateLightningStrike(struct FBiomesEnum LightningBiome); // Function BP_DisasterController.BP_DisasterController_C.Server_GenerateLightningStrike // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Multicast_LightningStrike(enum class ELightningStrikeTarget TargetType, struct FVector TargetLocation, struct AActor* TargetActor, struct FFLODInstanceID TargetFLODInstance); // Function BP_DisasterController.BP_DisasterController_C.Multicast_LightningStrike // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_DisasterController.BP_DisasterController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_DisasterController.BP_DisasterController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnSeedUpdated(int32_t Seed); // Function BP_DisasterController.BP_DisasterController_C.OnSeedUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopGeneratingLightning(struct FBiomesEnum Biome); // Function BP_DisasterController.BP_DisasterController_C.StopGeneratingLightning // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_DisasterController(int32_t EntryPoint); // Function BP_DisasterController.BP_DisasterController_C.ExecuteUbergraph_BP_DisasterController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

