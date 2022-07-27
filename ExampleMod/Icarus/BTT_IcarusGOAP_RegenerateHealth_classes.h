// BlueprintGeneratedClass BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C
// Size: 0xdc (Inherited: 0xa8)
struct UBTT_IcarusGOAP_RegenerateHealth_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t RegenPercent; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct AIcarusNPCGOAPCharacter* CharacterRef; // 0xb8(0x08)
	float TimeToRegenerate; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct AAIController* ControllerRef; // 0xc8(0x08)
	bool IsRegenerating; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float FractionalRegen; // 0xd4(0x04)
	int32_t TargetHealthAmount; // 0xd8(0x04)

	void ReceiveAbort(struct AActor* OwnerActor); // Function BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C.ReceiveAbort // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void RegenerateHealth(float DeltaSeconds); // Function BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C.RegenerateHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTT_IcarusGOAP_RegenerateHealth(int32_t EntryPoint); // Function BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C.ExecuteUbergraph_BTT_IcarusGOAP_RegenerateHealth // (Final|UbergraphFunction) // @ game+0x1be0000
};

