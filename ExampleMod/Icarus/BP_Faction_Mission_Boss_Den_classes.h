// BlueprintGeneratedClass BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C
// Size: 0x418 (Inherited: 0x301)
struct ABP_Faction_Mission_Boss_Den_C : ABP_WorldObject_C {
	char pad_301[0x7]; // 0x301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct USceneComponent* ExitPoint; // 0x310(0x08)
	struct UArrowComponent* Arrow; // 0x318(0x08)
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; // 0x320(0x08)
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; // 0x328(0x08)
	struct UStaticMeshComponent* Den_Plane1; // 0x330(0x08)
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Bones02; // 0x338(0x08)
	struct UDecalComponent* Decal; // 0x340(0x08)
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Rocks; // 0x348(0x08)
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Floor; // 0x350(0x08)
	struct UStaticMeshComponent* SM_CF_Wolf_Den_Bones03; // 0x358(0x08)
	struct UMaterialBillboardComponent* EyeGlowR; // 0x360(0x08)
	struct UMaterialBillboardComponent* EyeGlowL; // 0x368(0x08)
	struct USceneComponent* EyeContainer; // 0x370(0x08)
	struct USceneComponent* EntryPoint; // 0x378(0x08)
	float EmergeTimeline_GlowingEyeOpacity_58999D4B43A8E713CAE6C3BD0B8A2B52; // 0x380(0x04)
	enum class ETimelineDirection EmergeTimeline__Direction_58999D4B43A8E713CAE6C3BD0B8A2B52; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	struct UTimelineComponent* EmergeTimeline; // 0x388(0x08)
	struct UMaterialInstanceDynamic* EyeGlow; // 0x390(0x08)
	struct FName OpacityParam; // 0x398(0x08)
	struct TArray<struct ABP_Faction_Mission_Boss_Den_C*> SpawnLocations; // 0x3a0(0x10)
	struct FName HostileTargetLocationKey; // 0x3b0(0x08)
	float NearbyPlayerRadius; // 0x3b8(0x04)
	int32_t NumberOfSpawnEventsPerEmerge; // 0x3bc(0x04)
	float FollowerWolvesPerPlayer; // 0x3c0(0x04)
	int32_t RemainingSpawns; // 0x3c4(0x04)
	int32_t TimeBetweenSpawnEvents; // 0x3c8(0x04)
	float LastFollowerSpawnTime; // 0x3cc(0x04)
	int32_t MaximumFollowerCountPerPlayer; // 0x3d0(0x04)
	float MinimumTimeBetweenFollowerSpawns; // 0x3d4(0x04)
	float FollowerIdleLifetime; // 0x3d8(0x04)
	int32_t PerEventSpawn; // 0x3dc(0x04)
	struct FAISetupRowHandle FollowerWolfAISetup; // 0x3e0(0x18)
	struct TArray<struct AIcarusNPCGOAPCharacter*> Followers; // 0x3f8(0x10)
	struct UCurveFloat* BossScaling; // 0x408(0x08)
	struct UFMODEvent* PreEmergeFMODEvent; // 0x410(0x08)

	void GetRetreatEntryLocation(struct FVector& WorldLocation, struct FRotator& WorldRotation); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.GetRetreatEntryLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetRetreatExitLocation(struct FVector& WorldLocation, struct FRotator& WorldRotation); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.GetRetreatExitLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayPreEmergeSFX(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.PlayPreEmergeSFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProjectExitLocationToLandscape(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.ProjectExitLocationToLandscape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SynchroniseFollowersArray(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.SynchroniseFollowersArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateFollowerLifetimes(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.UpdateFollowerLifetimes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFollowerDeath(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.OnFollowerDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnFollower(struct FTransform SpawnTransform); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.SpawnFollower // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MakeAIAggressive(struct AAIController* Target); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.MakeAIAggressive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetFollowerWolfSpawnCount(int32_t& PerSpawnEvent, int32_t& TotalSpawns); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.GetFollowerWolfSpawnCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PickNewFollowerTarget(struct FVector& Origin, struct AActor*& Target); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.PickNewFollowerTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EmergeTimeline__FinishedFunc(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.EmergeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1be0000
	void EmergeTimeline__UpdateFunc(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.EmergeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1be0000
	void EmergeTimeline__SpawnFollower__EventFunc(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.EmergeTimeline__SpawnFollower__EventFunc // (BlueprintEvent) // @ game+0x1be0000
	void MULTI_PreEmergeEffects(struct AIcarusNPCGOAPCharacter* EmergingNPC); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.MULTI_PreEmergeEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void NextSpawn(); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.NextSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Faction_Mission_Boss_Den(int32_t EntryPoint); // Function BP_Faction_Mission_Boss_Den.BP_Faction_Mission_Boss_Den_C.ExecuteUbergraph_BP_Faction_Mission_Boss_Den // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

