// Class AdvancedSessions.AdvancedExternalUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedExternalUILibrary : UBlueprintFunctionLibrary {

	void ShowWebURLUI(struct FString URLToShow, enum class EBlueprintResultSwitch& Result, struct TArray<struct FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a3840
	void ShowProfileUI(struct FBPUniqueNetId PlayerViewingProfile, struct FBPUniqueNetId PlayerToViewProfileOf, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a3670
	void ShowLeaderBoardUI(struct FString LeaderboardName, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a3540
	void ShowInviteUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch& Result, struct FName SessionName); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a3420
	void ShowFriendsUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a3350
	void ShowAccountUpgradeUI(struct FBPUniqueNetId PlayerRequestingAccountUpgradeUI, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a3220
	void CloseWebURLUI(); // Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x89e7d0
};

// Class AdvancedSessions.AdvancedFriendsGameInstance
// Size: 0x228 (Inherited: 0x1a8)
struct UAdvancedFriendsGameInstance : UGameInstance {
	bool bCallFriendInterfaceEventsOnPlayerControllers; // 0x1a8(0x01)
	bool bCallIdentityInterfaceEventsOnPlayerControllers; // 0x1a9(0x01)
	bool bCallVoiceInterfaceEventsOnPlayerControllers; // 0x1aa(0x01)
	bool bEnableTalkingStatusDelegate; // 0x1ab(0x01)
	char pad_1AC[0x7c]; // 0x1ac(0x7c)

	void OnSessionInviteReceived(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInviting, struct FString AppId, struct FBlueprintSessionResult& SessionToJoin); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnSessionInviteAccepted(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult& SessionToJoin); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerTalkingStateChanged(struct FBPUniqueNetId PlayerID, bool bIsTalking); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerLoginStatusChanged(int32_t PlayerNum, enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId NewPlayerUniqueNetID); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerLoginChanged(int32_t PlayerNum); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
};

// Class AdvancedSessions.AdvancedFriendsInterface
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedFriendsInterface : UInterface {

	void OnSessionInviteReceived(struct FBPUniqueNetId PersonInviting, struct FBlueprintSessionResult& SearchResult); // Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnSessionInviteAccepted(struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult& SearchResult); // Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerVoiceStateChanged(struct FBPUniqueNetId PlayerID, bool bIsTalking); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId PlayerUniqueNetID); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnPlayerLoginChanged(int32_t PlayerNum); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
};

// Class AdvancedSessions.AdvancedFriendsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedFriendsLibrary : UBlueprintFunctionLibrary {

	void SendSessionInviteToFriends(struct APlayerController* PlayerController, struct TArray<struct FBPUniqueNetId>& Friends, enum class EBlueprintResultSwitch& Result, struct FName SessionName); // Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a2d80
	void SendSessionInviteToFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId, enum class EBlueprintResultSwitch& Result, struct FName SessionName); // Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a2bd0
	void IsAFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetId, bool& IsFriend); // Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a1f60
	void GetStoredRecentPlayersList(struct FBPUniqueNetId UniqueNetId, struct TArray<struct FBPOnlineRecentPlayer>& PlayersList); // Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a0db0
	void GetStoredFriendsList(struct APlayerController* PlayerController, struct TArray<struct FBPFriendInfo>& FriendsList); // Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a0c60
	void GetFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId, struct FBPFriendInfo& Friend); // Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89f340
};

// Class AdvancedSessions.AdvancedIdentityLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedIdentityLibrary : UBlueprintFunctionLibrary {

	void SetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, struct FString AttributeName, struct FString NewAttributeValue, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a3060
	void GetUserID(struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a1d80
	void GetUserAccountRealName(struct FBPUserOnlineAccount& AccountInfo, struct FString& UserName); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a1c60
	void GetUserAccountDisplayName(struct FBPUserOnlineAccount& AccountInfo, struct FString& DisplayName); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a1b40
	void GetUserAccountAuthAttribute(struct FBPUserOnlineAccount& AccountInfo, struct FString AttributeName, struct FString& AuthAttribute, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a1960
	void GetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, struct FString AttributeName, struct FString& AttributeValue, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a1780
	void GetUserAccountAccessToken(struct FBPUserOnlineAccount& AccountInfo, struct FString& AccessToken); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a1660
	void GetUserAccount(struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount& AccountInfo, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a14c0
	void GetPlayerNickname(struct FBPUniqueNetId& UniqueNetId, struct FString& PlayerNickname); // Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89fa50
	void GetPlayerAuthToken(struct APlayerController* PlayerController, struct FString& AuthToken, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89f830
	void GetLoginStatus(struct FBPUniqueNetId& UniqueNetId, enum class EBPLoginStatus& LoginStatus, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89f530
	void GetAllUserAccounts(struct TArray<struct FBPUserOnlineAccount>& AccountInfos, enum class EBlueprintResultSwitch& Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89ecb0
};

// Class AdvancedSessions.AdvancedSessionsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedSessionsLibrary : UBlueprintFunctionLibrary {

	void UniqueNetIdToString(struct FBPUniqueNetId& UniqueNetId, struct FString& String); // Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a3bd0
	void SetPlayerName(struct APlayerController* PlayerController, struct FString PlayerName); // Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a2f40
	struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(struct FSessionPropertyKeyPair SessionSearchProperty, enum class EOnlineComparisonOpRedux ComparisonOp); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a2a90
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(struct FName Key, struct FString Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a2940
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(struct FName Key, int32_t Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a2850
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(struct FName Key, float Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a2760
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(struct FName Key, char Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a2670
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(struct FName Key, bool Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a2580
	bool IsValidUniqueNetID(struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a24b0
	bool IsValidSession(struct FBlueprintSessionResult& SessionResult); // Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a2290
	void IsPlayerInSession(struct UObject* WorldContextObject, struct FBPUniqueNetId& PlayerToCheck, bool& bIsInSession, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a20e0
	bool HasOnlineSubsystem(struct FName SubSystemName); // Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a1ed0
	void GetUniqueNetIDFromPlayerState(struct APlayerState* PlayerState, struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a13c0
	void GetUniqueNetID(struct APlayerController* PlayerController, struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a12c0
	void GetUniqueBuildID(struct FBlueprintSessionResult SessionResult, int32_t& UniqueBuildId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a0f60
	void GetSessionState(struct UObject* WorldContextObject, enum class EBPOnlineSessionState& SessionState, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a0b40
	void GetSessionSettings(struct UObject* WorldContextObject, int32_t& NumConnections, int32_t& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32_t& BuildUniqueID, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, enum class EBlueprintResultSwitch& Result, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a0700
	void GetSessionPropertyString(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, struct FString& SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a0540
	struct FName GetSessionPropertyKey(struct FSessionPropertyKeyPair& SessionProperty); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a0490
	void GetSessionPropertyInt(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, int32_t& SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a02f0
	void GetSessionPropertyFloat(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, float& SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a0140
	void GetSessionPropertyByte(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, char& SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89ffa0
	void GetSessionPropertyBool(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult& SearchResult, bool& SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89fe00
	void GetSessionID_AsString(struct FBlueprintSessionResult& SessionResult, struct FString& SessionId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89fb80
	void GetPlayerName(struct APlayerController* PlayerController, struct FString& PlayerName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89f970
	void GetNumberOfNetworkPlayers(struct UObject* WorldContextObject, int32_t& NumNetPlayers); // Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89f760
	void GetNetPlayerIndex(struct APlayerController* PlayerController, int32_t& NetPlayerIndex); // Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89f690
	void GetExtraSettings(struct FBlueprintSessionResult SessionResult, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings); // Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89efa0
	void GetCurrentUniqueBuildID(int32_t& UniqueBuildId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89ef20
	void GetCurrentSessionID_AsString(struct UObject* WorldContextObject, struct FString& SessionId, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89edf0
	void FindSessionPropertyIndexByName(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingName, enum class EBlueprintResultSwitch& Result, int32_t& OutIndex); // Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89eb10
	void FindSessionPropertyByName(struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SettingsName, enum class EBlueprintResultSwitch& Result, struct FSessionPropertyKeyPair& OutProperty); // Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89e950
	bool EqualEqual_UNetIDUnetID(struct FBPUniqueNetId& A, struct FBPUniqueNetId& B); // Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x89e7f0
	void AddOrModifyExtraSettings(struct TArray<struct FSessionPropertyKeyPair>& SettingsArray, struct TArray<struct FSessionPropertyKeyPair>& NewOrChangedSettings, struct TArray<struct FSessionPropertyKeyPair>& ModifiedSettingsArray); // Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x89e600
};

// Class AdvancedSessions.AdvancedVoiceLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedVoiceLibrary : UBlueprintFunctionLibrary {

	bool UnRegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a8820
	void UnRegisterLocalTalker(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a87b0
	void UnRegisterAllLocalTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a8790
	bool UnMuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide); // Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a8630
	void StopNetworkedVoice(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a85c0
	void StartNetworkedVoice(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a8550
	void RemoveAllRemoteTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a83d0
	bool RegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a8300
	bool RegisterLocalTalker(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a8280
	void RegisterAllLocalTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a8260
	bool MuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide); // Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a8100
	bool IsRemotePlayerTalking(struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a7d70
	bool IsPlayerMuted(char LocalUserNumChecking, struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a7c60
	bool IsLocalPlayerTalking(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8a7be0
	void IsHeadsetPresent(bool& bHasHeadset, char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a7b10
	void GetNumLocalTalkers(int32_t& NumLocalTalkers); // Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8a7930
};

// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UCancelFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UCancelFindSessionsCallbackProxy* CancelFindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a6960
};

// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// Size: 0xc0 (Inherited: 0x30)
struct UCreateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	struct UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct APlayerController* PlayerController, struct FName SessionName, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise); // Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a6a30
};

// Class AdvancedSessions.DestroySessionCallbackProxyAdvanced
// Size: 0x80 (Inherited: 0x30)
struct UDestroySessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UDestroySessionCallbackProxyAdvanced* DestroyAdvacedSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName SessionName); // Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroyAdvacedSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a6ee0
};

// Class AdvancedSessions.EndSessionCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UEndSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UEndSessionCallbackProxy* EndSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName SessionName); // Function AdvancedSessions.EndSessionCallbackProxy.EndSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a6fe0
};

// Class AdvancedSessions.FindFriendSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UFindFriendSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UFindFriendSessionCallbackProxy* FindFriendSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId); // Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a72b0
};

// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// Size: 0xd0 (Inherited: 0x30)
struct UFindSessionsCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, enum class EBPServerPresenceSearchType ServerTypeToSearch, struct TArray<struct FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int32_t MinSlotsAvailable); // Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a7410
	void FilterSessionResults(struct TArray<struct FBlueprintSessionResult>& SessionResults, struct TArray<struct FSessionsSearchSetting>& Filters, struct TArray<struct FBlueprintSessionResult>& FilteredResults); // Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a70e0
};

// Class AdvancedSessions.GetFriendsCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UGetFriendsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UGetFriendsCallbackProxy* GetAndStoreFriendsList(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a7750
};

// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UGetRecentPlayersCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(struct UObject* WorldContextObject, struct FBPUniqueNetId& UniqueNetId); // Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a7820
};

// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UGetUserPrivilegeCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UGetUserPrivilegeCallbackProxy* GetUserPrivilege(struct UObject* WorldContextObject, enum class EBPUserPrivileges& PrivilegeToCheck, struct FBPUniqueNetId& PlayerUniqueNetID); // Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a79b0
};

// Class AdvancedSessions.LoginUserCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct ULoginUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct ULoginUserCallbackProxy* LoginUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString UserID, struct FString UserToken); // Function AdvancedSessions.LoginUserCallbackProxy.LoginUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a7e40
};

// Class AdvancedSessions.LogoutUserCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct ULogoutUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct ULogoutUserCallbackProxy* LogoutUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8a8030
};

// Class AdvancedSessions.SendFriendInviteCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct USendFriendInviteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct USendFriendInviteCallbackProxy* SendFriendInvite(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId& UniqueNetIDInvited); // Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a83f0
};

// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// Size: 0xa0 (Inherited: 0x30)
struct UUpdateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct UUpdateSessionCallbackProxyAdvanced* UpdateSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair>& ExtraSettings, struct FName SessionName, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer); // Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8a88f0
};

