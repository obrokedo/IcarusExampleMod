// BlueprintGeneratedClass BPQ_Omni_OLY_Research_Craft_Weapons.BPQ_Omni_OLY_Research_Craft_Weapons_C
// Size: 0x348 (Inherited: 0x320)
struct ABPQ_Omni_OLY_Research_Craft_Weapons_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FCharacterFlagsRowHandle Character Flag; // 0x330(0x18)

	bool Check(); // Function BPQ_Omni_OLY_Research_Craft_Weapons.BPQ_Omni_OLY_Research_Craft_Weapons_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_Omni_OLY_Research_Craft_Weapons.BPQ_Omni_OLY_Research_Craft_Weapons_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_Omni_OLY_Research_Craft_Weapons.BPQ_Omni_OLY_Research_Craft_Weapons_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void GrantFlag(struct FConnectedPlayer& ConnectedPlayer); // Function BPQ_Omni_OLY_Research_Craft_Weapons.BPQ_Omni_OLY_Research_Craft_Weapons_C.GrantFlag // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Omni_OLY_Research_Craft_Weapons(int32_t EntryPoint); // Function BPQ_Omni_OLY_Research_Craft_Weapons.BPQ_Omni_OLY_Research_Craft_Weapons_C.ExecuteUbergraph_BPQ_Omni_OLY_Research_Craft_Weapons // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

