// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120253/LaberintoAleatorioBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoAleatorioBuilder() {}

// Begin Cross Module References
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ALaberintoAleatorioBuilder();
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ALaberintoAleatorioBuilder_NoRegister();
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ULaberintoBuilder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120253();
// End Cross Module References

// Begin Class ALaberintoAleatorioBuilder
void ALaberintoAleatorioBuilder::StaticRegisterNativesALaberintoAleatorioBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoAleatorioBuilder);
UClass* Z_Construct_UClass_ALaberintoAleatorioBuilder_NoRegister()
{
	return ALaberintoAleatorioBuilder::StaticClass();
}
struct Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoAleatorioBuilder.h" },
		{ "ModuleRelativePath", "LaberintoAleatorioBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueAcero_MetaData[] = {
		{ "Category", "Configuraci\xef\xbf\xbdn de Bloques" },
		{ "ModuleRelativePath", "LaberintoAleatorioBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueConcreto_MetaData[] = {
		{ "Category", "Configuraci\xef\xbf\xbdn de Bloques" },
		{ "ModuleRelativePath", "LaberintoAleatorioBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueLadrillo_MetaData[] = {
		{ "Category", "Configuraci\xef\xbf\xbdn de Bloques" },
		{ "ModuleRelativePath", "LaberintoAleatorioBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueAcero;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueConcreto;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueLadrillo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoAleatorioBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::NewProp_BloqueAcero = { "BloqueAcero", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoAleatorioBuilder, BloqueAcero), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueAcero_MetaData), NewProp_BloqueAcero_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::NewProp_BloqueConcreto = { "BloqueConcreto", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoAleatorioBuilder, BloqueConcreto), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueConcreto_MetaData), NewProp_BloqueConcreto_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::NewProp_BloqueLadrillo = { "BloqueLadrillo", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoAleatorioBuilder, BloqueLadrillo), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueLadrillo_MetaData), NewProp_BloqueLadrillo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::NewProp_BloqueAcero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::NewProp_BloqueConcreto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::NewProp_BloqueLadrillo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120253,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoAleatorioBuilder, ILaberintoBuilder), false },  // 4225310650
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::ClassParams = {
	&ALaberintoAleatorioBuilder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoAleatorioBuilder()
{
	if (!Z_Registration_Info_UClass_ALaberintoAleatorioBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoAleatorioBuilder.OuterSingleton, Z_Construct_UClass_ALaberintoAleatorioBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoAleatorioBuilder.OuterSingleton;
}
template<> BOMBERMAN_0120253_API UClass* StaticClass<ALaberintoAleatorioBuilder>()
{
	return ALaberintoAleatorioBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoAleatorioBuilder);
ALaberintoAleatorioBuilder::~ALaberintoAleatorioBuilder() {}
// End Class ALaberintoAleatorioBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoAleatorioBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoAleatorioBuilder, ALaberintoAleatorioBuilder::StaticClass, TEXT("ALaberintoAleatorioBuilder"), &Z_Registration_Info_UClass_ALaberintoAleatorioBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoAleatorioBuilder), 3679268277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoAleatorioBuilder_h_2014833906(TEXT("/Script/BomberMan_0120253"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoAleatorioBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoAleatorioBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
