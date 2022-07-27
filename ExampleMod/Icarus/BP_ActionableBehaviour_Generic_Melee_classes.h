// BlueprintGeneratedClass BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C
// Size: 0x398 (Inherited: 0x308)
struct UBP_ActionableBehaviour_Generic_Melee_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UCapsuleComponent* HitCollider; // 0x310(0x08)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x318(0x08)
	bool ActionCooldownActive; // 0x320(0x01)
	bool IsHitReacting; // 0x321(0x01)
	bool DebugDraw; // 0x322(0x01)
	bool IsSweepingCollision; // 0x323(0x01)
	struct FVector LastColliderLocation; // 0x324(0x0c)
	struct FToolDamage ToolDamage; // 0x330(0x38)
	bool ShouldSweepCollision; // 0x368(0x01)
	enum class ETraceTypeQuery CollisionTraceChannel; // 0x369(0x01)
	bool ShouldReverseAnimOnHit; // 0x36a(0x01)
	char pad_36B[0x1]; // 0x36b(0x01)
	float ScreenshakeScale; // 0x36c(0x04)
	bool DebugForceOwnership; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FRandomStream RandomStream_1; // 0x374(0x08)
	float HitTraceDistance; // 0x37c(0x04)
	struct TArray<struct UObject*> StoredMontages; // 0x380(0x10)
	struct UFMODEvent* FMODEvent_InsufficientStamina; // 0x390(0x08)

	enum class EViewTraceResultPriority GetHitResultPriorityLow(struct FViewTraceResult& Result); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetHitResultPriorityLow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckRepairIfBreak(struct AIcarusItem* ItemInstance, int32_t DurabilityLossFromHit, bool& AutoRepaired); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.CheckRepairIfBreak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayMeleeSwing(struct AIcarusPlayerCharacter* TargetPlayer); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayMeleeSwing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayActionInsufficientStaminaSound(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayActionInsufficientStaminaSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayActionItemBrokenSound(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayActionItemBrokenSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetStatAdjustedDurability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	enum class EViewTraceResultPriority GetHitResultPriority(struct FViewTraceResult& Result); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetHitResultPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetHitFromViewTraces(struct FHitResult& OutHit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetHitFromViewTraces // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SelectRandomWeightedMontage_1(struct TArray<struct FName>& Sections, struct UAnimMontage* Montage, struct FName& ChosenSection); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.SelectRandomWeightedMontage_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayHitSound(bool HitSuccessful, struct FVector HitLocation, enum class EPhysicalSurface SurfaceHit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayHitSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayScreenshake(float Scale, bool Hit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayScreenshake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct USkeletalMeshComponent* GetAnimatingMesh(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetAnimatingMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HitCollision(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.HitCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InvokeHit(struct FHitResult Hit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.InvokeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SweepCollision(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.SweepCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionHitEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetSweepingEnabled(bool Enabled); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.SetSweepingEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_2B8B2B624CE5F97DAE6892B73345A5DB(struct UObject* Loaded); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnLoaded_2B8B2B624CE5F97DAE6892B73345A5DB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ActionTimeout(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ActionTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void DoSwing(enum class EActionableEventType ActionType); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.DoSwing // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActionInsufficientStamina(enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionInsufficientStamina // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void StopRepeating(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.StopRepeating // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionInsufficientDurability // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Melee(int32_t EntryPoint); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ExecuteUbergraph_BP_ActionableBehaviour_Generic_Melee // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

