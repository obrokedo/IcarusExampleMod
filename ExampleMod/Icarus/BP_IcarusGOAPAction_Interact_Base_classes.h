// BlueprintGeneratedClass BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C
// Size: 0xa0 (Inherited: 0x80)
struct UBP_IcarusGOAPAction_Interact_Base_C : UBP_IcarusGOAPAction_Base_C {
	struct FVector ProjectionExtent; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct ABP_GOAPInteractable_Base_C* InteractableClass; // 0x90(0x08)
	struct ABP_GOAPInteractable_Base_C* SpawnedNode; // 0x98(0x08)

	bool ActionReset(bool Interrupted); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.ActionReset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnDummyNode(struct AIcarusNPCGOAPController* ForController, struct FVector Spawn Transform Location, struct ABP_GOAPInteractable_Base_C*& SpawnedNode); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.SpawnDummyNode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.PlanAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.GetInteractLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Execute(struct AIcarusNPCGOAPController* Controller, float Delta); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.Execute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.IsInRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

