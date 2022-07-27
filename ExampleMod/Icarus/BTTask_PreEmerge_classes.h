// BlueprintGeneratedClass BTTask_PreEmerge.BTTask_PreEmerge_C
// Size: 0xb8 (Inherited: 0xa8)
struct UBTTask_PreEmerge_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName RetreatTargetActorKey; // 0xb0(0x08)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_PreEmerge.BTTask_PreEmerge_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTTask_PreEmerge(int32_t EntryPoint); // Function BTTask_PreEmerge.BTTask_PreEmerge_C.ExecuteUbergraph_BTTask_PreEmerge // (Final|UbergraphFunction) // @ game+0x1be0000
};

