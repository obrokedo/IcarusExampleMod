// WidgetBlueprintGeneratedClass ModifierRow.ModifierRow_C
// Size: 0x298 (Inherited: 0x260)
struct UModifierRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* RowIcon; // 0x268(0x08)
	struct UTextBlock* RowText; // 0x270(0x08)
	struct FName RowName; // 0x278(0x08)
	struct FName DisplayName; // 0x280(0x08)
	struct FString RowNameStr; // 0x288(0x10)

	bool LessThan(struct UObject* Other); // Function ModifierRow.ModifierRow_C.LessThan // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void Set Row(struct FName RowName); // Function ModifierRow.ModifierRow_C.Set Row // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_ModifierRow(int32_t EntryPoint); // Function ModifierRow.ModifierRow_C.ExecuteUbergraph_ModifierRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

