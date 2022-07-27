// BlueprintGeneratedClass BP_AISpawner.BP_AISpawner_C
// Size: 0x6e0 (Inherited: 0x450)
struct ABP_AISpawner_C : AAISpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x458(0x08)
	int32_t AmountToSpawn; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct TArray<struct AActor*> SpawnedActors; // 0x468(0x10)
	float SpawnRadius; // 0x478(0x04)
	float MaxPlayerDistance; // 0x47c(0x04)
	struct FVector SpawnLocation; // 0x480(0x0c)
	bool SpawningActivated; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct TMap<struct APlayerController*, struct FActorArrayStruct> TetheredAIMap; // 0x490(0x50)
	struct APlayerController* NextTetherTarget; // 0x4e0(0x08)
	struct FActorArrayStruct CurrentTethers; // 0x4e8(0x10)
	struct TArray<struct AActor*> AIPendingCleanup; // 0x4f8(0x10)
	struct FTimerHandle TetherCleanupTimer; // 0x508(0x08)
	struct FRandomStream RandomStream; // 0x510(0x08)
	struct TArray<struct UObject*> StoredGameplayTextures; // 0x518(0x10)
	struct TArray<struct TSoftObjectPtr<UGameplayTexture>> HeatmapTextures; // 0x528(0x10)
	struct AIcarusNPCGOAPCharacter* SpawnedNPC; // 0x538(0x08)
	int32_t DefaultSpawnDensity; // 0x540(0x04)
	bool IsRunningSpawnEQS; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct TArray<struct AIcarusNPCGOAPCharacter*> SpawnedChildren; // 0x548(0x10)
	struct ABP_WeatherController_C* WeatherControllerRef; // 0x558(0x08)
	struct TMap<struct FBiomesRowHandle, int32_t> BiomePerceptionModifiers; // 0x560(0x50)
	struct FAISpawnConfigData Spawn Config; // 0x5b0(0xa0)
	enum class EBPLogVerbosity LoggingVerbosity; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	int32_t MaximumAILevel; // 0x654(0x04)
	int32_t MinimumAILevel; // 0x658(0x04)
	int32_t GeneratedLevel; // 0x65c(0x04)
	struct TMap<struct FVector, float> RecentSpawnBlockerLocations; // 0x660(0x50)
	bool ShouldBlockSpawningNearRecentDeath; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct FTimerHandle SpawnBlockerUpdateTimer; // 0x6b8(0x08)
	float SpawnBlockerRadius; // 0x6c0(0x04)
	float SpawnBlockerDuration; // 0x6c4(0x04)
	bool DebugSpawnBlockers; // 0x6c8(0x01)
	char pad_6C9[0x7]; // 0x6c9(0x07)
	struct TArray<struct FSpawnBlocker> ActiveSpawnBlockers; // 0x6d0(0x10)

	void Check Manual Spawn(struct FAISetupEnum AISetup, bool& CanSpawn); // Function BP_AISpawner.BP_AISpawner_C.Check Manual Spawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetNumAliveNPCs(bool IncludeLatentDeaths, int32_t& Num); // Function BP_AISpawner.BP_AISpawner_C.GetNumAliveNPCs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool GetDebugSpawnBlockers(); // Function BP_AISpawner.BP_AISpawner_C.GetDebugSpawnBlockers // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void OnNPCDeath(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function BP_AISpawner.BP_AISpawner_C.OnNPCDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateSpawnBlockers(); // Function BP_AISpawner.BP_AISpawner_C.UpdateSpawnBlockers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetTetherDebugName(struct APlayerController* Tether, struct FName& Name); // Function BP_AISpawner.BP_AISpawner_C.GetTetherDebugName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetTotalSpawnWeightForBiome(struct FVector Locarion, int32_t& TotalWeight); // Function BP_AISpawner.BP_AISpawner_C.GetTotalSpawnWeightForBiome // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetNearbyNPCs(struct FVector InOrigin, struct TArray<struct ABP_IcarusNPCGOAPCharacter_C*>& OutputNPCs); // Function BP_AISpawner.BP_AISpawner_C.GetNearbyNPCs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetModifiedSpawnWeightForAI(struct FAISetupRowHandle InAIType, struct FVector AtLocation, int32_t OriginalWeight, int32_t& ModifiedWeight); // Function BP_AISpawner.BP_AISpawner_C.GetModifiedSpawnWeightForAI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Debug Biome Perception Modifiers(); // Function BP_AISpawner.BP_AISpawner_C.Debug Biome Perception Modifiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateBiomePerceptionModifiers(); // Function BP_AISpawner.BP_AISpawner_C.UpdateBiomePerceptionModifiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSpawnDensityForLocation(struct FVector WorldLocation, int32_t& Biome Spawn Density); // Function BP_AISpawner.BP_AISpawner_C.GetSpawnDensityForLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReorganiseCleanupQueue(); // Function BP_AISpawner.BP_AISpawner_C.ReorganiseCleanupQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetNumberOfAINearTarget(struct AActor* Target); // Function BP_AISpawner.BP_AISpawner_C.GetNumberOfAINearTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PickNewAIToSpawn(struct FVector AtLocation, bool ManualSpawn, struct FAISetupRowHandle& Output, int32_t& Level, bool& ValidSpawn); // Function BP_AISpawner.BP_AISpawner_C.PickNewAIToSpawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TetherActor(struct AActor*& Actor, struct APlayerController*& TetherTarget); // Function BP_AISpawner.BP_AISpawner_C.TetherActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CleanupDestroyedActors(); // Function BP_AISpawner.BP_AISpawner_C.CleanupDestroyedActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TrySpawn(); // Function BP_AISpawner.BP_AISpawner_C.TrySpawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetNewTetherTarget(struct APlayerController*& OutControllerTether); // Function BP_AISpawner.BP_AISpawner_C.GetNewTetherTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugDistances(); // Function BP_AISpawner.BP_AISpawner_C.DebugDistances // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindSpawnLocation(struct FVector& Locaiton, bool& Return); // Function BP_AISpawner.BP_AISpawner_C.FindSpawnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckLocation(struct FVector Location, bool& Found); // Function BP_AISpawner.BP_AISpawner_C.CheckLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckAIDistance(struct ABP_IcarusNPCGOAPCharacter_C* AI); // Function BP_AISpawner.BP_AISpawner_C.CheckAIDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_2B8B2B624CE5F97DAE6892B799469007(struct UObject* Loaded); // Function BP_AISpawner.BP_AISpawner_C.OnLoaded_2B8B2B624CE5F97DAE6892B799469007 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_AISpawner.BP_AISpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void SpawnActor(); // Function BP_AISpawner.BP_AISpawner_C.SpawnActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ValidateAndSpawn(); // Function BP_AISpawner.BP_AISpawner_C.ValidateAndSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EQSFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BP_AISpawner.BP_AISpawner_C.EQSFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryDestroyAI(); // Function BP_AISpawner.BP_AISpawner_C.TryDestroyAI // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnEQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BP_AISpawner.BP_AISpawner_C.OnEQSComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSeedUpdated(int32_t Seed); // Function BP_AISpawner.BP_AISpawner_C.OnSeedUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnPointGenerationComplete(); // Function BP_AISpawner.BP_AISpawner_C.SpawnPointGenerationComplete // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void WeatherEventStarted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // Function BP_AISpawner.BP_AISpawner_C.WeatherEventStarted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeatherEventCompleted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // Function BP_AISpawner.BP_AISpawner_C.WeatherEventCompleted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBiomePerceptionUpdated(int32_t NewValue, struct FBiomesRowHandle Biome); // Function BP_AISpawner.BP_AISpawner_C.OnBiomePerceptionUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_AISpawner.BP_AISpawner_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SetDebugSpawnBlockers(bool bEnabled); // Function BP_AISpawner.BP_AISpawner_C.SetDebugSpawnBlockers // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupNPC(struct AIcarusNPCGOAPCharacter* SpawnedNPC); // Function BP_AISpawner.BP_AISpawner_C.SetupNPC // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_AISpawner(int32_t EntryPoint); // Function BP_AISpawner.BP_AISpawner_C.ExecuteUbergraph_BP_AISpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

