// WidgetBlueprintGeneratedClass CF_DebugPlayerTracker.CF_DebugPlayerTracker_C
// Size: 0x320 (Inherited: 0x2f0)
struct UCF_DebugPlayerTracker_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct TSoftClassPtr<UObject> PlayerTrackerClass; // 0x2f8(0x28)

	void OnLoaded_93C6CF1F4DFDAC01C83D819E2D247DD3(struct UObject* Loaded); // Function CF_DebugPlayerTracker.CF_DebugPlayerTracker_C.OnLoaded_93C6CF1F4DFDAC01C83D819E2D247DD3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Execute(); // Function CF_DebugPlayerTracker.CF_DebugPlayerTracker_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_DebugPlayerTracker(int32_t EntryPoint); // Function CF_DebugPlayerTracker.CF_DebugPlayerTracker_C.ExecuteUbergraph_CF_DebugPlayerTracker // (Final|UbergraphFunction) // @ game+0x1be0000
};

