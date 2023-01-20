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
// AnimBlueprintGeneratedClass M_MED_Commando_Head_Cowl__Skeleton_AnimBP.M_MED_Commando_Head_Cowl__Skeleton_AnimBP_C
class UM_MED_Commando_Head_Cowl__Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_261A643B44BADFBADE442DAE95CB374E; // 0x478(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_41442FB8422E32239DE7E2A6A24E8112; // 0x4C0(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_08131C5B469273FEBB3286B09ACE6DCA; // 0x558(0x68)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_46BD4D1E4E1B4B6CFA1AB7842578B7A1; // 0x5C0(0xE0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2454B839401D3501969AA48AD5B37B49; // 0x6A0(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_FA277253427E15AC5D27C88699B807AA; // 0x780(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_B734E9D8418A14BDB00F379ACE17873E; // 0x850(0x98)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6FDA3BD94F499C362A0952BE55D1FCE4; // 0x8E8(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7F33ED3649844BCA1981928F0ABDEAFD; // 0x930(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Commando_Head_Cowl__Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_B734E9D8418A14BDB00F379ACE17873E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP_AnimGraphNode_BlendListByBool_FA277253427E15AC5D27C88699B807AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_41442FB8422E32239DE7E2A6A24E8112();
	void BlueprintInitializeAnimation();
	void Playface();
	void ExecuteUbergraph_M_MED_Commando_Head_Cowl__Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue2, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
