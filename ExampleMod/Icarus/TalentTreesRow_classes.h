// WidgetBlueprintGeneratedClass TalentTreesRow.TalentTreesRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UTalentTreesRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText NameText; // 0x270(0x18)
	struct FTalentTreesRowHandle TalentTreesRowHandle; // 0x288(0x18)

	void SetTalentTreeRow(struct FTalentTreesRowHandle TalentTreesRowHandle); // Function TalentTreesRow.TalentTreesRow_C.SetTalentTreeRow // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_TalentTreesRow(int32_t EntryPoint); // Function TalentTreesRow.TalentTreesRow_C.ExecuteUbergraph_TalentTreesRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

