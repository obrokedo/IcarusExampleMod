// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x178 (Inherited: 0x28)
struct USubstanceGraphInstance : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FString PackageURL; // 0x38(0x10)
	struct USubstanceInstanceFactory* ParentFactory; // 0x48(0x08)
	struct TMap<uint32_t, struct UTexture2D*> ImageSources; // 0x50(0x50)
	struct UMaterial* CreatedMaterial; // 0xa0(0x08)
	struct UMaterialInstanceConstant* ConstantCreatedMaterial; // 0xa8(0x08)
	struct UMaterialInstanceDynamic* DynamicCreatedMaterial; // 0xb0(0x08)
	struct TMap<int32_t, struct FGuid> OutputTextureLinkData; // 0xb8(0x50)
	struct TMap<uint32_t, struct USubstanceOutputData*> OutputInstances; // 0x108(0x50)
	bool bIsFrozen; // 0x158(0x01)
	char pad_159[0x1f]; // 0x159(0x1f)

	void SetInputString(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputString // (Final|Native|Public|BlueprintCallable) // @ game+0xb3c9b0
	void SetInputInt(struct FString Identifier, struct TArray<int32_t>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb3c850
	bool SetInputImg(struct FString InputName, struct UObject* Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputImg // (Final|Native|Public|BlueprintCallable) // @ game+0xb3c760
	void SetInputFloat(struct FString Identifier, struct TArray<float>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb3c600
	void SetInputColor(struct FString Identifier, struct FLinearColor& Color); // Function SubstanceCore.SubstanceGraphInstance.SetInputColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb3c4c0
	void SetInputBool(struct FString Identifier, bool Bool); // Function SubstanceCore.SubstanceGraphInstance.SetInputBool // (Final|Native|Public|BlueprintCallable) // @ game+0xb3c390
	struct FSubstanceIntInputDesc GetIntInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc // (Final|Native|Public|BlueprintCallable) // @ game+0xb3bd30
	struct FSubstanceInstanceDesc GetInstanceDesc(); // Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc // (Final|Native|Public|BlueprintCallable) // @ game+0xb3bc00
	enum class ESubstanceInputType GetInputType(struct FString InputName); // Function SubstanceCore.SubstanceGraphInstance.GetInputType // (Final|Native|Public|BlueprintCallable) // @ game+0xb3bb00
	struct FString GetInputString(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputString // (Final|Native|Public|BlueprintCallable) // @ game+0xb3b9c0
	struct TArray<struct FString> GetInputNames(); // Function SubstanceCore.SubstanceGraphInstance.GetInputNames // (Final|Native|Public|BlueprintCallable) // @ game+0xb3b8e0
	struct TArray<int32_t> GetInputInt(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputInt // (Final|Native|Public|BlueprintCallable) // @ game+0xb3b7a0
	struct TArray<float> GetInputFloat(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xb3b660
	struct FLinearColor GetInputColor(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xb3b560
	bool GetInputBool(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputBool // (Final|Native|Public|BlueprintCallable) // @ game+0xb3b460
	struct FSubstanceFloatInputDesc GetFloatInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc // (Final|Native|Public|BlueprintCallable) // @ game+0xb3b180
	struct UMaterialInstanceDynamic* GetDynamicMaterialInstance(struct FName Name, struct UMaterial* InParentMaterial); // Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0xb3afe0
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size: 0x88 (Inherited: 0x28)
struct USubstanceInstanceFactory : UObject {
	struct TArray<struct USubstanceGraphInstance*> mGraphInstances; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	struct FString RelativeSourceFilePath; // 0x50(0x10)
	struct FString AbsoluteSourceFilePath; // 0x60(0x10)
	struct FString SourceFileTimestamp; // 0x70(0x10)
	enum class ESubstanceGenerationMode GenerationMode; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class SubstanceCore.SubstanceOutputData
// Size: 0x58 (Inherited: 0x28)
struct USubstanceOutputData : UObject {
	struct UObject* ConnectedObject; // 0x28(0x08)
	struct FMaterialParameterInfo ParamInfo; // 0x30(0x10)
	struct USubstanceGraphInstance* ParentInstance; // 0x40(0x08)
	struct FGuid CacheGuid; // 0x48(0x10)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x68 (Inherited: 0x28)
struct USubstanceSettings : UObject {
	int32_t MemoryBudgetMb; // 0x28(0x04)
	int32_t CPUCores; // 0x2c(0x04)
	int32_t AsyncLoadMipClip; // 0x30(0x04)
	int32_t MaxAsyncSubstancesRenderedPerFrame; // 0x34(0x04)
	enum class ESubstanceEngineType SubstanceEngine; // 0x38(0x01)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeX; // 0x39(0x01)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeY; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TSoftObjectPtr<UMaterialInterface> DefaultTemplateMaterial; // 0x40(0x28)
};

// Class SubstanceCore.SubstanceTexture2D
// Size: 0x148 (Inherited: 0xf0)
struct USubstanceTexture2D : UTexture2DDynamic {
	char pad_F0[0x30]; // 0xf0(0x30)
	struct USubstanceGraphInstance* ParentInstance; // 0x120(0x08)
	enum class TextureAddress AddressX; // 0x128(0x01)
	enum class TextureAddress AddressY; // 0x129(0x01)
	bool bCooked; // 0x12a(0x01)
	char pad_12B[0x1d]; // 0x12b(0x1d)
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x28 (Inherited: 0x28)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void SyncRendering(struct USubstanceGraphInstance* InstancesToRender); // Function SubstanceCore.SubstanceUtility.SyncRendering // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3caf0
	void SetGraphInstanceOutputSizeInt(struct USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height); // Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3c290
	void SetGraphInstanceOutputSize(struct USubstanceGraphInstance* GraphInstance, enum class ESubstanceTextureSize Width, enum class ESubstanceTextureSize Height); // Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3c190
	void ResetInputParameters(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.ResetInputParameters // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3c110
	struct TArray<struct UTexture2D*> GetSubstanceTextures(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetSubstanceTextures // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3bf70
	struct TArray<struct USubstanceGraphInstance*> GetSubstances(struct UMaterialInterface* Material); // Function SubstanceCore.SubstanceUtility.GetSubstances // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3c040
	float GetSubstanceLoadingProgress(); // Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3bf40
	struct FString GetGraphName(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetGraphName // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3b390
	struct FString GetFactoryName(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetFactoryName // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3b0b0
	void EnableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3ae80
	struct USubstanceGraphInstance* DuplicateGraphInstance(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3adb0
	void DisableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3ac50
	struct USubstanceGraphInstance* CreateGraphInstance(struct UObject* WorldContextObject, struct USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, struct UMaterial* ParentMaterial, struct FString InstanceName); // Function SubstanceCore.SubstanceUtility.CreateGraphInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3aa80
	struct USubstanceInstanceFactory* CreateAggregateSubstanceFactory(struct USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, struct USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, struct TArray<struct FSubstanceConnection>& Connections); // Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb3a8a0
	void CopyInputParameters(struct USubstanceGraphInstance* SourceGraphInstance, struct USubstanceGraphInstance* DestGraphInstance); // Function SubstanceCore.SubstanceUtility.CopyInputParameters // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3a7e0
	void ClearCache(); // Function SubstanceCore.SubstanceUtility.ClearCache // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3a7c0
	void AsyncRendering(struct USubstanceGraphInstance* InstancesToRender); // Function SubstanceCore.SubstanceUtility.AsyncRendering // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xb3a740
};

