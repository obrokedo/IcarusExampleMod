// BlueprintGeneratedClass BP_FirearmCosmeticController.BP_FirearmCosmeticController_C
// Size: 0x871 (Inherited: 0xb0)
struct UBP_FirearmCosmeticController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool IsCharging; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float CurrentChargePower; // 0xbc(0x04)
	float AmmoCount; // 0xc0(0x04)
	bool Reloading; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct AIcarusPlayerCharacterSurvival* OwningPlayer; // 0xc8(0x08)
	struct TMap<struct UFMODAudioComponent*, struct FFirearmSoundData> PersistentAudioComponents; // 0xd0(0x50)
	struct FFirearmData FirearmData; // 0x120(0x6f0)
	struct FMulticastInlineDelegate OnWeaponAnimationStart; // 0x810(0x10)
	struct FMulticastInlineDelegate OnWeaponAnimationEnd; // 0x820(0x10)
	struct FMulticastInlineDelegate OnFirstPersonAnimationStart; // 0x830(0x10)
	struct FMulticastInlineDelegate OnFirstPersonAnimationEnd; // 0x840(0x10)
	struct FMulticastInlineDelegate OnThirdPersonAnimationStart; // 0x850(0x10)
	struct FMulticastInlineDelegate OnThirdPersonAnimationEnd; // 0x860(0x10)
	bool IsAiming; // 0x870(0x01)

	void PlayUseWhenBrokenSound(); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.PlayUseWhenBrokenSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePersistentAudioAim(bool NewIsAiming); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdatePersistentAudioAim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePersistentAudioAmmo(bool NewReloading, int32_t NewAmmoCount); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdatePersistentAudioAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePersistentAudioCharge(bool NewIsCharging, float NewChargeStrength); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdatePersistentAudioCharge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopAllAnimations(); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.StopAllAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetOwnerMeshComponent(struct USkeletalMeshComponent*& AsSkeletal Mesh Component, bool& Valid); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.GetOwnerMeshComponent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAudioPerspective(); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.UpdateAudioPerspective // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopPersistentAudio(); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.StopPersistentAudio // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartPersistentAudio(); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.StartPersistentAudio // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlaySound(struct FFirearmSoundData& FirearmSoundData); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.PlaySound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_7360B0564CB85F370942C3B80E39A7D0(struct UObject* Loaded); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnLoaded_7360B0564CB85F370942C3B80E39A7D0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_C53A0FD242A9B8B751A78CB687B7525F(struct UObject* Loaded); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnLoaded_C53A0FD242A9B8B751A78CB687B7525F // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_C93749A8437E973B82F6A6B1DDAF9114 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_C8C3925C475373B80C198BA66441AF28 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_C8C3925C475373B80C198BA66441AF28 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_C8C3925C475373B80C198BA66441AF28 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_C8C3925C475373B80C198BA66441AF28 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_C8C3925C475373B80C198BA66441AF28 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4(struct UObject* Loaded); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadAndPlayWeaponAnimation(struct TSoftObjectPtr<UObject>& WeaponAnimationReference, float PlayRateScale, float FixedTime, struct FName CallbackId, struct FName ScaleBasedOnSection, float StartPosition); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.LoadAndPlayWeaponAnimation // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadAndPlayFirstPersonAnimation(struct TSoftObjectPtr<UObject>& FirstPersonAnimationReference, float PlayRateScale, float FixedTime, struct FName CallbackId, struct FName ScaleBasedOnSection, float StartPosition); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.LoadAndPlayFirstPersonAnimation // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadAndPlayThirdPersonAnimation(struct TSoftObjectPtr<UObject>& ThirdPersonAnimationReference, float PlayRateScale, float FixedTime, struct FName CallbackId, struct FName ScaleBasedOnSection, float StartPosition); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.LoadAndPlayThirdPersonAnimation // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayAnimations(struct TSoftObjectPtr<UObject> MeshAnimationReference, struct TSoftObjectPtr<UObject> FirstPersonAnimation, struct TSoftObjectPtr<UObject> ThirdPersonAnimation, float PlayRateScale, float FixedDuration, struct FName CallbackId, struct FName ScaleBasedOnMontageSection, float StartPosition); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.PlayAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_FirearmCosmeticController(int32_t EntryPoint); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.ExecuteUbergraph_BP_FirearmCosmeticController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void OnThirdPersonAnimationEnd__DelegateSignature(struct FName AnimationId); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnThirdPersonAnimationEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnThirdPersonAnimationStart__DelegateSignature(struct FName AnimationId); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnThirdPersonAnimationStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFirstPersonAnimationEnd__DelegateSignature(struct FName AnimationId); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnFirstPersonAnimationEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFirstPersonAnimationStart__DelegateSignature(struct FName AnimationId); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnFirstPersonAnimationStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeaponAnimationEnd__DelegateSignature(struct FName AnimationId); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnWeaponAnimationEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeaponAnimationStart__DelegateSignature(struct FName AnimationId); // Function BP_FirearmCosmeticController.BP_FirearmCosmeticController_C.OnWeaponAnimationStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

