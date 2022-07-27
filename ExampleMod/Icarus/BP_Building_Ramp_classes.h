// BlueprintGeneratedClass BP_Building_Ramp.BP_Building_Ramp_C
// Size: 0xa40 (Inherited: 0xa1a)
struct ABP_Building_Ramp_C : ABP_Building_Base_C {
	char pad_A1A[0x6]; // 0xa1a(0x06)
	struct UNiagaraComponent* Niagara; // 0xa20(0x08)
	struct UStaticMeshComponent* SM_XPlane1; // 0xa28(0x08)
	struct UStaticMeshComponent* SM_XPlane; // 0xa30(0x08)
	struct URoofSnow_C* RoofSnow; // 0xa38(0x08)

	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // Function BP_Building_Ramp.BP_Building_Ramp_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

