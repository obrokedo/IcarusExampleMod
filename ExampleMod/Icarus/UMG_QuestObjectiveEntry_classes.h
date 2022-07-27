// WidgetBlueprintGeneratedClass UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C
// Size: 0x2cc (Inherited: 0x260)
struct UUMG_QuestObjectiveEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CompleteAnimationCollapse; // 0x268(0x08)
	struct UWidgetAnimation* Reveal; // 0x270(0x08)
	struct UWidgetAnimation* CompleteAnimation; // 0x278(0x08)
	struct UBorder* Complete; // 0x280(0x08)
	struct UBorder* CompletedBox; // 0x288(0x08)
	struct UImage* glow; // 0x290(0x08)
	struct UImage* Gradient; // 0x298(0x08)
	struct UVerticalBox* MainVertBox; // 0x2a0(0x08)
	struct URichTextBlock* ObjectiveTextBlock; // 0x2a8(0x08)
	struct UBorder* TintingBorder; // 0x2b0(0x08)
	bool CachedComplete; // 0x2b8(0x01)
	bool CachedParentComplete; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct AQuest* CachedQuest; // 0x2c0(0x08)
	int32_t VisibleState; // 0x2c8(0x04)

	void Finished_FA89F8484A04F5B013BEE5B07F351D47(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_FA89F8484A04F5B013BEE5B07F351D47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Finished_54BD1BA940CD590F99FE70B029DA39D5(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_54BD1BA940CD590F99FE70B029DA39D5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Finished_E810283B4FB239E8364D2C8C80E2C89B(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_E810283B4FB239E8364D2C8C80E2C89B // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Finished_150A755A4DAA0F7702CFB689A47AFB20(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_150A755A4DAA0F7702CFB689A47AFB20 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct FText Text, bool Complete, bool ParentComplete, bool SubObjective); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BP_OnEntryReleased(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_QuestObjectiveEntry(int32_t EntryPoint); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.ExecuteUbergraph_UMG_QuestObjectiveEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

