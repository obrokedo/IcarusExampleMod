// BlueprintGeneratedClass BPQ_OLY_Riverlands_Delivery_Status.BPQ_OLY_Riverlands_Delivery_Status_C
// Size: 0x334 (Inherited: 0x320)
struct ABPQ_OLY_Riverlands_Delivery_Status_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	int32_t Count; // 0x330(0x04)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_OLY_Riverlands_Delivery_Status.BPQ_OLY_Riverlands_Delivery_Status_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Riverlands_Delivery_Status.BPQ_OLY_Riverlands_Delivery_Status_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Riverlands_Delivery_Status(int32_t EntryPoint); // Function BPQ_OLY_Riverlands_Delivery_Status.BPQ_OLY_Riverlands_Delivery_Status_C.ExecuteUbergraph_BPQ_OLY_Riverlands_Delivery_Status // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

