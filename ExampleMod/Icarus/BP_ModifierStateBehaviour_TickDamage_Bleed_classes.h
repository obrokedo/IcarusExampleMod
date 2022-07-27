// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C
// Size: 0x380 (Inherited: 0x370)
struct UBP_ModifierStateBehaviour_TickDamage_Bleed_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	enum class EIcarusDamageType DamageType; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	int32_t StatUID; // 0x37c(0x04)

	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ModifierApplied // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

