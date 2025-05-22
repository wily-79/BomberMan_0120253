// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120253/BomberMan_0120253GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_0120253GameMode() {}

// Begin Cross Module References
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ABomberMan_0120253GameMode();
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ABomberMan_0120253GameMode_NoRegister();
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ALaberintoAleatorioBuilder_NoRegister();
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ALaberintoDirector_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120253();
// End Cross Module References

// Begin Class ABomberMan_0120253GameMode
void ABomberMan_0120253GameMode::StaticRegisterNativesABomberMan_0120253GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_0120253GameMode);
UClass* Z_Construct_UClass_ABomberMan_0120253GameMode_NoRegister()
{
	return ABomberMan_0120253GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_0120253GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_0120253GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_0120253GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderClass_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "BomberMan_0120253GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "BomberMan_0120253GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuilderClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DirectorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_0120253GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::NewProp_BuilderClass = { "BuilderClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_0120253GameMode, BuilderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALaberintoAleatorioBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderClass_MetaData), NewProp_BuilderClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::NewProp_DirectorClass = { "DirectorClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_0120253GameMode, DirectorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALaberintoDirector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorClass_MetaData), NewProp_DirectorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::NewProp_BuilderClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::NewProp_DirectorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120253,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::ClassParams = {
	&ABomberMan_0120253GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_0120253GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_0120253GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_0120253GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_0120253GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_0120253GameMode.OuterSingleton;
}
template<> BOMBERMAN_0120253_API UClass* StaticClass<ABomberMan_0120253GameMode>()
{
	return ABomberMan_0120253GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_0120253GameMode);
ABomberMan_0120253GameMode::~ABomberMan_0120253GameMode() {}
// End Class ABomberMan_0120253GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_BomberMan_0120253GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_0120253GameMode, ABomberMan_0120253GameMode::StaticClass, TEXT("ABomberMan_0120253GameMode"), &Z_Registration_Info_UClass_ABomberMan_0120253GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_0120253GameMode), 512497631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_BomberMan_0120253GameMode_h_3831782701(TEXT("/Script/BomberMan_0120253"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_BomberMan_0120253GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_BomberMan_0120253GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
