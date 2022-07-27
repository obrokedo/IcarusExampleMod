// WidgetBlueprintGeneratedClass UMG_ProspectObjectiveList.UMG_ProspectObjectiveList_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_ProspectObjectiveList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* ObjectivesList; // 0x268(0x08)
	struct FFactionMissionsRowHandle Faction Mission; // 0x270(0x18)

	void InitObjectiveList(struct FFactionMissionsRowHandle FactionMission); // Function UMG_ProspectObjectiveList.UMG_ProspectObjectiveList_C.InitObjectiveList // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_ProspectObjectiveList.UMG_ProspectObjectiveList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ProspectObjectiveList(int32_t EntryPoint); // Function UMG_ProspectObjectiveList.UMG_ProspectObjectiveList_C.ExecuteUbergraph_UMG_ProspectObjectiveList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

