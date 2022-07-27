// BlueprintGeneratedClass BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C
// Size: 0x94 (Inherited: 0x80)
struct UBP_IcarusGOAPAction_Melee_Attack_C : UBP_IcarusGOAPAction_Base_C {
	struct AActor* TargetActor; // 0x80(0x08)
	struct AAITargetNode_C* TargetNodeRef; // 0x88(0x08)
	float LastTargetSwitchTime; // 0x90(0x04)

	void TrySwitchAttackTarget(struct AIcarusNPCGOAPController* Controller, bool& DidSwitch); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.TrySwitchAttackTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ActionReset(bool Interrupted); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.ActionReset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool UpdateCost(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.UpdateCost // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.IsInRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.PlanAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.CheckContextualPreconditions // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
};

