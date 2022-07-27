// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C
// Size: 0x379 (Inherited: 0x370)
struct UBP_ModifierStateBehaviour_TickDamage_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	enum class EIcarusDamageType DamageType; // 0x378(0x01)

	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

