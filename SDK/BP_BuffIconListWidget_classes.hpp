#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuffIconListWidget

#include "Basic.hpp"

#include "TslGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BuffIconListWidget.BP_BuffIconListWidget_C
// 0x0010 (0x0330 - 0x0320)
class UBP_BuffIconListWidget_C final : public UTslBuffIconListWidget
{
public:
	class UImage*                                 HealBuffIcon;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                 RunBuffIcon;                                       // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuffIconListWidget_C">();
	}
	static class UBP_BuffIconListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuffIconListWidget_C>();
	}
};
static_assert(alignof(UBP_BuffIconListWidget_C) == 0x000008, "Wrong alignment on UBP_BuffIconListWidget_C");
static_assert(sizeof(UBP_BuffIconListWidget_C) == 0x000330, "Wrong size on UBP_BuffIconListWidget_C");
static_assert(offsetof(UBP_BuffIconListWidget_C, HealBuffIcon) == 0x000320, "Member 'UBP_BuffIconListWidget_C::HealBuffIcon' has a wrong offset!");
static_assert(offsetof(UBP_BuffIconListWidget_C, RunBuffIcon) == 0x000328, "Member 'UBP_BuffIconListWidget_C::RunBuffIcon' has a wrong offset!");

}

