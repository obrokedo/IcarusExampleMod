// WidgetBlueprintGeneratedClass UMG_QuestObjectiveList.UMG_QuestObjectiveList_C
// Size: 0x358 (Inherited: 0x260)
struct UUMG_QuestObjectiveList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* QuestCompleteSwap; // 0x268(0x08)
	struct UImage* divider; // 0x270(0x08)
	struct UImage* divider_2; // 0x278(0x08)
	struct UProgressBar* FactionOverallProgress; // 0x280(0x08)
	struct UTextBlock* MissionTitle; // 0x288(0x08)
	struct UVerticalBox* QuestList; // 0x290(0x08)
	struct UTextBlock* QuestName; // 0x298(0x08)
	struct URetainerBox* QuestNameRetainer; // 0x2a0(0x08)
	struct UBorder* Questsborder; // 0x2a8(0x08)
	struct UVerticalBox* QuestVertbox; // 0x2b0(0x08)
	struct UUMG_AudioWaveform_C* UMG_AudioWaveform; // 0x2b8(0x08)
	struct FText MissionName; // 0x2c0(0x18)
	bool Initialise; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FText QuestText; // 0x2e0(0x18)
	struct TArray<struct UUMG_QuestObjectiveEntry_C*> ObjectiveWidgets; // 0x2f8(0x10)
	struct TMap<struct AQuest*, struct UUMG_QuestObjectiveEntry_C*> WidgetMap; // 0x308(0x50)

	void UpdateObjectiveStates(struct TArray<struct FQuestDescription>& QuestDescriptions); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.UpdateObjectiveStates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateObjectiveCount(struct TArray<struct FQuestDescription>& QuestDescriptions); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.UpdateObjectiveCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_QuestObjectiveList(int32_t EntryPoint); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.ExecuteUbergraph_UMG_QuestObjectiveList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

