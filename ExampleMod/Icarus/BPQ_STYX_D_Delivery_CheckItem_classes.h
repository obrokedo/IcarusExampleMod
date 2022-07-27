// BlueprintGeneratedClass BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C
// Size: 0x371 (Inherited: 0x320)
struct ABPQ_STYX_D_Delivery_CheckItem_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	float Timeout; // 0x330(0x04)
	float MaxTime; // 0x334(0x04)
	enum class EDeliveryItemStatus State; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct FStatsEnum> Required Stats; // 0x340(0x10)
	struct FItemsStaticRowHandle Items Static Row Handle; // 0x350(0x18)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x368(0x08)
	bool InvalidTemperature; // 0x370(0x01)

	void CheckPlayer(struct AIcarusPlayerCharacter* Player); // Function BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C.CheckPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunManualCheck(); // Function BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C.RunManualCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_D_Delivery_CheckItem(int32_t EntryPoint); // Function BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C.ExecuteUbergraph_BPQ_STYX_D_Delivery_CheckItem // (Final|UbergraphFunction) // @ game+0x1be0000
};

