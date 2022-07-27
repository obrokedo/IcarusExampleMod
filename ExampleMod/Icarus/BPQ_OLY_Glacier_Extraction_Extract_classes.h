// BlueprintGeneratedClass BPQ_OLY_Glacier_Extraction_Extract.BPQ_OLY_Glacier_Extraction_Extract_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_OLY_Glacier_Extraction_Extract_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_OLY_Glacier_Extraction_Extract.BPQ_OLY_Glacier_Extraction_Extract_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Glacier_Extraction_Extract.BPQ_OLY_Glacier_Extraction_Extract_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnItemShifted(struct AIcarusPlayerCharacter* Player, struct UInventory* SourceInventory, int32_t SourceLocation, struct UInventory* DestinationInventory, int32_t DestinationLocation, int32_t Amount); // Function BPQ_OLY_Glacier_Extraction_Extract.BPQ_OLY_Glacier_Extraction_Extract_C.OnItemShifted // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Glacier_Extraction_Extract(int32_t EntryPoint); // Function BPQ_OLY_Glacier_Extraction_Extract.BPQ_OLY_Glacier_Extraction_Extract_C.ExecuteUbergraph_BPQ_OLY_Glacier_Extraction_Extract // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

