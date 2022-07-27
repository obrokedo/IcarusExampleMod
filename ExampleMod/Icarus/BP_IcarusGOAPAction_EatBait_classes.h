// BlueprintGeneratedClass BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C
// Size: 0xd8 (Inherited: 0xa0)
struct UBP_IcarusGOAPAction_EatBait_C : UBP_IcarusGOAPAction_Interact_Base_C {
	struct AIcarusItem* TargetBait; // 0xa0(0x08)
	struct FTagQueriesEnum OmnivoreBaitQuery; // 0xa8(0x10)
	struct FTagQueriesEnum CarnivoreBaitQuery; // 0xb8(0x10)
	struct FTagQueriesEnum HerbivoreBaitQuery; // 0xc8(0x10)

	void GetBestBaitQueryForController(struct AIcarusNPCGOAPController* Controller, struct FTagQueriesEnum& BaitQuery, bool& Success); // Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GetBestBaitQueryForController // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void GetNearestRelevantBaitItem(struct AIcarusNPCGOAPController* ForController, bool SkipPathCheck, struct AIcarusItem*& BaitItem, struct FVector& PathEnd); // Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GetNearestRelevantBaitItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool GOAPAnimNotify(struct FString NotifyName, struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GOAPAnimNotify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EatBait(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.EatBait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.CheckContextualPreconditions // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // Function BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C.GetInteractLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

