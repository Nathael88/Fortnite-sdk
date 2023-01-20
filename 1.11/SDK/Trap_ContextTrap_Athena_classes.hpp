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
// BlueprintGeneratedClass Trap_ContextTrap_Athena.Trap_ContextTrap_Athena_C
class ATrap_ContextTrap_Athena_C : public ABuildingTrap
{
public:
	uint8                                        Pad_3D43[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Trap_ContextTrap_Athena_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
