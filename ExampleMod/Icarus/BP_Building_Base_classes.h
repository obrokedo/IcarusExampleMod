// BlueprintGeneratedClass BP_Building_Base.BP_Building_Base_C
// Size: 0xa1a (Inherited: 0x420)
struct ABP_Building_Base_C : ABuildingBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UShelteredModifierComponent* ShelteredModifier; // 0x428(0x08)
	struct UAudioContextComponent* AudioContext; // 0x430(0x08)
	struct USceneComponent* SecondOutsideTestLocation; // 0x438(0x08)
	struct UDestructibleComponent* Stripped_DestructibleMesh; // 0x440(0x08)
	struct UDestructibleComponent* Main_DestructibleMesh; // 0x448(0x08)
	struct UStaticMeshComponent* Stripped_BuildingMesh; // 0x450(0x08)
	struct UStaticMeshComponent* Main_BuildingShadowMesh; // 0x458(0x08)
	struct URadialForceComponent* RadialForce; // 0x460(0x08)
	struct USceneComponent* FireEffects; // 0x468(0x08)
	struct UArrowComponent* PlacementArrow; // 0x470(0x08)
	struct USceneComponent* PlacementHelpers; // 0x478(0x08)
	struct UStaticMeshComponent* FoilageCuller; // 0x480(0x08)
	struct UArrowComponent* Arrow3; // 0x488(0x08)
	struct UArrowComponent* Arrow2; // 0x490(0x08)
	struct UArrowComponent* Arrow1; // 0x498(0x08)
	struct UTextRenderComponent* rotdebug; // 0x4a0(0x08)
	struct UArrowComponent* DebugArrows; // 0x4a8(0x08)
	struct UTextRenderComponent* Debug; // 0x4b0(0x08)
	struct UStaticMeshComponent* Main_BuildingMesh; // 0x4b8(0x08)
	struct UBoxComponent* Box11; // 0x4c0(0x08)
	struct UBoxComponent* Box01; // 0x4c8(0x08)
	struct UBoxComponent* Box10; // 0x4d0(0x08)
	struct UBoxComponent* Box00; // 0x4d8(0x08)
	struct USceneComponent* CollisionTesting; // 0x4e0(0x08)
	struct USceneComponent* Center; // 0x4e8(0x08)
	struct TArray<struct FVectorPair> BlockingLinesArray; // 0x4f0(0x10)
	float GridSize; // 0x500(0x04)
	struct FVector GridLocation; // 0x504(0x0c)
	struct ABP_Grid_Base_C* ParentGrid; // 0x510(0x08)
	float Health; // 0x518(0x04)
	float AnchoredStability; // 0x51c(0x04)
	bool Dirtied; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct TArray<struct ABP_Building_Base_C*> CheckedBuildingsCache; // 0x528(0x10)
	struct UMaterialInterface* debugMatCache; // 0x538(0x08)
	struct UStaticMeshComponent* MeshCache; // 0x540(0x08)
	bool debugging; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct TMap<struct ABP_Building_Base_C*, float> HardStabilityMap; // 0x550(0x50)
	float SoftStability; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct FTimerHandle CrackTimer; // 0x5a8(0x08)
	float CrackUpdateTime; // 0x5b0(0x04)
	struct FVectorSpringState ShakeSpring; // 0x5b4(0x18)
	struct FVector ShakeTarget; // 0x5cc(0x0c)
	float LastHardStabilityCheck; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct ABP_Building_Base_C*> CachedAffectedBuildings; // 0x5e0(0x10)
	bool MagicAnchor; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct FTimerHandle CollapseTimer; // 0x5f8(0x08)
	struct FRotator GridSpaceRotation; // 0x600(0x0c)
	struct FVector GridSpaceCenterLocation; // 0x60c(0x0c)
	bool CachedRotateCentersUpToHitNormal; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct TArray<struct ABP_Building_Base_C*> RemoteAnchorStabilityBuilding; // 0x620(0x10)
	struct FVector MeshStartingRelitiveLocation; // 0x630(0x0c)
	bool BlockLikePlacement; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	float StraightTracePlacementRange; // 0x640(0x04)
	float ForwardThenDownTraceRange; // 0x644(0x04)
	struct UMaterialInstanceDynamic* DynamicCrackMatInst; // 0x648(0x08)
	struct UCurveFloat* CrackAmountCurve; // 0x650(0x08)
	struct FTimerHandle VeryUnstableEffectsTime; // 0x658(0x08)
	struct UDestructibleMesh* DestructibleMesh; // 0x660(0x08)
	struct FString debugAnchorStabs; // 0x668(0x10)
	float LastPushAnchorStability; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct FTimerHandle DirtyTickTimer; // 0x680(0x08)
	struct UCurveFloat* DestructibleOcclusionCurve; // 0x688(0x08)
	bool TempStability; // 0x690(0x01)
	char pad_691[0x3]; // 0x691(0x03)
	float DebugUnclampedHardStability; // 0x694(0x04)
	bool Destroyed; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)
	struct TArray<struct UBP_Weight_C*> Weights; // 0x6a0(0x10)
	float DesiredCrackLevel; // 0x6b0(0x04)
	float CurrentCrackLevel; // 0x6b4(0x04)
	struct UMaterialInterface* DefaultSlot0Material; // 0x6b8(0x08)
	struct TArray<struct UMaterialInterface*> DefaultMainMeshMaterials; // 0x6c0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> InstancedMainMeshMaterials; // 0x6d0(0x10)
	float HitProcessingRadiusThreshold; // 0x6e0(0x04)
	bool ClientsideGhost; // 0x6e4(0x01)
	bool ShowPlacementHelpers; // 0x6e5(0x01)
	char pad_6E6[0x2]; // 0x6e6(0x02)
	struct FFMODEventInstance StressDamageAudioEventInstance; // 0x6e8(0x08)
	bool StabilityAudioEnabled; // 0x6f0(0x01)
	char pad_6F1[0x3]; // 0x6f1(0x03)
	struct FVector BuildingGridFootprint; // 0x6f4(0x0c)
	bool ClampHitNormalToUpOrDown; // 0x700(0x01)
	char pad_701[0x3]; // 0x701(0x03)
	struct FRotator CachedCenterWorldRotation; // 0x704(0x0c)
	bool OnFire; // 0x710(0x01)
	bool GhostBlockedPlacement; // 0x711(0x01)
	char pad_712[0x2]; // 0x712(0x02)
	float GhostActorViewDistance; // 0x714(0x04)
	struct FVector OutsideTestPushoutAmount; // 0x718(0x0c)
	bool ReceivingWindDamage; // 0x724(0x01)
	char pad_725[0x3]; // 0x725(0x03)
	struct FTimerHandle WindDamageTimer; // 0x728(0x08)
	struct FTimerHandle WindParticleSystemSlowTimer; // 0x730(0x08)
	float BaseDamageFromWind; // 0x738(0x04)
	char pad_73C[0x4]; // 0x73c(0x04)
	struct TArray<struct FDestructionPoints> DestructibleDamagedPoints; // 0x740(0x10)
	int32_t WindDamageProcessedIndex; // 0x750(0x04)
	bool FullyStripped; // 0x754(0x01)
	char pad_755[0x3]; // 0x755(0x03)
	struct UDestructibleMesh* StrippedDestructibleMesh; // 0x758(0x08)
	struct UStaticMesh* StrippedStaticMesh; // 0x760(0x08)
	float CollisionDamageImpulseScalar; // 0x768(0x04)
	bool Stripping; // 0x76c(0x01)
	char pad_76D[0x3]; // 0x76d(0x03)
	struct FBuildableAudioData AudioData; // 0x770(0x188)
	struct FFMODEventInstance WindDamageAudioEventInstance; // 0x8f8(0x08)
	struct FVector2D DamageSoundCooldownRange; // 0x900(0x08)
	struct FVector2D DestructibleDamageSoundCooldownRange; // 0x908(0x08)
	float DamageSoundCooldownEndTime; // 0x910(0x04)
	float DestructibleDamageSoundCooldownEndTime; // 0x914(0x04)
	struct UStaticMesh* Main_BuildingStaticMesh; // 0x918(0x08)
	bool ShouldOptionallyRotateCenterUptoInpactNormal; // 0x920(0x01)
	char pad_921[0x3]; // 0x921(0x03)
	struct FVector NewGridPlacementOffset; // 0x924(0x0c)
	struct UStaticMesh* Main_BuildingShadowGeoMesh; // 0x930(0x08)
	struct UBP_WeatherAudioComponent_BuildingWindDamage_C* WindDamageWeatherAudio; // 0x938(0x08)
	struct UNavArea* BuildingNavAreaClass; // 0x940(0x08)
	bool SupportedByGround; // 0x948(0x01)
	bool FirstStabilityCalced; // 0x949(0x01)
	char pad_94A[0x2]; // 0x94a(0x02)
	int32_t SoftHeightLimit; // 0x94c(0x04)
	int32_t DistanceToGround; // 0x950(0x04)
	char pad_954[0x4]; // 0x954(0x04)
	struct TArray<struct FWeightTransferRelationship> DirectWeightRelationships; // 0x958(0x10)
	struct TArray<struct FWeightTransferRelationship> IndirectWeightDistributed; // 0x968(0x10)
	struct TArray<struct FWeightTransferRelationship> IndirectWeightReceived; // 0x978(0x10)
	struct FTimerHandle WeightUnstableTimer; // 0x988(0x08)
	struct FTimerHandle WeightUnstableActiveDestruction; // 0x990(0x08)
	float CrackSizeDivisor; // 0x998(0x04)
	enum class EBuildingOpenableState OpenableState; // 0x99c(0x01)
	char pad_99D[0x3]; // 0x99d(0x03)
	struct FMulticastInlineDelegate OpenableStateChanged; // 0x9a0(0x10)
	bool ManualWindDamagePeriod; // 0x9b0(0x01)
	char pad_9B1[0x3]; // 0x9b1(0x03)
	float CurrentWindDamageTimerTime; // 0x9b4(0x04)
	struct UCurveFloat* StormToBuildingInteractionCurve; // 0x9b8(0x08)
	float BaseWindDamagePointRadius; // 0x9c0(0x04)
	float BaseWindDamagePointImpusle; // 0x9c4(0x04)
	bool RecentlyRepaired; // 0x9c8(0x01)
	bool IsAsyncResettingDM; // 0x9c9(0x01)
	char pad_9CA[0x6]; // 0x9ca(0x06)
	struct UCurveFloat* HealthToDestructionPointCount; // 0x9d0(0x08)
	struct UCurveFloat* HealthToDestructionImpulseStrength; // 0x9d8(0x08)
	int32_t EffectiveDestructionPointCount; // 0x9e0(0x04)
	bool UseDMmaterialMap; // 0x9e4(0x01)
	char pad_9E5[0x3]; // 0x9e5(0x03)
	struct TArray<int32_t> DestructibleMaterialSlotsMappedToMainMesh; // 0x9e8(0x10)
	struct UFMODEvent* FMODEvent_SnowCleared; // 0x9f8(0x08)
	bool ReceivingUnzip; // 0xa00(0x01)
	char pad_A01[0x7]; // 0xa01(0x07)
	struct FTimerHandle DelayedDirtyTimer; // 0xa08(0x08)
	int32_t FromDatabaseHealthPercentage; // 0xa10(0x04)
	float SnowConstant; // 0xa14(0x04)
	bool HasAreaLoadedOnce; // 0xa18(0x01)
	bool IsInCave; // 0xa19(0x01)

	float GetOcclusionValue(); // Function BP_Building_Base.BP_Building_Base_C.GetOcclusionValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void SetIsInCave(bool InCave); // Function BP_Building_Base.BP_Building_Base_C.SetIsInCave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TraceForCave(); // Function BP_Building_Base.BP_Building_Base_C.TraceForCave // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsBuildingDestroyed(); // Function BP_Building_Base.BP_Building_Base_C.IsBuildingDestroyed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct ABuildingGridBase* GetParentGrid(); // Function BP_Building_Base.BP_Building_Base_C.GetParentGrid // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct USceneComponent* GetCenterComponent(); // Function BP_Building_Base.BP_Building_Base_C.GetCenterComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void DoBuildingOutsideCheckTrace(struct FVector StartPosition, bool& TraceHit); // Function BP_Building_Base.BP_Building_Base_C.DoBuildingOutsideCheckTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsBuildingOutside(); // Function BP_Building_Base.BP_Building_Base_C.IsBuildingOutside // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetHealthByPercentage(int32_t Percentage); // Function BP_Building_Base.BP_Building_Base_C.SetHealthByPercentage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetVariation(bool& IsValid, struct FBuildingVariation& VariationData, int32_t& VariationIndex); // Function BP_Building_Base.BP_Building_Base_C.GetVariation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetUnzipAudioActive(bool Active); // Function BP_Building_Base.BP_Building_Base_C.SetUnzipAudioActive // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ReceivingUnzip(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_ReceivingUnzip // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlaySnowClearedSound(); // Function BP_Building_Base.BP_Building_Base_C.PlaySnowClearedSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetStabilityData(struct FBuildingStability& BuildingStability); // Function BP_Building_Base.BP_Building_Base_C.GetStabilityData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void IsOnFire(bool& Result); // Function BP_Building_Base.BP_Building_Base_C.IsOnFire // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void AttemptToResetMaterialsOnDestructibleMesh(); // Function BP_Building_Base.BP_Building_Base_C.AttemptToResetMaterialsOnDestructibleMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AttemptToApplyDynamicMaterialsOnDestructibleMesh(); // Function BP_Building_Base.BP_Building_Base_C.AttemptToApplyDynamicMaterialsOnDestructibleMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HealthToDestruction(); // Function BP_Building_Base.BP_Building_Base_C.HealthToDestruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ApplyShadowSettings(); // Function BP_Building_Base.BP_Building_Base_C.ApplyShadowSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransitionToMainDestructibleMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionToMainDestructibleMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransitionToStrippedMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionToStrippedMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransitionToMainMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionToMainMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CalculateBaseWindDamagePeriod(float& DamagePeriod); // Function BP_Building_Base.BP_Building_Base_C.CalculateBaseWindDamagePeriod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float CalculateEffectiveWindDamagePeriod(); // Function BP_Building_Base.BP_Building_Base_C.CalculateEffectiveWindDamagePeriod // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CheckWindDamagePacing(bool& NewPacing); // Function BP_Building_Base.BP_Building_Base_C.CheckWindDamagePacing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCurrentWeatherAction(struct UIcarusWeatherAction*& CurrentWeatherAction); // Function BP_Building_Base.BP_Building_Base_C.GetCurrentWeatherAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WindDamageGeneration(); // Function BP_Building_Base.BP_Building_Base_C.WindDamageGeneration // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsLandscapeLoaded(); // Function BP_Building_Base.BP_Building_Base_C.IsLandscapeLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetOpenableState(enum class EBuildingOpenableState NewState); // Function BP_Building_Base.BP_Building_Base_C.SetOpenableState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CleanupWeightTimers(); // Function BP_Building_Base.BP_Building_Base_C.CleanupWeightTimers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CleanupIndirectWeight(); // Function BP_Building_Base.BP_Building_Base_C.CleanupIndirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float DirtyTickBackOffTime(); // Function BP_Building_Base.BP_Building_Base_C.DirtyTickBackOffTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RedistributeDirectWeight(); // Function BP_Building_Base.BP_Building_Base_C.RedistributeDirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveDirectWeight(struct UShapeComponent* Shape, struct UBP_Weight_C* Weight); // Function BP_Building_Base.BP_Building_Base_C.RemoveDirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveDirectWeight(struct UShapeComponent* Shape, struct UBP_Weight_C* Weight, bool SpreadToNeighbors); // Function BP_Building_Base.BP_Building_Base_C.ReceiveDirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BuildingStabilityColorCalc(struct FLinearColor& StabilityColor); // Function BP_Building_Base.BP_Building_Base_C.BuildingStabilityColorCalc // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RemoveWindDamageWeatherAudioComponent(); // Function BP_Building_Base.BP_Building_Base_C.RemoveWindDamageWeatherAudioComponent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddWindDamageWeatherAudioComponent(); // Function BP_Building_Base.BP_Building_Base_C.AddWindDamageWeatherAudioComponent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayRepairedSound(); // Function BP_Building_Base.BP_Building_Base_C.PlayRepairedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFullyStrippedSound(); // Function BP_Building_Base.BP_Building_Base_C.PlayFullyStrippedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryPlayDamageSound(int32_t DamageAmount, struct FDamageEvent DamageEvent, struct AActor* DamageCauser); // Function BP_Building_Base.BP_Building_Base_C.TryPlayDamageSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryPlayDestructibleDamageSound(struct FVector Location, float Impulse); // Function BP_Building_Base.BP_Building_Base_C.TryPlayDestructibleDamageSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayBuildingPlacedSound(struct AIcarusPlayerCharacter* Instigator); // Function BP_Building_Base.BP_Building_Base_C.PlayBuildingPlacedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopAllAudio(); // Function BP_Building_Base.BP_Building_Base_C.StopAllAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopWindDamageAudio(); // Function BP_Building_Base.BP_Building_Base_C.StopWindDamageAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartWindDamageAudio(); // Function BP_Building_Base.BP_Building_Base_C.StartWindDamageAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateStabilityAudioVeryUnstable(float TimerLength); // Function BP_Building_Base.BP_Building_Base_C.UpdateStabilityAudioVeryUnstable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayDestructionAudio(float SnowAmount); // Function BP_Building_Base.BP_Building_Base_C.PlayDestructionAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateStabilityAudio(bool IsVeryUnstable); // Function BP_Building_Base.BP_Building_Base_C.UpdateStabilityAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetStabilityAudio(); // Function BP_Building_Base.BP_Building_Base_C.ResetStabilityAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_Stripping(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_Stripping // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_FullyStripped(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_FullyStripped // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerRepair(); // Function BP_Building_Base.BP_Building_Base_C.ServerRepair // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryEnterStrippableState(); // Function BP_Building_Base.BP_Building_Base_C.TryEnterStrippableState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerFullyStripBuilding(); // Function BP_Building_Base.BP_Building_Base_C.ServerFullyStripBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_DestructibleDamagedPoints(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_DestructibleDamagedPoints // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProcessWindDamageArray(); // Function BP_Building_Base.BP_Building_Base_C.ProcessWindDamageArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ReceivingWindDamage(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_ReceivingWindDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConsiderHidingGhostActor(); // Function BP_Building_Base.BP_Building_Base_C.ConsiderHidingGhostActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_GhostBlockedPlacement(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_GhostBlockedPlacement // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Clamp Hit Normal To Centers Main Directions(struct FVector WorldSpaceVector, struct FVector& RoundedWorldSpaceVector); // Function BP_Building_Base.BP_Building_Base_C.Clamp Hit Normal To Centers Main Directions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Clamp Hit Normal to Center Up or Down(struct FVector Normal, struct FVector& Clamped Normal); // Function BP_Building_Base.BP_Building_Base_C.Clamp Hit Normal to Center Up or Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ApplyDotsToFootprint(struct FVector Dots, struct FVector& SelectedRelativeFootprint); // Function BP_Building_Base.BP_Building_Base_C.ApplyDotsToFootprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ClientsideGhost(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_ClientsideGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ShowPlacementHelpers(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_ShowPlacementHelpers // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientAndServer Outline(); // Function BP_Building_Base.BP_Building_Base_C.ClientAndServer Outline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BlockLikePlacementTranslation(struct FTransform GridSpaceLocWithoutRot, struct FRotator GridSpaceRot, struct FTransform& ShiftedTransformwithRot); // Function BP_Building_Base.BP_Building_Base_C.BlockLikePlacementTranslation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveInvalidHardStabilityRefs(); // Function BP_Building_Base.BP_Building_Base_C.RemoveInvalidHardStabilityRefs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	enum class RotationalDirections CompareRotations(struct FRotator Compare, struct FRotator CompareAgainst, struct FVector& Dots); // Function BP_Building_Base.BP_Building_Base_C.CompareRotations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RepushAllInRangeAnchors(bool& FoundAnAnchor); // Function BP_Building_Base.BP_Building_Base_C.RepushAllInRangeAnchors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OptionallyRotateCenterUpToInpactNormal(struct FVector HitNormal, struct FRotator& CenterWorldRotation, struct FRotator& ZRotatedDifference, bool& ImpactWasAlreadyRotated); // Function BP_Building_Base.BP_Building_Base_C.OptionallyRotateCenterUpToInpactNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void DoesBuildingArrayContainBuildingArray(struct TArray<struct ABP_Building_Base_C*>& ContainingArray, struct TArray<struct ABP_Building_Base_C*>& InnerArray, bool& ContainedInnerArray); // Function BP_Building_Base.BP_Building_Base_C.DoesBuildingArrayContainBuildingArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void AppendUniqueBuildingArray(struct TArray<struct ABP_Building_Base_C*>& Array 1, struct TArray<struct ABP_Building_Base_C*>& Array 2, struct TArray<struct ABP_Building_Base_C*>& Array1UniquelyAddedTo2); // Function BP_Building_Base.BP_Building_Base_C.AppendUniqueBuildingArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CollapseTimerBasedOffLastHardStability(float& NewParam); // Function BP_Building_Base.BP_Building_Base_C.CollapseTimerBasedOffLastHardStability // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // Function BP_Building_Base.BP_Building_Base_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldDownShift(enum class RotationalDirections Direction, bool& Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldDownShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldUpShift(enum class RotationalDirections Direction, bool& Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldUpShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldLeftShift(enum class RotationalDirections Direction, bool& Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldLeftShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldRightShift(enum class RotationalDirections Direction, bool& Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldRightShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldBackwardShift(enum class RotationalDirections Direction, bool& Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldBackwardShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldForwardShift(enum class RotationalDirections Direction, bool& Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldForwardShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct FTransform& GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections& RelativeRotationEnum, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtraDelta); // Function BP_Building_Base.BP_Building_Base_C.DecideShifting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitAnchorStability(); // Function BP_Building_Base.BP_Building_Base_C.InitAnchorStability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveHardStability(struct ABP_Building_Base_C* RemovedBuilding); // Function BP_Building_Base.BP_Building_Base_C.RemoveHardStability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PickNewShakeTarget(); // Function BP_Building_Base.BP_Building_Base_C.PickNewShakeTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Calculate Stability State Implementation(); // Function BP_Building_Base.BP_Building_Base_C.Calculate Stability State Implementation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetHardStability(float& HardStability, float& HardStabilityBeforeWeight); // Function BP_Building_Base.BP_Building_Base_C.GetHardStability // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveHardStability(struct ABP_Building_Base_C* FromBuilding, float Stability); // Function BP_Building_Base.BP_Building_Base_C.ReceiveHardStability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PushAnchorIntoHardStability(); // Function BP_Building_Base.BP_Building_Base_C.PushAnchorIntoHardStability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MarkDirty(); // Function BP_Building_Base.BP_Building_Base_C.MarkDirty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t ManhattanDistanceToBuilding(struct ABP_Building_Base_C* OtherBuilding); // Function BP_Building_Base.BP_Building_Base_C.ManhattanDistanceToBuilding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BuildingHitToGridRounded(struct FHitResult& InHit, struct ABP_Building_Base_C* ClassToBuild, int32_t RotationalOffsetState, struct FTransform& OutWorldSpaceOnGrid, enum class RotationalDirections& BuildingHitRelativeRotation, enum class RotationalDirections& HitGridRelativeRotation); // Function BP_Building_Base.BP_Building_Base_C.BuildingHitToGridRounded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetBlockingLines(struct TArray<struct FVectorPair>& BlockingLinesArray); // Function BP_Building_Base.BP_Building_Base_C.GetBlockingLines // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_Building_Base.BP_Building_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Rain(int32_t Millilitres); // Function BP_Building_Base.BP_Building_Base_C.Rain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Building_Base.BP_Building_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void Destruction effects(); // Function BP_Building_Base.BP_Building_Base_C.Destruction effects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Building_Base.BP_Building_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void debug color(); // Function BP_Building_Base.BP_Building_Base_C.debug color // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Stable(); // Function BP_Building_Base.BP_Building_Base_C.Stable // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Unstable(); // Function BP_Building_Base.BP_Building_Base_C.Unstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void VeryUnstable(); // Function BP_Building_Base.BP_Building_Base_C.VeryUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Collapse(); // Function BP_Building_Base.BP_Building_Base_C.Collapse // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void cracks(); // Function BP_Building_Base.BP_Building_Base_C.cracks // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PushHardStabilityAsync(); // Function BP_Building_Base.BP_Building_Base_C.PushHardStabilityAsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReinitAnchorStability(); // Function BP_Building_Base.BP_Building_Base_C.ReinitAnchorStability // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugStabilityMulti(float hardstabilityCount, float HardStabValue, int32_t RemoteAnchorBuildings, float AnchorStab, struct FString Debug, float UnclampedHardStability); // Function BP_Building_Base.BP_Building_Base_C.DebugStabilityMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DirtyTickEvent(); // Function BP_Building_Base.BP_Building_Base_C.DirtyTickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DirtyTickCooldown(); // Function BP_Building_Base.BP_Building_Base_C.DirtyTickCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StableEffects(); // Function BP_Building_Base.BP_Building_Base_C.StableEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UnstableEffects(bool VeryUnstable); // Function BP_Building_Base.BP_Building_Base_C.UnstableEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void VeryUnstableEffects(float TimerLength); // Function BP_Building_Base.BP_Building_Base_C.VeryUnstableEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void VeryUnstableEffectsFinished(); // Function BP_Building_Base.BP_Building_Base_C.VeryUnstableEffectsFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TempStabilityExpired(); // Function BP_Building_Base.BP_Building_Base_C.TempStabilityExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MultiOnPlaced(struct AIcarusPlayerCharacter* Instigator); // Function BP_Building_Base.BP_Building_Base_C.MultiOnPlaced // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveDestroyed(); // Function BP_Building_Base.BP_Building_Base_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ServerShowDebugHelpersWithReset(); // Function BP_Building_Base.BP_Building_Base_C.ServerShowDebugHelpersWithReset // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlacementHelperVisualMulticast(struct TArray<struct UPrimitiveComponent*>& Component, struct UMaterialInterface* NewMaterial); // Function BP_Building_Base.BP_Building_Base_C.PlacementHelperVisualMulticast // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GhostActorSlowTick(); // Function BP_Building_Base.BP_Building_Base_C.GhostActorSlowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Manual_Construction(struct ABP_Grid_Base_C* ParentGrid, struct FVector GridLocation); // Function BP_Building_Base.BP_Building_Base_C.Manual_Construction // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Manual_BeginPlay(); // Function BP_Building_Base.BP_Building_Base_C.Manual_BeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerStartWindDamage(float ManualPeriodOverride); // Function BP_Building_Base.BP_Building_Base_C.ServerStartWindDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WindDamageTick(); // Function BP_Building_Base.BP_Building_Base_C.WindDamageTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WindDamageCosmetics(); // Function BP_Building_Base.BP_Building_Base_C.WindDamageCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopWindDamageTimers(); // Function BP_Building_Base.BP_Building_Base_C.StopWindDamageTimers // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerStopWindDamage(); // Function BP_Building_Base.BP_Building_Base_C.ServerStopWindDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DelayedAsyncProccessDestructibleDamage(); // Function BP_Building_Base.BP_Building_Base_C.DelayedAsyncProccessDestructibleDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AsyncStrippedMeshSwap(); // Function BP_Building_Base.BP_Building_Base_C.AsyncStrippedMeshSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void debugdestruction(); // Function BP_Building_Base.BP_Building_Base_C.debugdestruction // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ActorState_K2Node_ComponentBoundEvent_0_OnDamagedSignature__DelegateSignature(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_Building_Base.BP_Building_Base_C.BndEvt__ActorState_K2Node_ComponentBoundEvent_0_OnDamagedSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void MultiOnRepaired(bool RemoveScorch); // Function BP_Building_Base.BP_Building_Base_C.MultiOnRepaired // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RegisterWithWeatherController(); // Function BP_Building_Base.BP_Building_Base_C.RegisterWithWeatherController // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConsumeHit_Collision(struct FIcarusDamagePacket DamagePacket); // Function BP_Building_Base.BP_Building_Base_C.ConsumeHit_Collision // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IndirectWeightChildDestroyed(struct ABuildingBase* Building, enum class EBuildingDestroyReason DestroyReason); // Function BP_Building_Base.BP_Building_Base_C.IndirectWeightChildDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeightUnstable(); // Function BP_Building_Base.BP_Building_Base_C.WeightUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OverWeightCheck(); // Function BP_Building_Base.BP_Building_Base_C.OverWeightCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OverweightDestructionTick(); // Function BP_Building_Base.BP_Building_Base_C.OverweightDestructionTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeightInjectedVeryUnstable(); // Function BP_Building_Base.BP_Building_Base_C.WeightInjectedVeryUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeightInjectedUnstable(); // Function BP_Building_Base.BP_Building_Base_C.WeightInjectedUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // Function BP_Building_Base.BP_Building_Base_C.OnModifiersUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RepairObject(); // Function BP_Building_Base.BP_Building_Base_C.RepairObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateWindDamageTimer(float NewTime); // Function BP_Building_Base.BP_Building_Base_C.UpdateWindDamageTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InstantAsyncProcessDestructibleDamage(); // Function BP_Building_Base.BP_Building_Base_C.InstantAsyncProcessDestructibleDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AsyncMainDMReset(); // Function BP_Building_Base.BP_Building_Base_C.AsyncMainDMReset // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransitionedToStrippedCheck(); // Function BP_Building_Base.BP_Building_Base_C.TransitionedToStrippedCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransitionedToMainMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionedToMainMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransitionedToDM(); // Function BP_Building_Base.BP_Building_Base_C.TransitionedToDM // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShadowSettings changed(bool Value); // Function BP_Building_Base.BP_Building_Base_C.ShadowSettings changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Async mat change(); // Function BP_Building_Base.BP_Building_Base_C.Async mat change // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayerClearSnow(struct AIcarusPlayerCharacter* Player); // Function BP_Building_Base.BP_Building_Base_C.PlayerClearSnow // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlaySnowClearedEffects(); // Function BP_Building_Base.BP_Building_Base_C.MULTI_PlaySnowClearedEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DirtyShelter(); // Function BP_Building_Base.BP_Building_Base_C.DirtyShelter // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RaiseTheCurtain(); // Function BP_Building_Base.BP_Building_Base_C.RaiseTheCurtain // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Snow(float Intensity); // Function BP_Building_Base.BP_Building_Base_C.Snow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartDestruction(struct AIcarusPlayerController* TriggeringPlayer, enum class EBuildingDestroyReason DestroyReason); // Function BP_Building_Base.BP_Building_Base_C.StartDestruction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CalculateStabilityState(); // Function BP_Building_Base.BP_Building_Base_C.CalculateStabilityState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCaveState(bool IsInCave, struct AActor* CaveActor); // Function BP_Building_Base.BP_Building_Base_C.SetCaveState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Building_Base(int32_t EntryPoint); // Function BP_Building_Base.BP_Building_Base_C.ExecuteUbergraph_BP_Building_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void OpenableStateChanged__DelegateSignature(enum class EBuildingOpenableState NewState); // Function BP_Building_Base.BP_Building_Base_C.OpenableStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

