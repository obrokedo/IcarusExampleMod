// BlueprintGeneratedClass BP_IcarusPlayerState.BP_IcarusPlayerState_C
// Size: 0x4c8 (Inherited: 0x470)
struct ABP_IcarusPlayerState_C : AIcarusPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x478(0x08)
	int32_t PlayerIdentityVisual; // 0x480(0x04)
	int32_t PlayerMapColorIndex; // 0x484(0x04)
	struct AIcarusWaypointActor* PersonalWaypoint; // 0x488(0x08)
	float PlayerHealth; // 0x490(0x04)
	bool DebugDeployablePlacement; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct TSoftClassPtr<UObject> IcarusWaypointClass; // 0x498(0x28)
	struct UObject* WaypointClass; // 0x4c0(0x08)

	int32_t GetPlayerVisualIdentity(); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.GetPlayerVisualIdentity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void SetDeployableDebugEnabled(bool Enabled); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.SetDeployableDebugEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4(struct UObject* Loaded); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_A3EAECF7499A23B0349644B397036FC7(struct UObject* Loaded); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.OnLoaded_A3EAECF7499A23B0349644B397036FC7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ServerMovePersonalWaypoint(struct FVector Location, struct AController* OwningController); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ServerMovePersonalWaypoint // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerDestroyWaypoint(); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ServerDestroyWaypoint // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_UpdateHealthValue(float NewHealth); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.Server_UpdateHealthValue // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusPlayerState(int32_t EntryPoint); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ExecuteUbergraph_BP_IcarusPlayerState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

