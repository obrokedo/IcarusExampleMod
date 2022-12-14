// BlueprintGeneratedClass BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C
// Size: 0xad0 (Inherited: 0xac8)
struct ABP_Building_Beam_Horizontal_C : ABP_Building_Beam_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xac8(0x08)

	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct FTransform& GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections& RelativeRotationEnum, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtraDelta); // Function BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C.DecideShifting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // Function BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Building_Beam_Horizontal(int32_t EntryPoint); // Function BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C.ExecuteUbergraph_BP_Building_Beam_Horizontal // (Final|UbergraphFunction) // @ game+0x1be0000
};

