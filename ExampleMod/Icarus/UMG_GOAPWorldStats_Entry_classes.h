// WidgetBlueprintGeneratedClass UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_GOAPWorldStats_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Text_Count; // 0x268(0x08)
	struct UTextBlock* Text_Name; // 0x270(0x08)
	struct AIcarusNPCGOAPCharacter* CharacterBP; // 0x278(0x08)
	struct FAISetupRowHandle RowHandle; // 0x280(0x18)

	void UpdateName(); // Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.UpdateName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCount(); // Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.UpdateCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_GOAPWorldStats_Entry(int32_t EntryPoint); // Function UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C.ExecuteUbergraph_UMG_GOAPWorldStats_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

