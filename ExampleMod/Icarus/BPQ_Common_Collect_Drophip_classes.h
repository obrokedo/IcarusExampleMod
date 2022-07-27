// BlueprintGeneratedClass BPQ_Common_Collect_Drophip.BPQ_Common_Collect_Drophip_C
// Size: 0x364 (Inherited: 0x320)
struct ABPQ_Common_Collect_Drophip_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FItemTemplateRowHandle Checked_Replenished_Item; // 0x330(0x18)
	int32_t Count; // 0x348(0x04)
	struct FDialoguePoolRowHandle CollectEquipmentDialogue; // 0x34c(0x18)

	bool Check(); // Function BPQ_Common_Collect_Drophip.BPQ_Common_Collect_Drophip_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddItem(struct AActor* Actor, struct FItemData Item); // Function BPQ_Common_Collect_Drophip.BPQ_Common_Collect_Drophip_C.AddItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReplenishItem(); // Function BPQ_Common_Collect_Drophip.BPQ_Common_Collect_Drophip_C.ReplenishItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_Common_Collect_Drophip.BPQ_Common_Collect_Drophip_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_Common_Collect_Drophip.BPQ_Common_Collect_Drophip_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Common_Collect_Drophip(int32_t EntryPoint); // Function BPQ_Common_Collect_Drophip.BPQ_Common_Collect_Drophip_C.ExecuteUbergraph_BPQ_Common_Collect_Drophip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

