// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120253/LaberintoDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoDirector() {}

// Begin Cross Module References
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ALaberintoDirector();
BOMBERMAN_0120253_API UClass* Z_Construct_UClass_ALaberintoDirector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120253();
// End Cross Module References

// Begin Class ALaberintoDirector
void ALaberintoDirector::StaticRegisterNativesALaberintoDirector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoDirector);
UClass* Z_Construct_UClass_ALaberintoDirector_NoRegister()
{
	return ALaberintoDirector::StaticClass();
}
struct Z_Construct_UClass_ALaberintoDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoDirector.h" },
		{ "ModuleRelativePath", "LaberintoDirector.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberintoDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120253,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoDirector_Statics::ClassParams = {
	&ALaberintoDirector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoDirector()
{
	if (!Z_Registration_Info_UClass_ALaberintoDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoDirector.OuterSingleton, Z_Construct_UClass_ALaberintoDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoDirector.OuterSingleton;
}
template<> BOMBERMAN_0120253_API UClass* StaticClass<ALaberintoDirector>()
{
	return ALaberintoDirector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoDirector);
ALaberintoDirector::~ALaberintoDirector() {}
// End Class ALaberintoDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoDirector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoDirector, ALaberintoDirector::StaticClass, TEXT("ALaberintoDirector"), &Z_Registration_Info_UClass_ALaberintoDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoDirector), 158167448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoDirector_h_3191271482(TEXT("/Script/BomberMan_0120253"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BomberMan_0120253_Source_BomberMan_0120253_LaberintoDirector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
