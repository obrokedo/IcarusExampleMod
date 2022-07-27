// BlueprintGeneratedClass BPQ_STYX_E_Survey.BPQ_STYX_E_Survey_C
// Size: 0x348 (Inherited: 0x320)
struct ABPQ_STYX_E_Survey_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FCharacterFlagsRowHandle Character Flag; // 0x330(0x18)

	bool Check(); // Function BPQ_STYX_E_Survey.BPQ_STYX_E_Survey_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_STYX_E_Survey.BPQ_STYX_E_Survey_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_E_Survey.BPQ_STYX_E_Survey_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function BPQ_STYX_E_Survey.BPQ_STYX_E_Survey_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_E_Survey(int32_t EntryPoint); // Function BPQ_STYX_E_Survey.BPQ_STYX_E_Survey_C.ExecuteUbergraph_BPQ_STYX_E_Survey // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

