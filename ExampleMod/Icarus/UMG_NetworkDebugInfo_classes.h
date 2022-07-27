// WidgetBlueprintGeneratedClass UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C
// Size: 0x2b8 (Inherited: 0x260)
struct UUMG_NetworkDebugInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* BackupHost; // 0x268(0x08)
	struct UTextBlock* BackupHostName; // 0x270(0x08)
	struct UImage* divider; // 0x278(0x08)
	struct UImage* divider_2; // 0x280(0x08)
	struct UTextBlock* FailedUpdateStatus; // 0x288(0x08)
	struct UTextBlock* HeartbeatStatus; // 0x290(0x08)
	struct UTextBlock* HostName; // 0x298(0x08)
	struct UTextBlock* PingNumber; // 0x2a0(0x08)
	struct UTextBlock* SaveStatus; // 0x2a8(0x08)
	struct FTimerHandle TimerHandle; // 0x2b0(0x08)

	void StopTracking(); // Function UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C.StopTracking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartTracking(); // Function UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C.StartTracking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NetworkDebugInfo(struct FNetworkingStatus DebugInfo, bool Enabled); // Function UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C.NetworkDebugInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void TimerFired(); // Function UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C.TimerFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_NetworkDebugInfo(int32_t EntryPoint); // Function UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C.ExecuteUbergraph_UMG_NetworkDebugInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

