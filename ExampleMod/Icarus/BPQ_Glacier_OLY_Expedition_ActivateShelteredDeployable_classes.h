// BlueprintGeneratedClass BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C
// Size: 0x384 (Inherited: 0x320)
struct ABPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	float MaxPlaceDistance; // 0x330(0x04)
	float SecondsToCharge; // 0x334(0x04)
	float LastChargePercentage; // 0x338(0x04)
	struct FBiomesRowHandle RequiredBiome; // 0x33c(0x18)
	struct FDialogueRowHandle DeploymentDialogue; // 0x354(0x18)
	struct FDialogueRowHandle ItemFinishedDialogue; // 0x36c(0x18)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ItemFinished(); // Function BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C.ItemFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable(int32_t EntryPoint); // Function BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C.ExecuteUbergraph_BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable // (Final|UbergraphFunction) // @ game+0x1be0000
};

