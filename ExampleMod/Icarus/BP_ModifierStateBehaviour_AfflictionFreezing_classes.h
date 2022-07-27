// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C
// Size: 0x3c0 (Inherited: 0x3a8)
struct UBP_ModifierStateBehaviour_AfflictionFreezing_C : UBP_ModifierStateBehaviour_AfflictionCold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	float Damage; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct FTimerHandle FrostbiteTimer; // 0x3b8(0x08)

	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ModifierApplied // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void UpdateBlend(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.UpdateBlend // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DealDamage(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.DealDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionFreezing(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionFreezing // (Final|UbergraphFunction) // @ game+0x1be0000
};

