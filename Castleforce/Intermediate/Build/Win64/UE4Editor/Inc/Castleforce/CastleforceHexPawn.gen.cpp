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
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceUnit_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexTile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTileFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTileFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnightClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KnightClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforceHexPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CastleforceHexPawn.h" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_SelectedUnit_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_SelectedUnit = { UE4CodeGen_Private::EPropertyClass::Object, "SelectedUnit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, SelectedUnit), Z_Construct_UClass_ACastleforceUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_SelectedUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_SelectedUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_CurrentTileFocus_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_CurrentTileFocus = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentTileFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000805, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, CurrentTileFocus), Z_Construct_UClass_ACastleforceHexTile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_CurrentTileFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_CurrentTileFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, Speed), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass = { UE4CodeGen_Private::EPropertyClass::Class, "KnightClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, KnightClass), Z_Construct_UClass_ACastleforceUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceHexPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_SelectedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_CurrentTileFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceHexPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceHexPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceHexPawn_Statics::ClassParams = {
		&ACastleforceHexPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACastleforceHexPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ACastleforceHexPawn, 4203587215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceHexPawn(Z_Construct_UClass_ACastleforceHexPawn, &ACastleforceHexPawn::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceHexPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceHexPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
