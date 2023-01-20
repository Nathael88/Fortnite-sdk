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

// 0x8 (0xE80 - 0xE78)
// BlueprintGeneratedClass Tree_Pine_01_Christmas.Tree_Pine_01_Christmas_C
class ATree_Pine_01_Christmas_C : public AParent_Tree_C
{
public:
	class UPointLightComponent*                  PointLight;                                        // 0xE78(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tree_Pine_01_Christmas_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
