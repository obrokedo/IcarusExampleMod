// WidgetBlueprintGeneratedClass CF_PrintWorldStats.CF_PrintWorldStats_C
// Size: 0x348 (Inherited: 0x2f0)
struct UCF_PrintWorldStats_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct TMap<struct FStatsRowHandle, int32_t> WorldStats; // 0x2f8(0x50)

	void Execute(); // Function CF_PrintWorldStats.CF_PrintWorldStats_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_PrintWorldStats(int32_t EntryPoint); // Function CF_PrintWorldStats.CF_PrintWorldStats_C.ExecuteUbergraph_CF_PrintWorldStats // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

