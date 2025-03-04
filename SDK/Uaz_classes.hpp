#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Uaz

#include "Basic.hpp"

#include "VehicleBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Uaz.Uaz_C
// 0x0050 (0x08E0 - 0x0890)
class AUaz_C : public AVehicleBase_C
{
public:
	class USphereComponent*                       Sphere4;                                           // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UVehicleSeatInteractionComponent*       PassengerBCSeat;                                   // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                       Sphere3;                                           // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UVehicleSeatInteractionComponent*       PassengerBRSeat;                                   // 0x08A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                       Sphere2;                                           // 0x08B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UVehicleSeatInteractionComponent*       PassengerBLSeat;                                   // 0x08B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                       Sphere1;                                           // 0x08C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UVehicleSeatInteractionComponent*       PassengerFRSeat;                                   // 0x08C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                       Sphere;                                            // 0x08D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UVehicleSeatInteractionComponent*       DriverSeat;                                        // 0x08D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Uaz_C">();
	}
	static class AUaz_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUaz_C>();
	}
};
static_assert(alignof(AUaz_C) == 0x000008, "Wrong alignment on AUaz_C");
static_assert(sizeof(AUaz_C) == 0x0008E0, "Wrong size on AUaz_C");
static_assert(offsetof(AUaz_C, Sphere4) == 0x000890, "Member 'AUaz_C::Sphere4' has a wrong offset!");
static_assert(offsetof(AUaz_C, PassengerBCSeat) == 0x000898, "Member 'AUaz_C::PassengerBCSeat' has a wrong offset!");
static_assert(offsetof(AUaz_C, Sphere3) == 0x0008A0, "Member 'AUaz_C::Sphere3' has a wrong offset!");
static_assert(offsetof(AUaz_C, PassengerBRSeat) == 0x0008A8, "Member 'AUaz_C::PassengerBRSeat' has a wrong offset!");
static_assert(offsetof(AUaz_C, Sphere2) == 0x0008B0, "Member 'AUaz_C::Sphere2' has a wrong offset!");
static_assert(offsetof(AUaz_C, PassengerBLSeat) == 0x0008B8, "Member 'AUaz_C::PassengerBLSeat' has a wrong offset!");
static_assert(offsetof(AUaz_C, Sphere1) == 0x0008C0, "Member 'AUaz_C::Sphere1' has a wrong offset!");
static_assert(offsetof(AUaz_C, PassengerFRSeat) == 0x0008C8, "Member 'AUaz_C::PassengerFRSeat' has a wrong offset!");
static_assert(offsetof(AUaz_C, Sphere) == 0x0008D0, "Member 'AUaz_C::Sphere' has a wrong offset!");
static_assert(offsetof(AUaz_C, DriverSeat) == 0x0008D8, "Member 'AUaz_C::DriverSeat' has a wrong offset!");

}

