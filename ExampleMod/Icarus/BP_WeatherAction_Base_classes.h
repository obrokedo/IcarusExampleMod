// BlueprintGeneratedClass BP_WeatherAction_Base.BP_WeatherAction_Base_C
// Size: 0x4b9 (Inherited: 0x410)
struct UBP_WeatherAction_Base_C : UIcarusWeatherAction {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct FText ActiveWarningMessage; // 0x418(0x18)
	struct TArray<struct ABP_Building_Base_C*> WindDamagedBuildings; // 0x430(0x10)
	struct ABP_WeatherController_C* WeatherControllerRef; // 0x440(0x08)
	struct FTimerHandle DamageDeployablesRef; // 0x448(0x08)
	struct FTimerHandle DamagePlayerRef; // 0x450(0x08)
	struct TArray<struct UObject*> LoadedSoftObjects; // 0x458(0x10)
	struct TMap<struct AIcarusPlayerCharacter*, int32_t> AppliedExposureModifiers; // 0x468(0x50)
	bool DebugPrintStormData; // 0x4b8(0x01)

	float GetStormTier(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.GetStormTier // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void PickUnzipGrid(struct ABP_Grid_Base_C*& SelectedGrid); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.PickUnzipGrid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Action_SnowBuildUp(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_SnowBuildUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearExposureModifierForPlayer(struct AIcarusPlayerCharacter*& Player); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.ClearExposureModifierForPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Action_ExtinguishFire(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_ExtinguishFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Action_RainFillable(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_RainFillable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Action_Wind(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_Wind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Action_AIPerception(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_AIPerception // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Action_Temperature(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_Temperature // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visual_SnowStorm(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_SnowStorm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visual_Snow(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Snow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visual_Sand(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Sand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visual_Wind(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Wind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visual_Debris(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Debris // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visual_Clouds(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Clouds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visual_Rain(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Rain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayerExposureChecks(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.PlayerExposureChecks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RandomizeWind(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.RandomizeWind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetTimeRemaining(struct UCurveFloat* Curve, bool Inverse); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.GetTimeRemaining // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void StartWindDamageToBuilding(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.StartWindDamageToBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugWeatherActionBase(struct UObject* Object, struct FBiomesRowHandle& BiomesRowHandle, float CurrentLifeTime, float TotalLifeTime); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.DebugWeatherActionBase // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_2B8B2B624CE5F97DAE6892B7F63BB814(struct UObject* Loaded); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.OnLoaded_2B8B2B624CE5F97DAE6892B7F63BB814 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeatherActionStarted(struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionStarted // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void WeatherActionEnded(struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionEnded // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void StormWindDamageSelectBuildingPiece(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.StormWindDamageSelectBuildingPiece // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeatherActionVisualTick(float Delta, struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionVisualTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void WeatherActionTick(float Delta, struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Damage_Deployables(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Damage_Deployables // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Damage_Player(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Damage_Player // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadSoftObjects(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.LoadSoftObjects // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_WeatherAction_Base(int32_t EntryPoint); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.ExecuteUbergraph_BP_WeatherAction_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

