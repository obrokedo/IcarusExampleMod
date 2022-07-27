// BlueprintGeneratedClass BPQ_OLY_Riverlands_Extermination.BPQ_OLY_Riverlands_Extermination_C
// Size: 0x348 (Inherited: 0x320)
struct ABPQ_OLY_Riverlands_Extermination_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FCharacterFlagsRowHandle Character Flag; // 0x330(0x18)

	bool Check(); // Function BPQ_OLY_Riverlands_Extermination.BPQ_OLY_Riverlands_Extermination_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_OLY_Riverlands_Extermination.BPQ_OLY_Riverlands_Extermination_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Riverlands_Extermination.BPQ_OLY_Riverlands_Extermination_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function BPQ_OLY_Riverlands_Extermination.BPQ_OLY_Riverlands_Extermination_C.ConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Riverlands_Extermination(int32_t EntryPoint); // Function BPQ_OLY_Riverlands_Extermination.BPQ_OLY_Riverlands_Extermination_C.ExecuteUbergraph_BPQ_OLY_Riverlands_Extermination // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

