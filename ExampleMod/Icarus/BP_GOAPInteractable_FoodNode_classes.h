// BlueprintGeneratedClass BP_GOAPInteractable_FoodNode.BP_GOAPInteractable_FoodNode_C
// Size: 0x2fc (Inherited: 0x2e8)
struct ABP_GOAPInteractable_FoodNode_C : ABP_GOAPInteractable_Base_C {
	int32_t FLODInstanceIndex; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct AFLODTile* FLODTile; // 0x2f0(0x08)
	int32_t FLODRecordInstance; // 0x2f8(0x04)

	void OnInteractionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_GOAPInteractable_FoodNode.BP_GOAPInteractable_FoodNode_C.OnInteractionComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

