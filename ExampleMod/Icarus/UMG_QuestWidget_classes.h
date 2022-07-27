// WidgetBlueprintGeneratedClass UMG_QuestWidget.UMG_QuestWidget_C
// Size: 0x2a0 (Inherited: 0x268)
struct UUMG_QuestWidget_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* IconImage; // 0x270(0x08)
	struct UScaleBox* IconScaleBox; // 0x278(0x08)
	struct FVector WorldSpaceCenter; // 0x280(0x0c)
	struct FVector WorldSpaceSize; // 0x28c(0x0c)
	struct UObject* QuestRef; // 0x298(0x08)

	void Construct(); // Function UMG_QuestWidget.UMG_QuestWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_QuestWidget(int32_t EntryPoint); // Function UMG_QuestWidget.UMG_QuestWidget_C.ExecuteUbergraph_UMG_QuestWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

