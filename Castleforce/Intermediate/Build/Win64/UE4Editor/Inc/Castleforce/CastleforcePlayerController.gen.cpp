// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforcePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforcePlayerController() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforcePlayerController_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforcePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
// End Cross Module References
	void ACastleforcePlayerController::StaticRegisterNativesACastleforcePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACastleforcePlayerController_NoRegister()
	{
		return ACastleforcePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforcePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforcePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforcePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CastleforcePlayerController.h" },
		{ "ModuleRelativePath", "CastleforcePlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforcePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforcePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforcePlayerController_Statics::ClassParams = {
		&ACastleforcePlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforcePlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforcePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforcePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforcePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforcePlayerController, 686044797);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforcePlayerController(Z_Construct_UClass_ACastleforcePlayerController, &ACastleforcePlayerController::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforcePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforcePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
