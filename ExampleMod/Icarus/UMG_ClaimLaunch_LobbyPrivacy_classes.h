// WidgetBlueprintGeneratedClass UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C
// Size: 0x350 (Inherited: 0x2f0)
struct UUMG_ClaimLaunch_LobbyPrivacy_C : UUMG_ArrowSelectionWidget_Text_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	enum class ELobbyPrivacy DefaultSelection; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct TMap<enum class ELobbyPrivacy, struct FText> LobbyPrivacyTexts; // 0x300(0x50)

	void GetLobbyPrivacy(enum class ELobbyPrivacy& LobbyPrivacy); // Function UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C.GetLobbyPrivacy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy(int32_t EntryPoint); // Function UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C.ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

