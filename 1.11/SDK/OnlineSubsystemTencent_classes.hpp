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
// Class OnlineSubsystemTencent.TencentHandlerComponentFactory
class UTencentHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TencentHandlerComponentFactory");
		return Clss;
	}

};

// 0x38 (0x128 - 0xF0)
// Class OnlineSubsystemTencent.TssAntiComponent
class UTssAntiComponent : public UActorComponent
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0xF0(0x28)(Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2005[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TssAntiComponent");
		return Clss;
	}

	void ServerHandleDataFromClient(TArray<uint8>& Data);
	void ClientPlayerLogin();
	void ClientHandleDataFromServer(TArray<uint8>& Data);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
