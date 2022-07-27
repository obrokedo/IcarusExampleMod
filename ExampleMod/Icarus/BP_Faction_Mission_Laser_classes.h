// BlueprintGeneratedClass BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C
// Size: 0x618 (Inherited: 0x5c3)
struct ABP_Faction_Mission_Laser_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UDecalComponent* Decal; // 0x5d0(0x08)
	struct UNiagaraComponent* NS_LaserBeam; // 0x5d8(0x08)
	struct UNiagaraComponent* NS_LaserImpact; // 0x5e0(0x08)
	struct USceneComponent* LaserSource; // 0x5e8(0x08)
	struct UFMODAudioComponent* DestructionAudio; // 0x5f0(0x08)
	struct UFMODAudioComponent* LaserAudio; // 0x5f8(0x08)
	struct USceneComponent* Scene; // 0x600(0x08)
	bool LaserActive; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct AIcarusActor* Target; // 0x610(0x08)

	void GetLaserSourceLocation(struct FVector& Location, struct FVector& ForwardVector); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.GetLaserSourceLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetPoweredMaterial(bool On); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.SetPoweredMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct TArray<struct UDecalComponent*> GetLaserDecals(); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.GetLaserDecals // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct UNiagaraComponent*> GetLaserImpacts(); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.GetLaserImpacts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct UNiagaraComponent*> GetLaserBeams(); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.GetLaserBeams // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void TraceForImpactLocation(bool& Found, struct FVector& End Location); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.TraceForImpactLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_LaserActive(); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.OnRep_LaserActive // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IcarusBeginPlay(); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnNetworkComponentActive(bool IsActive); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.OnNetworkComponentActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Faction_Mission_Laser(int32_t EntryPoint); // Function BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C.ExecuteUbergraph_BP_Faction_Mission_Laser // (Final|UbergraphFunction) // @ game+0x1be0000
};

