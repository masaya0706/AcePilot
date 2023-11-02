// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AcePilot/AcePilotGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcePilotGameMode() {}
// Cross Module References
	ACEPILOT_API UClass* Z_Construct_UClass_AAcePilotGameMode_NoRegister();
	ACEPILOT_API UClass* Z_Construct_UClass_AAcePilotGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AcePilot();
// End Cross Module References
	void AAcePilotGameMode::StaticRegisterNativesAAcePilotGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAcePilotGameMode_NoRegister()
	{
		return AAcePilotGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAcePilotGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAcePilotGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AcePilot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAcePilotGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AcePilotGameMode.h" },
		{ "ModuleRelativePath", "AcePilotGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAcePilotGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAcePilotGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAcePilotGameMode_Statics::ClassParams = {
		&AAcePilotGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAcePilotGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAcePilotGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAcePilotGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAcePilotGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAcePilotGameMode, 2697854380);
	template<> ACEPILOT_API UClass* StaticClass<AAcePilotGameMode>()
	{
		return AAcePilotGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAcePilotGameMode(Z_Construct_UClass_AAcePilotGameMode, &AAcePilotGameMode::StaticClass, TEXT("/Script/AcePilot"), TEXT("AAcePilotGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAcePilotGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
