// BlueprintGeneratedClass BTT_AssignStatToBBKey.BTT_AssignStatToBBKey_C
// Size: 0xec (Inherited: 0xa8)
struct UBTT_AssignStatToBBKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector FloatBlackboardKey; // 0xb0(0x28)
	struct FStatsEnum Stat; // 0xd8(0x10)
	int32_t DefaultValue; // 0xe8(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_AssignStatToBBKey.BTT_AssignStatToBBKey_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTT_AssignStatToBBKey(int32_t EntryPoint); // Function BTT_AssignStatToBBKey.BTT_AssignStatToBBKey_C.ExecuteUbergraph_BTT_AssignStatToBBKey // (Final|UbergraphFunction) // @ game+0x1be0000
};

