// BlueprintGeneratedClass BP_FishBase.BP_FishBase_C
// Size: 0x511 (Inherited: 0x3f0)
struct ABP_FishBase_C : AFishActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UIcarusMapIconComponent* IcarusMapIcon; // 0x3f8(0x08)
	struct UExperienceComponent* Experience; // 0x400(0x08)
	struct UHighlightableComponent* Highlightable; // 0x408(0x08)
	struct UInteractableComponent* Interactable; // 0x410(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x418(0x08)
	float CorrectionUpdateTime; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct FMulticastInlineDelegate FishDetached; // 0x428(0x10)
	bool FishSetupInit; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FFishSetup FishSetupData_1; // 0x440(0xc8)
	struct UFMODAudioComponent* MovementAudio; // 0x508(0x08)
	bool FishIsAggressive; // 0x510(0x01)

	void SetMovementAudioPlayState(bool ShouldPlay); // Function BP_FishBase.BP_FishBase_C.SetMovementAudioPlayState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryPlayAttackSound(); // Function BP_FishBase.BP_FishBase_C.TryPlayAttackSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetFishSetup(struct FFishSetup& FishSetup); // Function BP_FishBase.BP_FishBase_C.GetFishSetup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Pickup(struct AIcarusPlayerCharacterSurvival* Player); // Function BP_FishBase.BP_FishBase_C.Pickup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DetachFromLure(); // Function BP_FishBase.BP_FishBase_C.DetachFromLure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckFishManager(); // Function BP_FishBase.BP_FishBase_C.CheckFishManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_FishBase.BP_FishBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void UpdateRepLocation(); // Function BP_FishBase.BP_FishBase_C.UpdateRepLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FishBase.BP_FishBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BPOnRep_Dead(); // Function BP_FishBase.BP_FishBase_C.BPOnRep_Dead // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BPOnRep_Scale(); // Function BP_FishBase.BP_FishBase_C.BPOnRep_Scale // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BPOnRep_AttachActor(); // Function BP_FishBase.BP_FishBase_C.BPOnRep_AttachActor // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void KillFish(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_FishBase.BP_FishBase_C.KillFish // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_FishBase.BP_FishBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void AttackPlayer(struct AIcarusPlayerCharacter* Player); // Function BP_FishBase.BP_FishBase_C.AttackPlayer // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayAttackFX(); // Function BP_FishBase.BP_FishBase_C.MULTI_PlayAttackFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_AwarenessTarget(); // Function BP_FishBase.BP_FishBase_C.OnRep_AwarenessTarget // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_FishBase(int32_t EntryPoint); // Function BP_FishBase.BP_FishBase_C.ExecuteUbergraph_BP_FishBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void FishDetached__DelegateSignature(enum class EFishDetatchReason Reason); // Function BP_FishBase.BP_FishBase_C.FishDetached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

