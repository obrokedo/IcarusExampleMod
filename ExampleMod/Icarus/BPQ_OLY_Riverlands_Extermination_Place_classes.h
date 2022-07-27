// BlueprintGeneratedClass BPQ_OLY_Riverlands_Extermination_Place.BPQ_OLY_Riverlands_Extermination_Place_C
// Size: 0x334 (Inherited: 0x320)
struct ABPQ_OLY_Riverlands_Extermination_Place_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	float MaxPlacementDistance; // 0x330(0x04)

	bool Check(); // Function BPQ_OLY_Riverlands_Extermination_Place.BPQ_OLY_Riverlands_Extermination_Place_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DeployableDeployed(struct AIcarusPlayerCharacter* Player, struct AIcarusActor* Deployable); // Function BPQ_OLY_Riverlands_Extermination_Place.BPQ_OLY_Riverlands_Extermination_Place_C.DeployableDeployed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Riverlands_Extermination_Place.BPQ_OLY_Riverlands_Extermination_Place_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Riverlands_Extermination_Place(int32_t EntryPoint); // Function BPQ_OLY_Riverlands_Extermination_Place.BPQ_OLY_Riverlands_Extermination_Place_C.ExecuteUbergraph_BPQ_OLY_Riverlands_Extermination_Place // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

