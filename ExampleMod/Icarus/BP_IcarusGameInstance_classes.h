// BlueprintGeneratedClass BP_IcarusGameInstance.BP_IcarusGameInstance_C
// Size: 0x580 (Inherited: 0x558)
struct UBP_IcarusGameInstance_C : UIcarusGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct FMulticastInlineDelegate RequestErrorEvent; // 0x560(0x10)
	struct ULevelStreamingDynamic* LoadingScreenLevel; // 0x570(0x08)
	struct UTextureRenderTarget2D* RT_LoadingScreen; // 0x578(0x08)

	void CreateLoadingScreenRT(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.CreateLoadingScreenRT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetMigrationInfo(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ResetMigrationInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CancelHostMigration(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.CancelHostMigration // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HandleHostMigrationAttemptHost(struct FHostMigrationInfo& BackupHostInfo); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.HandleHostMigrationAttemptHost // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void HandleHostMigrationAttemptJoin(struct FHostMigrationInfo& BackupHostInfo); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.HandleHostMigrationAttemptJoin // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void PerformHostMigration(bool Host, int32_t ChrSlot); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.PerformHostMigration // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSessionInviteAcceptedEvent(int32_t ControllerId, struct FBlueprintSessionResult& InviteResult); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSessionInviteAcceptedEvent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnSessionInvite_DoNothing(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSessionInvite_DoNothing // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InputTypeApplied(enum class EInputTypeSetting Value); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.InputTypeApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveInit(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusGameInstance(int32_t EntryPoint); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ExecuteUbergraph_BP_IcarusGameInstance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void RequestErrorEvent__DelegateSignature(struct FErrorCodesEnum ErrorCode); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.RequestErrorEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

