// BlueprintGeneratedClass BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C
// Size: 0x84 (Inherited: 0x80)
struct UBP_IcarusGOAPAction_GreetFriendly_C : UBP_IcarusGOAPAction_Base_C {
	float MaxGreetDistance; // 0x80(0x04)

	void IsTargetValid(struct AActor* Target, bool& IsValid); // Function BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C.IsTargetValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C.PlanAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetNearbyTargetToGreet(struct AActor*& ValidTarget); // Function BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C.GetNearbyTargetToGreet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C.CheckContextualPreconditions // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
};

