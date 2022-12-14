// BlueprintGeneratedClass BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C
// Size: 0x158 (Inherited: 0x104)
struct UBP_UIProjectionComponent_Tooltip_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	bool IsAlive; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x118(0x08)
	bool SettingsEnable; // 0x120(0x01)
	bool StatAbilityEnable; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	float DotToSee; // 0x124(0x04)
	float RangeToDotSee; // 0x128(0x04)
	float RangeToCloseCircleSee; // 0x12c(0x04)
	bool DotSeeEnable; // 0x130(0x01)
	bool CircleCloseSee; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct AIcarusActor* CurrentItem; // 0x138(0x08)
	float RightOffset; // 0x140(0x04)
	float UpOffset; // 0x144(0x04)
	struct FMulticastInlineDelegate OnItemChanged; // 0x148(0x10)

	void GatherBounds(); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.GatherBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FVector GetProjectionLocation(); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.GetProjectionLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateWidget(); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateEnabled(); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.UpdateEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_IsAlive(); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.OnRep_IsAlive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetWidgetLocation(struct FVector& Location); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.GetWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_UIProjectionComponent_Tooltip(int32_t EntryPoint); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.ExecuteUbergraph_BP_UIProjectionComponent_Tooltip // (Final|UbergraphFunction) // @ game+0x1be0000
	void OnItemChanged__DelegateSignature(); // Function BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C.OnItemChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

