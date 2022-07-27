// BlueprintGeneratedClass BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C
// Size: 0x308 (Inherited: 0x2d0)
struct UBP_ActionableBehaviour_Base_C : UActionableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct FRandomStream RandomStream; // 0x2d8(0x08)
	bool DEBUG_ShowGetAnimationErrorMessages; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct AActor* BehaviorOwner; // 0x2e8(0x08)
	struct AIcarusPlayerCharacterSurvival* BehaviorOwnerPlayer; // 0x2f0(0x08)
	bool ShowNoDurabilityError; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FTimerHandle NoDurabilityErrorTimerHandle; // 0x300(0x08)

	void StopActionMontage(struct AIcarusPlayerCharacter* AnimTarget, float BlendOutTime); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.StopActionMontage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowErrorMessage(struct FText Message, struct FTimerHandle Timer, float ErrorCooldown, struct FTimerHandle& OutTimerHandle); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.ShowErrorMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitActionable(); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.InitActionable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProcessDurabilityLoss(int32_t Durability); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.ProcessDurabilityLoss // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryGetFailAnimations(struct TArray<struct FName>& TP_AnimNames, struct TArray<struct FName>& FP_AnimNames); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.TryGetFailAnimations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryGetMissAnimations(struct TArray<struct FName>& TP_AnimNames, struct TArray<struct FName>& FP_AnimNames); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.TryGetMissAnimations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryGetSuccessAnimations(struct FValidHitTypesRowHandle ValidHitType, struct TArray<struct FName>& TP_AnimNames, struct TArray<struct FName>& FP_AnimNames); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.TryGetSuccessAnimations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Select Random Weighted Montage(struct UAnimMontage* AnimMontage, struct TArray<struct FName>& SectionNames, struct FName& ChosenSection); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.Select Random Weighted Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayActionMontage(struct AIcarusPlayerCharacter* AnimTarget, bool PlayRandom, float SpeedModifier, struct TArray<struct FName>& TPAnimSections, struct TArray<struct FName>& FPAnimSections); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.PlayActionMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PerformActionFromMenu(struct AActor* InvokingActor); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.PerformActionFromMenu // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnErrorMessageCooldownComplete(); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.OnErrorMessageCooldownComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

