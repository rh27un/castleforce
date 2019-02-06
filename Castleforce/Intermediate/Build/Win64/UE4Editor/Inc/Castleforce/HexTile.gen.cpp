// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/HexTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexTile() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_AHexTile_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_AHexTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
// End Cross Module References
	void AHexTile::StaticRegisterNativesAHexTile()
	{
	}
	UClass* Z_Construct_UClass_AHexTile_NoRegister()
	{
		return AHexTile::StaticClass();
	}
	struct Z_Construct_UClass_AHexTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHexTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexTile.h" },
		{ "ModuleRelativePath", "HexTile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHexTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHexTile_Statics::ClassParams = {
		&AHexTile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHexTile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHexTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHexTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHexTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexTile, 3839698893);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexTile(Z_Construct_UClass_AHexTile, &AHexTile::StaticClass, TEXT("/Script/Castleforce"), TEXT("AHexTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
