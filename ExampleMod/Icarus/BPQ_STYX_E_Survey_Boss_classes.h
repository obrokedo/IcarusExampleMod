// BlueprintGeneratedClass BPQ_STYX_E_Survey_Boss.BPQ_STYX_E_Survey_Boss_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_STYX_E_Survey_Boss_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_STYX_E_Survey_Boss.BPQ_STYX_E_Survey_Boss_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActorDeath(struct UActorState* ActorState); // Function BPQ_STYX_E_Survey_Boss.BPQ_STYX_E_Survey_Boss_C.OnActorDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_E_Survey_Boss.BPQ_STYX_E_Survey_Boss_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_E_Survey_Boss(int32_t EntryPoint); // Function BPQ_STYX_E_Survey_Boss.BPQ_STYX_E_Survey_Boss_C.ExecuteUbergraph_BPQ_STYX_E_Survey_Boss // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

