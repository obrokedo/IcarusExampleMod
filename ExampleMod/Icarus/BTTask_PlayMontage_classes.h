// BlueprintGeneratedClass BTTask_PlayMontage.BTTask_PlayMontage_C
// Size: 0xe3 (Inherited: 0xa8)
struct UBTTask_PlayMontage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UAnimMontage* Montage; // 0xb0(0x08)
	float MontageStartTime; // 0xb8(0x04)
	float PlayRate; // 0xbc(0x04)
	struct AIcarusPawn* IcarusPawnRef; // 0xc0(0x08)
	struct FName StartingSection; // 0xc8(0x08)
	struct AAIController* ControllerRef; // 0xd0(0x08)
	struct AIcarusCharacter* IcarusCharacterRef; // 0xd8(0x08)
	bool RandomSection; // 0xe0(0x01)
	bool FinishOnBlendOut; // 0xe1(0x01)
	bool FinishImmediately; // 0xe2(0x01)

	void OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnMontageComplete(); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnMontageInterrupted(); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageInterrupted // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnMontageBlendOut(); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageBlendOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnMontageNotifyBegin(struct FName NotifyName); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageNotifyBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnMontageNotifyEnd(struct FName NotifyName); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageNotifyEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTTask_PlayMontage(int32_t EntryPoint); // Function BTTask_PlayMontage.BTTask_PlayMontage_C.ExecuteUbergraph_BTTask_PlayMontage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

