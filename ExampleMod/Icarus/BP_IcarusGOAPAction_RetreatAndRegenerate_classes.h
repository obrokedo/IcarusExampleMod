// BlueprintGeneratedClass BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C
// Size: 0xa0 (Inherited: 0x80)
struct UBP_IcarusGOAPAction_RetreatAndRegenerate_C : UBP_IcarusGOAPAction_Base_C {
	struct FName LastRetreatHealthKey; // 0x80(0x08)
	struct FName LastRetreatTimeKey; // 0x88(0x08)
	struct FName RetreatTargetLocationKey; // 0x90(0x08)
	struct FName RetreatTargetActorKey; // 0x98(0x08)

	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C.PlanAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C.CheckContextualPreconditions // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C.ExecutionComplete // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

