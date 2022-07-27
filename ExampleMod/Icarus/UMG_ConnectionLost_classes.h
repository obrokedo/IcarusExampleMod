// WidgetBlueprintGeneratedClass UMG_ConnectionLost.UMG_ConnectionLost_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_ConnectionLost_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ConnectionLostAnimation; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UImage* Icon_2; // 0x278(0x08)
	struct FTimerHandle TimerHandle; // 0x280(0x08)

	void UpdateConnectionLost(); // Function UMG_ConnectionLost.UMG_ConnectionLost_C.UpdateConnectionLost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_ConnectionLost.UMG_ConnectionLost_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ConnectionLost(int32_t EntryPoint); // Function UMG_ConnectionLost.UMG_ConnectionLost_C.ExecuteUbergraph_UMG_ConnectionLost // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

