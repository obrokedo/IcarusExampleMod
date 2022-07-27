// BlueprintGeneratedClass BP_IcarusGameMode.BP_IcarusGameMode_C
// Size: 0x631 (Inherited: 0x520)
struct ABP_IcarusGameMode_C : AIcarusGameModeSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UBallisticPoolManager* BallisticPoolManager; // 0x528(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x530(0x08)
	int32_t DropSpawn; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct FMulticastInlineDelegate PostLoginDispatcher; // 0x540(0x10)
	struct TArray<struct FColor> ColorChoices; // 0x550(0x10)
	int32_t ColorIndex; // 0x560(0x04)
	bool CurtainRaised; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct TArray<struct AController*> JoinedPlayers; // 0x568(0x10)
	struct TArray<struct AController*> ToRemove; // 0x578(0x10)
	struct TArray<struct FDatabaseBuildingGrid> PendingBuildingsFromDatabase; // 0x588(0x10)
	struct FString LogName; // 0x598(0x10)
	struct FReqCheckProspectExpired Request; // 0x5a8(0x10)
	bool Spawned Resources; // 0x5b8(0x01)
	bool ExoticVoxelsSpawned; // 0x5b9(0x01)
	bool Time Initialised; // 0x5ba(0x01)
	char pad_5BB[0x1]; // 0x5bb(0x01)
	struct FVector AveragePlayerStartLocation; // 0x5bc(0x0c)
	int32_t DebugTestProspectTimeMinutes; // 0x5c8(0x04)
	int32_t ExoticVoxelSpawnCount; // 0x5cc(0x04)
	struct TSoftClassPtr<UObject> OverflowBagClassSoftRef; // 0x5d0(0x28)
	struct AIcarusActor* LoadedOverflowBagClass; // 0x5f8(0x08)
	struct TSoftClassPtr<UObject> GraveOverflowBagClassSoftRef; // 0x600(0x28)
	struct AIcarusActor* LoadedGraveOverflowBagClass; // 0x628(0x08)
	bool DeepMiningSpawned; // 0x630(0x01)

	bool FindProspectTalentFromPlayers(struct FTalentsRowHandle& Talent); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.FindProspectTalentFromPlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FOreDepositRowHandle GetDeepOreType(int32_t Index); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.GetDeepOreType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResolveDeepMining(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ResolveDeepMining // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetOverflowBagClass(bool IsGravestone, struct AIcarusActor* Override, struct AIcarusActor*& OverflowBagClass); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.GetOverflowBagClass // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DoSafeOverflowBagTransformCheck(struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, bool ShowDebug, struct FTransform& Transform, bool& Valid); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.DoSafeOverflowBagTransformCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindSafeOverflowBagTransform(struct FTransform DesiredTransform, struct FVector OverflowBagSize, int32_t NumHaloChecks, float StartCheckHeightOffset, float EndCheckHeightOffset, float HaloCheckDistance, bool ShowDebug, struct FTransform& Transform, bool& Success); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.FindSafeOverflowBagTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateAndFillOverflowBag(struct FTransform& Transform, struct TArray<struct FItemData>& ItemData, bool bIsGravestone, struct AIcarusActor* ActorOverride); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.CreateAndFillOverflowBag // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResolveExoticSpawnVoxels(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ResolveExoticSpawnVoxels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct AActor* SpawnSplineActorFromSavedState(struct FTransform& Transform, int32_t SplineTypeEnum); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.SpawnSplineActorFromSavedState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RestoreFLODRecordInstances(struct UFLODRecord* Record); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.RestoreFLODRecordInstances // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RestoreFLODGlobalInstances(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.RestoreFLODGlobalInstances // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResolveBlockers(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ResolveBlockers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResolveMetaDeposits(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ResolveMetaDeposits // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddWorldStats(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.AddWorldStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool SetupTestProspectInfo(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.SetupTestProspectInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AreAllGridsDoneAsyncProcessing(bool& NoQueuedGrids); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.AreAllGridsDoneAsyncProcessing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PickProspectMetaSpawns(struct FIcarusProspect Prospect, struct TMap<int32_t, struct ABP_IcarusMetaSpawn_C*>& MetaSpawns); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.PickProspectMetaSpawns // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ModifySessionEndTime(int32_t SecondsToAdd); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ModifySessionEndTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_D18E07784085355D2849CEAE7FAC0EE7(struct UObject* Loaded); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnLoaded_D18E07784085355D2849CEAE7FAC0EE7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RaiseTheCurtain(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.RaiseTheCurtain // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void GameModeLog(struct FString Log, struct AController* Controller); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.GameModeLog // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Poll_FindBestBackupHostForMigration(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.Poll_FindBestBackupHostForMigration // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BuildingsWaitingForReload(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.BuildingsWaitingForReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnConnectedPlayerInitialised // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void K2_OnLogout(struct AController* ExitingController); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.K2_OnLogout // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnProspectInfoFetched(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnProspectInfoFetched // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DatabaseReloadComplete(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.DatabaseReloadComplete // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerMetaRecheck(struct FConnectedPlayer& ConnectedPlayer); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnConnectedPlayerMetaRecheck // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ResolvePlayerDependantFeatures(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ResolvePlayerDependantFeatures // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusGameMode(int32_t EntryPoint); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ExecuteUbergraph_BP_IcarusGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void PostLoginDispatcher__DelegateSignature(struct APlayerController* NewPlayer); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.PostLoginDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

