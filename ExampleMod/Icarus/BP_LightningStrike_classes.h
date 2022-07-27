// BlueprintGeneratedClass BP_LightningStrike.BP_LightningStrike_C
// Size: 0x320 (Inherited: 0x2b0)
struct ABP_LightningStrike_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UPostProcessComponent* PostProcessStrike; // 0x2b8(0x08)
	struct UPointLightComponent* PointLight; // 0x2c0(0x08)
	struct UStaticMeshComponent* LightningMesh; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	float BuildupTimeRemaining; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct AActor* ActorTarget; // 0x2e0(0x08)
	struct FFLODInstanceID FLODRecordTarget; // 0x2e8(0x10)
	enum class ELightningStrikeTarget TargetType; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct UFMODEvent* FMODEvent_Strike; // 0x300(0x08)
	struct UFMODEvent* FMODEvent_Buildup; // 0x308(0x08)
	bool EffectTriggered; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float StrikeDuration; // 0x314(0x04)
	bool IsDynamicallyShadowCasting; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float DefaultLightningBurnChance%; // 0x31c(0x04)

	void ConfigureLightningLight(bool CanCastShadows); // Function BP_LightningStrike.BP_LightningStrike_C.ConfigureLightningLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanCastShadows(bool& CanTurnOnShadowCasting); // Function BP_LightningStrike.BP_LightningStrike_C.CanCastShadows // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayBuildupSound(); // Function BP_LightningStrike.BP_LightningStrike_C.PlayBuildupSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayStrikeSound(); // Function BP_LightningStrike.BP_LightningStrike_C.PlayStrikeSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TickStrikeSequence(float DeltaTime); // Function BP_LightningStrike.BP_LightningStrike_C.TickStrikeSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StrikeLightningRod(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikeLightningRod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StrikeBuilding(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikeBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StrikeFLOD(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikeFLOD // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StrikePlayer(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikePlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Strike(); // Function BP_LightningStrike.BP_LightningStrike_C.Strike // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_LightningStrike.BP_LightningStrike_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void TestStrike(works once)(); // Function BP_LightningStrike.BP_LightningStrike_C.TestStrike(works once) // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_LightningStrike.BP_LightningStrike_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Particles only(); // Function BP_LightningStrike.BP_LightningStrike_C.Particles only // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_LightningStrike.BP_LightningStrike_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_LightningStrike(int32_t EntryPoint); // Function BP_LightningStrike.BP_LightningStrike_C.ExecuteUbergraph_BP_LightningStrike // (Final|UbergraphFunction) // @ game+0x1be0000
};

