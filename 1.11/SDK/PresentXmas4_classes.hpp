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
// BlueprintGeneratedClass PresentXmas4.PresentXmas4_C
class APresentXmas4_C : public ABuildingContainer
{
public:
	uint8                                        Pad_3F0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PresentXmas4_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLootRepeat();
	void OnBeginSearch();
	void ExecuteUbergraph_PresentXmas4(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
