// BlueprintGeneratedClass BPQ_Glacier_OLY_Expedition.BPQ_Glacier_OLY_Expedition_C
// Size: 0x364 (Inherited: 0x320)
struct ABPQ_Glacier_OLY_Expedition_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool foundstorm; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FDialogueRowHandle ClearSkyDialogue; // 0x334(0x18)
	struct FDialogueRowHandle EnterArcticDialogue; // 0x34c(0x18)

	bool Check(); // Function BPQ_Glacier_OLY_Expedition.BPQ_Glacier_OLY_Expedition_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_Glacier_OLY_Expedition.BPQ_Glacier_OLY_Expedition_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_Glacier_OLY_Expedition.BPQ_Glacier_OLY_Expedition_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_Glacier_OLY_Expedition.BPQ_Glacier_OLY_Expedition_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Glacier_OLY_Expedition(int32_t EntryPoint); // Function BPQ_Glacier_OLY_Expedition.BPQ_Glacier_OLY_Expedition_C.ExecuteUbergraph_BPQ_Glacier_OLY_Expedition // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

