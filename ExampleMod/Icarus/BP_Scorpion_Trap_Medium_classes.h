// BlueprintGeneratedClass BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C
// Size: 0x5e9 (Inherited: 0x5c3)
struct ABP_Scorpion_Trap_Medium_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UBoxComponent* BoxCombined; // 0x5d0(0x08)
	struct UParticleSystemComponent* ParticleSystem_Blood; // 0x5d8(0x08)
	struct UNiagaraComponent* Niagara_Wood_Damage; // 0x5e0(0x08)
	bool TrapOpen; // 0x5e8(0x01)

	void OnRep_TrapOpen(); // Function BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C.OnRep_TrapOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DoDamage(int32_t DamageAmount, struct AActor* Defender); // Function BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C.DoDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LaunchCharacter(struct ACharacter* IcarusCharacter); // Function BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C.LaunchCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C.BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Scorpion_Trap_Medium(int32_t EntryPoint); // Function BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C.ExecuteUbergraph_BP_Scorpion_Trap_Medium // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

