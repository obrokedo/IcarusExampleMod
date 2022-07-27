// BlueprintGeneratedClass BPQ_OLY_Riverlands_Stockpile_2_List.BPQ_OLY_Riverlands_Stockpile_2_List_C
// Size: 0x348 (Inherited: 0x320)
struct ABPQ_OLY_Riverlands_Stockpile_2_List_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool corpsefound; // 0x330(0x01)
	bool headfoundplayer; // 0x331(0x01)
	char pad_332[0x2]; // 0x332(0x02)
	float lastHeadSpawnedTime; // 0x334(0x04)
	struct TArray<struct FStatsEnum> Required Stats; // 0x338(0x10)

	bool Check(); // Function BPQ_OLY_Riverlands_Stockpile_2_List.BPQ_OLY_Riverlands_Stockpile_2_List_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_OLY_Riverlands_Stockpile_2_List.BPQ_OLY_Riverlands_Stockpile_2_List_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Riverlands_Stockpile_2_List(int32_t EntryPoint); // Function BPQ_OLY_Riverlands_Stockpile_2_List.BPQ_OLY_Riverlands_Stockpile_2_List_C.ExecuteUbergraph_BPQ_OLY_Riverlands_Stockpile_2_List // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

