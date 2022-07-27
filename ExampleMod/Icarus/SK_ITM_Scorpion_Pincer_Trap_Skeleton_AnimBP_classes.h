// AnimBlueprintGeneratedClass SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP.SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP_C
// Size: 0x631 (Inherited: 0x2c0)
struct USK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x370(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x420(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x550(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x580(0xb0)
	bool Open; // 0x630(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP.SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP.SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP(int32_t EntryPoint); // Function SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP.SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP_C.ExecuteUbergraph_SK_ITM_Scorpion_Pincer_Trap_Skeleton_AnimBP // (Final|UbergraphFunction) // @ game+0x1be0000
};

