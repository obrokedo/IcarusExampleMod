// BlueprintGeneratedClass BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_AIDamageFunctionLibrary_C : UBlueprintFunctionLibrary {

	void CanActorBeKnockedBack(struct AActor* Target, struct UObject* __WorldContext, bool& CanBeKnockedBack); // Function BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C.CanActorBeKnockedBack // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CalcLaunchAmount(struct FVector Dir, struct AActor* SelfNPC, struct AActor* TargetActor, struct UObject* __WorldContext, struct FVector& OutForce); // Function BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C.CalcLaunchAmount // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayAttackHitEffects(struct AIcarusCharacter* SelfNPC, struct AActor* HitActor, struct UObject* __WorldContext, struct FHitResult& OutHit); // Function BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C.PlayAttackHitEffects // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LaunchAttackTarget(struct AActor* SelfNPC, struct AActor* TargetActor, bool IncludeSelf, struct UObject* __WorldContext); // Function BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C.LaunchAttackTarget // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NPC_DealDamage(struct AIcarusCharacter* CauserNPC, struct AActor* TargetActor, bool LaunchNPC, bool IgnoreRangeCheck, struct UObject* __WorldContext); // Function BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C.NPC_DealDamage // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

