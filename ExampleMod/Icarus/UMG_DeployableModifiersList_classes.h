// WidgetBlueprintGeneratedClass UMG_DeployableModifiersList.UMG_DeployableModifiersList_C
// Size: 0x2ca (Inherited: 0x260)
struct UUMG_DeployableModifiersList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* Connections; // 0x268(0x08)
	struct UImage* divider; // 0x270(0x08)
	struct UImage* divider_2; // 0x278(0x08)
	struct UUMG_ResourceConnectionState_C* Electricity; // 0x280(0x08)
	struct UUMG_ResourceConnectionState_C* Fuel; // 0x288(0x08)
	struct UVerticalBox* Modifiers; // 0x290(0x08)
	struct UVerticalBox* ResourceConnections; // 0x298(0x08)
	struct UUMG_FarmingShelterState_C* UMG_FarmingShelterState; // 0x2a0(0x08)
	struct UUMG_FarmingWaterState_C* UMG_FarmingWaterState; // 0x2a8(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; // 0x2b0(0x08)
	struct UUMG_ResourceConnectionState_C* Water; // 0x2b8(0x08)
	struct AActor* Linked Actor; // 0x2c0(0x08)
	bool ShowModifiers; // 0x2c8(0x01)
	bool HasContent; // 0x2c9(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_DeployableModifiersList.UMG_DeployableModifiersList_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct AActor* LinkedActor); // Function UMG_DeployableModifiersList.UMG_DeployableModifiersList_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DeployableModifiersList(int32_t EntryPoint); // Function UMG_DeployableModifiersList.UMG_DeployableModifiersList_C.ExecuteUbergraph_UMG_DeployableModifiersList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

