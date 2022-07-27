// WidgetBlueprintGeneratedClass UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_SpacePlayerInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* CharacterLevelText; // 0x268(0x08)
	struct UTextBlock* PlayerLevelText; // 0x270(0x08)
	struct UTextBlock* PlayerName; // 0x278(0x08)
	struct USizeBox* PlayerNameBox; // 0x280(0x08)
	bool Initialised; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct AIcarusPlayerState* PlayerState; // 0x290(0x08)

	struct FText GetCharacterLevelText(); // Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.GetCharacterLevelText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SpacePlayerInfo(int32_t EntryPoint); // Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.ExecuteUbergraph_UMG_SpacePlayerInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

