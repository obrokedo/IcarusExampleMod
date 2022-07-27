// BlueprintGeneratedClass BTS_SetAirBrakingDeceleration.BTS_SetAirBrakingDeceleration_C
// Size: 0xa8 (Inherited: 0x98)
struct UBTS_SetAirBrakingDeceleration_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	float TargetDeceleration; // 0xa0(0x04)
	float InitialDeceleration; // 0xa4(0x04)

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_SetAirBrakingDeceleration.BTS_SetAirBrakingDeceleration_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_SetAirBrakingDeceleration.BTS_SetAirBrakingDeceleration_C.ReceiveDeactivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTS_SetAirBrakingDeceleration(int32_t EntryPoint); // Function BTS_SetAirBrakingDeceleration.BTS_SetAirBrakingDeceleration_C.ExecuteUbergraph_BTS_SetAirBrakingDeceleration // (Final|UbergraphFunction) // @ game+0x1be0000
};

