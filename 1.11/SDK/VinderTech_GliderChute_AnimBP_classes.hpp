#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x698 (0xA50 - 0x3B8)
// AnimBlueprintGeneratedClass VinderTech_GliderChute_AnimBP.VinderTech_GliderChute_AnimBP_C
class UVinderTech_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2A80[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6; // 0x3C8(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585; // 0x410(0x68)()
	uint8                                        Pad_2A81[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648; // 0x480(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE; // 0x500(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775; // 0x580(0x80)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122; // 0x600(0x80)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D; // 0x680(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C; // 0x6F0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65; // 0x738(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB; // 0x7A8(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D; // 0x7F0(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1; // 0x918(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F; // 0x960(0xD8)()
	bool                                         IsParachuteOpen;                                   // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaSeconds;                                      // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftRight;                                         // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        YawDeltaSmoothed;                                  // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimPitch;                                          // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployAnimRate;                                    // 0xA4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VinderTech_GliderChute_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_VinderTech_GliderChute_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess2, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsParachuteOpen_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, float K2Node_Event_DeltaTimeX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
