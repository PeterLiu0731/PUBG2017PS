#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OceanPlugin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "OceanPlugin_structs.hpp"


namespace SDK::Params
{

// Function OceanPlugin.OceanManager.GetWaveHeightValue
// 0x0028 (0x0028 - 0x0000)
struct OceanManager_GetWaveHeightValue final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWorld*                           World;                                             // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HeightOnly;                                        // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TwoIterations;                                     // 0x0019(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x001C(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OceanManager_GetWaveHeightValue) == 0x000008, "Wrong alignment on OceanManager_GetWaveHeightValue");
static_assert(sizeof(OceanManager_GetWaveHeightValue) == 0x000028, "Wrong size on OceanManager_GetWaveHeightValue");
static_assert(offsetof(OceanManager_GetWaveHeightValue, Location) == 0x000000, "Member 'OceanManager_GetWaveHeightValue::Location' has a wrong offset!");
static_assert(offsetof(OceanManager_GetWaveHeightValue, World) == 0x000010, "Member 'OceanManager_GetWaveHeightValue::World' has a wrong offset!");
static_assert(offsetof(OceanManager_GetWaveHeightValue, HeightOnly) == 0x000018, "Member 'OceanManager_GetWaveHeightValue::HeightOnly' has a wrong offset!");
static_assert(offsetof(OceanManager_GetWaveHeightValue, TwoIterations) == 0x000019, "Member 'OceanManager_GetWaveHeightValue::TwoIterations' has a wrong offset!");
static_assert(offsetof(OceanManager_GetWaveHeightValue, ReturnValue) == 0x00001C, "Member 'OceanManager_GetWaveHeightValue::ReturnValue' has a wrong offset!");

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// 0x0008 (0x0008 - 0x0000)
struct OceanManager_LoadLandscapeHeightmap final
{
public:
	class UTexture2D*                             Tex2D;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OceanManager_LoadLandscapeHeightmap) == 0x000008, "Wrong alignment on OceanManager_LoadLandscapeHeightmap");
static_assert(sizeof(OceanManager_LoadLandscapeHeightmap) == 0x000008, "Wrong size on OceanManager_LoadLandscapeHeightmap");
static_assert(offsetof(OceanManager_LoadLandscapeHeightmap, Tex2D) == 0x000000, "Member 'OceanManager_LoadLandscapeHeightmap::Tex2D' has a wrong offset!");

// Function OceanPlugin.OceanManager.GetHeightmapPixel
// 0x0018 (0x0018 - 0x0000)
struct OceanManager_GetHeightmapPixel final
{
public:
	float                                         U;                                                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         V;                                                 // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OceanManager_GetHeightmapPixel) == 0x000004, "Wrong alignment on OceanManager_GetHeightmapPixel");
static_assert(sizeof(OceanManager_GetHeightmapPixel) == 0x000018, "Wrong size on OceanManager_GetHeightmapPixel");
static_assert(offsetof(OceanManager_GetHeightmapPixel, U) == 0x000000, "Member 'OceanManager_GetHeightmapPixel::U' has a wrong offset!");
static_assert(offsetof(OceanManager_GetHeightmapPixel, V) == 0x000004, "Member 'OceanManager_GetHeightmapPixel::V' has a wrong offset!");
static_assert(offsetof(OceanManager_GetHeightmapPixel, ReturnValue) == 0x000008, "Member 'OceanManager_GetHeightmapPixel::ReturnValue' has a wrong offset!");

// Function OceanPlugin.CustomVehicleController.EnterVehicle
// 0x0008 (0x0008 - 0x0000)
struct CustomVehicleController_EnterVehicle final
{
public:
	class APawn*                                  Vehicle;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CustomVehicleController_EnterVehicle) == 0x000008, "Wrong alignment on CustomVehicleController_EnterVehicle");
static_assert(sizeof(CustomVehicleController_EnterVehicle) == 0x000008, "Wrong size on CustomVehicleController_EnterVehicle");
static_assert(offsetof(CustomVehicleController_EnterVehicle, Vehicle) == 0x000000, "Member 'CustomVehicleController_EnterVehicle::Vehicle' has a wrong offset!");

// Function OceanPlugin.CustomVehicleController.GetIsDriving
// 0x0001 (0x0001 - 0x0000)
struct CustomVehicleController_GetIsDriving final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CustomVehicleController_GetIsDriving) == 0x000001, "Wrong alignment on CustomVehicleController_GetIsDriving");
static_assert(sizeof(CustomVehicleController_GetIsDriving) == 0x000001, "Wrong size on CustomVehicleController_GetIsDriving");
static_assert(offsetof(CustomVehicleController_GetIsDriving, ReturnValue) == 0x000000, "Member 'CustomVehicleController_GetIsDriving::ReturnValue' has a wrong offset!");

// Function OceanPlugin.FlockFish.OnBeginOverlap
// 0x00A8 (0x00A8 - 0x0000)
struct FlockFish_OnBeginOverlap final
{
public:
	class UPrimitiveComponent*                    activatedComp;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FlockFish_OnBeginOverlap) == 0x000008, "Wrong alignment on FlockFish_OnBeginOverlap");
static_assert(sizeof(FlockFish_OnBeginOverlap) == 0x0000A8, "Wrong size on FlockFish_OnBeginOverlap");
static_assert(offsetof(FlockFish_OnBeginOverlap, activatedComp) == 0x000000, "Member 'FlockFish_OnBeginOverlap::activatedComp' has a wrong offset!");
static_assert(offsetof(FlockFish_OnBeginOverlap, OtherActor) == 0x000008, "Member 'FlockFish_OnBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(FlockFish_OnBeginOverlap, OtherComp) == 0x000010, "Member 'FlockFish_OnBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(FlockFish_OnBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'FlockFish_OnBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(FlockFish_OnBeginOverlap, bFromSweep) == 0x00001C, "Member 'FlockFish_OnBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(FlockFish_OnBeginOverlap, SweepResult) == 0x000020, "Member 'FlockFish_OnBeginOverlap::SweepResult' has a wrong offset!");

// Function OceanPlugin.FlockFish.OnEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct FlockFish_OnEndOverlap final
{
public:
	class UPrimitiveComponent*                    activatedComp;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FlockFish_OnEndOverlap) == 0x000008, "Wrong alignment on FlockFish_OnEndOverlap");
static_assert(sizeof(FlockFish_OnEndOverlap) == 0x000020, "Wrong size on FlockFish_OnEndOverlap");
static_assert(offsetof(FlockFish_OnEndOverlap, activatedComp) == 0x000000, "Member 'FlockFish_OnEndOverlap::activatedComp' has a wrong offset!");
static_assert(offsetof(FlockFish_OnEndOverlap, OtherActor) == 0x000008, "Member 'FlockFish_OnEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(FlockFish_OnEndOverlap, OtherComp) == 0x000010, "Member 'FlockFish_OnEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(FlockFish_OnEndOverlap, OtherBodyIndex) == 0x000018, "Member 'FlockFish_OnEndOverlap::OtherBodyIndex' has a wrong offset!");

// Function OceanPlugin.TimeManager.CalculateMoonAngle
// 0x000C (0x000C - 0x0000)
struct TimeManager_CalculateMoonAngle final
{
public:
	struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_CalculateMoonAngle) == 0x000004, "Wrong alignment on TimeManager_CalculateMoonAngle");
static_assert(sizeof(TimeManager_CalculateMoonAngle) == 0x00000C, "Wrong size on TimeManager_CalculateMoonAngle");
static_assert(offsetof(TimeManager_CalculateMoonAngle, ReturnValue) == 0x000000, "Member 'TimeManager_CalculateMoonAngle::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.CalculateMoonPhase
// 0x0004 (0x0004 - 0x0000)
struct TimeManager_CalculateMoonPhase final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_CalculateMoonPhase) == 0x000004, "Wrong alignment on TimeManager_CalculateMoonPhase");
static_assert(sizeof(TimeManager_CalculateMoonPhase) == 0x000004, "Wrong size on TimeManager_CalculateMoonPhase");
static_assert(offsetof(TimeManager_CalculateMoonPhase, ReturnValue) == 0x000000, "Member 'TimeManager_CalculateMoonPhase::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.CalculateSunAngle
// 0x000C (0x000C - 0x0000)
struct TimeManager_CalculateSunAngle final
{
public:
	struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_CalculateSunAngle) == 0x000004, "Wrong alignment on TimeManager_CalculateSunAngle");
static_assert(sizeof(TimeManager_CalculateSunAngle) == 0x00000C, "Wrong size on TimeManager_CalculateSunAngle");
static_assert(offsetof(TimeManager_CalculateSunAngle, ReturnValue) == 0x000000, "Member 'TimeManager_CalculateSunAngle::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.GetDayOfYear
// 0x0020 (0x0020 - 0x0000)
struct TimeManager_GetDayOfYear final
{
public:
	struct FTimeDate                              Time;                                              // 0x0000(0x001C)(Parm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_GetDayOfYear) == 0x000004, "Wrong alignment on TimeManager_GetDayOfYear");
static_assert(sizeof(TimeManager_GetDayOfYear) == 0x000020, "Wrong size on TimeManager_GetDayOfYear");
static_assert(offsetof(TimeManager_GetDayOfYear, Time) == 0x000000, "Member 'TimeManager_GetDayOfYear::Time' has a wrong offset!");
static_assert(offsetof(TimeManager_GetDayOfYear, ReturnValue) == 0x00001C, "Member 'TimeManager_GetDayOfYear::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.GetDayPhase
// 0x0004 (0x0004 - 0x0000)
struct TimeManager_GetDayPhase final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_GetDayPhase) == 0x000004, "Wrong alignment on TimeManager_GetDayPhase");
static_assert(sizeof(TimeManager_GetDayPhase) == 0x000004, "Wrong size on TimeManager_GetDayPhase");
static_assert(offsetof(TimeManager_GetDayPhase, ReturnValue) == 0x000000, "Member 'TimeManager_GetDayPhase::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.GetDaysInMonth
// 0x000C (0x000C - 0x0000)
struct TimeManager_GetDaysInMonth final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Month;                                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_GetDaysInMonth) == 0x000004, "Wrong alignment on TimeManager_GetDaysInMonth");
static_assert(sizeof(TimeManager_GetDaysInMonth) == 0x00000C, "Wrong size on TimeManager_GetDaysInMonth");
static_assert(offsetof(TimeManager_GetDaysInMonth, Year) == 0x000000, "Member 'TimeManager_GetDaysInMonth::Year' has a wrong offset!");
static_assert(offsetof(TimeManager_GetDaysInMonth, Month) == 0x000004, "Member 'TimeManager_GetDaysInMonth::Month' has a wrong offset!");
static_assert(offsetof(TimeManager_GetDaysInMonth, ReturnValue) == 0x000008, "Member 'TimeManager_GetDaysInMonth::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.GetDaysInYear
// 0x0008 (0x0008 - 0x0000)
struct TimeManager_GetDaysInYear final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_GetDaysInYear) == 0x000004, "Wrong alignment on TimeManager_GetDaysInYear");
static_assert(sizeof(TimeManager_GetDaysInYear) == 0x000008, "Wrong size on TimeManager_GetDaysInYear");
static_assert(offsetof(TimeManager_GetDaysInYear, Year) == 0x000000, "Member 'TimeManager_GetDaysInYear::Year' has a wrong offset!");
static_assert(offsetof(TimeManager_GetDaysInYear, ReturnValue) == 0x000004, "Member 'TimeManager_GetDaysInYear::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// 0x0004 (0x0004 - 0x0000)
struct TimeManager_GetElapsedDayInMinutes final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_GetElapsedDayInMinutes) == 0x000004, "Wrong alignment on TimeManager_GetElapsedDayInMinutes");
static_assert(sizeof(TimeManager_GetElapsedDayInMinutes) == 0x000004, "Wrong size on TimeManager_GetElapsedDayInMinutes");
static_assert(offsetof(TimeManager_GetElapsedDayInMinutes, ReturnValue) == 0x000000, "Member 'TimeManager_GetElapsedDayInMinutes::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.GetYearPhase
// 0x0004 (0x0004 - 0x0000)
struct TimeManager_GetYearPhase final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_GetYearPhase) == 0x000004, "Wrong alignment on TimeManager_GetYearPhase");
static_assert(sizeof(TimeManager_GetYearPhase) == 0x000004, "Wrong size on TimeManager_GetYearPhase");
static_assert(offsetof(TimeManager_GetYearPhase, ReturnValue) == 0x000000, "Member 'TimeManager_GetYearPhase::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.IncrementTime
// 0x0004 (0x0004 - 0x0000)
struct TimeManager_IncrementTime final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_IncrementTime) == 0x000004, "Wrong alignment on TimeManager_IncrementTime");
static_assert(sizeof(TimeManager_IncrementTime) == 0x000004, "Wrong size on TimeManager_IncrementTime");
static_assert(offsetof(TimeManager_IncrementTime, DeltaSeconds) == 0x000000, "Member 'TimeManager_IncrementTime::DeltaSeconds' has a wrong offset!");

// Function OceanPlugin.TimeManager.InitializeCalendar
// 0x001C (0x001C - 0x0000)
struct TimeManager_InitializeCalendar final
{
public:
	struct FTimeDate                              Time;                                              // 0x0000(0x001C)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_InitializeCalendar) == 0x000004, "Wrong alignment on TimeManager_InitializeCalendar");
static_assert(sizeof(TimeManager_InitializeCalendar) == 0x00001C, "Wrong size on TimeManager_InitializeCalendar");
static_assert(offsetof(TimeManager_InitializeCalendar, Time) == 0x000000, "Member 'TimeManager_InitializeCalendar::Time' has a wrong offset!");

// Function OceanPlugin.TimeManager.IsLeapYear
// 0x0008 (0x0008 - 0x0000)
struct TimeManager_IsLeapYear final
{
public:
	int32                                         Year;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TimeManager_IsLeapYear) == 0x000004, "Wrong alignment on TimeManager_IsLeapYear");
static_assert(sizeof(TimeManager_IsLeapYear) == 0x000008, "Wrong size on TimeManager_IsLeapYear");
static_assert(offsetof(TimeManager_IsLeapYear, Year) == 0x000000, "Member 'TimeManager_IsLeapYear::Year' has a wrong offset!");
static_assert(offsetof(TimeManager_IsLeapYear, ReturnValue) == 0x000004, "Member 'TimeManager_IsLeapYear::ReturnValue' has a wrong offset!");

// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// 0x0004 (0x0004 - 0x0000)
struct TimeManager_SetCurrentLocalTime final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManager_SetCurrentLocalTime) == 0x000004, "Wrong alignment on TimeManager_SetCurrentLocalTime");
static_assert(sizeof(TimeManager_SetCurrentLocalTime) == 0x000004, "Wrong size on TimeManager_SetCurrentLocalTime");
static_assert(offsetof(TimeManager_SetCurrentLocalTime, Time) == 0x000000, "Member 'TimeManager_SetCurrentLocalTime::Time' has a wrong offset!");

}

