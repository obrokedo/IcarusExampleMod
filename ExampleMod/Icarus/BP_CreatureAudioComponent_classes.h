// BlueprintGeneratedClass BP_CreatureAudioComponent.BP_CreatureAudioComponent_C
// Size: 0x2f5 (Inherited: 0xb8)
struct UBP_CreatureAudioComponent_C : UCreatureAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct AIcarusNPCGOAPCharacter* Creature; // 0xc0(0x08)
	enum class EPhysicalSurface CurrentSurface; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float CurrentDistance; // 0xcc(0x04)
	struct UCurveFloat* DistanceCheckCurve; // 0xd0(0x08)
	struct UCurveFloat* SurfaceCheckCurve; // 0xd8(0x08)
	struct UCurveFloat* FoliageCheckCurve; // 0xe0(0x08)
	float CurrentWaterImmersion; // 0xe8(0x04)
	bool InFoliage; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct UFMODAudioComponent* WorldMovementComponent; // 0xf0(0x08)
	struct UBP_GroundSurfaceChecker_C* SurfaceChecker; // 0xf8(0x08)
	struct UFMODAudioComponent* RagdollAudio; // 0x100(0x08)
	struct FTimerHandle RagdollAudioUpdateTimerHandle; // 0x108(0x08)
	float RagdollAudioUpdateFrequency; // 0x110(0x04)
	float RagdollAudioLastCollisionTime; // 0x114(0x04)
	float RagdollAudioNoCollisionTimeoutTime; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FAIAudioData AudioData; // 0x120(0x1c8)
	struct UCurveFloat* ShelterCheckCurve; // 0x2e8(0x08)
	float ShelterCheckMaxDistance; // 0x2f0(0x04)
	bool WaterImmersionReadyForUpdate; // 0x2f4(0x01)

	void TraceForWaterImmersion(float& WaterImmersion); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.TraceForWaterImmersion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetWaterImmersion(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.GetWaterImmersion // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayWorldMovementSound(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.PlayWorldMovementSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TraceForFoliage(bool& InFoliage); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.TraceForFoliage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EventOnFootstepAnimNotify(enum class ECreatureFootstepType Type); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.EventOnFootstepAnimNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SurfaceUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.SurfaceUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DistanceUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.DistanceUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FoliageUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.FoliageUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRagdollCollision(struct FHitResult Hit); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.OnRagdollCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateRagdollAudio(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.UpdateRagdollAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopRagdollAudio(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.StopRagdollAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShelterUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.ShelterUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCreatureDeath(struct UActorState* ActorState); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.OnCreatureDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_CreatureAudioComponent(int32_t EntryPoint); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.ExecuteUbergraph_BP_CreatureAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

