// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C
// Size: 0x3b0 (Inherited: 0x381)
struct UBP_ModifierStateBehaviour_AfflictionHeat_C : UBP_Modifier_TemperatureClear_C {
	char pad_381[0x7]; // 0x381(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	float Damage; // 0x390(0x04)
	float DamagePercentage; // 0x394(0x04)
	struct FAfflictionChanceRowHandle Affliction; // 0x398(0x18)

	float GetPostProcessBlendWeights(); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.GetPostProcessBlendWeights // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.ModifierApplied // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateBlend(); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.UpdateBlend // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DealDamage(); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.DealDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void StartHeatstrokeTimer(); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.StartHeatstrokeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HeatstrokeTimer(); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.HeatstrokeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionHeat(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C.ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionHeat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

