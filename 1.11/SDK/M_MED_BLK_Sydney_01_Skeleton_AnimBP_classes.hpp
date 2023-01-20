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
// AnimBlueprintGeneratedClass M_MED_BLK_Sydney_01_Skeleton_AnimBP.M_MED_BLK_Sydney_01_Skeleton_AnimBP_C
class UM_MED_BLK_Sydney_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B67577B1437A5E72A2A96FBF53853F39; // 0x478(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_205F747E477B9AB23F0ACEB95679AF9F; // 0x4C0(0x98)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_CDA9F3D5454FD4724D3515AD7592E226; // 0x558(0x68)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8FBD9D21449E3E1C6AB8F894EB679AEE; // 0x5C0(0xE0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_599E96B04D5802DB750D1A8064FE9257; // 0x6A0(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_D165706F485A4C579E56468E9B4786F9; // 0x780(0xD0)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_FA82137D403C3565CD766E8DEE9CA7BE; // 0x850(0x98)(ContainsInstancedReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C7E479204816452B491316BEB1224D64; // 0x8E8(0x70)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_BLK_Sydney_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_D165706F485A4C579E56468E9B4786F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FA82137D403C3565CD766E8DEE9CA7BE();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_205F747E477B9AB23F0ACEB95679AF9F();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_BLK_Sydney_01_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_Montage_Play_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
