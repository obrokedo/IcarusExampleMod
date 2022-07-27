// BlueprintGeneratedClass BP_InteractableLake.BP_InteractableLake_C
// Size: 0x3b8 (Inherited: 0x310)
struct ABP_InteractableLake_C : ALake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UNavBlockingStaticMeshComponent* NavBlockingStaticMesh; // 0x318(0x08)
	struct UBoxComponent* WaterPhysics; // 0x320(0x08)
	struct UStaticMeshComponent* UnderwaterMesh; // 0x328(0x08)
	struct UStaticMeshComponent* LakeEdge; // 0x330(0x08)
	struct UBP_LakeAudioComponent_C* BP_LakeAudioComponent; // 0x338(0x08)
	struct UStaticMeshComponent* SurfaceMesh; // 0x340(0x08)
	struct UHighlightableComponent* Highlightable; // 0x348(0x08)
	struct UNavModifierComponent* NavModifier; // 0x350(0x08)
	struct UInteractableComponent* Interactable; // 0x358(0x08)
	bool ManualPlacement; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct TArray<struct URuntimeVirtualTexture*> VirtualTexture; // 0x368(0x10)
	bool Water Edges; // 0x378(0x01)
	bool Edit Water Edge; // 0x379(0x01)
	enum class ESplineLoopDirection EdgeSplineDirection; // 0x37a(0x01)
	char pad_37B[0x1]; // 0x37b(0x01)
	struct FVector EdgeSplineCentre; // 0x37c(0x0c)
	float EdgeSplineMaxDist; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct FTransform> EdgeSplinePoints; // 0x390(0x10)
	struct USplineComponent* NewEdgeSpline; // 0x3a0(0x08)
	float LakeDepth; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x3b0(0x08)

	struct TArray<struct UPrimitiveComponent*> GetNavAffectingComponents(); // Function BP_InteractableLake.BP_InteractableLake_C.GetNavAffectingComponents // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void SetUpEdgeSpline(); // Function BP_InteractableLake.BP_InteractableLake_C.SetUpEdgeSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupGOAPWaterNodes(); // Function BP_InteractableLake.BP_InteractableLake_C.SetupGOAPWaterNodes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_InteractableLake.BP_InteractableLake_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_B607BE074B40775DC6E9828DC398DAE2(struct UObject* Loaded); // Function BP_InteractableLake.BP_InteractableLake_C.OnLoaded_B607BE074B40775DC6E9828DC398DAE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_InteractableLake.BP_InteractableLake_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_InteractableLake.BP_InteractableLake_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_InteractableLake(int32_t EntryPoint); // Function BP_InteractableLake.BP_InteractableLake_C.ExecuteUbergraph_BP_InteractableLake // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

