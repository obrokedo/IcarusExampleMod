// BlueprintGeneratedClass BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C
// Size: 0x128 (Inherited: 0xa8)
struct UBTT_CalculateBestWanderEQSSize_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector WanderEQSGridSizeKey; // 0xb0(0x28)
	struct FBlackboardKeySelector WanderEQSConeSizeKey; // 0xd8(0x28)
	struct FBlackboardKeySelector WanderEQSHalfMaximumSizeKey; // 0x100(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTT_CalculateBestWanderEQSSize(int32_t EntryPoint); // Function BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C.ExecuteUbergraph_BTT_CalculateBestWanderEQSSize // (Final|UbergraphFunction) // @ game+0x1be0000
};

