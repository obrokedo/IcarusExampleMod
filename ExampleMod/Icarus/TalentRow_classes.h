// WidgetBlueprintGeneratedClass TalentRow.TalentRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UTalentRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText NameText; // 0x270(0x18)
	struct FTalentsRowHandle Talent; // 0x288(0x18)

	void SetTalentRow(struct FTalentsRowHandle TalentRowHandle); // Function TalentRow.TalentRow_C.SetTalentRow // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_TalentRow(int32_t EntryPoint); // Function TalentRow.TalentRow_C.ExecuteUbergraph_TalentRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

