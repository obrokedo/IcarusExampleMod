// WidgetBlueprintGeneratedClass UMG_MissionCompleteFaction.UMG_MissionCompleteFaction_C
// Size: 0x2a0 (Inherited: 0x260)
struct UUMG_MissionCompleteFaction_C : UUserWidget {
	struct UTextBlock* MissionName; // 0x260(0x08)
	struct UTextBlock* Status; // 0x268(0x08)
	struct UImage* SuccessImage; // 0x270(0x08)
	struct FSlateColor Color; // 0x278(0x28)

	void Update(bool Success, struct FFactionMissionsRowHandle FactionMission, struct FText ProspectName); // Function UMG_MissionCompleteFaction.UMG_MissionCompleteFaction_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

