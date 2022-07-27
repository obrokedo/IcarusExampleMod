// BlueprintGeneratedClass BP_Interactable_Interact_ArmSatellite.BP_Interactable_Interact_ArmSatellite_C
// Size: 0x110 (Inherited: 0xf8)
struct UBP_Interactable_Interact_ArmSatellite_C : UBP_Interactable_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AIcarusPlayerCharacter* Current_Player_1; // 0x100(0x08)
	struct ABP_DeployableBase_C* Deployable; // 0x108(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_ArmSatellite.BP_Interactable_Interact_ArmSatellite_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Interactable_Interact_ArmSatellite.BP_Interactable_Interact_ArmSatellite_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Interactable_Interact_ArmSatellite(int32_t EntryPoint); // Function BP_Interactable_Interact_ArmSatellite.BP_Interactable_Interact_ArmSatellite_C.ExecuteUbergraph_BP_Interactable_Interact_ArmSatellite // (Final|UbergraphFunction) // @ game+0x1be0000
};

