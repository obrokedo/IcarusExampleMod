// BlueprintGeneratedClass BTT_FindClearLandingLocation.BTT_FindClearLandingLocation_C
// Size: 0x108 (Inherited: 0xa8)
struct UBTT_FindClearLandingLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct APawn* PawnRef; // 0xb0(0x08)
	float CapsuleRadius; // 0xb8(0x04)
	float CapsuleHeight; // 0xbc(0x04)
	bool Succeeded; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FVector LastTargetLocation; // 0xc4(0x0c)
	struct FBlackboardKeySelector TargetLocationKey; // 0xd0(0x28)
	struct FVector ProjectedGroundLocation; // 0xf8(0x0c)
	float LandingDistance; // 0x104(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_FindClearLandingLocation.BTT_FindClearLandingLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BreakLoop(); // Function BTT_FindClearLandingLocation.BTT_FindClearLandingLocation_C.BreakLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTT_FindClearLandingLocation(int32_t EntryPoint); // Function BTT_FindClearLandingLocation.BTT_FindClearLandingLocation_C.ExecuteUbergraph_BTT_FindClearLandingLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

