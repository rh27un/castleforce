// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforcePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforcePawn() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforcePawn_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforcePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceBlock_NoRegister();
// End Cross Module References
	void ACastleforcePawn::StaticRegisterNativesACastleforcePawn()
	{
	}
	UClass* Z_Construct_UClass_ACastleforcePawn_NoRegister()
	{
		return ACastleforcePawn::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforcePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforcePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforcePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CastleforcePawn.h" },
		{ "ModuleRelativePath", "CastleforcePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforcePawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "CastleforcePawn" },
		{ "ModuleRelativePath", "CastleforcePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforcePawn_Statics::NewProp_CurrentBlockFocus = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentBlockFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000805, 1, nullptr, STRUCT_OFFSET(ACastleforcePawn, CurrentBlockFocus), Z_Construct_UClass_ACastleforceBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforcePawn_Statics::NewProp_CurrentBlockFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforcePawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforcePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforcePawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforcePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforcePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforcePawn_Statics::ClassParams = {
		&ACastleforcePawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACastleforcePawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACastleforcePawn_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforcePawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforcePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforcePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforcePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforcePawn, 571675650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforcePawn(Z_Construct_UClass_ACastleforcePawn, &ACastleforcePawn::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforcePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforcePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
