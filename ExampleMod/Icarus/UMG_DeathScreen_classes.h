// WidgetBlueprintGeneratedClass UMG_DeathScreen.UMG_DeathScreen_C
// Size: 0x2f4 (Inherited: 0x260)
struct UUMG_DeathScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_Keybind_C* HoldFKeybind; // 0x268(0x08)
	struct URetainerBox* HoldRespawnRetainer; // 0x270(0x08)
	struct URetainerBox* MissionTimer; // 0x278(0x08)
	struct UTextBlock* PlayerName; // 0x280(0x08)
	struct URetainerBox* RespawnCountRetainer; // 0x288(0x08)
	struct UTextBlock* RespawnCountText; // 0x290(0x08)
	struct UTextBlock* respawntext; // 0x298(0x08)
	struct URetainerBox* TitleRetainer; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_GiveUp; // 0x2a8(0x08)
	struct UUMG_Chatbox_C* UMG_Chatbox; // 0x2b0(0x08)
	struct UIcarusCompassWidget_C* UMG_IcarusCompassWidget; // 0x2b8(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; // 0x2c0(0x08)
	struct UUMG_MissionTimer_C* UMG_MissionTimer; // 0x2c8(0x08)
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt_C_61; // 0x2d0(0x08)
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt_C_63; // 0x2d8(0x08)
	float RespawnTimer; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FTimerHandle Timer; // 0x2e8(0x08)
	int32_t RespawnsRemaining; // 0x2f0(0x04)

	void UpdateRespawnText(); // Function UMG_DeathScreen.UMG_DeathScreen_C.UpdateRespawnText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetRespawnButton(); // Function UMG_DeathScreen.UMG_DeathScreen_C.ResetRespawnButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_DeathScreen.UMG_DeathScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DeathScreen(int32_t EntryPoint); // Function UMG_DeathScreen.UMG_DeathScreen_C.ExecuteUbergraph_UMG_DeathScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

