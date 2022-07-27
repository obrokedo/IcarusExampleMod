// WidgetBlueprintGeneratedClass UMG_HabitatTerminal.UMG_HabitatTerminal_C
// Size: 0x4f8 (Inherited: 0x268)
struct UUMG_HabitatTerminal_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUMG_BasicButton_2_C* BackButton; // 0x270(0x08)
	struct UUMG_BasicButton_2_C* FiltersButton_2; // 0x278(0x08)
	struct UBorder* Loading; // 0x280(0x08)
	struct UNamedSlot* OutpostMenuSlot; // 0x288(0x08)
	struct UBorder* PlanetImageBG; // 0x290(0x08)
	struct UBorder* PlanetView; // 0x298(0x08)
	struct UUMG_BasicButton_2_C* PlanetViewButton; // 0x2a0(0x08)
	struct UNamedSlot* ProspectMenuSlot; // 0x2a8(0x08)
	struct UBorder* ProspectServerBrowser; // 0x2b0(0x08)
	struct UWidgetSwitcher* ProspectTypeSwitcher; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* Refresh; // 0x2c0(0x08)
	struct UUMG_LoadingIcon_C* RefreshLoading; // 0x2c8(0x08)
	struct UUMG_CloseButton_2_C* SelectedOutpostCloseButton; // 0x2d0(0x08)
	struct UBorder* SelectedOutpostOverlay; // 0x2d8(0x08)
	struct UUMG_OutpostSelected_C* SelectedOutpostScreen; // 0x2e0(0x08)
	struct UUMG_CloseButton_2_C* SelectedProspectCloseButton; // 0x2e8(0x08)
	struct UBorder* SelectedProspectOverlay; // 0x2f0(0x08)
	struct UUMG_PlanetProspectSelected_C* SelectedProspectScreen; // 0x2f8(0x08)
	struct UUMG_HostProspectsList_C* ServerBrowser; // 0x300(0x08)
	struct UUMG_BasicButton_2_C* ServerBrowserButton; // 0x308(0x08)
	struct UWidgetSwitcher* Switcher; // 0x310(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x318(0x08)
	struct UUMG_PlanetProspectView_C* UMG_PlanetProspectView; // 0x320(0x08)
	struct FMulticastInlineDelegate ProspectsUpdated; // 0x328(0x10)
	struct FFProspectServerInfo Working Prospect Info; // 0x338(0x198)
	struct TArray<struct UFMODEvent*> BriefingAudio; // 0x4d0(0x10)
	struct FFMODEventInstance BriefingAudioEvent; // 0x4e0(0x08)
	struct FMulticastInlineDelegate CloseTerminal; // 0x4e8(0x10)

	bool ResetProspectView(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ResetProspectView // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SwitchToHostOutpost(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.SwitchToHostOutpost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SwitchToJoin(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.SwitchToJoin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SwitchToHost(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.SwitchToHost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSessions(struct TArray<struct FFProspectServerInfo>& ServerSessions); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.GetSessions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Log(struct FString Description); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnOpened(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectSelected(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectClosed(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void OnProspectExpired(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnProspectExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RefreshSessions(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.RefreshSessions // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClaimAndLaunchProspect(struct FFProspectServerInfo Prospect Info); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ClaimAndLaunchProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void JoinProspect(struct FFProspectServerInfo ProspectInfo); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.JoinProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectModelViewChanged(struct UTalentControllerComponent* Controller); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectModelViewChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TalentProspectSelected(struct FFProspectServerInfo ProspectInfo); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.TalentProspectSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupProspectTalentScreen(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.SetupProspectTalentScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideCloseButton(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.HideCloseButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowCloseButton(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ShowCloseButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Opened(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Opened // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutpostModelViewChanged(struct UTalentControllerComponent* Controller); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OutpostModelViewChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TalentOutpostSelected(struct FFProspectServerInfo ProspectInfo); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.TalentOutpostSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutpostSelected(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OutpostSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutpostClosed(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OutpostClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowCloseButton_Event_1(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ShowCloseButton_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectListUpdated(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectListUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowOutpostCloseButton(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ShowOutpostCloseButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_HabitatTerminal_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__UMG_HabitatTerminal_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_HabitatTerminal(int32_t EntryPoint); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ExecuteUbergraph_UMG_HabitatTerminal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void CloseTerminal__DelegateSignature(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.CloseTerminal__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectsUpdated__DelegateSignature(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

