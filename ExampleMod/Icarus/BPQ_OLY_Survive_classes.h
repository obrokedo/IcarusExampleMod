// BlueprintGeneratedClass BPQ_OLY_Survive.BPQ_OLY_Survive_C
// Size: 0x3a8 (Inherited: 0x320)
struct ABPQ_OLY_Survive_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FDialogueRowHandle WaterLow; // 0x330(0x18)
	struct FDialogueRowHandle OxygenFull; // 0x348(0x18)
	struct FDialogueRowHandle FoodLow; // 0x360(0x18)
	struct FDialogueRowHandle OxygenLow; // 0x378(0x18)
	struct FDialogueRowHandle WaterFull; // 0x390(0x18)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_OLY_Survive.BPQ_OLY_Survive_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Survive.BPQ_OLY_Survive_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Survive.BPQ_OLY_Survive_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Timeout(); // Function BPQ_OLY_Survive.BPQ_OLY_Survive_C.Timeout // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Survive(int32_t EntryPoint); // Function BPQ_OLY_Survive.BPQ_OLY_Survive_C.ExecuteUbergraph_BPQ_OLY_Survive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

