// BlueprintGeneratedClass BTT_IcarusGOAP_Retreat.BTT_IcarusGOAP_Retreat_C
// Size: 0xec (Inherited: 0xa8)
struct UBTT_IcarusGOAP_Retreat_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool IsRetreated; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct AIcarusNPCCharacter* NPCRef; // 0xb8(0x08)
	bool IsAborting; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FGameplayTag RetreatedGameplayTag; // 0xc4(0x08)
	struct FGOAPPropertiesRowHandle RetreatedProperty; // 0xcc(0x18)
	struct FName RetreatTargetActorKey; // 0xe4(0x08)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_Retreat.BTT_IcarusGOAP_Retreat_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_Retreat.BTT_IcarusGOAP_Retreat_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTT_IcarusGOAP_Retreat(int32_t EntryPoint); // Function BTT_IcarusGOAP_Retreat.BTT_IcarusGOAP_Retreat_C.ExecuteUbergraph_BTT_IcarusGOAP_Retreat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

