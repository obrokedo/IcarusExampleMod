// BlueprintGeneratedClass BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C
// Size: 0x641 (Inherited: 0x618)
struct ABP_Faction_Mission_Prototype_Laser_C : ABP_Faction_Mission_Laser_C {
	struct UNiagaraComponent* NS_HeatHaze; // 0x618(0x08)
	struct UNiagaraComponent* NS_LaserImpact1; // 0x620(0x08)
	struct UDecalComponent* Decal1; // 0x628(0x08)
	struct UNiagaraComponent* NS_LaserBeam1; // 0x630(0x08)
	struct USceneComponent* LaserSource1; // 0x638(0x08)
	bool Burning; // 0x640(0x01)

	void OnRep_Burning(); // Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.OnRep_Burning // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetLaserSourceLocation(struct FVector& Location, struct FVector& ForwardVector); // Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserSourceLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetPoweredMaterial(bool On); // Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.SetPoweredMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct TArray<struct UNiagaraComponent*> GetLaserImpacts(); // Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserImpacts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct UDecalComponent*> GetLaserDecals(); // Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserDecals // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct UNiagaraComponent*> GetLaserBeams(); // Function BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C.GetLaserBeams // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
};

