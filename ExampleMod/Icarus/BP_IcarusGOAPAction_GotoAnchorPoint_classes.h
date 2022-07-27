// BlueprintGeneratedClass BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C
// Size: 0x94 (Inherited: 0x80)
struct UBP_IcarusGOAPAction_GotoAnchorPoint_C : UBP_IcarusGOAPAction_Base_C {
	int32_t TimesBlocked; // 0x80(0x04)
	int32_t TimesBlockedBeforeTeleport; // 0x84(0x04)
	struct FVector LastBlockLocation; // 0x88(0x0c)

	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C.ExecutionComplete // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetGOAPState(); // Function BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C.ResetGOAPState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool GetActionStats(struct TMap<struct FBaseStatsEnum, int32_t>& ActionStats); // Function BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C.GetActionStats // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnGOAPMovementBlocked(struct FVector CurrentLocation, struct FVector TargetLocation); // Function BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C.OnGOAPMovementBlocked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ActionReset(bool Interrupted); // Function BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C.ActionReset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C.PlanAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

