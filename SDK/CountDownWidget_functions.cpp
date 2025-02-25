#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CountDownWidget

#include "Basic.hpp"

#include "CountDownWidget_classes.hpp"
#include "CountDownWidget_parameters.hpp"


namespace SDK
{

// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCountDownWidget_C::Get_CountDownText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountDownWidget_C", "Get_CountDownText_Text_0");

	Params::CountDownWidget_C_Get_CountDownText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

ESlateVisibility UCountDownWidget_C::Get_CountDownText_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountDownWidget_C", "Get_CountDownText_Visibility_0");

	Params::CountDownWidget_C_Get_CountDownText_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CountDownWidget.CountDownWidget_C.On_CountDownText_Prepass_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountDownWidget_C::On_CountDownText_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountDownWidget_C", "On_CountDownText_Prepass_0");

	Params::CountDownWidget_C_On_CountDownText_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountDownWidget.CountDownWidget_C.On_CountDownBlock_Prepass_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountDownWidget_C::On_CountDownBlock_Prepass_0(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountDownWidget_C", "On_CountDownBlock_Prepass_0");

	Params::CountDownWidget_C_On_CountDownBlock_Prepass_0 Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountDownWidget.CountDownWidget_C.GetTslGameState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslGameState*                    GameState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountDownWidget_C::GetTslGameState(class ATslGameState** GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountDownWidget_C", "GetTslGameState");

	Params::CountDownWidget_C_GetTslGameState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GameState != nullptr)
		*GameState = Parms.GameState;
}

}

