// WidgetBlueprintGeneratedClass UMG_TerrainButton.UMG_TerrainButton_C
// Size: 0x339 (Inherited: 0x280)
struct UUMG_TerrainButton_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* Button_Animation; // 0x288(0x08)
	struct UButton* Button_85; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_2; // 0x2a0(0x08)
	struct UImage* Image_3; // 0x2a8(0x08)
	struct UImage* Image_136; // 0x2b0(0x08)
	struct UTextBlock* MapDescription; // 0x2b8(0x08)
	struct UTextBlock* MissionsComplete; // 0x2c0(0x08)
	struct UImage* ProspectImage; // 0x2c8(0x08)
	struct UTextBlock* TerrainName; // 0x2d0(0x08)
	struct FMulticastInlineDelegate TerrainSelected; // 0x2d8(0x10)
	struct FText Name; // 0x2e8(0x18)
	struct FText Description; // 0x300(0x18)
	struct UTexture2D* ProspectTexture; // 0x318(0x08)
	struct FTalentTreesRowHandle Terrain; // 0x320(0x18)
	bool Disabled; // 0x338(0x01)

	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_TerrainButton.UMG_TerrainButton_C.BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_TerrainButton.UMG_TerrainButton_C.BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_TerrainButton.UMG_TerrainButton_C.BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_TerrainButton.UMG_TerrainButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TerrainButton(int32_t EntryPoint); // Function UMG_TerrainButton.UMG_TerrainButton_C.ExecuteUbergraph_UMG_TerrainButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void TerrainSelected__DelegateSignature(struct FTalentArchetypesRowHandle Terrain); // Function UMG_TerrainButton.UMG_TerrainButton_C.TerrainSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

