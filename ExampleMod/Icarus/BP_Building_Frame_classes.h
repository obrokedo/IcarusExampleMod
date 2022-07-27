// BlueprintGeneratedClass BP_Building_Frame.BP_Building_Frame_C
// Size: 0xac0 (Inherited: 0xa1a)
struct ABP_Building_Frame_C : ABP_Building_Base_C {
	char pad_A1A[0x6]; // 0xa1a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UNiagaraComponent* Niagara; // 0xa28(0x08)
	struct UStaticMeshComponent* SM_XPlane5; // 0xa30(0x08)
	struct UStaticMeshComponent* SM_XPlane4; // 0xa38(0x08)
	struct UStaticMeshComponent* SM_XPlane3; // 0xa40(0x08)
	struct UStaticMeshComponent* SM_XPlane2; // 0xa48(0x08)
	struct UStaticMeshComponent* SM_XPlane1; // 0xa50(0x08)
	struct UStaticMeshComponent* SM_XPlane; // 0xa58(0x08)
	struct URoofSnow_C* RoofSnow; // 0xa60(0x08)
	bool TopOrBottomHit; // 0xa68(0x01)
	bool TopHit; // 0xa69(0x01)
	bool Bottomhit; // 0xa6a(0x01)
	char pad_A6B[0x5]; // 0xa6b(0x05)
	struct TMap<struct ABP_Building_Base_C*, int32_t> RemoteAnchorBuildingDistanceMap; // 0xa70(0x50)

	int32_t ExtraSoftHeightCalc(); // Function BP_Building_Frame.BP_Building_Frame_C.ExtraSoftHeightCalc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ApplySoftHeightLimits(); // Function BP_Building_Frame.BP_Building_Frame_C.ApplySoftHeightLimits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CalculateDistanceToRealAnchor(); // Function BP_Building_Frame.BP_Building_Frame_C.CalculateDistanceToRealAnchor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CombineRemoteAnchorDistanceMaps(struct ABP_Building_Base_C* OtherBuilding); // Function BP_Building_Frame.BP_Building_Frame_C.CombineRemoteAnchorDistanceMaps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReinitAllAbove(); // Function BP_Building_Frame.BP_Building_Frame_C.ReinitAllAbove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // Function BP_Building_Frame.BP_Building_Frame_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OptionallyRotateCenterUpToInpactNormal(struct FVector HitNormal, struct FRotator& CenterWorldRotation, struct FRotator& ZRotatedDifference, bool& ImpactWasAlreadyRotated); // Function BP_Building_Frame.BP_Building_Frame_C.OptionallyRotateCenterUpToInpactNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GrabLowerAnchorBaseReferences(); // Function BP_Building_Frame.BP_Building_Frame_C.GrabLowerAnchorBaseReferences // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpreadAnchorBaseReferencesUp(); // Function BP_Building_Frame.BP_Building_Frame_C.SpreadAnchorBaseReferencesUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartDestruction(struct AIcarusPlayerController* TriggeringPlayer, enum class EBuildingDestroyReason DestroyReason); // Function BP_Building_Frame.BP_Building_Frame_C.StartDestruction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitAnchorStability(); // Function BP_Building_Frame.BP_Building_Frame_C.InitAnchorStability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Building_Frame(int32_t EntryPoint); // Function BP_Building_Frame.BP_Building_Frame_C.ExecuteUbergraph_BP_Building_Frame // (Final|UbergraphFunction) // @ game+0x1be0000
};

