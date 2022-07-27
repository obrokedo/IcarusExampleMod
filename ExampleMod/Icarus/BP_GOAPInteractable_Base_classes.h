// BlueprintGeneratedClass BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C
// Size: 0x2e8 (Inherited: 0x2b0)
struct ABP_GOAPInteractable_Base_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UBillboardComponent* Billboard; // 0x2b8(0x08)
	struct USphereComponent* Sphere; // 0x2c0(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x2c8(0x08)
	struct UBP_GOAPInteractableComponent_C* BP_GOAPInteractableComponent; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	struct ABP_IcarusNPCGOAPCharacter_C* GOAPCharRef; // 0x2e0(0x08)

	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetCriticalHitBones // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct FAIRelationshipsRowHandle GetRelationshipData(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetRelationshipData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	int32_t GetTargetAlertness(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetTargetAlertness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct FVector GetTargetLocation(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.GetTargetLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	bool IsActorAlive(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.IsActorAlive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	bool IsCriticalHitDisabled(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.IsCriticalHitDisabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	bool IsHidden(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.IsHidden // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void OnInteractionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.OnInteractionComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void CheckDebugEnabled(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.CheckDebugEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_GOAPInteractable_Base(int32_t EntryPoint); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.ExecuteUbergraph_BP_GOAPInteractable_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

