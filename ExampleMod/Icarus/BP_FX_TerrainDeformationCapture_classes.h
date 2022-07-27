// BlueprintGeneratedClass BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_FX_TerrainDeformationCapture_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneCaptureComponent2D* SceneCapture; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UMaterialInstanceDynamic* DrawMaterial; // 0x238(0x08)
	struct FVector2D MoveOffset; // 0x240(0x08)
	bool SettingsEnabled; // 0x248(0x01)

	void ResolveEnabledState(bool& Enabled); // Function BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C.ResolveEnabledState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MoveCapture(); // Function BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C.MoveCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DrawToPersistent(); // Function BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C.DrawToPersistent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SettingsChanged(bool Value); // Function BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C.SettingsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_FX_TerrainDeformationCapture(int32_t EntryPoint); // Function BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C.ExecuteUbergraph_BP_FX_TerrainDeformationCapture // (Final|UbergraphFunction) // @ game+0x1be0000
};

