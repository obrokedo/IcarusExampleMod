// BlueprintGeneratedClass BP_FireInstanceShadow.BP_FireInstanceShadow_C
// Size: 0x34c (Inherited: 0x310)
struct ABP_FireInstanceShadow_C : AFireInstanceShadow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct ABP_FireAudio_C* Audio; // 0x318(0x08)
	struct ABP_FireInstance_RVTCapture_C* RVTCaptureActor; // 0x320(0x08)
	struct TArray<struct UFlammableInstance*> Instance; // 0x328(0x10)
	struct FMulticastInlineDelegate RemoveFireRef; // 0x338(0x10)
	float DistanceBetweenFoliage; // 0x348(0x04)

	void OnFlammableInstanceAdded(struct UFlammableInstance* Instance); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.OnFlammableInstanceAdded // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnTransferredTo(struct AFireInstanceBase* Dest, struct UFlammableInstance* Instance); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.OnTransferredTo // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature(); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void RemoveFireInstance(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.RemoveFireInstance // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_FireInstanceShadow(int32_t EntryPoint); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ExecuteUbergraph_BP_FireInstanceShadow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void RemoveFireRef__DelegateSignature(struct UFlammableInstance* FlammableInstanceRef); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.RemoveFireRef__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

