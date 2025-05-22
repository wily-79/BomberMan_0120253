// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120253/LaberintoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoBuilder() {}

// Begin Cross Module References
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ULaberintoBuilder();
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ULaberintoBuilder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120253();
// End Cross Module References

// Begin Interface ULaberintoBuilder
void ULaberintoBuilder::StaticRegisterNativesULaberintoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULaberintoBuilder);
UClass* Z_Construct_UClass_ULaberintoBuilder_NoRegister()
{
	return ULaberintoBuilder::StaticClass();
}
struct Z_Construct_UClass_ULaberintoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "LaberintoBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILaberintoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULaberintoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120253,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULaberintoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULaberintoBuilder_Statics::ClassParams = {
	&ULaberintoBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULaberintoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ULaberintoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULaberintoBuilder()
{
	if (!Z_Registration_Info_UClass_ULaberintoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULaberintoBuilder.OuterSingleton, Z_Construct_UClass_ULaberintoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULaberintoBuilder.OuterSingleton;
}
template<> BOMBERMAN_0120253_API UClass* StaticClass<ULaberintoBuilder>()
{
	return ULaberintoBuilder::StaticClass();
}
ULaberintoBuilder::ULaberintoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULaberintoBuilder);
ULaberintoBuilder::~ULaberintoBuilder() {}
// End Interface ULaberintoBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULaberintoBuilder, ULaberintoBuilder::StaticClass, TEXT("ULaberintoBuilder"), &Z_Registration_Info_UClass_ULaberintoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULaberintoBuilder), 4225310650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoBuilder_h_1433133728(TEXT("/Script/BomberMan_0120253"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
