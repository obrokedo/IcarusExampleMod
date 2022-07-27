// BlueprintGeneratedClass BP_HabAudio.BP_HabAudio_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_HabAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FMusicSubsystemConfig MusicConfig; // 0x230(0x08)
	bool HabAudioEnabled; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UFMODAudioComponent* DioramaAmbience; // 0x240(0x08)

	void ClearDioramaAmbience(bool IsEndingPlay); // Function BP_HabAudio.BP_HabAudio_C.ClearDioramaAmbience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetDioramaAmbience(struct UFMODEvent* FMODEvent); // Function BP_HabAudio.BP_HabAudio_C.SetDioramaAmbience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_HabAudio.BP_HabAudio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HabAudio.BP_HabAudio_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void SetHabAudioEnabled(bool Enabled); // Function BP_HabAudio.BP_HabAudio_C.SetHabAudioEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_HabAudio(int32_t EntryPoint); // Function BP_HabAudio.BP_HabAudio_C.ExecuteUbergraph_BP_HabAudio // (Final|UbergraphFunction) // @ game+0x1be0000
};

