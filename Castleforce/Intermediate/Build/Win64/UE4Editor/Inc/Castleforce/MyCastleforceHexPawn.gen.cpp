// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/MyCastleforceHexPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCastleforceHexPawn() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_AMyCastleforceHexPawn_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_AMyCastleforceHexPawn();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexPawn();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
// End Cross Module References
	void AMyCastleforceHexPawn::StaticRegisterNativesAMyCastleforceHexPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyCastleforceHexPawn_NoRegister()
	{
		return AMyCastleforceHexPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyCastleforceHexPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCastleforceHexPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACastleforceHexPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCastleforceHexPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCastleforceHexPawn.h" },
		{ "ModuleRelativePath", "MyCastleforceHexPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCastleforceHexPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCastleforceHexPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCastleforceHexPawn_Statics::ClassParams = {
		&AMyCastleforceHexPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyCastleforceHexPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCastleforceHexPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCastleforceHexPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCastleforceHexPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCastleforceHexPawn, 4073449871);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCastleforceHexPawn(Z_Construct_UClass_AMyCastleforceHexPawn, &AMyCastleforceHexPawn::StaticClass, TEXT("/Script/Castleforce"), TEXT("AMyCastleforceHexPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCastleforceHexPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
