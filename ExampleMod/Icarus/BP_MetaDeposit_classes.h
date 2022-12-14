// BlueprintGeneratedClass BP_MetaDeposit.BP_MetaDeposit_C
// Size: 0x320 (Inherited: 0x2e0)
struct ABP_MetaDeposit_C : ABP_OreDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct USphereComponent* MusicCueTrigger; // 0x2e8(0x08)
	bool IsEmptied; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FTimerHandle MusicCueCheckTimer; // 0x2f8(0x08)
	float MusicCueCheckTimerFrequency; // 0x300(0x04)
	float MusicCueCheckPlayerIsLookingThreshold; // 0x304(0x04)
	bool MusicCueHasPlayed; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct AIcarusPlayerCharacterSurvival* Player; // 0x310(0x08)
	struct FTimerHandle ResourceRemainingTimer; // 0x318(0x08)

	void DisableMusicCueChecks(); // Function BP_MetaDeposit.BP_MetaDeposit_C.DisableMusicCueChecks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckInPlayerView(bool& InPlayerView); // Function BP_MetaDeposit.BP_MetaDeposit_C.CheckInPlayerView // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayMusicCue(); // Function BP_MetaDeposit.BP_MetaDeposit_C.PlayMusicCue // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MusicCueCheck(); // Function BP_MetaDeposit.BP_MetaDeposit_C.MusicCueCheck // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopMusicCueChecks(); // Function BP_MetaDeposit.BP_MetaDeposit_C.StopMusicCueChecks // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartMusicCueChecks(); // Function BP_MetaDeposit.BP_MetaDeposit_C.StartMusicCueChecks // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_IsEmptied(); // Function BP_MetaDeposit.BP_MetaDeposit_C.OnRep_IsEmptied // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResourceEmptied(); // Function BP_MetaDeposit.BP_MetaDeposit_C.ResourceEmptied // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MetaDeposit.BP_MetaDeposit_C.BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MetaDeposit.BP_MetaDeposit_C.BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void IcarusBeginPlay(); // Function BP_MetaDeposit.BP_MetaDeposit_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void CheckResourceRemaining(); // Function BP_MetaDeposit.BP_MetaDeposit_C.CheckResourceRemaining // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_MetaDeposit(int32_t EntryPoint); // Function BP_MetaDeposit.BP_MetaDeposit_C.ExecuteUbergraph_BP_MetaDeposit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

