// WidgetBlueprintGeneratedClass CF_DebugEnvAudio.CF_DebugEnvAudio_C
// Size: 0x320 (Inherited: 0x2f0)
struct UCF_DebugEnvAudio_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct TSoftClassPtr<UObject> EnvAudioDebugWidgetClass; // 0x2f8(0x28)

	void OnLoaded_43E5AE7649FE7C4CA097089BA18583CB(struct UObject* Loaded); // Function CF_DebugEnvAudio.CF_DebugEnvAudio_C.OnLoaded_43E5AE7649FE7C4CA097089BA18583CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Execute(); // Function CF_DebugEnvAudio.CF_DebugEnvAudio_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_DebugEnvAudio(int32_t EntryPoint); // Function CF_DebugEnvAudio.CF_DebugEnvAudio_C.ExecuteUbergraph_CF_DebugEnvAudio // (Final|UbergraphFunction) // @ game+0x1be0000
};

