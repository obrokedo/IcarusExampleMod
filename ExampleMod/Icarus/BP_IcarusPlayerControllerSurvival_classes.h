// BlueprintGeneratedClass BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C
// Size: 0xb18 (Inherited: 0x8b8)
#include "Icarus_classes.h"
#include "Icarus_struct.h"
#include "Engine_classes.h"
#include "Engine_struct.h"
#include "IcarusGenerated_struct.h"
#include "../../UnrealEngineModLoader/UE4/Ue4.hpp"
struct ABP_IcarusPlayerControllerSurvival_C : AIcarusPlayerControllerSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8b8(0x08)
	struct UBP_NetworkProxyComponentSurvival_C* BP_NetworkProxyComponent; // 0x8c0(0x08)
	struct UBP_HuntingManager_C* BP_HuntingManager; // 0x8c8(0x08)
	struct UBP_CriticalHitComponent_C* BP_CriticalHitComponent; // 0x8d0(0x08)
	struct UUMG_UserInterface_C* UserInterface; // 0x8d8(0x08)
	struct UInventory* EnvirosuitInventoryReference; // 0x8e0(0x08)
	struct UInventory* BackpackInventoryReference; // 0x8e8(0x08)
	struct UInventory* QuickbarInventoryReference; // 0x8f0(0x08)
	bool FocusedOnObject; // 0x8f8(0x01)
	char pad_8F9[0x7]; // 0x8f9(0x07)
	struct UInventory* EquipmentInventoryReference; // 0x900(0x08)
	int32_t CurrentSessionEndTime; // 0x908(0x04)
	char pad_90C[0x4]; // 0x90c(0x04)
	// struct FMulticastInlineDelegate ChatMessageArrived; // 0x910(0x10)
	// struct FMulticastInlineDelegate LocalMessageArrived; // 0x920(0x10)
	float CharacterProgressionUpdateDelay; // 0x930(0x04)
	char pad_934[0x4]; // 0x934(0x04)
	struct UInventory* UpgradeInventoryRef; // 0x938(0x08)
	struct UInventory* VisionInventoryRef; // 0x940(0x08)
	int32_t LastFocusedHotbarSlot; // 0x948(0x04)
	char pad_94C[0x4]; // 0x94c(0x04)
	struct ABP_SpectatorActor_C* SpectatorActor; // 0x950(0x08)
	float DBNOHoldLength; // 0x958(0x04)
	float DBNOHoldTimestamp; // 0x95c(0x04)
	struct FCharacterLoadout LastLoadout; // 0x960(0x138)
	// struct FVector LastCameraLocation; // 0xa98(0x0c)
	bool DebugCameraLocationChanges; // 0xaa4(0x01)
	char pad_AA5[0x3]; // 0xaa5(0x03)
	// struct FMulticastInlineDelegate OnRevived; // 0xaa8(0x10)
	float OutOfBoundsTimestamp; // 0xab8(0x04)
	float OutOfBoundsMaxTime; // 0xabc(0x04)
	struct FTimerHandle OutOfBoundsTimerHandle; // 0xac0(0x08)
	bool IsRunningUnStuckEQS; // 0xac8(0x01)
	char pad_AC9[0x7]; // 0xac9(0x07)
	struct FTimerHandle HeatmapBoundsTimer; // 0xad0(0x08)
	// struct FMulticastInlineDelegate ServerMessage; // 0xad8(0x10)
	struct FModifierStatesRowHandle SoloRespawnModifier; // 0xae8(0x18)
	float SoloRespawnBuffLength; // 0xb00(0x04)
	int32_t SoloRespawnBuffUID; // 0xb04(0x04)
	struct FTimerHandle InventoryFullMessageCooldown; // 0xb08(0x08)
	struct ABP_PhotoCamera_C* PhotoCamera; // 0xb10(0x08)

	void GetUserInterface(struct UUMG_UserInterface_Base_C*& UserInterface); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void ActivateHotbarSlot(int32_t NewSelection, bool bForce, bool bQuickCraft); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ActivateHotbarSlot // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FIcarusPlayerChatMessage ProcessChatMessage(struct AIcarusPlayerState* FromPlayer, struct FString Message); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ProcessChatMessage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UNetworkProxyComponent* GetNetworkProxyComponent(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetNetworkProxyComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct UIcarusCriticalHitComponent* GetCriticalHitComponent(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetCriticalHitComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct UUserInterfaceBase* GetUserInterfaceInternal(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserInterfaceInternal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	bool IsTryingToUnstuck(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsTryingToUnstuck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void EndPhotoMode(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EndPhotoMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartPhotoMode(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.StartPhotoMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsThirdPersonToggleDisabled(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsThirdPersonToggleDisabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSessionFlagsUpdated(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnSessionFlagsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveSoloRespawnModifier(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.RemoveSoloRespawnModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddSoloRespawnModifier(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AddSoloRespawnModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateOverflowBag(struct AActor* Actor); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CreateOverflowBag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	// void GatherMetaItems(struct TArray<struct FMetaItem>& OutMetaItems, struct TArray<struct FMetaResource>& OutMetaResources); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GatherMetaItems // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	// void GetRespawnPodLocations(bool FilterBiome, struct TArray<struct ABP_IcarusRespawnShipSpawn_C*>& AvailableSpawns, struct TArray<struct ABP_IcarusRespawnShipSpawn_C*>& OtherSpawns, struct TArray<struct ABP_IcarusRespawnShipSpawn_C*>& AllSpawns); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnPodLocations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	enum class ERespawnType GetRespawnType(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetRespawnDistance(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Get
	Distance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UInventoryComponent* GetDynamicWidgetInventory(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetDynamicWidgetInventory // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnGravestone(bool DBNO); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SpawnGravestone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutOfBoundsTimeElapsed(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OutOfBoundsTimeElapsed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetOutOfBoundsRemainingTime(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetOutOfBoundsRemainingTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool IsOutOfBounds(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsOutOfBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnRep_OutOfBoundsTimestamp(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnRep_OutOfBoundsTimestamp // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutOfBoundsUpdated(struct AIcarusPlayerCharacter* Player, bool OutOfBounds); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OutOfBoundsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FString GetPlayerUID(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetPlayerUID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool HasAvailableBed(struct ABP_BedBase_C*& AvailableBed); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.HasAvailableBed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetUserID(struct FString& UserID); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct ABP_IcarusRespawnShipSpawn_C* GetAvailableRespawnPod(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetAvailableRespawnPod // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerRespawn(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerRespawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EmptyHands(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EmptyHands // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateHotbar(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UpdateHotbar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void QuickCraft(struct FProcessorRecipesRowHandle Recipe); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.QuickCraft // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool External_CanPerformInputAction(bool bBlockedByUI); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.External_CanPerformInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	// void GetMetaItemsAndResources(struct TArray<struct FMetaItem>& MetaItems, struct TArray<struct FMetaResource>& MetaResources); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetMetaItemsAndResources // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct UCheatOverlayBase* GetCheatOverlay(struct UObject* WorldContextObject); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetCheatOverlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void CanFocusSlot(int32_t SlotToFocus, bool& CanFocus); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CanFocusSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void ToggleUIVisibility(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ToggleUIVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool GetIsThirdPerson(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetIsThirdPerson // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void GetItem(int32_t InventoryID, int32_t InventorySlot, struct FItemData& Item); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	// void Calculate Quick Item Move(struct UInventory* Inventory, int32_t Slot); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Calculate Quick Item Move // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerRevive(float HealthRestoredPercent); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerRevive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct ABP_IcarusPlayerCharacterSurvival_C* GetIcarusPlayerCharacterBP(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetIcarusPlayerCharacterBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void DevTeleport(struct FVector Location, struct FRotator Rotation); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DevTeleport // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool OnPlayerDeath(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerDeath // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Interact_K2Node_InputActionEvent_28(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_28 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Interact_K2Node_InputActionEvent_27(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_27 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Fire_K2Node_InputActionEvent_26(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Fire_K2Node_InputActionEvent_26 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_AltFire_K2Node_InputActionEvent_25(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_AltFire_K2Node_InputActionEvent_25 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar1_K2Node_InputActionEvent_24(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar1_K2Node_InputActionEvent_24 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar0_K2Node_InputActionEvent_23(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar0_K2Node_InputActionEvent_23 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar2_K2Node_InputActionEvent_22(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar2_K2Node_InputActionEvent_22 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar3_K2Node_InputActionEvent_21(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar3_K2Node_InputActionEvent_21 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar4_K2Node_InputActionEvent_20(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar4_K2Node_InputActionEvent_20 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar5_K2Node_InputActionEvent_19(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar5_K2Node_InputActionEvent_19 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar6_K2Node_InputActionEvent_18(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar6_K2Node_InputActionEvent_18 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar7_K2Node_InputActionEvent_17(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar7_K2Node_InputActionEvent_17 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar8_K2Node_InputActionEvent_16(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar8_K2Node_InputActionEvent_16 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hotbar9_K2Node_InputActionEvent_15(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar9_K2Node_InputActionEvent_15 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_HideUI_K2Node_InputActionEvent_14(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HideUI_K2Node_InputActionEvent_14 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Screenshot_K2Node_InputActionEvent_13(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Screenshot_K2Node_InputActionEvent_13 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Inventory_K2Node_InputActionEvent_12(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Inventory_K2Node_InputActionEvent_12 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Crafting_K2Node_InputActionEvent_11(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Crafting_K2Node_InputActionEvent_11 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Tech_K2Node_InputActionEvent_10(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Tech_K2Node_InputActionEvent_10 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Map_K2Node_InputActionEvent_9(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Map_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Escape_K2Node_InputActionEvent_8(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Escape_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarBack_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Hands_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hands_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_ToggleMenus_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_ToggleMenus_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarForward_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_TextChat_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_TextChat_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1be0000
	void OnFailure_6B795656432A1EEE40E31586F8BAF647(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnFailure_6B795656432A1EEE40E31586F8BAF647 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_6B795656432A1EEE40E31586F8BAF647(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnSuccess_6B795656432A1EEE40E31586F8BAF647 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1be0000
	void OnFailure_B0AA2EB344D9F6EDFC53F7B071532FE2(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnFailure_B0AA2EB344D9F6EDFC53F7B071532FE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_B0AA2EB344D9F6EDFC53F7B071532FE2(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnSuccess_B0AA2EB344D9F6EDFC53F7B071532FE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckPlayerViewDelta(bool Init); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckPlayerViewDelta // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1be0000
	void Server_AttemptRespawn(struct ABP_Gravestone_C* Gravestone); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_AttemptRespawn // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Respawn(struct ABP_Gravestone_C* Target); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Respawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DBNO_OptionAClicked(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DBNO_OptionAClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DBNO_OptionBClicked_Event(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DBNO_OptionBClicked_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AClicked(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BClicked(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SERVER_ReviveFailsafe(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SERVER_ReviveFailsafe // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BP_ServerAttemptRevive_Implementation(struct AGravestoneBase* Gravestone); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_ServerAttemptRevive_Implementation // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void AddItemToInventory(struct FItemTemplateRowHandle ItemTemplate); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AddItemToInventory // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnServer_SetFocusedSlot(int32_t NewFocused, bool Force); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_SetFocusedSlot // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UIBeginPlay(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UIBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UITick(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UITick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClient_DeathCleanup(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_DeathCleanup // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClient_RespawnCleanup(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_RespawnCleanup // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnGainedItem(struct FItemData Item, int32_t TotalCount); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnGainedItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClient_ItemGained(struct FItemData Item, int32_t Count); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_ItemGained // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_SetAmmo(struct UInventory* Inventory, int32_t Slot, bool Unload); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_SetAmmo // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_SetBuildingVariation(int32_t Variation); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_SetBuildingVariation // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClient_UpdateHotBarSelection(int32_t NewSelection, bool Force); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_UpdateHotBarSelection // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHotbarItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnHotbarItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OwningClient_ForceSlotHighlight(int32_t NewSlot); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OwningClient_ForceSlotHighlight // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartQuickCraft(struct FProcessorRecipesRowHandle Recipe); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.StartQuickCraft // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckQuickCraft(int32_t Index); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckQuickCraft // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WantsPlayerDeadUI(bool IsDead); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.WantsPlayerDeadUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Client_Revived(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Client_Revived // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BP_ClientOpenContainer(struct UInventory* Inventory, bool bShowStoreAll, bool bShowTakeAll); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_ClientOpenContainer // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnServer_ReturnFocus(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_ReturnFocus // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnServer_GiveFocusToObject(struct AActor* Object); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_GiveFocusToObject // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OwningClientDisplayDynamicWidget(struct UIcarusLinkedActorPanelBase* WidgetClass, struct AActor* LinkedActorForWidget); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OwningClientDisplayDynamicWidget // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnDevTeleport(struct FVector Location, struct FRotator Rotation); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnDevTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerDevTeleport(struct FVector Location, struct FRotator Rotation); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerDevTeleport // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Client_Build(struct AIcarusRocket* Rocket); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Client_Build // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetUIVisibility(bool bHide, bool bHideDebug); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SetUIVisibility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EQSFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EQSFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UnstuckAtRespawnShipYes(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UnstuckAtRespawnShipYes // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UnstuckAtRespawnShipNo(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UnstuckAtRespawnShipNo // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Client_NoUnstuckFound(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Client_NoUnstuckFound // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_UnstuckAtRespawnShip(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_UnstuckAtRespawnShip // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetUnstuck(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ResetUnstuck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	// void On Mouse Sensitivity Changed(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.On Mouse Sensitivity Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnConnectedPlayerInitialised // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnPawnLeavingGame(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPawnLeavingGame // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckOutOfBounds(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckOutOfBounds // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void MapTravelBackToHab(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.MapTravelBackToHab // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnItemBounced_Event(struct FItemData& ItemData); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnItemBounced_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InventoryFullMessageCooldownComplete(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InventoryFullMessageCooldownComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLeaveProspectSessionCompleteImpl(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnLeaveProspectSessionCompleteImpl // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ServerPossessCamera(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerPossessCamera // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerStopPossessingCamera(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerStopPossessingCamera // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BP_Server_Unstuck_Implementation(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_Server_Unstuck_Implementation // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void DelayedShowSavingDialog(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DelayedShowSavingDialog // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerPushClientDynamicWidget(struct UIcarusLinkedActorPanelBase* WidgetClass, struct AActor* LinkedActor); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerPushClientDynamicWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TriggerLoadShip(struct AIcarusRocket* Rocket); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.TriggerLoadShip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusPlayerControllerSurvival(int32_t EntryPoint); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ExecuteUbergraph_BP_IcarusPlayerControllerSurvival // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void ServerMessage__DelegateSignature(struct FString Message); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerMessage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRevived__DelegateSignature(); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnRevived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LocalMessageArrived__DelegateSignature(struct FString Message); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.LocalMessageArrived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ChatMessageArrived__DelegateSignature(struct FTChatMessage Message); // Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ChatMessageArrived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

