// BlueprintGeneratedClass BP_Building_Wall.BP_Building_Wall_C
// Size: 0xa38 (Inherited: 0xa1a)
struct ABP_Building_Wall_C : ABP_Building_Base_C {
	char pad_A1A[0x6]; // 0xa1a(0x06)
	struct UNiagaraComponent* Niagara; // 0xa20(0x08)
	struct UStaticMeshComponent* SM_XPlane1; // 0xa28(0x08)
	struct UStaticMeshComponent* SM_XPlane; // 0xa30(0x08)

	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct FTransform& GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections& RelativeRotationEnum, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtraDelta); // Function BP_Building_Wall.BP_Building_Wall_C.DecideShifting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsBuildingOutside(); // Function BP_Building_Wall.BP_Building_Wall_C.IsBuildingOutside // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // Function BP_Building_Wall.BP_Building_Wall_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

