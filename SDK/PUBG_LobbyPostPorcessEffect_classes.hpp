#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.28) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyPostPorcessEffect.LobbyPostPorcessEffect_C
// 0x0008 (0x0418 - 0x0410)
class ALobbyPostPorcessEffect_C : public ATslPostProcessEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyPostPorcessEffect.LobbyPostPorcessEffect_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
