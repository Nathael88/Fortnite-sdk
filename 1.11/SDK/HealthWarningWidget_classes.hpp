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

// 0x58 (0x428 - 0x3D0)
// WidgetBlueprintGeneratedClass HealthWarningWidget.HealthWarningWidget_C
class UHealthWarningWidget_C : public UFortHealthWarningBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FinishingAnim;                                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      CommonLazyImage_0;                                 // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HealthWarningText;                                 // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RatingIconsBox;                                    // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  HealthWarningCompleted;                            // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        ShowTimeLength;                                    // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_282D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ShowTimer;                                         // 0x410(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                               IconPadding;                                       // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HealthWarningWidget_C");
		return Clss;
	}

	void SetupShowTimer(const struct FTimerHandle& NewLocalVar_0, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnActivated();
	void HandleShowTimerComplete();
	void Destruct();
	void Construct();
	void AddIconToScreen(class UCommonLazyImage* Image);
	void ExecuteUbergraph_HealthWarningWidget(int32 EntryPoint, class FText CallFunc_GetHealthWarningText_ReturnValue, class UCommonLazyImage* K2Node_Event_Image, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void HealthWarningCompleted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
