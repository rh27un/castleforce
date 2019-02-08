// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforceHexTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforceHexTile() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleForceHexTile_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleForceHexTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void ACastleForceHexTile::StaticRegisterNativesACastleForceHexTile()
	{
	}
	UClass* Z_Construct_UClass_ACastleForceHexTile_NoRegister()
	{
		return ACastleForceHexTile::StaticClass();
	}
	struct Z_Construct_UClass_ACastleForceHexTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hexMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hexMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleForceHexTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleForceHexTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CastleforceHexTile.h" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_text_MetaData[] = {
		{ "Category", "Hex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_text = { UE4CodeGen_Private::EPropertyClass::Object, "text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ACastleForceHexTile, text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_text_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_hexMesh_MetaData[] = {
		{ "Category", "Hex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_hexMesh = { UE4CodeGen_Private::EPropertyClass::Object, "hexMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ACastleForceHexTile, hexMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_hexMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_hexMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleForceHexTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleForceHexTile_Statics::NewProp_hexMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleForceHexTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleForceHexTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleForceHexTile_Statics::ClassParams = {
		&ACastleForceHexTile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACastleForceHexTile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACastleForceHexTile_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleForceHexTile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleForceHexTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleForceHexTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleForceHexTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleForceHexTile, 2762211712);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleForceHexTile(Z_Construct_UClass_ACastleForceHexTile, &ACastleForceHexTile::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleForceHexTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleForceHexTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
