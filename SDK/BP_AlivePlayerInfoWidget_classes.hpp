#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AlivePlayerInfoWidget

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_AlivePlayerInfoWidget.BP_AlivePlayerInfoWidget_C
// 0x0020 (0x0390 - 0x0370)
class UBP_AlivePlayerInfoWidget_C final : public UTslAlivePlayerInfoWidget
{
public:
	class UWidgetAnimation*                       Warning;                                           // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Increasing;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Decreasing;                                        // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                       Default;                                           // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AlivePlayerInfoWidget_C">();
	}
	static class UBP_AlivePlayerInfoWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AlivePlayerInfoWidget_C>();
	}
};
static_assert(alignof(UBP_AlivePlayerInfoWidget_C) == 0x000008, "Wrong alignment on UBP_AlivePlayerInfoWidget_C");
static_assert(sizeof(UBP_AlivePlayerInfoWidget_C) == 0x000390, "Wrong size on UBP_AlivePlayerInfoWidget_C");
static_assert(offsetof(UBP_AlivePlayerInfoWidget_C, Warning) == 0x000370, "Member 'UBP_AlivePlayerInfoWidget_C::Warning' has a wrong offset!");
static_assert(offsetof(UBP_AlivePlayerInfoWidget_C, Increasing) == 0x000378, "Member 'UBP_AlivePlayerInfoWidget_C::Increasing' has a wrong offset!");
static_assert(offsetof(UBP_AlivePlayerInfoWidget_C, Decreasing) == 0x000380, "Member 'UBP_AlivePlayerInfoWidget_C::Decreasing' has a wrong offset!");
static_assert(offsetof(UBP_AlivePlayerInfoWidget_C, Default) == 0x000388, "Member 'UBP_AlivePlayerInfoWidget_C::Default' has a wrong offset!");

}

