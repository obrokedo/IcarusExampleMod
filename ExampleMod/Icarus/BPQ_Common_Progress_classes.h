// BlueprintGeneratedClass BPQ_Common_Progress.BPQ_Common_Progress_C
// Size: 0x340 (Inherited: 0x320)
struct ABPQ_Common_Progress_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool NearbyPlayers; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t NumberOfPlayers; // 0x334(0x04)
	struct FTimerHandle Event; // 0x338(0x08)

	float GetMaxTime(); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.GetMaxTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void PlayersLeftArea(); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.PlayersLeftArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void CheckPlayers(); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.CheckPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Common_Progress(int32_t EntryPoint); // Function BPQ_Common_Progress.BPQ_Common_Progress_C.ExecuteUbergraph_BPQ_Common_Progress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

