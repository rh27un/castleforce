// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforceHexPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforceHexPawn() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexPawn_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexPawn();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforcePawn();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
// End Cross Module References
	void ACastleforceHexPawn::StaticRegisterNativesACastleforceHexPawn()
	{
	}
	UClass* Z_Construct_UClass_ACastleforceHexPawn_NoRegister()
	{
		return ACastleforceHexPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforceHexPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforceHexPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACastleforcePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CastleforceHexPawn.h" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceHexPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceHexPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceHexPawn_Statics::ClassParams = {
		&ACastleforceHexPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforceHexPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforceHexPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforceHexPawn, 3689755724);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceHexPawn(Z_Construct_UClass_ACastleforceHexPawn, &ACastleforceHexPawn::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceHexPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceHexPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
