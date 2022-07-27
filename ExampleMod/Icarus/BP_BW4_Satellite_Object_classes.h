// BlueprintGeneratedClass BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C
// Size: 0x480 (Inherited: 0x301)
struct ABP_BW4_Satellite_Object_C : ABP_WorldObject_C {
	char pad_301[0x7]; // 0x301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UIcarusMapIconComponent* IcarusMapIcon; // 0x310(0x08)
	struct UInventoryComponent* Inventory; // 0x318(0x08)
	struct UFMODAudioComponent* DefenceAudioComponent; // 0x320(0x08)
	struct USphereComponent* EnterAudioTrigger; // 0x328(0x08)
	struct UNiagaraComponent* NS_FactionSatellite_V2_FX1; // 0x330(0x08)
	struct UNiagaraComponent* NS_FactionSatellite_V2_FX; // 0x338(0x08)
	struct UNiagaraComponent* NS_FactionSatellite_FX; // 0x340(0x08)
	struct UPointLightComponent* PointLight5; // 0x348(0x08)
	struct UPointLightComponent* PointLight4; // 0x350(0x08)
	struct UStaticMeshComponent* Cylinder1; // 0x358(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x360(0x08)
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; // 0x368(0x08)
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; // 0x370(0x08)
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; // 0x378(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_012; // 0x380(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_011; // 0x388(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_010; // 0x390(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_09; // 0x398(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_06; // 0x3a0(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_02; // 0x3a8(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_01; // 0x3b0(0x08)
	struct UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Chute2; // 0x3b8(0x08)
	struct UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Chute; // 0x3c0(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_08; // 0x3c8(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_07; // 0x3d0(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_Stone_01; // 0x3d8(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_04; // 0x3e0(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_03; // 0x3e8(0x08)
	struct UStaticMeshComponent* SM_ROCK_CF_SML_05; // 0x3f0(0x08)
	struct UPointLightComponent* PointLight3; // 0x3f8(0x08)
	struct UPointLightComponent* PointLight2; // 0x400(0x08)
	struct UPointLightComponent* PointLight; // 0x408(0x08)
	struct UPointLightComponent* PointLight1; // 0x410(0x08)
	struct USkeletalMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_CoreInt; // 0x418(0x08)
	struct UStaticMeshComponent* SM_DPS_Satellite_INARIS_Crashed_CF_Ground; // 0x420(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x428(0x08)
	float FlickerTimeline_NewTrack_0_5897F4764DDE427A04175AB479BDCF16; // 0x430(0x04)
	enum class ETimelineDirection FlickerTimeline__Direction_5897F4764DDE427A04175AB479BDCF16; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct UTimelineComponent* FlickerTimeline; // 0x438(0x08)
	struct UMaterialInstanceDynamic* Core Material; // 0x440(0x08)
	struct UMaterialInstanceDynamic* Material1; // 0x448(0x08)
	struct UMaterialInstanceDynamic* Material2; // 0x450(0x08)
	struct AIcarusPlayerCharacter* LastInteractedPlayer; // 0x458(0x08)
	struct UFMODEvent* FMODEvent_ArmInteraction; // 0x460(0x08)
	struct UFMODEvent* FMODEvent_DefenseTimerEnded; // 0x468(0x08)
	struct UFMODEvent* FMODEvent_NeedleRemoved; // 0x470(0x08)
	bool IsArmed; // 0x478(0x01)
	bool DefendComplete; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	int32_t StatUID; // 0x47c(0x04)

	void PlaySFX(struct UFMODEvent* FMODEvent); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.PlaySFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateState(); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_DefendComplete(); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.OnRep_DefendComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_IsArmed(); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.OnRep_IsArmed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldObject_Interact(struct AActor* Instigator); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ActivatedStateUpdated(bool Activated, bool Defending); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.ActivatedStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsFunctional(bool& bFunctional); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.IsFunctional // (HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void FlickerTimeline__FinishedFunc(); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.FlickerTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1be0000
	void FlickerTimeline__UpdateFunc(); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.FlickerTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnInventoryItemRemoved(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.OnInventoryItemRemoved // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayWarheadRemovedFX(); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.MULTI_PlayWarheadRemovedFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_BW4_Satellite_Object(int32_t EntryPoint); // Function BP_BW4_Satellite_Object.BP_BW4_Satellite_Object_C.ExecuteUbergraph_BP_BW4_Satellite_Object // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

