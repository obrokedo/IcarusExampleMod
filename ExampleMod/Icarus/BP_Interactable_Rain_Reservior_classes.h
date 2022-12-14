// BlueprintGeneratedClass BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C
// Size: 0xf8 (Inherited: 0xe8)
struct UBP_Interactable_Rain_Reservior_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UFMODEvent* InteractSound; // 0xf0(0x08)

	void PlayInteractSound(struct AActor* Instigator); // Function BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C.PlayInteractSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // Function BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayInteractFX(struct AActor* Instigator); // Function BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C.MULTI_PlayInteractFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Interactable_Rain_Reservior(int32_t EntryPoint); // Function BP_Interactable_Rain_Reservior.BP_Interactable_Rain_Reservior_C.ExecuteUbergraph_BP_Interactable_Rain_Reservior // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

