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

// 0xF0 (0x560 - 0x470)
// AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP.M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C
class UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_724BF68D49D16A5F96902B93333198D7; // 0x478(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A; // 0x4C0(0x98)(ContainsInstancedReference)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
