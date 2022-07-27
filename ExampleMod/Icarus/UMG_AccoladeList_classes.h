// WidgetBlueprintGeneratedClass UMG_AccoladeList.UMG_AccoladeList_C
// Size: 0x2a8 (Inherited: 0x260)
struct UUMG_AccoladeList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Angle_2; // 0x268(0x08)
	struct UTextBlock* TypeText; // 0x270(0x08)
	struct UUniformGridPanel* UniformGridPanel_671; // 0x278(0x08)
	struct FPlayerAccoladeCategoriesRowHandle Category; // 0x280(0x18)
	struct TArray<struct UUMG_PlayerAccolade_C*> AccoladeWidgets; // 0x298(0x10)

	void RefreshState(); // Function UMG_AccoladeList.UMG_AccoladeList_C.RefreshState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Init(struct FPlayerAccoladeCategoriesRowHandle Category, struct TArray<struct FAccoladesRowHandle>& Accolades); // Function UMG_AccoladeList.UMG_AccoladeList_C.Init // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_AccoladeList.UMG_AccoladeList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_AccoladeList(int32_t EntryPoint); // Function UMG_AccoladeList.UMG_AccoladeList_C.ExecuteUbergraph_UMG_AccoladeList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

