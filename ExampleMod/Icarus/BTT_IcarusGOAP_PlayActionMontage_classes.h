// BlueprintGeneratedClass BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C
// Size: 0x10a (Inherited: 0xa8)
struct UBTT_IcarusGOAP_PlayActionMontage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct USkeletalMeshComponent* MeshRef; // 0xb0(0x08)
	struct FGOAPActionsRowHandle GOAPAction; // 0xb8(0x18)
	struct UAnimMontage* MontageToPlay; // 0xd0(0x08)
	struct FName OverrideInitialMontageSection; // 0xd8(0x08)
	struct FName SecondaryMontageSection; // 0xe0(0x08)
	float SecondaryDelay; // 0xe8(0x04)
	float DelayDeviation; // 0xec(0x04)
	struct FName Section; // 0xf0(0x08)
	struct FTimerHandle SecondaryTimer; // 0xf8(0x08)
	struct ABP_IcarusNPCGOAPCharacter_C* GOAPCharRef; // 0x100(0x08)
	bool FinishImmediately; // 0x108(0x01)
	bool FinishOnBlendOut; // 0x109(0x01)

	float GetSecondaryDelay(); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.GetSecondaryDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnLoaded_3D149E2642EDF2E7858CF39F8F3947B4(struct UObject* Loaded); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.OnLoaded_3D149E2642EDF2E7858CF39F8F3947B4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_DDFC1BB84168821694EAB4959526218A(struct FName NotifyName); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.OnNotifyEnd_DDFC1BB84168821694EAB4959526218A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_DDFC1BB84168821694EAB4959526218A(struct FName NotifyName); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.OnNotifyBegin_DDFC1BB84168821694EAB4959526218A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_DDFC1BB84168821694EAB4959526218A(struct FName NotifyName); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.OnInterrupted_DDFC1BB84168821694EAB4959526218A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_DDFC1BB84168821694EAB4959526218A(struct FName NotifyName); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.OnBlendOut_DDFC1BB84168821694EAB4959526218A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_DDFC1BB84168821694EAB4959526218A(struct FName NotifyName); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.OnCompleted_DDFC1BB84168821694EAB4959526218A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void PlaySecondarySection(); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.PlaySecondarySection // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTT_IcarusGOAP_PlayActionMontage(int32_t EntryPoint); // Function BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C.ExecuteUbergraph_BTT_IcarusGOAP_PlayActionMontage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

