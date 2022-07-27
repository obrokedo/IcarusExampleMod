// BlueprintGeneratedClass BP_Modifier_Base.BP_Modifier_Base_C
// Size: 0x378 (Inherited: 0x370)
struct UBP_Modifier_Base_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)

	bool ModifierRemoved(); // Function BP_Modifier_Base.BP_Modifier_Base_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ModifierApplied(); // Function BP_Modifier_Base.BP_Modifier_Base_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ModifierTick(float DeltaTime); // Function BP_Modifier_Base.BP_Modifier_Base_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Modifier_Base(int32_t EntryPoint); // Function BP_Modifier_Base.BP_Modifier_Base_C.ExecuteUbergraph_BP_Modifier_Base // (Final|UbergraphFunction) // @ game+0x1be0000
};

