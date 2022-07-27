// BlueprintGeneratedClass BP_PartBase.BP_PartBase_C
// Size: 0x462 (Inherited: 0x410)
struct ABP_PartBase_C : AIcarusRocketPart {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UShelteredModifierComponent* ShelteredModifier; // 0x418(0x08)
	struct UNavModifierComponent* NavModifier; // 0x420(0x08)
	struct ABP_DropShip_C* AssociatedDropShip; // 0x428(0x08)
	struct FTransform SyncedTransform; // 0x430(0x30)
	bool ClientSync; // 0x460(0x01)
	bool Collision; // 0x461(0x01)

	void Update Fmod Dropship State(enum class EDropshipDescentStateFMODParam DropshipSequenceState); // Function BP_PartBase.BP_PartBase_C.Update Fmod Dropship State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer); // Function BP_PartBase.BP_PartBase_C.ToggleFlightSFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AssembledByDatabase(); // Function BP_PartBase.BP_PartBase_C.AssembledByDatabase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_Collision(); // Function BP_PartBase.BP_PartBase_C.OnRep_Collision // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_SyncedTransform(); // Function BP_PartBase.BP_PartBase_C.OnRep_SyncedTransform // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReadyCheck(bool& Success); // Function BP_PartBase.BP_PartBase_C.ReadyCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TriggerEvent(struct FDropShipActionsEnum Actions); // Function BP_PartBase.BP_PartBase_C.TriggerEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetMesh(struct UPrimitiveComponent*& Mesh); // Function BP_PartBase.BP_PartBase_C.GetMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Enable Interactable Collision(); // Function BP_PartBase.BP_PartBase_C.Enable Interactable Collision // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // Function BP_PartBase.BP_PartBase_C.OnHighlightChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Multi_PlayAnimation(struct USkeletalMeshComponent* SkeletalMesh, struct UAnimationAsset* Animation, float StartingPosition, bool Reverse); // Function BP_PartBase.BP_PartBase_C.Multi_PlayAnimation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_PartBase.BP_PartBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SetEditorInteractable(bool Interactable); // Function BP_PartBase.BP_PartBase_C.SetEditorInteractable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetEditorHighlight(bool Highlight); // Function BP_PartBase.BP_PartBase_C.SetEditorHighlight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_PartBase.BP_PartBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_PartBase(int32_t EntryPoint); // Function BP_PartBase.BP_PartBase_C.ExecuteUbergraph_BP_PartBase // (Final|UbergraphFunction) // @ game+0x1be0000
};

