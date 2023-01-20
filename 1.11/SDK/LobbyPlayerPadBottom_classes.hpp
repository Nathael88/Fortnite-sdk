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

// 0x1C2 (0x3D2 - 0x210)
// WidgetBlueprintGeneratedClass LobbyPlayerPadBottom.LobbyPlayerPadBottom_C
class ULobbyPlayerPadBottom_C : public UCommonUserWidget
{
public:
	class UImage*                                BattlePassBadge;                                   // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlePassSelfXpGainLine;                          // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlePassSharedXpGainLine;                        // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   Team_Member_Info;                                  // 0x228(0x1A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Local_Player;                                   // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Friend;                                         // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyPlayerPadBottom_C");
		return Clss;
	}

	void Refresh(class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsTeamMemberFriend_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FFortBattlePassInfo& CallFunc_GetBattlePassInfoForPlayer_Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void Set_Team_Member_Info(const struct FFortTeamMemberInfo& New_Team_Member_Info);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
