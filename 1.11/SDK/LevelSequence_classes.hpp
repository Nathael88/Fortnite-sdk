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

// 0x100 (0x430 - 0x330)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x338(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0x388(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x3D8(0x50)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FDF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequence");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnInInitSettings");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnInOptions");
		return Clss;
	}

};

// 0x80 (0x3E8 - 0x368)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_1FE4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoPlay;                                         // 0x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x378(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x3A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       LevelSequence;                                     // 0x3A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        AdditionalEventReceivers;                          // 0x3C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x3D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceActor");
		return Clss;
	}

	void SetSequence(class ULevelSequence* InSequence);
	void SetEventReceivers(const TArray<class AActor*>& AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// 0x60 (0x268 - 0x208)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x208(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnIn");
		return Clss;
	}

	void SetSettings(class UObject* InSettings);
	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
};

// 0xA0 (0x890 - 0x7F0)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	UMulticastDelegateProperty_                  OnCameraCut;                                       // 0x7F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE6[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       AdditionalEventReceivers;                          // 0x830(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FE7[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequencePlayer");
		return Clss;
	}

	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif