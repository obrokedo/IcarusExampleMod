// Class OnlineSubsystemIcarus.BackToHabCallbackProxyGen
// Size: 0x98 (Inherited: 0x30)
struct UBackToHabCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UBackToHabCallbackProxyGen* BackToHab(struct FReqBackToHab& Request); // Function OnlineSubsystemIcarus.BackToHabCallbackProxyGen.BackToHab // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0c5c0
};

// Class OnlineSubsystemIcarus.CanJoinProspectCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct UCanJoinProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UCanJoinProspectCallbackProxyGen* CanJoinProspect(struct FReqCanJoinProspect& Request); // Function OnlineSubsystemIcarus.CanJoinProspectCallbackProxyGen.CanJoinProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0c740
};

// Class OnlineSubsystemIcarus.CheckProspectExpiredCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UCheckProspectExpiredCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UCheckProspectExpiredCallbackProxyGen* CheckProspectExpired(struct FReqCheckProspectExpired& Request); // Function OnlineSubsystemIcarus.CheckProspectExpiredCallbackProxyGen.CheckProspectExpired // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0c800
};

// Class OnlineSubsystemIcarus.ClaimNotificationAttachmentsCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UClaimNotificationAttachmentsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UClaimNotificationAttachmentsCallbackProxyGen* ClaimNotificationAttachments(struct FReqClaimNotificationAttachments& Request); // Function OnlineSubsystemIcarus.ClaimNotificationAttachmentsCallbackProxyGen.ClaimNotificationAttachments // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0c8b0
};

// Class OnlineSubsystemIcarus.ClaimProspectCallbackProxyGen
// Size: 0x100 (Inherited: 0x30)
struct UClaimProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	struct UClaimProspectCallbackProxyGen* ClaimProspect(struct FReqClaimProspect& Request); // Function OnlineSubsystemIcarus.ClaimProspectCallbackProxyGen.ClaimProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0c970
};

// Class OnlineSubsystemIcarus.CreateCharacterCallbackProxyGen
// Size: 0x98 (Inherited: 0x30)
struct UCreateCharacterCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UCreateCharacterCallbackProxyGen* CreateCharacter(struct FReqCreateCharacter& Request); // Function OnlineSubsystemIcarus.CreateCharacterCallbackProxyGen.CreateCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0cb20
};

// Class OnlineSubsystemIcarus.CreateDropshipCallbackProxyGen
// Size: 0x88 (Inherited: 0x30)
struct UCreateDropshipCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UCreateDropshipCallbackProxyGen* CreateDropship(struct FReqCreateDropship& Request); // Function OnlineSubsystemIcarus.CreateDropshipCallbackProxyGen.CreateDropship // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0cbe0
};

// Class OnlineSubsystemIcarus.DeleteCharacterCallbackProxyGen
// Size: 0x58 (Inherited: 0x30)
struct UDeleteCharacterCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)

	struct UDeleteCharacterCallbackProxyGen* DeleteCharacter(struct FReqDeleteCharacter& Request); // Function OnlineSubsystemIcarus.DeleteCharacterCallbackProxyGen.DeleteCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0cce0
};

// Class OnlineSubsystemIcarus.DeleteDropshipCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UDeleteDropshipCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UDeleteDropshipCallbackProxyGen* DeleteDropship(struct FReqDeleteDropship& Request); // Function OnlineSubsystemIcarus.DeleteDropshipCallbackProxyGen.DeleteDropship // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0cd80
};

// Class OnlineSubsystemIcarus.DeleteNotificationCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UDeleteNotificationCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UDeleteNotificationCallbackProxyGen* DeleteNotification(struct FReqDeleteNotification& Request); // Function OnlineSubsystemIcarus.DeleteNotificationCallbackProxyGen.DeleteNotification // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0ce30
};

// Class OnlineSubsystemIcarus.ExchangeCurrencyCallbackProxyGen
// Size: 0x80 (Inherited: 0x30)
struct UExchangeCurrencyCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UExchangeCurrencyCallbackProxyGen* ExchangeCurrency(struct FReqExchangeCurrency& Request); // Function OnlineSubsystemIcarus.ExchangeCurrencyCallbackProxyGen.ExchangeCurrency // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0cef0
};

// Class OnlineSubsystemIcarus.GenerateProspectsCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UGenerateProspectsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UGenerateProspectsCallbackProxyGen* GenerateProspects(struct FReqGenerateProspects& Request); // Function OnlineSubsystemIcarus.GenerateProspectsCallbackProxyGen.GenerateProspects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0cfb0
};

// Class OnlineSubsystemIcarus.GetAllProspectsCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UGetAllProspectsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UGetAllProspectsCallbackProxyGen* GetAllProspects(struct FReqGetAllProspects& Request); // Function OnlineSubsystemIcarus.GetAllProspectsCallbackProxyGen.GetAllProspects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d080
};

// Class OnlineSubsystemIcarus.GetAvailableProspectsCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetAvailableProspectsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetAvailableProspectsCallbackProxyGen* GetAvailableProspects(struct FReqGetAvailableProspects& Request); // Function OnlineSubsystemIcarus.GetAvailableProspectsCallbackProxyGen.GetAvailableProspects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d130
};

// Class OnlineSubsystemIcarus.GetChallengesCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UGetChallengesCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UGetChallengesCallbackProxyGen* GetChallenges(struct FReqGetChallenges& Request); // Function OnlineSubsystemIcarus.GetChallengesCallbackProxyGen.GetChallenges // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d1e0
};

// Class OnlineSubsystemIcarus.GetCharacterLoadoutCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetCharacterLoadoutCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetCharacterLoadoutCallbackProxyGen* GetCharacterLoadout(struct FReqGetCharacterLoadout& Request); // Function OnlineSubsystemIcarus.GetCharacterLoadoutCallbackProxyGen.GetCharacterLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d290
};

// Class OnlineSubsystemIcarus.GetCharacterProfileCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetCharacterProfileCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetCharacterProfileCallbackProxyGen* GetCharacterProfile(struct FReqGetCharacterProfile& Request); // Function OnlineSubsystemIcarus.GetCharacterProfileCallbackProxyGen.GetCharacterProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d340
};

// Class OnlineSubsystemIcarus.GetCharactersCallbackProxyGen
// Size: 0x58 (Inherited: 0x30)
struct UGetCharactersCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)

	struct UGetCharactersCallbackProxyGen* GetCharacters(struct FReqGetCharacters& Request); // Function OnlineSubsystemIcarus.GetCharactersCallbackProxyGen.GetCharacters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d3f0
};

// Class OnlineSubsystemIcarus.GetCreditsCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UGetCreditsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UGetCreditsCallbackProxyGen* GetCredits(struct FReqGetCredits& Request); // Function OnlineSubsystemIcarus.GetCreditsCallbackProxyGen.GetCredits // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d480
};

// Class OnlineSubsystemIcarus.GetDropshipsCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UGetDropshipsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UGetDropshipsCallbackProxyGen* GetDropships(struct FReqGetDropships& Request); // Function OnlineSubsystemIcarus.GetDropshipsCallbackProxyGen.GetDropships // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d530
};

// Class OnlineSubsystemIcarus.GetLastProspectCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetLastProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetLastProspectCallbackProxyGen* GetLastProspect(struct FReqGetLastProspect& Request); // Function OnlineSubsystemIcarus.GetLastProspectCallbackProxyGen.GetLastProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d5e0
};

// Class OnlineSubsystemIcarus.GetLoadoutInventoryCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetLoadoutInventoryCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetLoadoutInventoryCallbackProxyGen* GetLoadoutInventory(struct FReqLoadoutInventory& Request); // Function OnlineSubsystemIcarus.GetLoadoutInventoryCallbackProxyGen.GetLoadoutInventory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d690
};

// Class OnlineSubsystemIcarus.GetMetaInventoryCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetMetaInventoryCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetMetaInventoryCallbackProxyGen* GetMetaInventory(struct FReqGetMetaInventory& Request); // Function OnlineSubsystemIcarus.GetMetaInventoryCallbackProxyGen.GetMetaInventory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d740
};

// Class OnlineSubsystemIcarus.GetMetaResourceCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UGetMetaResourceCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UGetMetaResourceCallbackProxyGen* GetMetaResource(struct FReqGetMetaResources& Request); // Function OnlineSubsystemIcarus.GetMetaResourceCallbackProxyGen.GetMetaResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa0d7f0
};

// Class OnlineSubsystemIcarus.GetNotificationsCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetNotificationsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetNotificationsCallbackProxyGen* GetNotifications(struct FReqGetNotifications& Request); // Function OnlineSubsystemIcarus.GetNotificationsCallbackProxyGen.GetNotifications // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa11e90
};

// Class OnlineSubsystemIcarus.GetPreparedLoadoutCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UGetPreparedLoadoutCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UGetPreparedLoadoutCallbackProxyGen* GetPreparedLoadout(struct FReqPreparedLoadout& Request); // Function OnlineSubsystemIcarus.GetPreparedLoadoutCallbackProxyGen.GetPreparedLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa11f40
};

// Class OnlineSubsystemIcarus.GetProspectCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct UGetProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UGetProspectCallbackProxyGen* GetProspect(struct FReqGetProspect& Request); // Function OnlineSubsystemIcarus.GetProspectCallbackProxyGen.GetProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa11ff0
};

// Class OnlineSubsystemIcarus.GetProspectReportCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct UGetProspectReportCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UGetProspectReportCallbackProxyGen* GetProspectReport(struct FReqGetProspectReport& Request); // Function OnlineSubsystemIcarus.GetProspectReportCallbackProxyGen.GetProspectReport // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa120b0
};

// Class OnlineSubsystemIcarus.GetProspectSummaryCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct UGetProspectSummaryCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UGetProspectSummaryCallbackProxyGen* GetProspectSummary(struct FReqGetProspectSummary& Request); // Function OnlineSubsystemIcarus.GetProspectSummaryCallbackProxyGen.GetProspectSummary // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12170
};

// Class OnlineSubsystemIcarus.GetUserProfileCallbackProxyGen
// Size: 0x60 (Inherited: 0x30)
struct UGetUserProfileCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UGetUserProfileCallbackProxyGen* GetUserProfile(struct FReqGetUserProfile& Request); // Function OnlineSubsystemIcarus.GetUserProfileCallbackProxyGen.GetUserProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12270
};

// Class OnlineSubsystemIcarus.HostCandidateCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UHostCandidateCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UHostCandidateCallbackProxyGen* HostCandidate(struct FReqHostCandidate& Request); // Function OnlineSubsystemIcarus.HostCandidateCallbackProxyGen.HostCandidate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12320
};

// Class OnlineSubsystemIcarus.IcarusConnectionComponentBase
// Size: 0x1d8 (Inherited: 0x28)
struct UIcarusConnectionComponentBase : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct FString AddressAndPort; // 0x70(0x10)
	char pad_80[0x158]; // 0x80(0x158)

	bool IsConnected(); // Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.IsConnected // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa123e0
	float GetReconnectTimer(); // Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetReconnectTimer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa12250
	int32_t GetReconnectAttempts(); // Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetReconnectAttempts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa12230
	enum class ELoginFailure GetLoginErrorCode(); // Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetLoginErrorCode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa11d90
	struct FString GetAuthType(); // Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa11730
	struct FString GetAuthToken(); // Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthToken // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa11590
	struct FString GetAuthId(); // Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa114c0
};

// Class OnlineSubsystemIcarus.IcarusConnectionComponentGen
// Size: 0x5c8 (Inherited: 0x1d8)
struct UIcarusConnectionComponentGen : UIcarusConnectionComponentBase {
	char pad_1D8[0x3f0]; // 0x1d8(0x3f0)
};

// Class OnlineSubsystemIcarus.IcarusConnectionComponent
// Size: 0x6d0 (Inherited: 0x5c8)
struct UIcarusConnectionComponent : UIcarusConnectionComponentGen {
	char pad_5C8[0x108]; // 0x5c8(0x108)
};

// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase
// Size: 0x1c0 (Inherited: 0x28)
struct UIcarusLobbyConnectionComponentBase : UObject {
	struct FString AddressAndPort; // 0x28(0x10)
	char pad_38[0x188]; // 0x38(0x188)

	bool IsConnected(); // Function OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase.IsConnected // (Final|Native|Public|BlueprintCallable) // @ game+0xa12410
};

// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponentGen
// Size: 0x1d0 (Inherited: 0x1c0)
struct UIcarusLobbyConnectionComponentGen : UIcarusLobbyConnectionComponentBase {
	char pad_1C0[0x10]; // 0x1c0(0x10)
};

// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponent
// Size: 0x228 (Inherited: 0x1d0)
struct UIcarusLobbyConnectionComponent : UIcarusLobbyConnectionComponentGen {
	char pad_1D0[0x58]; // 0x1d0(0x58)
};

// Class OnlineSubsystemIcarus.IcarusMessageListeners
// Size: 0x78 (Inherited: 0x28)
struct UIcarusMessageListeners : UObject {
	struct FMulticastInlineDelegate OnConnectMessage; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLoginFailMessage; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMatchUpdateMessage; // 0x48(0x10)
	struct FMulticastInlineDelegate OnUpdateConnectionStringMessage; // 0x58(0x10)
	struct FMulticastInlineDelegate OnChatMessage; // 0x68(0x10)
};

// Class OnlineSubsystemIcarus.IcarusOfflineConnectionComponentGen
// Size: 0x730 (Inherited: 0x6d0)
struct UIcarusOfflineConnectionComponentGen : UIcarusConnectionComponent {
	char pad_6D0[0x60]; // 0x6d0(0x60)
};

// Class OnlineSubsystemIcarus.JoinProspectCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UJoinProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UJoinProspectCallbackProxyGen* JoinProspect(struct FReqJoinProspect& Request); // Function OnlineSubsystemIcarus.JoinProspectCallbackProxyGen.JoinProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12530
};

// Class OnlineSubsystemIcarus.LobbyMessageCallbackProxyGen
// Size: 0x90 (Inherited: 0x30)
struct ULobbyMessageCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct ULobbyMessageCallbackProxyGen* LobbyMessage(struct FReqLobbyMessage& Request); // Function OnlineSubsystemIcarus.LobbyMessageCallbackProxyGen.LobbyMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa125e0
};

// Class OnlineSubsystemIcarus.ModifyDropshipCallbackProxyGen
// Size: 0x90 (Inherited: 0x30)
struct UModifyDropshipCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct UModifyDropshipCallbackProxyGen* ModifyDropship(struct FReqModifyDropship& Request); // Function OnlineSubsystemIcarus.ModifyDropshipCallbackProxyGen.ModifyDropship // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12820
};

// Class OnlineSubsystemIcarus.MoveMetaInventoryItemCallbackProxyGen
// Size: 0x90 (Inherited: 0x30)
struct UMoveMetaInventoryItemCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct UMoveMetaInventoryItemCallbackProxyGen* MoveMetaInventoryItem(struct FReqMoveMetaInventoryItem& Request); // Function OnlineSubsystemIcarus.MoveMetaInventoryItemCallbackProxyGen.MoveMetaInventoryItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12920
};

// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOnlineSubsystemIcarusFunctionLibrary : UBlueprintFunctionLibrary {

	void SetPresence(struct APlayerController* PlayerController, enum class EOnlinePresenceStatusIcarus NewState, struct TArray<struct FPresencePropertyKeyPair>& Properties); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.SetPresence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa12b60
	struct FPresencePropertyKeyPair MakeLiteralPresencePropertyString(struct FName Key, struct FString Value); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.MakeLiteralPresencePropertyString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa126d0
	bool IsOnlineSubsystemIcarusEnabled(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.IsOnlineSubsystemIcarusEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa124d0
	bool GetIcarusVersion(struct FIcarusVersion& Version); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusVersion // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa11cc0
	struct UIcarusMessageListeners* GetIcarusMessageListeners(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusMessageListeners // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11c10
	struct UIcarusLobbyConnectionComponent* GetIcarusLobbyConnectionComponent(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusLobbyConnectionComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11be0
	struct UIcarusConnectionComponent* GetIcarusConnectionComponent(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusConnectionComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11bb0
	struct FString GetHash(struct TArray<char>& Buffer); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetHash // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa11ac0
	struct FString GetGatewayAddress(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetGatewayAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11a40
};

// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOnlineSubsystemIcarusOfflineFunctionLibrary : UBlueprintFunctionLibrary {

	bool SwitchOnlineMode(bool bOnlineMode); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary.SwitchOnlineMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa12cb0
	bool IsOnlineMode(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary.IsOnlineMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa124a0
};

// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOnlineSubsystemIcarusSessionFunctionLibrary : UBlueprintFunctionLibrary {

	void SendChatMessage(struct FIcarusChatMessage& ChatMessage); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.SendChatMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa12a90
	void ReqUpdateLobbyStatus(enum class ELobbyStatus LobbyStatus); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.ReqUpdateLobbyStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa12a00
	void RequestConnectionString(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.RequestConnectionString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa12a70
	bool IsValidMatch(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsValidMatch // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa12500
	bool IsMatchHost(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsMatchHost // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa12470
	bool IsConnectedIcarusBackend(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsConnectedIcarusBackend // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa12440
	struct TMap<struct FName, struct FMatchMakingFilter> GetMatchFilters(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetMatchFilters // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11dc0
	struct FString GetIcarusPlayerId(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetIcarusPlayerId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11c40
	struct FMatchUpdate GetCurrentMatch(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetCurrentMatch // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11870
	struct FConnectionString GetConnectionString(); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetConnectionString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11800
	struct FString GetAuthToken(int32_t LocalUserNum); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetAuthToken // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa11660
	void CancelMatchMaking(struct FName SessionName); // Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.CancelMatchMaking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa11440
};

// Class OnlineSubsystemIcarus.PackageLoadoutCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UPackageLoadoutCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UPackageLoadoutCallbackProxyGen* PackageLoadout(struct FReqPackageLoadout& Request); // Function OnlineSubsystemIcarus.PackageLoadoutCallbackProxyGen.PackageLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16850
};

// Class OnlineSubsystemIcarus.ProspectExpiredCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UProspectExpiredCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UProspectExpiredCallbackProxyGen* ProspectExpired(struct FReqProspectExpired& Request); // Function OnlineSubsystemIcarus.ProspectExpiredCallbackProxyGen.ProspectExpired // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16900
};

// Class OnlineSubsystemIcarus.ReadNotificationCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UReadNotificationCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UReadNotificationCallbackProxyGen* ReadNotification(struct FReqReadNotification& Request); // Function OnlineSubsystemIcarus.ReadNotificationCallbackProxyGen.ReadNotification // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa169b0
};

// Class OnlineSubsystemIcarus.RemoveEnvirosuitCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct URemoveEnvirosuitCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct URemoveEnvirosuitCallbackProxyGen* RemoveEnvirosuit(struct FReqRemoveEnvirosuit& Request); // Function OnlineSubsystemIcarus.RemoveEnvirosuitCallbackProxyGen.RemoveEnvirosuit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16a70
};

// Class OnlineSubsystemIcarus.RemoveMetaItemCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct URemoveMetaItemCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct URemoveMetaItemCallbackProxyGen* RemoveMetaItem(struct FReqRemoveMetaInventoryItem& Request); // Function OnlineSubsystemIcarus.RemoveMetaItemCallbackProxyGen.RemoveMetaItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16b20
};

// Class OnlineSubsystemIcarus.RemoveSelectedDropshipCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct URemoveSelectedDropshipCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct URemoveSelectedDropshipCallbackProxyGen* RemoveSelectedDropship(struct FReqRemoveSelectedDropship& Request); // Function OnlineSubsystemIcarus.RemoveSelectedDropshipCallbackProxyGen.RemoveSelectedDropship // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16be0
};

// Class OnlineSubsystemIcarus.ReplicateWorkshopItemCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UReplicateWorkshopItemCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UReplicateWorkshopItemCallbackProxyGen* ReplicateWorkshopItem(struct FReqReplicateWorkshopItem& Request); // Function OnlineSubsystemIcarus.ReplicateWorkshopItemCallbackProxyGen.ReplicateWorkshopItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16c90
};

// Class OnlineSubsystemIcarus.ResetCharacterCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UResetCharacterCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UResetCharacterCallbackProxyGen* ResetCharacter(struct FReqResetCharacter& Request); // Function OnlineSubsystemIcarus.ResetCharacterCallbackProxyGen.ResetCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16d50
};

// Class OnlineSubsystemIcarus.ResetCharacterProspectStateCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UResetCharacterProspectStateCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UResetCharacterProspectStateCallbackProxyGen* ResetCharacterProspectState(struct FReqResetCharacterProspectState& Request); // Function OnlineSubsystemIcarus.ResetCharacterProspectStateCallbackProxyGen.ResetCharacterProspectState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16e00
};

// Class OnlineSubsystemIcarus.ResumeProspectCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UResumeProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UResumeProspectCallbackProxyGen* ResumeProspect(struct FReqResumeProspect& Request); // Function OnlineSubsystemIcarus.ResumeProspectCallbackProxyGen.ResumeProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16eb0
};

// Class OnlineSubsystemIcarus.SelectDropshipCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct USelectDropshipCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct USelectDropshipCallbackProxyGen* SelectDropship(struct FReqSelectDropship& Request); // Function OnlineSubsystemIcarus.SelectDropshipCallbackProxyGen.SelectDropship // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa16f60
};

// Class OnlineSubsystemIcarus.SelectEnvirosuitCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct USelectEnvirosuitCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct USelectEnvirosuitCallbackProxyGen* SelectEnvirosuit(struct FReqSelectEnvirosuit& Request); // Function OnlineSubsystemIcarus.SelectEnvirosuitCallbackProxyGen.SelectEnvirosuit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa17010
};

// Class OnlineSubsystemIcarus.SetResourceSplitCallbackProxyGen
// Size: 0x88 (Inherited: 0x30)
struct USetResourceSplitCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct USetResourceSplitCallbackProxyGen* SetResourceSplit(struct FReqSetResourceSplit& Request); // Function OnlineSubsystemIcarus.SetResourceSplitCallbackProxyGen.SetResourceSplit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa170d0
};

// Class OnlineSubsystemIcarus.SettleProspectCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct USettleProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct USettleProspectCallbackProxyGen* SettleProspect(struct FReqSettleProspect& Request); // Function OnlineSubsystemIcarus.SettleProspectCallbackProxyGen.SettleProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa171d0
};

// Class OnlineSubsystemIcarus.SyncAccountTalentsCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct USyncAccountTalentsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct USyncAccountTalentsCallbackProxyGen* SyncAccountTalents(struct FReqSyncAccountTalents& Request); // Function OnlineSubsystemIcarus.SyncAccountTalentsCallbackProxyGen.SyncAccountTalents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa18ce0
};

// Class OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct USyncCharacterTalentsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct USyncCharacterTalentsCallbackProxyGen* SyncCharacterTalents(struct FReqSyncCharacterTalents& Request); // Function OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen.SyncCharacterTalents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa18dc0
};

// Class OnlineSubsystemIcarus.TalentRefundCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UTalentRefundCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UTalentRefundCallbackProxyGen* TalentRefund(struct FReqTalentRefund& Request); // Function OnlineSubsystemIcarus.TalentRefundCallbackProxyGen.TalentRefund // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa18eb0
};

// Class OnlineSubsystemIcarus.UnlockAccountFlagsCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UUnlockAccountFlagsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UUnlockAccountFlagsCallbackProxyGen* UnlockAccountFlags(struct FReqUnlockAccountFlags& Request); // Function OnlineSubsystemIcarus.UnlockAccountFlagsCallbackProxyGen.UnlockAccountFlags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa18f60
};

// Class OnlineSubsystemIcarus.UnlockCharacterFlagsCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct UUnlockCharacterFlagsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UUnlockCharacterFlagsCallbackProxyGen* UnlockCharacterFlags(struct FReqUnlockCharacterFlags& Request); // Function OnlineSubsystemIcarus.UnlockCharacterFlagsCallbackProxyGen.UnlockCharacterFlags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa19020
};

// Class OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen
// Size: 0x70 (Inherited: 0x30)
struct UUnlockWorkshopItemCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UUnlockWorkshopItemCallbackProxyGen* UnlockWorkshopItem(struct FReqUnlockWorkshopItem& Request); // Function OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen.UnlockWorkshopItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa190e0
};

// Class OnlineSubsystemIcarus.UnpackageLoadoutCallbackProxyGen
// Size: 0x68 (Inherited: 0x30)
struct UUnpackageLoadoutCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UUnpackageLoadoutCallbackProxyGen* UnpackageLoadout(struct FReqUnpackageLoadout& Request); // Function OnlineSubsystemIcarus.UnpackageLoadoutCallbackProxyGen.UnpackageLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa191a0
};

// Class OnlineSubsystemIcarus.UpdateChallengeProgressCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct UUpdateChallengeProgressCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UUpdateChallengeProgressCallbackProxyGen* UpdateChallengeProgress(struct FReqUpdateChallengeProgress& Request); // Function OnlineSubsystemIcarus.UpdateChallengeProgressCallbackProxyGen.UpdateChallengeProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa19250
};

// Class OnlineSubsystemIcarus.UpdateCharacterLoadoutCallbackProxyGen
// Size: 0x1a0 (Inherited: 0x30)
struct UUpdateCharacterLoadoutCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x150]; // 0x50(0x150)

	struct UUpdateCharacterLoadoutCallbackProxyGen* UpdateCharacterLoadout(struct FReqUpdateCharacterLoadout& Request); // Function OnlineSubsystemIcarus.UpdateCharacterLoadoutCallbackProxyGen.UpdateCharacterLoadout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa19310
};

// Class OnlineSubsystemIcarus.UpdateCharacterProgressCallbackProxyGen
// Size: 0x88 (Inherited: 0x30)
struct UUpdateCharacterProgressCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UUpdateCharacterProgressCallbackProxyGen* UpdateCharacterProgress(struct FReqUpdateCharacterProgress& Request); // Function OnlineSubsystemIcarus.UpdateCharacterProgressCallbackProxyGen.UpdateCharacterProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa193d0
};

// Class OnlineSubsystemIcarus.UpdateCharacterProspectLocationCallbackProxyGen
// Size: 0x78 (Inherited: 0x30)
struct UUpdateCharacterProspectLocationCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UUpdateCharacterProspectLocationCallbackProxyGen* UpdateCharacterProspectLocation(struct FReqUpdateCharacterProspectLocation& Request); // Function OnlineSubsystemIcarus.UpdateCharacterProspectLocationCallbackProxyGen.UpdateCharacterProspectLocation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa194a0
};

// Class OnlineSubsystemIcarus.UpdateCosmeticsCallbackProxyGen
// Size: 0x98 (Inherited: 0x30)
struct UUpdateCosmeticsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UUpdateCosmeticsCallbackProxyGen* UpdateCosmetics(struct FReqUpdateCosmetics& Request); // Function OnlineSubsystemIcarus.UpdateCosmeticsCallbackProxyGen.UpdateCosmetics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa19560
};

// Class OnlineSubsystemIcarus.UpdateFactionMissionProgressCallbackProxyGen
// Size: 0x90 (Inherited: 0x30)
struct UUpdateFactionMissionProgressCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct UUpdateFactionMissionProgressCallbackProxyGen* UpdateFactionMissionProgress(struct FReqUpdateFactionMissionProgress& Request); // Function OnlineSubsystemIcarus.UpdateFactionMissionProgressCallbackProxyGen.UpdateFactionMissionProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa19630
};

// Class OnlineSubsystemIcarus.UpdateProspectCallbackProxyGen
// Size: 0xb8 (Inherited: 0x30)
struct UUpdateProspectCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x68]; // 0x50(0x68)

	struct UUpdateProspectCallbackProxyGen* UpdateProspect(struct FReqUpdateProspect& Request); // Function OnlineSubsystemIcarus.UpdateProspectCallbackProxyGen.UpdateProspect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa19710
};

// Class OnlineSubsystemIcarus.UpdateTrackedStatsCallbackProxyGen
// Size: 0x88 (Inherited: 0x30)
struct UUpdateTrackedStatsCallbackProxyGen : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UUpdateTrackedStatsCallbackProxyGen* UpdateTrackedStats(struct FReqUpdateTrackedStats& Request); // Function OnlineSubsystemIcarus.UpdateTrackedStatsCallbackProxyGen.UpdateTrackedStats // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa19820
};

