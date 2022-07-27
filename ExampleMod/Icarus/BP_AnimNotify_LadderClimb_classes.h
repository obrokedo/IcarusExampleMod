// BlueprintGeneratedClass BP_AnimNotify_LadderClimb.BP_AnimNotify_LadderClimb_C
// Size: 0x50 (Inherited: 0x38)
struct UBP_AnimNotify_LadderClimb_C : UAnimNotify {
	enum class EAudioPlayerPerspective PerspectiveToPlayIn; // 0x38(0x01)
	enum class EAudioPlayerAppendageType HandOrFoot; // 0x39(0x01)
	bool ReversePlay; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct UFMODEvent* HandTestFMODEvent; // 0x40(0x08)
	struct UFMODEvent* FootTestFMODEvent; // 0x48(0x08)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_AnimNotify_LadderClimb.BP_AnimNotify_LadderClimb_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	struct FString GetNotifyName(); // Function BP_AnimNotify_LadderClimb.BP_AnimNotify_LadderClimb_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
};

