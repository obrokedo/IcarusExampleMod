// BlueprintGeneratedClass BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C
// Size: 0x438 (Inherited: 0x400)
struct ABP_SkeletalItem_Fishing_Rod_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USceneComponent* LureAttach; // 0x408(0x08)
	struct UChildActorComponent* Lure; // 0x410(0x08)
	struct UCableComponent* Cable; // 0x418(0x08)
	struct USceneComponent* AttachPoint; // 0x420(0x08)
	bool Reeling; // 0x428(0x01)
	bool FullyCasted; // 0x429(0x01)
	char pad_42A[0x2]; // 0x42a(0x02)
	float CastLength; // 0x42c(0x04)
	float ReelSpeed; // 0x430(0x04)
	float MaxCastLength; // 0x434(0x04)

	void IsCasted(bool& Casted); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.IsCasted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void LaunchLure(struct FVector Velocity); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.LaunchLure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetLure(struct ABP_Fishing_Rod_Lure_C*& Lure); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.GetLure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ResetLure(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ResetLure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LureCollide(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.LureCollide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LureOverlap(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.LureOverlap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_SkeletalItem_Fishing_Rod(int32_t EntryPoint); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ExecuteUbergraph_BP_SkeletalItem_Fishing_Rod // (Final|UbergraphFunction) // @ game+0x1be0000
};

