// BlueprintGeneratedClass BPQ_Common_Deliver.BPQ_Common_Deliver_C
// Size: 0x360 (Inherited: 0x320)
struct ABPQ_Common_Deliver_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FItemsStaticRowHandle Required_Item; // 0x330(0x18)
	int32_t Required_Number; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FString Container_Name; // 0x350(0x10)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_Common_Deliver.BPQ_Common_Deliver_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ItemCheck(); // Function BPQ_Common_Deliver.BPQ_Common_Deliver_C.ItemCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_Common_Deliver.BPQ_Common_Deliver_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_Common_Deliver.BPQ_Common_Deliver_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Common_Deliver(int32_t EntryPoint); // Function BPQ_Common_Deliver.BPQ_Common_Deliver_C.ExecuteUbergraph_BPQ_Common_Deliver // (Final|UbergraphFunction) // @ game+0x1be0000
};

