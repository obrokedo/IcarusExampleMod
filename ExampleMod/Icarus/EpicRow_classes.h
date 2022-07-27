// WidgetBlueprintGeneratedClass EpicRow.EpicRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UEpicRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText SetupName; // 0x270(0x18)
	struct FEpicCreaturesRowHandle EpicName; // 0x288(0x18)

	void AddAI(struct FText RowName); // Function EpicRow.EpicRow_C.AddAI // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_EpicRow(int32_t EntryPoint); // Function EpicRow.EpicRow_C.ExecuteUbergraph_EpicRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

