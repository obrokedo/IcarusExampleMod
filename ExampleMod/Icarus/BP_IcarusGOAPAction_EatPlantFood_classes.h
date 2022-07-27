// BlueprintGeneratedClass BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C
// Size: 0xd8 (Inherited: 0xa0)
struct UBP_IcarusGOAPAction_EatPlantFood_C : UBP_IcarusGOAPAction_Interact_Base_C {
	struct FTagQueriesRowHandle ValidFoodQuery; // 0xa0(0x18)
	struct ABP_GOAPInteractable_FoodNode_C* SpawnedFoodNode; // 0xb8(0x08)
	int32_t Array Index; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct AFLODTile* Tile; // 0xc8(0x08)
	int32_t RecordIndex; // 0xd0(0x04)
	int32_t FLODInstanceIndex; // 0xd4(0x04)

	void SpawnDummyNode(struct AIcarusNPCGOAPController* ForController, struct FVector Spawn Transform Location, struct ABP_GOAPInteractable_Base_C*& SpawnedNode); // Function BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C.SpawnDummyNode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // Function BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C.GetInteractLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C.ExecutionComplete // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

