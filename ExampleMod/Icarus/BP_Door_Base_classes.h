// BlueprintGeneratedClass BP_Door_Base.BP_Door_Base_C
// Size: 0x600 (Inherited: 0x5c3)
struct ABP_Door_Base_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UBoxComponent* PlacementBlockerBox; // 0x5d0(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x5d8(0x08)
	enum class DoorState DoorState; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	struct FMulticastInlineDelegate OpenStateChanged; // 0x5e8(0x10)
	struct FTimerHandle DelayedDirtyTimer; // 0x5f8(0x08)

	float GetOcclusionValue(); // Function BP_Door_Base.BP_Door_Base_C.GetOcclusionValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void DirtyNavigation(); // Function BP_Door_Base.BP_Door_Base_C.DirtyNavigation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetOpenableStateOnFoundationActor(); // Function BP_Door_Base.BP_Door_Base_C.SetOpenableStateOnFoundationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_DoorState(); // Function BP_Door_Base.BP_Door_Base_C.OnRep_DoorState // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Door_Base.BP_Door_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OpenCloseDoor(struct FHitResult HitResult); // Function BP_Door_Base.BP_Door_Base_C.OpenCloseDoor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Door_Base.BP_Door_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Door_Base.BP_Door_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Door_Base(int32_t EntryPoint); // Function BP_Door_Base.BP_Door_Base_C.ExecuteUbergraph_BP_Door_Base // (Final|UbergraphFunction) // @ game+0x1be0000
	void OpenStateChanged__DelegateSignature(bool Open); // Function BP_Door_Base.BP_Door_Base_C.OpenStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

