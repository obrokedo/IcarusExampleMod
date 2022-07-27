// BlueprintGeneratedClass BP_TreeBase.BP_TreeBase_C
// Size: 0x851 (Inherited: 0x340)
struct ABP_TreeBase_C : ATreeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UDecayableComponent* Decayable; // 0x348(0x08)
	struct USmoothSync* SmoothSync; // 0x350(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion; // 0x358(0x08)
	struct UAudioContextComponent* AudioContext; // 0x360(0x08)
	struct UBP_HitableBehaviour_Tree_C* BP_HitableBehaviour_Tree; // 0x368(0x08)
	struct UBP_Flammable_FLODActor_Tree_C* Flammable; // 0x370(0x08)
	struct UBP_FLODTreeComponent_C* FLODTreeComponent; // 0x378(0x08)
	struct UDurableComponent* Durable; // 0x380(0x08)
	struct UExperienceComponent* Experience; // 0x388(0x08)
	struct UStaticMeshComponent* ProxyTreeMesh; // 0x390(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x398(0x08)
	struct UBP_TreePrimitive_C* RootTreePrimitive; // 0x3a0(0x08)
	float Timeline_1_FallTime_993C5D0945E276AD384717AE461774C8; // 0x3a8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_993C5D0945E276AD384717AE461774C8; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* Timeline_2; // 0x3b0(0x08)
	float Timeline_0_FallTime_506F6E0448CBBE8B1F14BF952EBE3FD3; // 0x3b8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_506F6E0448CBBE8B1F14BF952EBE3FD3; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3c0(0x08)
	struct UTreePrimitiveComponent* HighestTreePrimitive; // 0x3c8(0x08)
	float HighestVerticalOffset; // 0x3d0(0x04)
	float PhysicsFellValue; // 0x3d4(0x04)
	enum class EDOFMode CurrentConstraintMode; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FMulticastInlineDelegate OnHierarchyTransferredToNewTreeBase; // 0x3e0(0x10)
	struct FMulticastInlineDelegate ServerOnTrunkHit; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnBranchDetached; // 0x400(0x10)
	struct FTreeAudioData AudioData; // 0x410(0x1a8)
	struct FTreeSetupProperties SetupProperties; // 0x5b8(0x130)
	struct TMap<struct UTreePrimitiveComponent*, struct UStaticMeshComponent*> TreePrimitiveDamageMeshesBottom; // 0x6e8(0x50)
	struct TMap<struct UTreePrimitiveComponent*, struct UStaticMeshComponent*> TreePrimitiveDamageMeshesTop; // 0x738(0x50)
	bool HasVolitileCollision; // 0x788(0x01)
	char pad_789[0x3]; // 0x789(0x03)
	float VolitileVelocityThreshold; // 0x78c(0x04)
	struct FVector AverageVelocityTop; // 0x790(0x0c)
	struct FVector AverageVelocityBottom; // 0x79c(0x0c)
	struct FVector PreviousAverageVelocityTop; // 0x7a8(0x0c)
	struct FVector PreviousAverageVelocityBottom; // 0x7b4(0x0c)
	float AverageVelocitySmoothTime; // 0x7c0(0x04)
	float MassRelativeCollisionDamageRatio; // 0x7c4(0x04)
	struct FVector TempHitImpulse; // 0x7c8(0x0c)
	struct FVector TempHitLocation; // 0x7d4(0x0c)
	struct UCurveFloat* CollisionImpulseDamageScalarCurve; // 0x7e0(0x08)
	float InitPhysicsFellValue; // 0x7e8(0x04)
	float CollisionDamageImpulseMassRatioMin; // 0x7ec(0x04)
	float CollisionDamageImpulseMassRatioMax; // 0x7f0(0x04)
	float CollisionDamageCooldownTime; // 0x7f4(0x04)
	float CollisionDamageCooldownValue; // 0x7f8(0x04)
	char pad_7FC[0x4]; // 0x7fc(0x04)
	struct TArray<struct UDecalComponent*> DecalComponents; // 0x800(0x10)
	struct TArray<struct UMaterialInstance*> TreeHitDecal; // 0x810(0x10)
	struct FVector TreeHitDecalSize; // 0x820(0x0c)
	bool IsBeingFelledInstantly; // 0x82c(0x01)
	bool HasGrantedInitialExperience; // 0x82d(0x01)
	char pad_82E[0x2]; // 0x82e(0x02)
	struct FMulticastInlineDelegate OnInstantlyFelled; // 0x830(0x10)
	struct UFMODEvent* FMODEvent_InstaFellOverride_StumpOnly; // 0x840(0x08)
	struct UFMODEvent* FMODEvent_InstaFellOverride_Fallen; // 0x848(0x08)
	bool bHasBeenTrackedAsCutOnce; // 0x850(0x01)

	void CheckIntialExperienceEvent(struct AIcarusPlayerCharacter* Player); // Function BP_TreeBase.BP_TreeBase_C.CheckIntialExperienceEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnAppliedCollisionDamage(float CollisionDamage, struct FHitResult Hit); // Function BP_TreeBase.BP_TreeBase_C.OnAppliedCollisionDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Topple(struct FTreeToppleInfo ToppleInfo); // Function BP_TreeBase.BP_TreeBase_C.Topple // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetVolitileCollision(bool VolitileCollisionState, bool RefreshCollisions); // Function BP_TreeBase.BP_TreeBase_C.SetVolitileCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCollisionDamageCooldown(float DeltaSeconds); // Function BP_TreeBase.BP_TreeBase_C.UpdateCollisionDamageCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_CurrentConstraintMode(); // Function BP_TreeBase.BP_TreeBase_C.OnRep_CurrentConstraintMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FVector GetAverageVelocityAtPoint(struct FHitResult& Hit); // Function BP_TreeBase.BP_TreeBase_C.GetAverageVelocityAtPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAverageVelocityValue(float DeltaSeconds, struct FVector& AverageVelocity, struct FVector& PreviousAverage, struct FVector Location); // Function BP_TreeBase.BP_TreeBase_C.UpdateAverageVelocityValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateVolitileCollisionState(float DeltaSeconds); // Function BP_TreeBase.BP_TreeBase_C.UpdateVolitileCollisionState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetTreePrimitiveAttachPoints(struct UTreePrimitiveComponent* TreePrimitive, struct FTransform& BaseTransform, struct TMap<struct FName, struct FTransform>& AttachmentTransforms); // Function BP_TreeBase.BP_TreeBase_C.GetTreePrimitiveAttachPoints // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTreePrimitiveDamageCap(struct UTreePrimitiveComponent* TreePrimitive, struct UTreePrimitiveComponent* PairedTreePrimitive, float DamageValue); // Function BP_TreeBase.BP_TreeBase_C.UpdateTreePrimitiveDamageCap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTreePrimitiveDamage(struct UTreePrimitiveComponent* TreePrimitive); // Function BP_TreeBase.BP_TreeBase_C.UpdateTreePrimitiveDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateSoftBranchesState(bool RefreshCollision); // Function BP_TreeBase.BP_TreeBase_C.UpdateSoftBranchesState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlaySoundWithDetachContext(struct FVector Location, struct FTreePrimitiveDetachContext DetachContext, struct UFMODEvent* Event); // Function BP_TreeBase.BP_TreeBase_C.PlaySoundWithDetachContext // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckForInstasplitLogic(struct AActor* HitByActor, struct UTreePrimitiveComponent* TreePrimitive); // Function BP_TreeBase.BP_TreeBase_C.CheckForInstasplitLogic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindBestDamageTreePrimitive(struct FVector Location, struct UTreePrimitiveComponent* HitTreePrimitive, struct UTreePrimitiveComponent*& TreePrimitive); // Function BP_TreeBase.BP_TreeBase_C.FindBestDamageTreePrimitive // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RecalculateBuoyancy(); // Function BP_TreeBase.BP_TreeBase_C.RecalculateBuoyancy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTreeFalling(float FallTime, struct FVector FellDirectionXY); // Function BP_TreeBase.BP_TreeBase_C.UpdateTreeFalling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePrimitivesFellData(float FellValue, float FireTemperature); // Function BP_TreeBase.BP_TreeBase_C.UpdatePrimitivesFellData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetFLODReservationState(bool ReservationState); // Function BP_TreeBase.BP_TreeBase_C.SetFLODReservationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnEventBreakableHit_ProxyMesh(struct FVector HitLocation, struct FVector HitNormal, struct UTreePrimitiveComponent*& TreePrimitive); // Function BP_TreeBase.BP_TreeBase_C.OnEventBreakableHit_ProxyMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnEventBreakableHit(struct UPrimitiveComponent* Primitive, struct AActor* Other Actor, struct FVector Hit Location, struct FVector Hit Normal); // Function BP_TreeBase.BP_TreeBase_C.OnEventBreakableHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnTreePrimitiveOverlap_Branch(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TreeBase.BP_TreeBase_C.OnTreePrimitiveOverlap_Branch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void On Tree Primitive Hit Trunk(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherPrimitive, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_TreeBase.BP_TreeBase_C.On Tree Primitive Hit Trunk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugTreePrimitiveMetadata(float Delay, struct UTreePrimitiveComponent* TreePrimitive); // Function BP_TreeBase.BP_TreeBase_C.DebugTreePrimitiveMetadata // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugTreeMetadata(float Delay); // Function BP_TreeBase.BP_TreeBase_C.DebugTreeMetadata // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnTreePrimitiveHit_Branch(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* Other Actor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_TreeBase.BP_TreeBase_C.OnTreePrimitiveHit_Branch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAngularDamping(float DeltaSeconds); // Function BP_TreeBase.BP_TreeBase_C.UpdateAngularDamping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetHighestVerticalOffset(float& HighestVerticalOffset); // Function BP_TreeBase.BP_TreeBase_C.GetHighestVerticalOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CalculateHighestVerticalOffset(); // Function BP_TreeBase.BP_TreeBase_C.CalculateHighestVerticalOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsTreeFalling(bool& IsFalling); // Function BP_TreeBase.BP_TreeBase_C.IsTreeFalling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void IsOriginalTree(bool& IsOriginalTree); // Function BP_TreeBase.BP_TreeBase_C.IsOriginalTree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_TreeBase.BP_TreeBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Timeline_0__FinishedFunc(); // Function BP_TreeBase.BP_TreeBase_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1be0000
	void Timeline_0__UpdateFunc(); // Function BP_TreeBase.BP_TreeBase_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1be0000
	void Timeline_1__FinishedFunc(); // Function BP_TreeBase.BP_TreeBase_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1be0000
	void Timeline_1__UpdateFunc(); // Function BP_TreeBase.BP_TreeBase_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__TerrainAnchor_K2Node_ComponentBoundEvent_0_OnTerrainAchorStateChanged__DelegateSignature(); // Function BP_TreeBase.BP_TreeBase_C.BndEvt__TerrainAnchor_K2Node_ComponentBoundEvent_0_OnTerrainAchorStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void SpawnFallAudioActor(); // Function BP_TreeBase.BP_TreeBase_C.SpawnFallAudioActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayInstantlyFelledSound(int32_t TrunkCount); // Function BP_TreeBase.BP_TreeBase_C.PlayInstantlyFelledSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_TreeBase.BP_TreeBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_TreeBase.BP_TreeBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnConstructedTreePrimitives(); // Function BP_TreeBase.BP_TreeBase_C.OnConstructedTreePrimitives // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnPreConstructedTreePrimitives(); // Function BP_TreeBase.BP_TreeBase_C.OnPreConstructedTreePrimitives // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnDetachTreePrimitive(struct UTreePrimitiveComponent* TreePrimitive, struct FTreePrimitiveDetachContext& DetachContext); // Function BP_TreeBase.BP_TreeBase_C.OnDetachTreePrimitive // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnTransferTreePrimitiveHierarchy(struct UTreePrimitiveComponent* TreePrimitive, struct FTreePrimitiveDetachContext& DetachContext, struct ATreeBase* NewTree); // Function BP_TreeBase.BP_TreeBase_C.OnTransferTreePrimitiveHierarchy // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void StartTreeFalling(struct FVector FellDirectionXY, float InitPhysicsFellValue, float InitFireTemperature); // Function BP_TreeBase.BP_TreeBase_C.StartTreeFalling // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayInitialBreakSounds(); // Function BP_TreeBase.BP_TreeBase_C.PlayInitialBreakSounds // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SkipRemainingTreeFelling(float Delay); // Function BP_TreeBase.BP_TreeBase_C.SkipRemainingTreeFelling // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnUpdateTreePrimitiveRuntimeMaskState(struct TArray<struct UTreePrimitiveComponent*>& RemovedTreePrimitives); // Function BP_TreeBase.BP_TreeBase_C.OnUpdateTreePrimitiveRuntimeMaskState // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // Function BP_TreeBase.BP_TreeBase_C.OnModifiersUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_TreePrimitiveDetached(struct FVector DetachedPrimitiveOffset, enum class ETreePrimitiveType DetachedPrimitiveType, float DetachedPrimitiveMass, struct FTreePrimitiveDetachContext DetachContext, bool ShouldPlaySFX, struct FName DetachPrimitiveName); // Function BP_TreeBase.BP_TreeBase_C.MULTI_TreePrimitiveDetached // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnTrasferredFromOther(struct ABP_TreeBase_C* SourceTree, struct UTreePrimitiveComponent* SourcePrimitive); // Function BP_TreeBase.BP_TreeBase_C.OnTrasferredFromOther // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHitTree(struct UPrimitiveComponent* Primitive, struct AActor* DamageCauser, struct FVector HitLocation, struct FVector HitNormal); // Function BP_TreeBase.BP_TreeBase_C.OnHitTree // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_TreeBase(int32_t EntryPoint); // Function BP_TreeBase.BP_TreeBase_C.ExecuteUbergraph_BP_TreeBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void OnInstantlyFelled__DelegateSignature(); // Function BP_TreeBase.BP_TreeBase_C.OnInstantlyFelled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBranchDetached__DelegateSignature(); // Function BP_TreeBase.BP_TreeBase_C.OnBranchDetached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerOnTrunkHit__DelegateSignature(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherPrimitive, enum class EPhysicalSurface HitSurface, struct FVector HitLocation, float ImpulseValue, float Damage); // Function BP_TreeBase.BP_TreeBase_C.ServerOnTrunkHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHierarchyTransferredToNewTreeBase__DelegateSignature(struct ABP_TreeBase_C* TreeBase); // Function BP_TreeBase.BP_TreeBase_C.OnHierarchyTransferredToNewTreeBase__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

