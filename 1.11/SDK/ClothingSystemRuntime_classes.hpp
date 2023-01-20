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

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntime.ClothingAssetCustomData
class UClothingAssetCustomData : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAssetCustomData");
		return Clss;
	}

};

// 0x118 (0x160 - 0x48)
// Class ClothingSystemRuntime.ClothingAsset
class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothConfig                          ClothConfig;                                       // 0x50(0xBC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2027[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FClothLODData>                 LODData;                                           // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LodMap;                                            // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UsedBoneNames;                                     // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                UsedBoneIndices;                                   // 0x140(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReferenceBoneIndex;                                // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2028[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClothingAssetCustomData*              CustomData;                                        // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAsset");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingSimulationFactoryNv");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
