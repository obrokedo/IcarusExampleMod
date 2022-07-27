// BlueprintGeneratedClass BP_Cave.BP_Cave_C
// Size: 0x384 (Inherited: 0x220)
struct ABP_Cave_C : ACave {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UChildActorComponent* WT_CaveVoid; // 0x228(0x08)
	struct UBoxComponent* TriggerVolume; // 0x230(0x08)
	struct UBP_CaveEntranceComponent_C* Entrance; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct FName CollisionProfile; // 0x248(0x08)
	struct UCurveFloat* EntranceDistanceCurve; // 0x250(0x08)
	struct AIcarusPlayerController* Player; // 0x258(0x08)
	bool Debug; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct TArray<struct UBP_CaveEntranceComponent_C*> Entrances; // 0x268(0x10)
	struct TArray<struct FTransform> CachedLocations; // 0x278(0x10)
	struct FTimerHandle CaveUpdateTimerHandle; // 0x288(0x08)
	float ActiveUpdateFrequency; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TSet<struct UPrimitiveComponent*> LocalPlayerOverlaps; // 0x298(0x50)
	float CaveVoidScale; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TMap<struct FString, struct FFCaveVolumeCache> CachedVolumeCaches; // 0x2f0(0x50)
	struct TArray<struct UBoxComponent*> NewVolume; // 0x340(0x10)
	struct TArray<struct FTransform> CachedVoidChildTransforms; // 0x350(0x10)
	struct TArray<struct FTransform> CachedEntranceTransforms; // 0x360(0x10)
	struct TArray<struct UBP_CaveEntranceComponent_C*> EntranceRefs; // 0x370(0x10)
	float SpelunkingDepth; // 0x380(0x04)

	float GetCurrentSpelunkingDepth(); // Function BP_Cave.BP_Cave_C.GetCurrentSpelunkingDepth // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	float GetSpelunkingDepthFromLocation(struct FVector Location); // Function BP_Cave.BP_Cave_C.GetSpelunkingDepthFromLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void NewFunction_1(); // Function BP_Cave.BP_Cave_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayerOverlapValidation(); // Function BP_Cave.BP_Cave_C.PlayerOverlapValidation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateOverlapState(); // Function BP_Cave.BP_Cave_C.UpdateOverlapState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool HasCacheChanged(struct TMap<struct FString, struct FFCaveVolumeCache> NewCachedVolumeCaches, struct TArray<struct FTransform>& NewCachedVoidChildTransform, struct TArray<struct FTransform>& CachedEntranceTransform); // Function BP_Cave.BP_Cave_C.HasCacheChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CacheValues(); // Function BP_Cave.BP_Cave_C.CacheValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetEntranceDepthForAtmos(struct FVector Location); // Function BP_Cave.BP_Cave_C.GetEntranceDepthForAtmos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetSpelunkingDepth(struct FVector Location); // Function BP_Cave.BP_Cave_C.GetSpelunkingDepth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // Function BP_Cave.BP_Cave_C.OnOverlapEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // Function BP_Cave.BP_Cave_C.OnOverlapBegin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Refresh(); // Function BP_Cave.BP_Cave_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_Cave.BP_Cave_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Cave.BP_Cave_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnChildComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Cave.BP_Cave_C.OnChildComponentBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnChildComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Cave.BP_Cave_C.OnChildComponentEndOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Cave.BP_Cave_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void CaveUpdate(); // Function BP_Cave.BP_Cave_C.CaveUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartUpdateTimer(); // Function BP_Cave.BP_Cave_C.StartUpdateTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Cave(int32_t EntryPoint); // Function BP_Cave.BP_Cave_C.ExecuteUbergraph_BP_Cave // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

