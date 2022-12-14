// BlueprintGeneratedClass BP_Interactable_Pickup_Corpse.BP_Interactable_Pickup_Corpse_C
// Size: 0x100 (Inherited: 0xe8)
struct UBP_Interactable_Pickup_Corpse_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; // 0xf0(0x08)
	struct ABP_GOAP_Corpse_C* OwningCorpse; // 0xf8(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Pickup_Corpse.BP_Interactable_Pickup_Corpse_C.CanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // Function BP_Interactable_Pickup_Corpse.BP_Interactable_Pickup_Corpse_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Interactable_Pickup_Corpse(int32_t EntryPoint); // Function BP_Interactable_Pickup_Corpse.BP_Interactable_Pickup_Corpse_C.ExecuteUbergraph_BP_Interactable_Pickup_Corpse // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

