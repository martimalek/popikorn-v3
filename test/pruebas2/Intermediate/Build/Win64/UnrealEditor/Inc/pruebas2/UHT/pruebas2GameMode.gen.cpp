// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "pruebas2/pruebas2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepruebas2GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PRUEBAS2_API UClass* Z_Construct_UClass_Apruebas2GameMode();
	PRUEBAS2_API UClass* Z_Construct_UClass_Apruebas2GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_pruebas2();
// End Cross Module References
	void Apruebas2GameMode::StaticRegisterNativesApruebas2GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Apruebas2GameMode);
	UClass* Z_Construct_UClass_Apruebas2GameMode_NoRegister()
	{
		return Apruebas2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Apruebas2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Apruebas2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_pruebas2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Apruebas2GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apruebas2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "pruebas2GameMode.h" },
		{ "ModuleRelativePath", "pruebas2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Apruebas2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Apruebas2GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Apruebas2GameMode_Statics::ClassParams = {
		&Apruebas2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Apruebas2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Apruebas2GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Apruebas2GameMode()
	{
		if (!Z_Registration_Info_UClass_Apruebas2GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Apruebas2GameMode.OuterSingleton, Z_Construct_UClass_Apruebas2GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Apruebas2GameMode.OuterSingleton;
	}
	template<> PRUEBAS2_API UClass* StaticClass<Apruebas2GameMode>()
	{
		return Apruebas2GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Apruebas2GameMode);
	Apruebas2GameMode::~Apruebas2GameMode() {}
	struct Z_CompiledInDeferFile_FID_pruebas2_Source_pruebas2_pruebas2GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pruebas2_Source_pruebas2_pruebas2GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Apruebas2GameMode, Apruebas2GameMode::StaticClass, TEXT("Apruebas2GameMode"), &Z_Registration_Info_UClass_Apruebas2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Apruebas2GameMode), 1512279943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pruebas2_Source_pruebas2_pruebas2GameMode_h_3974830132(TEXT("/Script/pruebas2"),
		Z_CompiledInDeferFile_FID_pruebas2_Source_pruebas2_pruebas2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pruebas2_Source_pruebas2_pruebas2GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
