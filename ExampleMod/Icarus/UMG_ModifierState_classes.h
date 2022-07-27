// WidgetBlueprintGeneratedClass UMG_ModifierState.UMG_ModifierState_C
// Size: 0x538 (Inherited: 0x260)
struct UUMG_ModifierState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AddBuff; // 0x268(0x08)
	struct UWidgetAnimation* Pulse; // 0x270(0x08)
	struct UBorder* Background; // 0x278(0x08)
	struct UBorder* Icon; // 0x280(0x08)
	struct UTextBlock* Stack; // 0x288(0x08)
	struct UBorder* StackContainer; // 0x290(0x08)
	struct UTextBlock* Timer; // 0x298(0x08)
	struct UBorder* TimerContainer; // 0x2a0(0x08)
	struct TArray<struct UModifierStateComponent*> StateList; // 0x2a8(0x10)
	struct FModifierStateData ModifierRow; // 0x2b8(0x240)
	bool Initialised; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	int32_t StackCount; // 0x4fc(0x04)
	bool UpdateTrigger; // 0x500(0x01)
	bool Hovered; // 0x501(0x01)
	char pad_502[0x6]; // 0x502(0x06)
	struct UTexture2D* BackgroundImage; // 0x508(0x08)
	struct FName RowName; // 0x510(0x08)
	float ModifierTime; // 0x518(0x04)
	bool AlwaysHideTimer; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct FText NewVar_1; // 0x520(0x18)

	struct FText GetTimer(); // Function UMG_ModifierState.UMG_ModifierState_C.GetTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Construct(); // Function UMG_ModifierState.UMG_ModifierState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ModifierState.UMG_ModifierState_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void AddModifier(struct UModifierStateComponent* Modifier); // Function UMG_ModifierState.UMG_ModifierState_C.AddModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_ModifierState.UMG_ModifierState_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_ModifierState.UMG_ModifierState_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG_ModifierState.UMG_ModifierState_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void RemoveModifier(struct UModifierStateComponent* Modifier); // Function UMG_ModifierState.UMG_ModifierState_C.RemoveModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetTimerVisibility(enum class ESlateVisibility InVisibility); // Function UMG_ModifierState.UMG_ModifierState_C.SetTimerVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LifetimeUpdated(); // Function UMG_ModifierState.UMG_ModifierState_C.LifetimeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ModifierState(int32_t EntryPoint); // Function UMG_ModifierState.UMG_ModifierState_C.ExecuteUbergraph_UMG_ModifierState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

