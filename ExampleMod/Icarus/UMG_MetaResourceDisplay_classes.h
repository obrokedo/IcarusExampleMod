// WidgetBlueprintGeneratedClass UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C
// Size: 0x300 (Inherited: 0x280)
struct UUMG_MetaResourceDisplay_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UHorizontalBox* Currencies; // 0x288(0x08)
	bool Initialised; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct TMap<struct FMetaCurrencyRowHandle, struct UUMG_WorkshopCostLarge_C*> Row Handle; // 0x298(0x50)
	bool UseOverride; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct TArray<struct FMetaResource> OverrideResources; // 0x2f0(0x10)

	void Update(); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_MetaResourceDisplay(int32_t EntryPoint); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.ExecuteUbergraph_UMG_MetaResourceDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

