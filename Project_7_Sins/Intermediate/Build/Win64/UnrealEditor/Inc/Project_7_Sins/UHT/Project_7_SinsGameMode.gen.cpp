// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_7_Sins/Project_7_SinsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_7_SinsGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECT_7_SINS_API UClass* Z_Construct_UClass_AProject_7_SinsGameMode();
	PROJECT_7_SINS_API UClass* Z_Construct_UClass_AProject_7_SinsGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Project_7_Sins();
// End Cross Module References
	void AProject_7_SinsGameMode::StaticRegisterNativesAProject_7_SinsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_7_SinsGameMode);
	UClass* Z_Construct_UClass_AProject_7_SinsGameMode_NoRegister()
	{
		return AProject_7_SinsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_7_SinsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_7_SinsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_7_Sins,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_7_SinsGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_7_SinsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_7_SinsGameMode.h" },
		{ "ModuleRelativePath", "Project_7_SinsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_7_SinsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_7_SinsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_7_SinsGameMode_Statics::ClassParams = {
		&AProject_7_SinsGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_7_SinsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_7_SinsGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProject_7_SinsGameMode()
	{
		if (!Z_Registration_Info_UClass_AProject_7_SinsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_7_SinsGameMode.OuterSingleton, Z_Construct_UClass_AProject_7_SinsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProject_7_SinsGameMode.OuterSingleton;
	}
	template<> PROJECT_7_SINS_API UClass* StaticClass<AProject_7_SinsGameMode>()
	{
		return AProject_7_SinsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_7_SinsGameMode);
	AProject_7_SinsGameMode::~AProject_7_SinsGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_7_Sins_Project_7_Sins_Source_Project_7_Sins_Project_7_SinsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_7_Sins_Project_7_Sins_Source_Project_7_Sins_Project_7_SinsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProject_7_SinsGameMode, AProject_7_SinsGameMode::StaticClass, TEXT("AProject_7_SinsGameMode"), &Z_Registration_Info_UClass_AProject_7_SinsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_7_SinsGameMode), 374247435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_7_Sins_Project_7_Sins_Source_Project_7_Sins_Project_7_SinsGameMode_h_231052275(TEXT("/Script/Project_7_Sins"),
		Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_7_Sins_Project_7_Sins_Source_Project_7_Sins_Project_7_SinsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ASUS_Documents_GitHub_7_Sins_Project_7_Sins_Source_Project_7_Sins_Project_7_SinsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
