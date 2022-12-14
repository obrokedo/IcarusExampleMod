// BlueprintGeneratedClass BP_PlayerDropShip.BP_PlayerDropShip_C
// Size: 0x36d (Inherited: 0x308)
struct ABP_PlayerDropShip_C : AIcarusRocket {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UHighlightableComponent* Highlightable; // 0x310(0x08)
	struct UInteractableComponent* Interactable; // 0x318(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x320(0x08)
	struct ABP_IcarusPlayerControllerSurvival_C* AssignedPlayer; // 0x328(0x08)
	struct TArray<struct ABP_DropshipSeat_C*> Seats; // 0x330(0x10)
	struct TArray<struct ABP_PartBase_C*> HighlightComponents; // 0x340(0x10)
	struct ABP_DropshipSeat_C* SeatToEnter; // 0x350(0x08)
	bool Seated; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float DestinationHeight; // 0x35c(0x04)
	float LandHeightThreshold; // 0x360(0x04)
	bool Descend; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	float InitialPositionOffset_1; // 0x368(0x04)
	bool Land; // 0x36c(0x01)

	void CalculateLandingVelocity(float Delta, struct FVector& Velocity, float& RangeDelta); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.CalculateLandingVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateHighlight(struct ABP_PartBase_C* Part, bool State); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.UpdateHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRocketAssembled(); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.OnRocketAssembled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnWorldInteraction(struct UInteractableComponent* Interactable, struct AActor* Instigator, struct FHitResult& HitResult); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.OnWorldInteraction // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EnterSeat(struct ABP_DropshipSeat_C* DropShipSeat); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.EnterSeat // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Start(); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Build Default(); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.Build Default // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_PlayerDropShip(int32_t EntryPoint); // Function BP_PlayerDropShip.BP_PlayerDropShip_C.ExecuteUbergraph_BP_PlayerDropShip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

