// BlueprintGeneratedClass BPQ_STYX_D_Delivery_Deliver.BPQ_STYX_D_Delivery_Deliver_C
// Size: 0x358 (Inherited: 0x320)
struct ABPQ_STYX_D_Delivery_Deliver_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct TArray<struct FQuestsEnum> Quests; // 0x330(0x10)
	struct FItemsStaticRowHandle Items Static Row Handle; // 0x340(0x18)

	bool Check(); // Function BPQ_STYX_D_Delivery_Deliver.BPQ_STYX_D_Delivery_Deliver_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_D_Delivery_Deliver.BPQ_STYX_D_Delivery_Deliver_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_STYX_D_Delivery_Deliver.BPQ_STYX_D_Delivery_Deliver_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_STYX_D_Delivery_Deliver.BPQ_STYX_D_Delivery_Deliver_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_D_Delivery_Deliver(int32_t EntryPoint); // Function BPQ_STYX_D_Delivery_Deliver.BPQ_STYX_D_Delivery_Deliver_C.ExecuteUbergraph_BPQ_STYX_D_Delivery_Deliver // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

