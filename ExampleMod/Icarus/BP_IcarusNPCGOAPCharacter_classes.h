// BlueprintGeneratedClass BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C
// Size: 0x958 (Inherited: 0x7e0)
struct ABP_IcarusNPCGOAPCharacter_C : AIcarusNPCGOAPCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UIcarusMapIconComponent* IcarusMapIcon; // 0x7e8(0x08)
	struct USphereComponent* HeadBlocker; // 0x7f0(0x08)
	struct UBP_UIProjectionComponent_AIAlert_C* BP_UIProjectionComponent_AI; // 0x7f8(0x08)
	struct UCapsuleComponent* ClothAffector; // 0x800(0x08)
	struct UHighlightableComponent* Highlightable; // 0x808(0x08)
	struct UAudioContextCreatureComponent* AudioContext; // 0x810(0x08)
	struct UAudioOcclusionCharacterComponent* AudioOcclusionCharacter; // 0x818(0x08)
	struct UBP_Flammable_Actor_C* Flammable; // 0x820(0x08)
	struct UAIVocalisationComponent* AIVocalisation; // 0x828(0x08)
	struct UBP_GroundSurfaceChecker_C* SurfaceChecker; // 0x830(0x08)
	struct UBP_CreatureAudioComponent_C* CreatureAudio; // 0x838(0x08)
	struct UExperienceComponent* Experience; // 0x840(0x08)
	struct UBP_SwimmingComponent_C* BP_SwimmingComponent; // 0x848(0x08)
	struct USplineComponent* PredictionSpline; // 0x850(0x08)
	struct UBoxComponent* PredictionBox; // 0x858(0x08)
	struct USceneComponent* Scene; // 0x860(0x08)
	struct UWidgetComponent* GOAP_Debugger; // 0x868(0x08)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> DeathAnimations; // 0x870(0x10)
	struct AController* CachedController; // 0x880(0x08)
	struct AActor* CurrentTarget_1; // 0x888(0x08)
	struct FTimerHandle ReplicateVarsTimer; // 0x890(0x08)
	bool DebugWidgetSetup; // 0x898(0x01)
	char pad_899[0x7]; // 0x899(0x07)
	struct TArray<struct FVector> CurrentPath; // 0x8a0(0x10)
	struct FVector MeshLocation; // 0x8b0(0x0c)
	struct FRotator MeshRotation; // 0x8bc(0x0c)
	float CurrentRagdollWeight; // 0x8c8(0x04)
	float RagdollBlendSpeed; // 0x8cc(0x04)
	struct FVector DeathVelocity; // 0x8d0(0x0c)
	char pad_8DC[0x4]; // 0x8dc(0x04)
	struct FMulticastInlineDelegate RagdollSettled; // 0x8e0(0x10)
	struct FMulticastInlineDelegate CheckAIDistance; // 0x8f0(0x10)
	enum class EStealthAttackType WasStealthDamage; // 0x900(0x01)
	char pad_901[0x7]; // 0x901(0x07)
	struct FMulticastInlineDelegate OnActionNotify; // 0x908(0x10)
	struct FVector SpawnLocation; // 0x918(0x0c)
	enum class EAIAudioState CurrentAudioState; // 0x924(0x01)
	char pad_925[0x3]; // 0x925(0x03)
	struct FMulticastInlineDelegate RagdollCollision; // 0x928(0x10)
	struct FTimerHandle TalentHighlightUpdateTick; // 0x938(0x08)
	float LastJumpTime; // 0x940(0x04)
	char pad_944[0x4]; // 0x944(0x04)
	struct FTimerHandle RetryJumpTimer; // 0x948(0x08)
	enum class EStealthAttackType LastHitStealthState; // 0x950(0x01)
	bool ShouldDestroyIfStuckOnSpawn; // 0x951(0x01)
	char pad_952[0x2]; // 0x952(0x02)
	float ReplicatedBlackboardVarsUpdateTime; // 0x954(0x04)

	bool CanKillcam(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.CanKillcam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GatherIntersections(struct AActor* Projectile, bool Debug, bool& Return, struct TArray<struct FFCHCollisionStruct>& Intersections); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GatherIntersections // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCHBounds(bool& Return, struct UBoxComponent*& Box); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetCHBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PredictMovement(float Time, bool& Return); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.PredictMovement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetPrediction(bool& Return); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ResetPrediction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetTargetHealth(bool& Return, float& Health); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetTargetHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReattachProjectilesToCorpse(struct AActor* CorpseActor); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReattachProjectilesToCorpse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideFromShelterCapture(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.HideFromShelterCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetMontageForAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCharacterBuoyancy(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateCharacterBuoyancy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetNextAttackMontageSection // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActionMontageNotify(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnActionMontageNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool UpdateMovementState(enum class EMovementState NewState); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateMovementState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCharacterSlidingUpdated(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCharacterSlidingUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool TryJumpOverObstacle(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.TryJumpOverObstacle // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTalentHighlight(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateTalentHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_CurrentAudioState(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnRep_CurrentAudioState // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAudioState(enum class EAIAudioState NewState); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateAudioState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Get Stance Transition Montage(enum class EGOAPCharacterStance NewStance, struct UAnimMontage*& OutMontage); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.Get Stance Transition Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnStatContainerUpdated(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnStatContainerUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetAlertWidgetLocation(struct FVector& Location); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetAlertWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetTargetAlertness(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetTargetAlertness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void CheckNearbyPlayers(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.CheckNearbyPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GatherIntersectionss(struct AActor* Actor, struct TArray<struct FFCHCollisionStruct>& HitIntersections); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GatherIntersectionss // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateRagdollBlend(float DeltaTime, float InterpSpeed); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateRagdollBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetRagdollEnabled(bool Enabled); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.SetRagdollEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnGOAPActionSet(struct UIcarusGOAPAction* Action); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnGOAPActionSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AIPredictionUpdate(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.AIPredictionUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReplicateBlackboardVariables(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReplicateBlackboardVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyEnd_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyBegin_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnInterrupted_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnBlendOut_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCompleted_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_3553718246F29B8ED504B3939080E771(struct UObject* Loaded); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnLoaded_3553718246F29B8ED504B3939080E771 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyEnd_2C05199F475BC59402F98AA760E297CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyBegin_2C05199F475BC59402F98AA760E297CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnInterrupted_2C05199F475BC59402F98AA760E297CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnBlendOut_2C05199F475BC59402F98AA760E297CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_2C05199F475BC59402F98AA760E297CB(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCompleted_2C05199F475BC59402F98AA760E297CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyEnd_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyBegin_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnInterrupted_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnBlendOut_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCompleted_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_46D0D8B742825800C0F3B8B239D00770(struct UObject* Loaded); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnLoaded_46D0D8B742825800C0F3B8B239D00770 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_A0E450DD46F0C70ADE8CBDA3482F0581(struct UObject* Loaded); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnLoaded_A0E450DD46F0C70ADE8CBDA3482F0581 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_MontageJumpToSection(struct FName Section, struct UAnimMontage* Montage); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_MontageJumpToSection // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_StopMontage(struct UAnimMontage* Montage, float InBlendOutTime); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_StopMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCharacterStanceUpdated(enum class EGOAPCharacterStance PreviousStance, enum class EGOAPCharacterStance NewStance); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCharacterStanceUpdated // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayGOAPActionMontage(struct FGOAPActionsRowHandle Action, struct FName Section, bool ClientsOnly); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_PlayGOAPActionMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceivePossessed(struct AController* NewController); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnActorDeath(struct UActorState* ActorStateIn); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnActorDeath // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Multicast_ActorDeath(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.Multicast_ActorDeath // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRagdollSettled(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnRagdollSettled // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayMontage(struct TSoftObjectPtr<UAnimMontage> Montage, struct FName Section, bool ClientsOnly); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_PlayMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void MULTI_OnHurt(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_OnHurt // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayVocalisation(enum class EAIVocalisationType VocalisationType); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_PlayVocalisation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnDamaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnJumped(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnLanded(struct FHitResult& Hit); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void SpawnHitEffects(struct FTransform SpawnTransform, enum class EPhysicalSurface HitSurface, struct AActor* HitActor); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.SpawnHitEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateVisibilityBasedAnimTickOption(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateVisibilityBasedAnimTickOption // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusNPCGOAPCharacter(int32_t EntryPoint); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ExecuteUbergraph_BP_IcarusNPCGOAPCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void RagdollCollision__DelegateSignature(struct FHitResult Hit); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.RagdollCollision__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActionNotify__DelegateSignature(struct UAnimMontage* Montage, struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnActionNotify__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckAIDistance__DelegateSignature(struct ABP_IcarusNPCGOAPCharacter_C* AI); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.CheckAIDistance__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RagdollSettled__DelegateSignature(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.RagdollSettled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

