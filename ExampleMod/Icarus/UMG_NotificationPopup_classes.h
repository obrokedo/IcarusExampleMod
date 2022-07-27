// WidgetBlueprintGeneratedClass UMG_NotificationPopup.UMG_NotificationPopup_C
// Size: 0x3e9 (Inherited: 0x260)
struct UUMG_NotificationPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct FNotification Notification; // 0x268(0x78)
	struct FMulticastInlineDelegate Close; // 0x2e0(0x10)
	struct FProspectCompleteInformation Prospect Information; // 0x2f0(0xf8)
	bool ShowCloseButton; // 0x3e8(0x01)

	void UpdateAttachments(); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.UpdateAttachments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetLoadingWidget(struct UWidget*& Loading); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.GetLoadingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateProspect(); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.UpdateProspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Update(); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFail_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.OnFail_5E3F90A94463A9573E2CEFBB8066B33B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Show(struct FNotification Notification); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Claim Mail Items(); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.Claim Mail Items // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Delete Mail(); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.Delete Mail // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayShowEffects(); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.PlayShowEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_NotificationPopup(int32_t EntryPoint); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.ExecuteUbergraph_UMG_NotificationPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void Close__DelegateSignature(); // Function UMG_NotificationPopup.UMG_NotificationPopup_C.Close__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

