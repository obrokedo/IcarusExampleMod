// BlueprintGeneratedClass BPQ_STYX_D_Expedition_Clear_Area.BPQ_STYX_D_Expedition_Clear_Area_C
// Size: 0x334 (Inherited: 0x320)
struct ABPQ_STYX_D_Expedition_Clear_Area_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	int32_t Creature to Kill Count; // 0x330(0x04)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_STYX_D_Expedition_Clear_Area.BPQ_STYX_D_Expedition_Clear_Area_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_STYX_D_Expedition_Clear_Area.BPQ_STYX_D_Expedition_Clear_Area_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_D_Expedition_Clear_Area.BPQ_STYX_D_Expedition_Clear_Area_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void CreatureKilled(struct AIcarusPlayerCharacter* Player, struct AIcarusActor* Causer, struct AActor* Creature); // Function BPQ_STYX_D_Expedition_Clear_Area.BPQ_STYX_D_Expedition_Clear_Area_C.CreatureKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_D_Expedition_Clear_Area(int32_t EntryPoint); // Function BPQ_STYX_D_Expedition_Clear_Area.BPQ_STYX_D_Expedition_Clear_Area_C.ExecuteUbergraph_BPQ_STYX_D_Expedition_Clear_Area // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

