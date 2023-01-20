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

// 0x484 (0x8B4 - 0x430)
// AnimBlueprintGeneratedClass MenuScreen_Commando.MenuScreen_Commando_C
class UMenuScreen_Commando_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F70AA5C441806953E84736BA8BC1318A; // 0x438(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_476FB3144FF01CDECEC25D9FCA0BF170; // 0x480(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_78BB02D34BB0CD13E52B729CD15EC48B; // 0x4C8(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_30CEFFAA4FD7F57FD5A6EDB40D31DE9D; // 0x510(0x68)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_ECCC70F04489C85C49B82FB532A3D3A9; // 0x578(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B; // 0x5E8(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CDEB41CC42B9DE30260861A50A7F4D48; // 0x6C8(0x70)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_0FF63B634F69D86C980667A0EF7099ED; // 0x738(0x98)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E4328FA745CE2162C4FC048495DF6B7C; // 0x7D0(0xB8)()
	UMulticastDelegateProperty_                  MenuScreenDispatcher;                              // 0x888(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasBeenSelected;                                   // 0x898(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetTranslate;                                   // 0x89C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotate;                                      // 0x8A8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MenuScreen_Commando_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_ModifyBone_E4328FA745CE2162C4FC048495DF6B7C();
	void AnimNotify_playFacialAnim();
	void UserFocus();
	void AnimNotify_LeftB();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_MenuScreen_Commando(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue5);
	void MenuScreenDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
