// BlueprintGeneratedClass BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C
// Size: 0x10c (Inherited: 0x98)
struct UBTS_AbortMoveIfStuck_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	float TimeoutTime; // 0xa0(0x04)
	float CMPerSecondTimeoutThreshold; // 0xa4(0x04)
	float TimeSpentBelowThreshold; // 0xa8(0x04)
	bool CurrentlyPlayingMontage; // 0xac(0x01)
	bool ShouldClearKeyOnAbort; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
	struct FBlackboardKeySelector KeyToClearOnAbort; // 0xb0(0x28)
	struct FVector LastPawnLocation; // 0xd8(0x0c)
	struct FName LastFailedMoveTargetLocationKey; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
	struct AAIController* AIControllerRef; // 0xf0(0x08)
	struct AIcarusNPCGOAPCharacter* GOAPCharacterRef; // 0xf8(0x08)
	struct FVector PreviousMovementTarget; // 0x100(0x0c)

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTS_AbortMoveIfStuck(int32_t EntryPoint); // Function BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C.ExecuteUbergraph_BTS_AbortMoveIfStuck // (Final|UbergraphFunction) // @ game+0x1be0000
};

