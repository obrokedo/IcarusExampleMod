// BlueprintGeneratedClass BPQ_STYX_D_Delivery_Collect.BPQ_STYX_D_Delivery_Collect_C
// Size: 0x348 (Inherited: 0x320)
struct ABPQ_STYX_D_Delivery_Collect_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FItemsStaticRowHandle ItemRow; // 0x330(0x18)

	void ItemCheck(); // Function BPQ_STYX_D_Delivery_Collect.BPQ_STYX_D_Delivery_Collect_C.ItemCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_STYX_D_Delivery_Collect.BPQ_STYX_D_Delivery_Collect_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_D_Delivery_Collect.BPQ_STYX_D_Delivery_Collect_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ItemCheckTrigger(); // Function BPQ_STYX_D_Delivery_Collect.BPQ_STYX_D_Delivery_Collect_C.ItemCheckTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_D_Delivery_Collect(int32_t EntryPoint); // Function BPQ_STYX_D_Delivery_Collect.BPQ_STYX_D_Delivery_Collect_C.ExecuteUbergraph_BPQ_STYX_D_Delivery_Collect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

