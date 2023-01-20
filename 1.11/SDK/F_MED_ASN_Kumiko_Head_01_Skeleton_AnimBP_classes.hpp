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

// 0x510 (0x980 - 0x470)
// AnimBlueprintGeneratedClass F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP.F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C
class UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0B40686742835C44D79BBF912D9EE786; // 0x478(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756; // 0x4C0(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_647DFDF241CA0D786C7678A9DA110BA2; // 0x558(0x68)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_0A434B384ABE9775ABE93A9D2614EB63; // 0x5C0(0xE0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_C4B69DBA48E9D799B2611CBC4C2E21C0; // 0x6A0(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42; // 0x780(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D; // 0x850(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_C22854E142B1FF2C4EA56C9F5DA77887; // 0x8E8(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17B4681A41228AABE5D3828791B20C56; // 0x930(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
