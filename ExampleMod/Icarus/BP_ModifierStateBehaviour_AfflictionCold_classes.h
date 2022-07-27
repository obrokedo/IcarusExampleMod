// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C
// Size: 0x3a8 (Inherited: 0x381)
struct UBP_ModifierStateBehaviour_AfflictionCold_C : UBP_Modifier_TemperatureClear_C {
	char pad_381[0x7]; // 0x381(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct FAfflictionChanceRowHandle Affliction; // 0x390(0x18)

	float GetPostProcessBlendWeights(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.GetPostProcessBlendWeights // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateBlend(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.UpdateBlend // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartFrostnipTimer(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.StartFrostnipTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void FrostnipTimer(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.FrostnipTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionCold(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionCold // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

