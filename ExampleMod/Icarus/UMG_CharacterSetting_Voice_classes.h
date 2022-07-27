// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C
// Size: 0x319 (Inherited: 0x310)
struct UUMG_CharacterSetting_Voice_C : UUMG_CharacterSetting_TextBase_C {
	struct UFMODEvent* AuditionFMODEvent; // 0x310(0x08)
	bool HasMadeInitialSelection; // 0x318(0x01)

	void ClearOptions(bool ClearIndex); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.ClearOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsValidVoice(struct FCharacterVoicesRowHandle RowHandle, bool& IsValid); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.IsValidVoice // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GenerateOptions(struct FCharacterVoicesRowHandle DefaultSelection); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GenerateOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetVoiceParameter(); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.SetVoiceParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayAuditionEvent(); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.PlayAuditionEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ChangeSelection(int32_t Index); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.ChangeSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSelectionDisplayName(struct FText& DisplayName); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GetSelectionDisplayName // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

