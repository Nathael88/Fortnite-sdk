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

// 0x19 (0x221 - 0x208)
// WidgetBlueprintGeneratedClass SlateContentCalloutMenu.SlateContentCalloutMenu_C
class USlateContentCalloutMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UFortLegacySlateBridgeWidget*          _Slate_Widget__Menu_Content;                       // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxContent;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortLegacySlateWidget            SlateWidgetType;                                   // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateContentCalloutMenu_C");
		return Clss;
	}

	void Get_Size_Box(class USizeBox** Size_Box);
	void Construct();
	void ExecuteUbergraph_SlateContentCalloutMenu(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
