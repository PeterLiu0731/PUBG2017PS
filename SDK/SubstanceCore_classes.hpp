#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubstanceCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "SubstanceCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class SubstanceCore.SubstanceGraphInstance
// 0x0028 (0x0050 - 0x0028)
class USubstanceGraphInstance final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USubstanceInstanceFactory*              Parent;                                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ImageSources;                                      // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bFreezed;                                          // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FSubstanceFloatInputDesc GetFloatInputDesc(const class FString& Identifier);
	TArray<float> GetInputFloat(const class FString& Identifier);
	TArray<int32> GetInputInt(const class FString& Identifier);
	TArray<class FString> GetInputNames();
	ESubstanceInputType GetInputType(const class FString& InputName);
	struct FSubstanceInstanceDesc GetInstanceDesc();
	struct FSubstanceIntInputDesc GetIntInputDesc(const class FString& Identifier);
	void SetInputFloat(const class FString& Identifier, const TArray<float>& InputValues);
	bool SetInputImg(const class FString& InputName, class UObject* Value);
	void SetInputInt(const class FString& Identifier, const TArray<int32>& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubstanceGraphInstance">();
	}
	static class USubstanceGraphInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubstanceGraphInstance>();
	}
};
static_assert(alignof(USubstanceGraphInstance) == 0x000008, "Wrong alignment on USubstanceGraphInstance");
static_assert(sizeof(USubstanceGraphInstance) == 0x000050, "Wrong size on USubstanceGraphInstance");
static_assert(offsetof(USubstanceGraphInstance, Parent) == 0x000030, "Member 'USubstanceGraphInstance::Parent' has a wrong offset!");
static_assert(offsetof(USubstanceGraphInstance, ImageSources) == 0x000038, "Member 'USubstanceGraphInstance::ImageSources' has a wrong offset!");
static_assert(offsetof(USubstanceGraphInstance, bFreezed) == 0x000048, "Member 'USubstanceGraphInstance::bFreezed' has a wrong offset!");

// Class SubstanceCore.SubstanceImageInput
// 0x0138 (0x0160 - 0x0028)
class USubstanceImageInput final : public UObject
{
public:
	uint8                                         Pad_28[0xF0];                                      // 0x0028(0x00F0)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CompressionRGB;                                    // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompressionAlpha;                                  // 0x011C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeX;                                             // 0x0120(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeY;                                             // 0x0124(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumComponents;                                     // 0x0128(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SourceFilePath;                                    // 0x0130(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SourceFileTimestamp;                               // 0x0140(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USubstanceGraphInstance*>        Consumers;                                         // 0x0150(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubstanceImageInput">();
	}
	static class USubstanceImageInput* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubstanceImageInput>();
	}
};
static_assert(alignof(USubstanceImageInput) == 0x000008, "Wrong alignment on USubstanceImageInput");
static_assert(sizeof(USubstanceImageInput) == 0x000160, "Wrong size on USubstanceImageInput");
static_assert(offsetof(USubstanceImageInput, CompressionRGB) == 0x000118, "Member 'USubstanceImageInput::CompressionRGB' has a wrong offset!");
static_assert(offsetof(USubstanceImageInput, CompressionAlpha) == 0x00011C, "Member 'USubstanceImageInput::CompressionAlpha' has a wrong offset!");
static_assert(offsetof(USubstanceImageInput, SizeX) == 0x000120, "Member 'USubstanceImageInput::SizeX' has a wrong offset!");
static_assert(offsetof(USubstanceImageInput, SizeY) == 0x000124, "Member 'USubstanceImageInput::SizeY' has a wrong offset!");
static_assert(offsetof(USubstanceImageInput, NumComponents) == 0x000128, "Member 'USubstanceImageInput::NumComponents' has a wrong offset!");
static_assert(offsetof(USubstanceImageInput, SourceFilePath) == 0x000130, "Member 'USubstanceImageInput::SourceFilePath' has a wrong offset!");
static_assert(offsetof(USubstanceImageInput, SourceFileTimestamp) == 0x000140, "Member 'USubstanceImageInput::SourceFileTimestamp' has a wrong offset!");
static_assert(offsetof(USubstanceImageInput, Consumers) == 0x000150, "Member 'USubstanceImageInput::Consumers' has a wrong offset!");

// Class SubstanceCore.SubstanceInstanceFactory
// 0x0010 (0x0038 - 0x0028)
class USubstanceInstanceFactory final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ESubstanceGenerationMode                      GenerationMode;                                    // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubstanceInstanceFactory">();
	}
	static class USubstanceInstanceFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubstanceInstanceFactory>();
	}
};
static_assert(alignof(USubstanceInstanceFactory) == 0x000008, "Wrong alignment on USubstanceInstanceFactory");
static_assert(sizeof(USubstanceInstanceFactory) == 0x000038, "Wrong size on USubstanceInstanceFactory");
static_assert(offsetof(USubstanceInstanceFactory, GenerationMode) == 0x000030, "Member 'USubstanceInstanceFactory::GenerationMode' has a wrong offset!");

// Class SubstanceCore.SubstanceSettings
// 0x0010 (0x0038 - 0x0028)
class USubstanceSettings final : public UObject
{
public:
	int32                                         MemoryBudgetMb;                                    // 0x0028(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CPUCores;                                          // 0x002C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AsyncLoadMipClip;                                  // 0x0030(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubstanceGenerationMode                      DefaultGenerationMode;                             // 0x0034(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubstanceEngineType                          SubstanceEngine;                                   // 0x0035(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubstanceSettings">();
	}
	static class USubstanceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubstanceSettings>();
	}
};
static_assert(alignof(USubstanceSettings) == 0x000008, "Wrong alignment on USubstanceSettings");
static_assert(sizeof(USubstanceSettings) == 0x000038, "Wrong size on USubstanceSettings");
static_assert(offsetof(USubstanceSettings, MemoryBudgetMb) == 0x000028, "Member 'USubstanceSettings::MemoryBudgetMb' has a wrong offset!");
static_assert(offsetof(USubstanceSettings, CPUCores) == 0x00002C, "Member 'USubstanceSettings::CPUCores' has a wrong offset!");
static_assert(offsetof(USubstanceSettings, AsyncLoadMipClip) == 0x000030, "Member 'USubstanceSettings::AsyncLoadMipClip' has a wrong offset!");
static_assert(offsetof(USubstanceSettings, DefaultGenerationMode) == 0x000034, "Member 'USubstanceSettings::DefaultGenerationMode' has a wrong offset!");
static_assert(offsetof(USubstanceSettings, SubstanceEngine) == 0x000035, "Member 'USubstanceSettings::SubstanceEngine' has a wrong offset!");

// Class SubstanceCore.SubstanceTexture2D
// 0x0038 (0x0118 - 0x00E0)
class USubstanceTexture2D final : public UTexture2DDynamic
{
public:
	uint8                                         Pad_E0[0x18];                                      // 0x00E0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class USubstanceGraphInstance*                ParentInstance;                                    // 0x00F8(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressX;                                          // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_102[0x16];                                     // 0x0102(0x0016)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubstanceTexture2D">();
	}
	static class USubstanceTexture2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubstanceTexture2D>();
	}
};
static_assert(alignof(USubstanceTexture2D) == 0x000008, "Wrong alignment on USubstanceTexture2D");
static_assert(sizeof(USubstanceTexture2D) == 0x000118, "Wrong size on USubstanceTexture2D");
static_assert(offsetof(USubstanceTexture2D, ParentInstance) == 0x0000F8, "Member 'USubstanceTexture2D::ParentInstance' has a wrong offset!");
static_assert(offsetof(USubstanceTexture2D, AddressX) == 0x000100, "Member 'USubstanceTexture2D::AddressX' has a wrong offset!");
static_assert(offsetof(USubstanceTexture2D, AddressY) == 0x000101, "Member 'USubstanceTexture2D::AddressY' has a wrong offset!");

// Class SubstanceCore.SubstanceUtility
// 0x0000 (0x0028 - 0x0028)
class USubstanceUtility final : public UBlueprintFunctionLibrary
{
public:
	static void AsyncRendering(class USubstanceGraphInstance* InstancesToRender);
	static void CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance);
	static class USubstanceGraphInstance* CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32 GraphDescIndex, const class FString& InstanceName);
	static void CreateInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, const TArray<int32>& OutputIndices);
	static class USubstanceGraphInstance* DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance);
	static class FString GetFactoryName(class USubstanceGraphInstance* GraphInstance);
	static class FString GetGraphName(class USubstanceGraphInstance* GraphInstance);
	static float GetSubstanceLoadingProgress();
	static TArray<class USubstanceGraphInstance*> GetSubstances(class UMaterialInterface* Material);
	static TArray<class USubstanceTexture2D*> GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);
	static void ResetInputParameters(class USubstanceGraphInstance* GraphInstance);
	static void SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, ESubstanceTextureSize Width, ESubstanceTextureSize Height);
	static void SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32 Width, int32 Height);
	static void SyncRendering(class USubstanceGraphInstance* InstancesToRender);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubstanceUtility">();
	}
	static class USubstanceUtility* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubstanceUtility>();
	}
};
static_assert(alignof(USubstanceUtility) == 0x000008, "Wrong alignment on USubstanceUtility");
static_assert(sizeof(USubstanceUtility) == 0x000028, "Wrong size on USubstanceUtility");

}

