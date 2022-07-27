// BlueprintGeneratedClass BP_DropShip.BP_DropShip_C
// Size: 0x468 (Inherited: 0x308)
struct ABP_DropShip_C : AIcarusRocket {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UAudioContextComponent* AudioContext; // 0x310(0x08)
	struct UAudioOcclusionDropshipComponent* AudioOcclusionDropship; // 0x318(0x08)
	struct UIcarusMapIconComponent* IcarusMapIcon; // 0x320(0x08)
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; // 0x328(0x08)
	struct USphereComponent* Sphere; // 0x330(0x08)
	struct UInventoryComponent* Inventory; // 0x338(0x08)
	struct UHighlightableComponent* Highlightable; // 0x340(0x08)
	struct UCameraComponent* Camera; // 0x348(0x08)
	struct UIcarusCameraSpringArm* IcarusCameraSpringArm; // 0x350(0x08)
	struct UTextRenderComponent* PlayerName; // 0x358(0x08)
	struct UInteractableComponent* Interactable; // 0x360(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x368(0x08)
	struct TArray<struct ABP_PartBase_C*> HighlightComponents; // 0x370(0x10)
	float DescentTime; // 0x380(0x04)
	float CurrentTime; // 0x384(0x04)
	float AscentTime; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct FDropShipEvent> DecentActions; // 0x390(0x10)
	struct TArray<struct FDropShipEvent> AscentActions; // 0x3a0(0x10)
	struct FDropShipSequencesRowHandle DecentSequence; // 0x3b0(0x18)
	struct FDropShipSequencesRowHandle AscentSequence; // 0x3c8(0x18)
	bool ShipInteractionEnabled; // 0x3e0(0x01)
	bool ClientReady; // 0x3e1(0x01)
	bool ServerShipBuilt; // 0x3e2(0x01)
	char pad_3E3[0x5]; // 0x3e3(0x05)
	struct FText Name; // 0x3e8(0x18)
	struct ABP_DropshipSeat_C* Seat; // 0x400(0x08)
	bool CollisionEnabled; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32_t PlayerIndex; // 0x40c(0x04)
	bool PartsAttached; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct ABP_PartBase_C* TopPart; // 0x418(0x08)
	struct ABP_PartBase_C* MidPart; // 0x420(0x08)
	struct ABP_PartBase_C* BtmPart; // 0x428(0x08)
	struct FVector ReplicatedLocation; // 0x430(0x0c)
	bool DebugDropshipSequence; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct FString LogName; // 0x440(0x10)
	bool Dropship Initialised; // 0x450(0x01)
	bool DebugWithoutBackend; // 0x451(0x01)
	enum class EDropshipDescentStateFMODParam FMODAudioDescentState; // 0x452(0x01)
	enum class EDropshipAssignedPlayerType AssignedPlayerType; // 0x453(0x01)
	bool bDatabaseReloaded; // 0x454(0x01)
	bool PlayLandingAudio; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	struct TArray<struct FItemData> GrantedLoadoutItems; // 0x458(0x10)

	void GetDropshipLoadoutItems(struct FItemData& TopPart, struct FItemData& MidPart, struct FItemData& BottomPart); // Function BP_DropShip.BP_DropShip_C.GetDropshipLoadoutItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ResetDropshipActions(); // Function BP_DropShip.BP_DropShip_C.ResetDropshipActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckClientPartsReady(bool& PartsReady); // Function BP_DropShip.BP_DropShip_C.CheckClientPartsReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetAssignedPlayerType(enum class EDropshipAssignedPlayerType PlayerType); // Function BP_DropShip.BP_DropShip_C.SetAssignedPlayerType // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateGlobalAudioParameters(); // Function BP_DropShip.BP_DropShip_C.UpdateGlobalAudioParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function BP_DropShip.BP_DropShip_C.OnConnectedPlayerInitialised // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HasProspectExpired(bool& IsExpired); // Function BP_DropShip.BP_DropShip_C.HasProspectExpired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateFMODState(struct FDropShipActionsEnum Action); // Function BP_DropShip.BP_DropShip_C.UpdateFMODState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_FMODAudioDescentState(); // Function BP_DropShip.BP_DropShip_C.OnRep_FMODAudioDescentState // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Grant Loadout Items(); // Function BP_DropShip.BP_DropShip_C.Grant Loadout Items // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugSequence(float SequenceTime); // Function BP_DropShip.BP_DropShip_C.DebugSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateFmodPlayerPerspective(bool bIsThirdPerson); // Function BP_DropShip.BP_DropShip_C.UpdateFmodPlayerPerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StateUpdated(); // Function BP_DropShip.BP_DropShip_C.StateUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitLandedState(); // Function BP_DropShip.BP_DropShip_C.InitLandedState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FixDropshipLayout(); // Function BP_DropShip.BP_DropShip_C.FixDropshipLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FixSeat(struct ABP_PartBase_C* Parent); // Function BP_DropShip.BP_DropShip_C.FixSeat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FixPartsLocation(struct ABP_PartBase_C* Parent, struct ABP_PartBase_C* NewPart, struct FName ParentSocket, struct FName NewPartSocket); // Function BP_DropShip.BP_DropShip_C.FixPartsLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnParts(struct FItemData TOP_Item, struct FItemData MID_Item, struct FItemData BTM_Item); // Function BP_DropShip.BP_DropShip_C.SpawnParts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAudioState(); // Function BP_DropShip.BP_DropShip_C.UpdateAudioState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCommandPart(struct ABP_RP_Command_Base_C*& Command); // Function BP_DropShip.BP_DropShip_C.GetCommandPart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_Name(); // Function BP_DropShip.BP_DropShip_C.OnRep_Name // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ShipInteractionEnabled(); // Function BP_DropShip.BP_DropShip_C.OnRep_ShipInteractionEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetInteraction(bool Active); // Function BP_DropShip.BP_DropShip_C.SetInteraction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReadyCheck(bool& Ready); // Function BP_DropShip.BP_DropShip_C.ReadyCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitialiseActions(); // Function BP_DropShip.BP_DropShip_C.InitialiseActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TriggerPartEvent(struct FDropShipActionsEnum Action); // Function BP_DropShip.BP_DropShip_C.TriggerPartEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TriggerShipEvent(struct FDropShipActionsEnum Action, bool& Success); // Function BP_DropShip.BP_DropShip_C.TriggerShipEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TriggerActions(struct TArray<struct FDropShipEvent>& Actions, float& Time); // Function BP_DropShip.BP_DropShip_C.TriggerActions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateHighlight(struct ABP_PartBase_C* Part, bool State); // Function BP_DropShip.BP_DropShip_C.UpdateHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRocketAssembled(); // Function BP_DropShip.BP_DropShip_C.OnRocketAssembled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWorldInteraction(struct UInteractableComponent* Interactable, struct AActor* Instigator, struct FHitResult& HitResult); // Function BP_DropShip.BP_DropShip_C.OnWorldInteraction // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_DropShip.BP_DropShip_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void InitialisePosition(); // Function BP_DropShip.BP_DropShip_C.InitialisePosition // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnServer_ClientReady(); // Function BP_DropShip.BP_DropShip_C.OnServer_ClientReady // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_DropShip.BP_DropShip_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void Multicast_PlayDropshipExitAudio(struct AIcarusPlayerCharacter* Player); // Function BP_DropShip.BP_DropShip_C.Multicast_PlayDropshipExitAudio // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnShipParts(); // Function BP_DropShip.BP_DropShip_C.SpawnShipParts // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DropshipLog(struct FString Log); // Function BP_DropShip.BP_DropShip_C.DropshipLog // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_DropShip.BP_DropShip_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnProspectSessionEnded(enum class EEndProspectSessionContext Context); // Function BP_DropShip.BP_DropShip_C.OnProspectSessionEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_AssignedPlayerCharacterID(); // Function BP_DropShip.BP_DropShip_C.OnRep_AssignedPlayerCharacterID // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void IcarusBeginPlay(); // Function BP_DropShip.BP_DropShip_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnRep_RocketState(); // Function BP_DropShip.BP_DropShip_C.OnRep_RocketState // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnDatabaseReload(); // Function BP_DropShip.BP_DropShip_C.OnDatabaseReload // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnDropshipSpawnPlayerInit(); // Function BP_DropShip.BP_DropShip_C.OnDropshipSpawnPlayerInit // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TriggerLeaveProspectLaunch(); // Function BP_DropShip.BP_DropShip_C.TriggerLeaveProspectLaunch // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void TriggerLaunch(); // Function BP_DropShip.BP_DropShip_C.TriggerLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryInitialiseDropship(); // Function BP_DropShip.BP_DropShip_C.TryInitialiseDropship // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProcessActions(float DeltaTime); // Function BP_DropShip.BP_DropShip_C.ProcessActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_DropShip.BP_DropShip_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_DropShip(int32_t EntryPoint); // Function BP_DropShip.BP_DropShip_C.ExecuteUbergraph_BP_DropShip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

