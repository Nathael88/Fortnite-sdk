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

// 0x4F0 (0x960 - 0x470)
// AnimBlueprintGeneratedClass SK_M_MED_Head_01_Skeleton_AnimBP.SK_M_MED_Head_01_Skeleton_AnimBP_C
class USK_M_MED_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906; // 0x478(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1; // 0x510(0x68)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD; // 0x578(0xE0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF; // 0x658(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73; // 0x738(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7; // 0x808(0x98)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178; // 0x8A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41; // 0x8E8(0x70)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_M_MED_Head_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_Montage_Play_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
