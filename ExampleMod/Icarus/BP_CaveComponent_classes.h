// BlueprintGeneratedClass BP_CaveComponent.BP_CaveComponent_C
// Size: 0x149 (Inherited: 0xb0)
struct UBP_CaveComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct UBoxComponent*> Volumes; // 0xb8(0x10)
	struct TArray<struct UBP_CaveEntranceComponent_C*> Entrances; // 0xc8(0x10)
	float ActiveUpdateFrequency; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FTimerHandle CaveUpdateTimerHandle; // 0xe0(0x08)
	struct AIcarusPlayerController* Player; // 0xe8(0x08)
	float SpelunkingDepth; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TSet<struct UPrimitiveComponent*> LocalPlayerOverlaps; // 0xf8(0x50)
	bool Debug; // 0x148(0x01)

	float GetSpelunkingDepth(struct FVector Location); // Function BP_CaveComponent.BP_CaveComponent_C.GetSpelunkingDepth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	float GetEntranceDepthForAtmos(struct FVector Location); // Function BP_CaveComponent.BP_CaveComponent_C.GetEntranceDepthForAtmos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void PlayerOverlapValidation(); // Function BP_CaveComponent.BP_CaveComponent_C.PlayerOverlapValidation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateOverlapState(); // Function BP_CaveComponent.BP_CaveComponent_C.UpdateOverlapState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // Function BP_CaveComponent.BP_CaveComponent_C.OnOverlapEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // Function BP_CaveComponent.BP_CaveComponent_C.OnOverlapBegin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitCave(struct TArray<struct UBoxComponent*>& InVolumes, struct TArray<struct UBP_CaveEntranceComponent_C*>& InEntrances); // Function BP_CaveComponent.BP_CaveComponent_C.InitCave // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnChildComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_CaveComponent.BP_CaveComponent_C.OnChildComponentBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnChildComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_CaveComponent.BP_CaveComponent_C.OnChildComponentEndOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent(enum class EEndPlayReason EndPlayReason); // Function BP_CaveComponent.BP_CaveComponent_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CaveUpdate(); // Function BP_CaveComponent.BP_CaveComponent_C.CaveUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartUpdateTimer(); // Function BP_CaveComponent.BP_CaveComponent_C.StartUpdateTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_CaveComponent(int32_t EntryPoint); // Function BP_CaveComponent.BP_CaveComponent_C.ExecuteUbergraph_BP_CaveComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

