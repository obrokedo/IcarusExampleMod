// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C
// Size: 0xbe2 (Inherited: 0xa22)
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	char pad_A22[0x6]; // 0xa22(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa28(0x08)
	struct FTimerHandle ReloadTimer; // 0xa30(0x08)
	int32_t LocalCurrentAmmo; // 0xa38(0x04)
	bool Reloading; // 0xa3c(0x01)
	bool RadialOpen; // 0xa3d(0x01)
	char pad_A3E[0x2]; // 0xa3e(0x02)
	struct FMulticastInlineDelegate OnReloadPressed; // 0xa40(0x10)
	struct FMulticastInlineDelegate NotifyReloadStart; // 0xa50(0x10)
	struct FMulticastInlineDelegate NotifyReloadEnd; // 0xa60(0x10)
	bool AbortReloadRequested; // 0xa70(0x01)
	bool AwaitingAutoReload; // 0xa71(0x01)
	char pad_A72[0x6]; // 0xa72(0x06)
	struct UContextMenuWidget* CurrentContextMenu; // 0xa78(0x08)
	struct FName QuickbarInventoryActionId; // 0xa80(0x08)
	struct FName BackpackInventoryActionId; // 0xa88(0x08)
	struct FName ScaleReloadAnimMontageSectionName; // 0xa90(0x08)
	int32_t AmmoSlotIndex; // 0xa98(0x04)
	char pad_A9C[0x4]; // 0xa9c(0x04)
	struct FItemData LastAmmoData; // 0xaa0(0xa0)
	struct FItemData ClientAmmoType; // 0xb40(0xa0)
	bool OwnerReady; // 0xbe0(0x01)
	bool InventoryReady; // 0xbe1(0x01)

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientCheckAmmoTypeChanged(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ClientCheckAmmoTypeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindItemAndMoveToAmmoContainerFromInventory(int32_t Amount, struct FItemData ItemToFind, struct UInventory* SourceInventory, struct UInventory* DestinationInventory, int32_t& RemainingAmount); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindItemAndMoveToAmmoContainerFromInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransferAmmoContainerToInventory(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TransferAmmoContainerToInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TransferItemToAmmoContainer(struct FItemData ItemType, int32_t Amount); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TransferItemToAmmoContainer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindValidAmmoData(struct FItemData AmmoType, bool& Found, struct FItemData& ItemType); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindValidAmmoData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCurrentAmmoItem(bool& SlotValid, struct FItemData& AmmoItem); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetWeaponInventoryContainer(struct UInventory*& Inventory); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetWeaponInventoryContainer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetFiredProjectileInfo(bool& HasBallisticData, struct FBallisticData& BallisticData, int32_t& ProjectileCount, struct FVector2D& ProjectileAccuracy); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetFiredProjectileInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool WantsAutoReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.WantsAutoReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetAutoReloadTime(float& FireRate); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAutoReloadTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void FindAmmoTypeToSwapTo(bool& FoundType, struct FItemData& AmmoType); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindAmmoTypeToSwapTo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePersistentAudio(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdatePersistentAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UInventory* GetInventoryFromName(struct FName InventoryName); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryFromName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FName GetNameForInventory(struct UInventory* Inventory); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetNameForInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ContextMenuAmmoSelected(struct FName ID, int32_t Payload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuAmmoSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ContextMenuUnloadSelected(struct FName ID, int32_t Payload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuUnloadSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Open Ammo Select Menu(bool AsRadial, bool& Opened); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Open Ammo Select Menu // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsAwaitingAutoReload(bool& waitingReload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsAwaitingAutoReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CanAbortReload(bool& CanAbort); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanAbortReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnAbortReloadRequested(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAbortReloadRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AutoReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.AutoReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindValidAmmoDataByStatic(struct FItemsStaticRowHandle AmmoType, bool& Found, struct FItemData& ItemType); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindValidAmmoDataByStatic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCurrentAmmoType(struct FItemData AmmoType); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmoType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct AIcarusActor* ForOwner); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_Reloading(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnRep_Reloading // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HandleShotRollback(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HandleShotRollback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckAmmo(bool bInitial); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateLocalAmmo(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdateLocalAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryReload(bool Force, bool ForceIfReloading); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TryReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerFinishReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ServerFinishReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetReloadAnimPlayRate(struct UAnimMontage* Montage); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadAnimPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetReloadTimeMultiplier(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ConsumeAmmo(int32_t Amount); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ConsumeAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCurrentAmmoCount(int32_t CurrentAmmo); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmoCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetInventoryAmmoCount(struct FItemData ItemType, int32_t& Count); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryAmmoCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetAmmoCapacity(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAmmoCapacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetCurrentAmmoCount(int32_t& CurrentAmmoCount); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HasAnyReserveAmmo(bool& HasAnyReserve); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAnyReserveAmmo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsReloading(bool& Reloading); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsReloading // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CanReload(bool& CanReload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HasAmmo(bool& HasAmmo); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnInventoryItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnReloadStart(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnReloadEnd(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HandleReloadAnimNotify(struct FString NotifyName); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HandleReloadAnimNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadAndPlayReloadAnims(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.LoadAndPlayReloadAnims // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnAmmoTypeChanged(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAmmoTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_UnloadAmmoType(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_UnloadAmmoType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_RequestNewAmmoType(struct FItemData NewAmmoType); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_RequestNewAmmoType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.PlayReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Client_ForceReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Client_ForceReload // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Local_PlayReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Local_PlayReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeaponFired(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnWeaponFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MC_PlayReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.MC_PlayReload // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LateSetup(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_TryReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryReload // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryAbortReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TryAbortReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_TryAbortReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryAbortReload // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnAmmoUnloaded(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAmmoUnloaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnShotRollback(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnShotRollback // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SprintToReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SprintToReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeaponInventoryAvailable(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnWeaponInventoryAvailable // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeaponInventoryUpdated(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnWeaponInventoryUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Client_OnReloadEnd(int32_t NewAmmoCount); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Client_OnReloadEnd // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_TryReloadWithTimeStamp(float RequestTime); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryReloadWithTimeStamp // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_ClientSetReady(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_ClientSetReady // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_CheckInitComplete(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_CheckInitComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void NotifyReloadEnd__DelegateSignature(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.NotifyReloadEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NotifyReloadStart__DelegateSignature(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.NotifyReloadStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnReloadPressed__DelegateSignature(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

