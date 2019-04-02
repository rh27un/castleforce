// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforceUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforceUnit() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceUnit_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceUnit();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceObject();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
// End Cross Module References
	void ACastleforceUnit::StaticRegisterNativesACastleforceUnit()
	{
	}
	UClass* Z_Construct_UClass_ACastleforceUnit_NoRegister()
	{
		return ACastleforceUnit::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforceUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforceUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACastleforceObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceUnit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CastleforceUnit.h" },
		{ "ModuleRelativePath", "CastleforceUnit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceUnit_Statics::ClassParams = {
		&ACastleforceUnit::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforceUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforceUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforceUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforceUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforceUnit, 3836298697);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceUnit(Z_Construct_UClass_ACastleforceUnit, &ACastleforceUnit::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
