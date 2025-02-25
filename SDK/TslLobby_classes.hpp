#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TslLobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TslLobby.TslLobby_v2_C
// 0x0008 (0x03B0 - 0x03A8)
class ATslLobby_v2_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TslLobby(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TslLobby_v2_C">();
	}
	static class ATslLobby_v2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATslLobby_v2_C>();
	}
};
static_assert(alignof(ATslLobby_v2_C) == 0x000008, "Wrong alignment on ATslLobby_v2_C");
static_assert(sizeof(ATslLobby_v2_C) == 0x0003B0, "Wrong size on ATslLobby_v2_C");
static_assert(offsetof(ATslLobby_v2_C, UberGraphFrame) == 0x0003A8, "Member 'ATslLobby_v2_C::UberGraphFrame' has a wrong offset!");

}

