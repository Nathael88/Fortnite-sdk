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

// 0x998 (0xDC8 - 0x430)
// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
class UMenuScreen_Athena_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC; // 0x438(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E; // 0x480(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715; // 0x4C8(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57; // 0x510(0x68)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22; // 0x578(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8; // 0x658(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5; // 0x6C8(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20; // 0x738(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98; // 0x7A8(0x70)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A; // 0x818(0xD0)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D; // 0x8E8(0xD0)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2; // 0x9B8(0x98)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1; // 0xA50(0xB8)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54; // 0xB08(0x68)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B; // 0xB70(0xE0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134; // 0xC50(0xA8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B; // 0xCF8(0x50)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224; // 0xD48(0x50)()
	UMulticastDelegateProperty_                  MenuScreenDispatcher;                              // 0xD98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasBeenSelected;                                   // 0xDA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PoseInt;                                           // 0xDAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OffsetTranslate;                                   // 0xDB0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotate;                                      // 0xDBC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MenuScreen_Athena_C");
		return Clss;
	}

	void BlueprintBeginPlay();
	void AnimNotify_LeftB();
	void UserFocus();
	void AnimNotify_playFacialAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX);
	void MenuScreenDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
