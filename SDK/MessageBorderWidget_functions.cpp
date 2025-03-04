#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageBorderWidget

#include "Basic.hpp"

#include "MessageBorderWidget_classes.hpp"
#include "MessageBorderWidget_parameters.hpp"


namespace SDK
{

// Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage                    DeathMessage                                           (Parm)

void UMessageBorderWidget_C::DisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageBorderWidget_C", "DisplayKilledMessage");

	Params::MessageBorderWidget_C_DisplayKilledMessage Parms{};

	Parms.DeathMessage = std::move(DeathMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageBorderWidget.MessageBorderWidget_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*                 Message                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageBorderWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageBorderWidget_C", "AddMessage");

	Params::MessageBorderWidget_C_AddMessage Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*                 DeleteMessage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageBorderWidget_C::RemoveMessage(class UMessageWidget_C* DeleteMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageBorderWidget_C", "RemoveMessage");

	Params::MessageBorderWidget_C_RemoveMessage Parms{};

	Parms.DeleteMessage = DeleteMessage;

	UObject::ProcessEvent(Func, &Parms);
}

}

