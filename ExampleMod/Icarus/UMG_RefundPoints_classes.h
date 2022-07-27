// WidgetBlueprintGeneratedClass UMG_RefundPoints.UMG_RefundPoints_C
// Size: 0x2e4 (Inherited: 0x260)
struct UUMG_RefundPoints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* ColourBorder; // 0x268(0x08)
	struct UTextBlock* PointsText; // 0x270(0x08)
	struct UImage* RetrainingIcon; // 0x278(0x08)
	struct UImage* RetrainingIcon_2; // 0x280(0x08)
	struct UButton* RetrainingPointsButton; // 0x288(0x08)
	struct FCurrencyConversionsRowHandle ConverstionRow; // 0x290(0x18)
	struct UUMG_ConfirmationPopup_C* ConfirmationPopup; // 0x2a8(0x08)
	bool Initialised; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FLinearColor TextAndIconColour; // 0x2b4(0x10)
	struct FLinearColor White; // 0x2c4(0x10)
	struct FLinearColor Orange; // 0x2d4(0x10)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RefundPoints.UMG_RefundPoints_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_RefundPoints.UMG_RefundPoints_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MetaResourcesUpdate(); // Function UMG_RefundPoints.UMG_RefundPoints_C.MetaResourcesUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_RefundPoints.UMG_RefundPoints_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnPurchaseComplete(); // Function UMG_RefundPoints.UMG_RefundPoints_C.OnPurchaseComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_RefundPoints.UMG_RefundPoints_C.BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UMG_RefundPoints.UMG_RefundPoints_C.BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function UMG_RefundPoints.UMG_RefundPoints_C.BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_RefundPoints(int32_t EntryPoint); // Function UMG_RefundPoints.UMG_RefundPoints_C.ExecuteUbergraph_UMG_RefundPoints // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

