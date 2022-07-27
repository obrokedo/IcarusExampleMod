// BlueprintGeneratedClass BP_IcarusWaypointActor.BP_IcarusWaypointActor_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_IcarusWaypointActor_C : AIcarusWaypointActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UIcarusMapIconComponent* IcarusMapIcon; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct AIcarusPlayerState* OwningPlayerState; // 0x238(0x08)

	void OnRep_OwningPlayerState(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.OnRep_OwningPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct AIcarusPlayerState* GetOwningPlayerState(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.GetOwningPlayerState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void CleanUpWaypointRefs(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.CleanUpWaypointRefs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerKillWaypoint(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ServerKillWaypoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void InitForPlayer(struct AIcarusPlayerState* OwningPlayerState); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.InitForPlayer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupWidget(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.SetupWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusWaypointActor(int32_t EntryPoint); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ExecuteUbergraph_BP_IcarusWaypointActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

