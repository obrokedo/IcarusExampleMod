// WidgetBlueprintGeneratedClass UMG_Respec_Purchase.UMG_Respec_Purchase_C
// Size: 0x330 (Inherited: 0x260)
struct UUMG_Respec_Purchase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Amount; // 0x268(0x08)
	struct UUMG_IconTextButton_C* Cancel; // 0x270(0x08)
	struct UUMG_IconTextButton_C* Confirm; // 0x278(0x08)
	struct UTextBlock* CreditsCurrency; // 0x280(0x08)
	struct UImage* Image; // 0x288(0x08)
	struct UImage* Image_2; // 0x290(0x08)
	struct UImage* Image_3; // 0x298(0x08)
	struct UImage* Image_4; // 0x2a0(0x08)
	struct UImage* Image_5; // 0x2a8(0x08)
	struct UImage* Image_97; // 0x2b0(0x08)
	struct UImage* Image_178; // 0x2b8(0x08)
	struct UImage* Image_342; // 0x2c0(0x08)
	struct UTextBlock* IndividualCost; // 0x2c8(0x08)
	struct UUMG_ButtonIcon_C* LeftButton; // 0x2d0(0x08)
	struct URichTextBlock* RichText; // 0x2d8(0x08)
	struct UUMG_ButtonIcon_C* RightButton_2; // 0x2e0(0x08)
	struct UEditableText* SelectedAmount; // 0x2e8(0x08)
	struct UTextBlock* SummedCurrency; // 0x2f0(0x08)
	struct UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay; // 0x2f8(0x08)
	int32_t Multiplier; // 0x300(0x04)
	struct FCurrencyConversionsRowHandle Currency_Conversion; // 0x304(0x18)
	bool Initialised; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct FMulticastInlineDelegate PurchaseComplete; // 0x320(0x10)

	void FetchCurrentCreditCount(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.FetchCurrentCreditCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCount(int32_t Count); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.UpdateCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_Respec_Purchase_RightButton_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.BndEvt__UMG_Respec_Purchase_RightButton_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_Respec_Purchase_LeftButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.BndEvt__UMG_Respec_Purchase_LeftButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_Respec_Purchase_SelectedAmount_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.BndEvt__UMG_Respec_Purchase_SelectedAmount_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MetaResourcesUpdated(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.MetaResourcesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_Respec_Purchase_Confirm_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.BndEvt__UMG_Respec_Purchase_Confirm_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExchangeCurrencyResult(bool Success, struct TArray<struct FMetaResource>& ResourceDeltas); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.ExchangeCurrencyResult // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnPurchaseComplete(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.OnPurchaseComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_Respec_Purchase_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.BndEvt__UMG_Respec_Purchase_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Back(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Success(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_Respec_Purchase(int32_t EntryPoint); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.ExecuteUbergraph_UMG_Respec_Purchase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void PurchaseComplete__DelegateSignature(); // Function UMG_Respec_Purchase.UMG_Respec_Purchase_C.PurchaseComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

