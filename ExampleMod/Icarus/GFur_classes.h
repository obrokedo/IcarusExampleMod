// Class GFur.GFurComponent
// Size: 0x630 (Inherited: 0x470)
struct UGFurComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalGrowMesh; // 0x468(0x08)
	struct UStaticMesh* StaticGrowMesh; // 0x470(0x08)
	struct UFurSplines* FurSplines; // 0x478(0x08)
	struct TArray<struct USkeletalMesh*> SkeletalGuideMeshes; // 0x480(0x10)
	struct TArray<struct UStaticMesh*> StaticGuideMeshes; // 0x490(0x10)
	int32_t LayerCount; // 0x4a0(0x04)
	float MinScreenSize; // 0x4a4(0x04)
	struct TArray<struct FFurLod> LODs; // 0x4a8(0x10)
	float ShellBias; // 0x4b8(0x04)
	float FurLength; // 0x4bc(0x04)
	float MinFurLength; // 0x4c0(0x04)
	bool RemoveFacesWithoutSplines; // 0x4c4(0x01)
	bool PhysicsEnabled; // 0x4c5(0x01)
	float ForceDistribution; // 0x4c8(0x04)
	float Stiffness; // 0x4cc(0x04)
	float Damping; // 0x4d0(0x04)
	struct FVector ConstantForce; // 0x4d4(0x0c)
	float MaxForce; // 0x4e0(0x04)
	float MaxForceTorqueFactor; // 0x4e4(0x04)
	float ReferenceHairBias; // 0x4e8(0x04)
	float HairLengthForceUniformity; // 0x4ec(0x04)
	float MaxPhysicsOffsetLength; // 0x4f0(0x04)
	float NoiseStrength; // 0x4f4(0x04)
	bool DisableMorphTargets; // 0x4f8(0x01)
	float StreamingDistanceMultiplier; // 0x4fc(0x04)
	char pad_503[0x12d]; // 0x503(0x12d)

	bool CheckGFurSetupIsValid(); // Function GFur.GFurComponent.CheckGFurSetupIsValid // (Final|Native|Public|BlueprintCallable) // @ game+0x1048780
};

// Class GFur.FurSplines
// Size: 0x80 (Inherited: 0x28)
struct UFurSplines : UObject {
	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<int32_t> Index; // 0x38(0x10)
	struct TArray<int32_t> Count; // 0x48(0x10)
	int32_t ControlPointCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString ImportFilename; // 0x60(0x10)
	int32_t Version; // 0x70(0x04)
	int32_t ImportTransformation; // 0x74(0x04)
	float Threshold; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

