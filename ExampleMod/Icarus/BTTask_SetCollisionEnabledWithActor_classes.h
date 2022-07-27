// BlueprintGeneratedClass BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C
// Size: 0xd9 (Inherited: 0xa8)
struct UBTTask_SetCollisionEnabledWithActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetActorKey; // 0xb0(0x28)
	bool CollisionEnabled; // 0xd8(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor(int32_t EntryPoint); // Function BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C.ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor // (Final|UbergraphFunction) // @ game+0x1be0000
};

