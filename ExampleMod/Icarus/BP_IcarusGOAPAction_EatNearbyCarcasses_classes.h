// BlueprintGeneratedClass BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C
// Size: 0xe9 (Inherited: 0xa0)
struct UBP_IcarusGOAPAction_EatNearbyCarcasses_C : UBP_IcarusGOAPAction_Interact_Base_C {
	struct FTagQueriesRowHandle ValidFoodQuery; // 0xa0(0x18)
	int32_t Array Index; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct AFLODTile* Tile; // 0xc0(0x08)
	int32_t RecordIndex; // 0xc8(0x04)
	int32_t FLODInstanceIndex; // 0xcc(0x04)
	struct ABP_GOAP_Corpse_C* TargetCorpse; // 0xd0(0x08)
	int32_t MaxEatAmount; // 0xd8(0x04)
	bool IsEating; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FTimerHandle EatTimer; // 0xe0(0x08)
	bool DidEmptyCarcass; // 0xe8(0x01)

	void GetCorpseMoveLocation(struct AActor* InActor, struct FVector& WorldLocation); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.GetCorpseMoveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void IsPointUnderwater(struct FVector InLocation, bool& IsUnderwater); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.IsPointUnderwater // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool ActionReset(bool Interrupted); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.ActionReset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool GOAPAnimNotify(struct FString NotifyName, struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.GOAPAnimNotify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EatFromCorpse(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.EatFromCorpse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsCorpseValid(struct ABP_GOAP_Corpse_C* Target); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.IsCorpseValid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.CheckContextualPreconditions // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.GetInteractLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C.ExecutionComplete // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

