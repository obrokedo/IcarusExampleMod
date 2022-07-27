// BlueprintGeneratedClass BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C
// Size: 0x84 (Inherited: 0x80)
struct UBP_IcarusGOAPAction_Charge_C : UBP_IcarusGOAPAction_Base_C {
	float LastChargeTime; // 0x80(0x04)

	void IsTargetWithinValidChargeDistance(struct AIcarusNPCGOAPController* Controller, struct AActor* Target, bool& WithinValidDistance); // Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.IsTargetWithinValidChargeDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.ExecutionComplete // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.IsInRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.PlanAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.CheckContextualPreconditions // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
};

