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
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexTile_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void ACastleforceHexTile::StaticRegisterNativesACastleforceHexTile()
	{
	}
	UClass* Z_Construct_UClass_ACastleforceHexTile_NoRegister()
	{
		return ACastleforceHexTile::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforceHexTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highlitMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_highlitMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normalMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_normalMat;
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
	UObject* (*const Z_Construct_UClass_ACastleforceHexTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CastleforceHexTile.h" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Hex" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, Y), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Hex" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, X), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_highlitMat_MetaData[] = {
		{ "Category", "Hex" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_highlitMat = { UE4CodeGen_Private::EPropertyClass::Object, "highlitMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, highlitMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_highlitMat_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_highlitMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_normalMat_MetaData[] = {
		{ "Category", "Hex" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_normalMat = { UE4CodeGen_Private::EPropertyClass::Object, "normalMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, normalMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_normalMat_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_normalMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_text_MetaData[] = {
		{ "Category", "Hex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_text = { UE4CodeGen_Private::EPropertyClass::Object, "text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_text_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh_MetaData[] = {
		{ "Category", "Hex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh = { UE4CodeGen_Private::EPropertyClass::Object, "hexMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, hexMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceHexTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_highlitMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_normalMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceHexTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceHexTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceHexTile_Statics::ClassParams = {
		&ACastleforceHexTile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACastleforceHexTile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforceHexTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforceHexTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforceHexTile, 4101945432);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceHexTile(Z_Construct_UClass_ACastleforceHexTile, &ACastleforceHexTile::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceHexTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceHexTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
