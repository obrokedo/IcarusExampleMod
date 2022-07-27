// BlueprintGeneratedClass BTD_CanDestroyBlockingActor.BTD_CanDestroyBlockingActor_C
// Size: 0xc9 (Inherited: 0xa0)
struct UBTD_CanDestroyBlockingActor_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector ActorToDestroy; // 0xa0(0x28)
	bool ShouldCheckActorToDestroy; // 0xc8(0x01)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CanDestroyBlockingActor.BTD_CanDestroyBlockingActor_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

