// BlueprintGeneratedClass BTT_SetMovementMode.BTT_SetMovementMode_C
// Size: 0xb2 (Inherited: 0xa8)
struct UBTT_SetMovementMode_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class EMovementMode New Movement Mode; // 0xb0(0x01)
	char New Custom Mode; // 0xb1(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SetMovementMode.BTT_SetMovementMode_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTT_SetMovementMode(int32_t EntryPoint); // Function BTT_SetMovementMode.BTT_SetMovementMode_C.ExecuteUbergraph_BTT_SetMovementMode // (Final|UbergraphFunction) // @ game+0x1be0000
};

