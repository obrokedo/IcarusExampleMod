// WidgetBlueprintGeneratedClass UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C
// Size: 0x388 (Inherited: 0x260)
struct UUMG_LoadoutEnvirosuit_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* AllContent; // 0x268(0x08)
	struct UImage* corner; // 0x270(0x08)
	struct UImage* corner_2; // 0x278(0x08)
	struct UImage* corner_3; // 0x280(0x08)
	struct UImage* corner_4; // 0x288(0x08)
	struct UTextBlock* DefaultSuitName; // 0x290(0x08)
	struct UVerticalBox* DefaultSuitStats; // 0x298(0x08)
	struct UBorder* Empty; // 0x2a0(0x08)
	struct UBorder* Empty_2; // 0x2a8(0x08)
	struct UBorder* Hover; // 0x2b0(0x08)
	struct UImage* Icon; // 0x2b8(0x08)
	struct UImage* Icon_2; // 0x2c0(0x08)
	struct UOverlay* InValidSuit; // 0x2c8(0x08)
	struct UTextBlock* Name; // 0x2d0(0x08)
	struct UVerticalBox* Stats; // 0x2d8(0x08)
	struct UOverlay* ValidSuit; // 0x2e0(0x08)
	struct FItemData CurrentItem; // 0x2e8(0xa0)

	void OnCursorCleared(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.OnCursorCleared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCursorUpdated(struct FItemData Item); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.OnCursorUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateStats(struct FItemData Item); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.UpdateStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateState(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Update(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_LoadoutEnvirosuit(int32_t EntryPoint); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.ExecuteUbergraph_UMG_LoadoutEnvirosuit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

