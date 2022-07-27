// BlueprintGeneratedClass BPQ_STYX_A_Expedition_Kill_Komodos.BPQ_STYX_A_Expedition_Kill_Komodos_C
// Size: 0x34c (Inherited: 0x320)
struct ABPQ_STYX_A_Expedition_Kill_Komodos_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	float MaxCount; // 0x330(0x04)
	struct FAISetupRowHandle Creature; // 0x334(0x18)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_STYX_A_Expedition_Kill_Komodos.BPQ_STYX_A_Expedition_Kill_Komodos_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_STYX_A_Expedition_Kill_Komodos.BPQ_STYX_A_Expedition_Kill_Komodos_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_A_Expedition_Kill_Komodos.BPQ_STYX_A_Expedition_Kill_Komodos_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnCreatureDeath(struct AIcarusPlayerCharacter* Player, struct AIcarusActor* Causer, struct AActor* Creature); // Function BPQ_STYX_A_Expedition_Kill_Komodos.BPQ_STYX_A_Expedition_Kill_Komodos_C.OnCreatureDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_A_Expedition_Kill_Komodos(int32_t EntryPoint); // Function BPQ_STYX_A_Expedition_Kill_Komodos.BPQ_STYX_A_Expedition_Kill_Komodos_C.ExecuteUbergraph_BPQ_STYX_A_Expedition_Kill_Komodos // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

