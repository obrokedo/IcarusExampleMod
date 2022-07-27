// BlueprintGeneratedClass BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C
// Size: 0x308 (Inherited: 0xb8)
struct UBP_PlayerMovementAudioComponent_C : UPlayerMovementAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0xc0(0x08)
	struct FRuntimeFloatCurve DummyCustomCurve; // 0xc8(0x88)
	struct TArray<struct FFBoneAudioSetting> BoneSettings; // 0x150(0x10)
	struct FName BackpackAttachPoint; // 0x160(0x08)
	bool Debug; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<struct FDebugFloatHistory> DebugFloatHistory; // 0x170(0x10)
	struct FVector2D DebugWindowSize; // 0x180(0x08)
	struct TArray<struct FVector> DebugOffsetsFromPlayer; // 0x188(0x10)
	struct TArray<struct FFBoneAudio> BoneAudio; // 0x198(0x10)
	bool BoneAudioEnabled; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x1b0(0x08)
	struct FName FocusedItemAttachPoint; // 0x1b8(0x08)
	struct FName WorldMovementAttachPoint; // 0x1c0(0x08)
	struct UFMODEvent* WorldMovementEvent; // 0x1c8(0x08)
	struct UFMODEvent* EnterWaterEvent; // 0x1d0(0x08)
	struct UFMODEvent* ExitWaterEvent; // 0x1d8(0x08)
	struct UFMODEvent* StartSwimmingEvent; // 0x1e0(0x08)
	struct UFMODEvent* StopSwimmingEvent; // 0x1e8(0x08)
	int32_t ChestSlotIndex; // 0x1f0(0x04)
	int32_t PantsSlotIndex; // 0x1f4(0x04)
	struct USkeletalMeshComponent* FPMesh; // 0x1f8(0x08)
	struct UFMODAudioComponent* WorldMovementComponent; // 0x200(0x08)
	struct UFMODEvent* BackpackFootstepEvent; // 0x208(0x08)
	struct FItemAudioDataRowHandle BackpackRowHandle; // 0x210(0x18)
	struct FItemAudioDataRowHandle UtilityRowHandle; // 0x228(0x18)
	struct UFMODEvent* FocusedItemFootstepEvent; // 0x240(0x08)
	bool PlayerOnGround; // 0x248(0x01)
	bool PlayerSwimming; // 0x249(0x01)
	bool PlayerInWater; // 0x24a(0x01)
	bool InUpdateRange; // 0x24b(0x01)
	int32_t BackpackSlotIndex; // 0x24c(0x04)
	float UpdateDistanceThresholdSquared; // 0x250(0x04)
	bool IsLocalPlayer; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	float MaxWaterDepth; // 0x258(0x04)
	enum class EPlayerFoliageFMODParam CurrentFoliageType; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	float LastEnteredWaterTime; // 0x260(0x04)
	float MinTimeInWaterToPlaySwimSound; // 0x264(0x04)
	float SwimmingChangedCooldownLength; // 0x268(0x04)
	float SwimmingChangedCooldownEndTime; // 0x26c(0x04)
	struct FVector WaterImmersionTraceStartOffset; // 0x270(0x0c)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FArmourSetsEnum ChestArmourType; // 0x280(0x10)
	struct FArmourSetsEnum LegsArmourType; // 0x290(0x10)
	float FoliageTraceRadiusBuffer; // 0x2a0(0x04)
	float FoliageCheckFrequencyLocalPlayer; // 0x2a4(0x04)
	float FoliageCheckFrequencyOtherPlayer; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FTimerHandle ClothCollisionUpdateTimerHandle; // 0x2b0(0x08)
	float HighestClothHit; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UFMODAudioComponent* ClothHitAudioComponent; // 0x2c0(0x08)
	struct UFMODEvent* ClothCollisionFMODEvent; // 0x2c8(0x08)
	struct FVector2D ClothHitRange; // 0x2d0(0x08)
	float ClothCollisionUpdateFrequency; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UFMODEvent* LadderFootFMODEvent; // 0x2e0(0x08)
	struct UFMODEvent* LadderHandFMODEvent; // 0x2e8(0x08)
	float LastLadderPosition; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UBP_LadderClimbAudioDataBase_C* LadderNotifyData; // 0x2f8(0x08)
	struct FName FocusedItemFootstepAnimSoundName; // 0x300(0x08)

	void OnFocusedItemUpdated(struct AIcarusItem* FocusedItem); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnFocusedItemUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryPlayFocusedItemFootstep(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.TryPlayFocusedItemFootstep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryPlayBackpackFootstep(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.TryPlayBackpackFootstep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateBackpackAudio(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.UpdateBackpackAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BackpackItemChanged(struct FItemsStaticRowHandle Item); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.BackpackItemChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UtilityItemChanged(struct FItemsStaticRowHandle Item); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.UtilityItemChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldLadderNotifyPlay(struct FFLadderClimbAnimNotifyData NotifyData, float position, float LastPosition, bool IsReversePlay, bool& ShouldPlay); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ShouldLadderNotifyPlay // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSocketForAppendage(enum class EAudioPlayerAppendageType Appendage, struct FName& SocketName); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.GetSocketForAppendage // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void TraceForLadder(struct USkeletalMeshComponent* Mesh, enum class EAudioPlayerAppendageType Appendage, bool& LadderFound, enum class EPhysicalSurface& Surface); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.TraceForLadder // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayLadderClimbNotify(struct FFLadderClimbAnimNotifyData Data); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.PlayLadderClimbNotify // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckForFakeAnimNotifies(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.CheckForFakeAnimNotifies // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayerIsMoving(bool& IsMoving); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.PlayerIsMoving // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetClothHitComponentPlayState(bool ShouldPlay); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.SetClothHitComponentPlayState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetUnderwater(bool Underwater); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.SetUnderwater // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetFoliageEnumFromTagContainer(struct FGameplayTagContainer TagContainer, enum class EPlayerFoliageFMODParam& FoliageType); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.GetFoliageEnumFromTagContainer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateGroundState(bool& GroundStateChanged); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.UpdateGroundState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SwimmingChanged(bool Swimming); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.SwimmingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TraceForWaterImmersion(bool& InWater, float& Immersion); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.TraceForWaterImmersion // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TraceForFoliage(enum class EPlayerFoliageFMODParam& FoliageType); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.TraceForFoliage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_UtilityRowHandle(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnRep_UtilityRowHandle // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_BackpackRowHandle(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnRep_BackpackRowHandle // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_LegsArmourType(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnRep_LegsArmourType // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ChestArmourType(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnRep_ChestArmourType // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnFootstep(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnFootstep // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EquipmentUpdated(struct UInventory* Inventory, int32_t Location); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.EquipmentUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DistanceCheck(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.DistanceCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FoliageCheck(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.FoliageCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UnderwaterChanged(bool Underwater); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.UnderwaterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PerspectiveChanged(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.PerspectiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerDeath(struct UActorState* ActorState); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnPlayerDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClothCollision(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnClothCollision // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateClothCollision(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.UpdateClothCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_PlayerMovementAudioComponent(int32_t EntryPoint); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ExecuteUbergraph_BP_PlayerMovementAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

