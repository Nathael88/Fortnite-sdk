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

// 0xC (0xE78 - 0xE6C)
// BlueprintGeneratedClass PresentXmas6.PresentXmas6_C
class APresentXmas6_C : public ABuildingContainer
{
public:
	uint8                                        Pad_3BC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PresentXmas6_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLootRepeat();
	void OnBeginSearch();
	void ExecuteUbergraph_PresentXmas6(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
