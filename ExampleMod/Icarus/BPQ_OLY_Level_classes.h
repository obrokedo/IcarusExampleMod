// BlueprintGeneratedClass BPQ_OLY_Level.BPQ_OLY_Level_C
// Size: 0x331 (Inherited: 0x320)
struct ABPQ_OLY_Level_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool HasPoints; // 0x330(0x01)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_OLY_Level.BPQ_OLY_Level_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_OLY_Level.BPQ_OLY_Level_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Level.BPQ_OLY_Level_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Level(int32_t EntryPoint); // Function BPQ_OLY_Level.BPQ_OLY_Level_C.ExecuteUbergraph_BPQ_OLY_Level // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

