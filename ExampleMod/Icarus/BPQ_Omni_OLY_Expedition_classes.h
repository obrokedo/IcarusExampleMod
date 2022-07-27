// BlueprintGeneratedClass BPQ_Omni_OLY_Expedition.BPQ_Omni_OLY_Expedition_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_Omni_OLY_Expedition_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_Omni_OLY_Expedition.BPQ_Omni_OLY_Expedition_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_Omni_OLY_Expedition.BPQ_Omni_OLY_Expedition_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Custom(struct AIcarusPlayerCharacter* Player, struct AIcarusRocket* Dropship); // Function BPQ_Omni_OLY_Expedition.BPQ_Omni_OLY_Expedition_C.Custom // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_Omni_OLY_Expedition.BPQ_Omni_OLY_Expedition_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Omni_OLY_Expedition(int32_t EntryPoint); // Function BPQ_Omni_OLY_Expedition.BPQ_Omni_OLY_Expedition_C.ExecuteUbergraph_BPQ_Omni_OLY_Expedition // (Final|UbergraphFunction) // @ game+0x1be0000
};

