// BlueprintGeneratedClass BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C
// Size: 0x353 (Inherited: 0x320)
struct ABPQ_Deploy_Count_ItemStatic_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	int32_t MaxCount; // 0x330(0x04)
	float Distance; // 0x334(0x04)
	struct FItemsStaticRowHandle ItemStaticRow; // 0x338(0x18)
	bool RequiresShelter; // 0x350(0x01)
	bool RequiresPower; // 0x351(0x01)
	bool AllowChecksAfterCompletion; // 0x352(0x01)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ExtraDeployableChecks(struct AIcarusActor* Deployable); // Function BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C.ExtraDeployableChecks // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckDeployables(); // Function BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C.CheckDeployables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ManualRunOperation(); // Function BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C.ManualRunOperation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Deploy_Count_ItemStatic(int32_t EntryPoint); // Function BPQ_Deploy_Count_ItemStatic.BPQ_Deploy_Count_ItemStatic_C.ExecuteUbergraph_BPQ_Deploy_Count_ItemStatic // (Final|UbergraphFunction) // @ game+0x1be0000
};

