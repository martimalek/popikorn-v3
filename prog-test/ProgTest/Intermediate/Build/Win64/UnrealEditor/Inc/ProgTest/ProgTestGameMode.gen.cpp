// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgTest/ProgTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgTestGameMode() {}
// Cross Module References
	PROGTEST_API UClass* Z_Construct_UClass_AProgTestGameMode_NoRegister();
	PROGTEST_API UClass* Z_Construct_UClass_AProgTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProgTest();
// End Cross Module References
	void AProgTestGameMode::StaticRegisterNativesAProgTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProgTestGameMode);
	UClass* Z_Construct_UClass_AProgTestGameMode_NoRegister()
	{
		return AProgTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProgTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProgTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProgTestGameMode.h" },
		{ "ModuleRelativePath", "ProgTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProgTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProgTestGameMode_Statics::ClassParams = {
		&AProgTestGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProgTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProgTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProgTestGameMode()
	{
		if (!Z_Registration_Info_UClass_AProgTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProgTestGameMode.OuterSingleton, Z_Construct_UClass_AProgTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProgTestGameMode.OuterSingleton;
	}
	template<> PROGTEST_API UClass* StaticClass<AProgTestGameMode>()
	{
		return AProgTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProgTestGameMode);
	struct Z_CompiledInDeferFile_FID_ProgTest_Source_ProgTest_ProgTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgTest_Source_ProgTest_ProgTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProgTestGameMode, AProgTestGameMode::StaticClass, TEXT("AProgTestGameMode"), &Z_Registration_Info_UClass_AProgTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProgTestGameMode), 4012321544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgTest_Source_ProgTest_ProgTestGameMode_h_748020743(TEXT("/Script/ProgTest"),
		Z_CompiledInDeferFile_FID_ProgTest_Source_ProgTest_ProgTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgTest_Source_ProgTest_ProgTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
