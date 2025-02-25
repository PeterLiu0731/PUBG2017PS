#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmallEquipmentSlotWidget

#include "Basic.hpp"

#include "SmallEquipmentSlotWidget_classes.hpp"
#include "SmallEquipmentSlotWidget_parameters.hpp"


namespace SDK
{

// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.ExecuteUbergraph_SmallEquipmentSlotWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallEquipmentSlotWidget_C::ExecuteUbergraph_SmallEquipmentSlotWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "ExecuteUbergraph_SmallEquipmentSlotWidget");

	Params::SmallEquipmentSlotWidget_C_ExecuteUbergraph_SmallEquipmentSlotWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USmallEquipmentSlotWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                            Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallEquipmentSlotWidget_C::OnUpdateItem(class UItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "OnUpdateItem");

	Params::SmallEquipmentSlotWidget_C_OnUpdateItem Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText USmallEquipmentSlotWidget_C::GetSlotName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "GetSlotName");

	Params::SmallEquipmentSlotWidget_C_GetSlotName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallEquipmentSlotWidget_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "OnDragDetected");

	Params::SmallEquipmentSlotWidget_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush USmallEquipmentSlotWidget_C::GetIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "GetIcon");

	Params::SmallEquipmentSlotWidget_C_GetIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply USmallEquipmentSlotWidget_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "OnPreviewMouseButtonDown");

	Params::SmallEquipmentSlotWidget_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetItem_Bp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                            Item_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallEquipmentSlotWidget_C::GetItem_Bp(class UItem** Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "GetItem_Bp");

	Params::SmallEquipmentSlotWidget_C_GetItem_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item_0 != nullptr)
		*Item_0 = Parms.Item_0;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.On_FocusColorBG_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallEquipmentSlotWidget_C::On_FocusColorBG_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "On_FocusColorBG_Prepass_0");

	Params::SmallEquipmentSlotWidget_C_On_FocusColorBG_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.SetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USmallEquipmentSlotWidget_C::SetFocus(bool NewFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "SetFocus");

	Params::SmallEquipmentSlotWidget_C_SetFocus Parms{};

	Parms.NewFocus = NewFocus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISlotContainerInterface>SlotContainer                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallEquipmentSlotWidget_C::GetSlotContainer(TScriptInterface<class ISlotContainerInterface>* SlotContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "GetSlotContainer");

	Params::SmallEquipmentSlotWidget_C_GetSlotContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotContainer != nullptr)
		*SlotContainer = Parms.SlotContainer;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.GetSlotItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISlotInterface>  SlotItem                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallEquipmentSlotWidget_C::GetSlotItem(TScriptInterface<class ISlotInterface>* SlotItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "GetSlotItem");

	Params::SmallEquipmentSlotWidget_C_GetSlotItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotItem != nullptr)
		*SlotItem = Parms.SlotItem;
}


// Function SmallEquipmentSlotWidget.SmallEquipmentSlotWidget_C.IsFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USmallEquipmentSlotWidget_C::IsFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmallEquipmentSlotWidget_C", "IsFocus");

	Params::SmallEquipmentSlotWidget_C_IsFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

