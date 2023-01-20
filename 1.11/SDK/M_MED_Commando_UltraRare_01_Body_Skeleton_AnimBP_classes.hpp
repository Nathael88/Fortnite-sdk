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

// 0x1580 (0x19F0 - 0x470)
// AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP.M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_C
class UM_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A3739B5E48C0B7776ACAAC9C7CF0A270; // 0x478(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A42EFEA44A1FDA2C0A8381B421F7900B; // 0x4C0(0x280)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DC3A3A1E461B38F619E23AB4116DEAE0; // 0x740(0x280)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_D9AF93E64B2CD141DF2F1D850E370836; // 0x9C0(0x280)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0C54A35A4E0FBACBFCD8BF874BE814C5; // 0xC40(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5BD2D0894B978F9028E8DF86CDCD9D85; // 0xC88(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_AB4673DC44FC6444268919858C878B38; // 0xCD0(0x98)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DA9B54054FD5CDF642CD86ADD51347EB; // 0xD68(0x280)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A4505A7646E2056C448E8C900A3F47D3; // 0xFE8(0x280)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A5456E3649FE595D73809BBB039544D4; // 0x1268(0x280)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_C247181B4AA976C204BA5388817B25F2; // 0x14E8(0x280)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3D512BEA4DE8245F35E315A41CCDC5CD; // 0x1768(0x280)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x19E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A5456E3649FE595D73809BBB039544D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A4505A7646E2056C448E8C900A3F47D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_DA9B54054FD5CDF642CD86ADD51347EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_AB4673DC44FC6444268919858C878B38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_C247181B4AA976C204BA5388817B25F2();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_Commando_UltraRare_01_Body_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
