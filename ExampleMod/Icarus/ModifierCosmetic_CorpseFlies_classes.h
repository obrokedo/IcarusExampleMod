// BlueprintGeneratedClass ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C
// Size: 0x234 (Inherited: 0x200)
struct UModifierCosmetic_CorpseFlies_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct UFMODAudioComponent* AudioComponent; // 0x208(0x08)
	struct UFMODEvent* FMODEvent_Creature; // 0x210(0x08)
	struct USceneComponent* AttachToComponent; // 0x218(0x08)
	struct UNiagaraComponent* FliesNiagara; // 0x220(0x08)
	struct FVector CenterOfMass; // 0x228(0x0c)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_ModifierCosmetic_CorpseFlies(int32_t EntryPoint); // Function ModifierCosmetic_CorpseFlies.ModifierCosmetic_CorpseFlies_C.ExecuteUbergraph_ModifierCosmetic_CorpseFlies // (Final|UbergraphFunction) // @ game+0x1be0000
};

