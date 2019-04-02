// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforceHexGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforceHexGrid() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexGrid_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	CASTLEFORCE_API UEnum* Z_Construct_UEnum_Castleforce_TileHeight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACastleforceHexGrid::StaticRegisterNativesACastleforceHexGrid()
	{
	}
	UClass* Z_Construct_UClass_ACastleforceHexGrid_NoRegister()
	{
		return ACastleforceHexGrid::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforceHexGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HeightTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeightTypes_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightTypes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeightMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CellClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforceHexGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CastleforceHexGrid.h" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, Scale), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes = { UE4CodeGen_Private::EPropertyClass::Map, "HeightTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, HeightTypes), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "HeightTypes_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Castleforce_TileHeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "HeightTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightMultiplier = { UE4CodeGen_Private::EPropertyClass::Int, "HeightMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, HeightMultiplier), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Int, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, Size), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, Radius), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass = { UE4CodeGen_Private::EPropertyClass::Class, "CellClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, CellClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceHexGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightTypes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HeightMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceHexGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceHexGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceHexGrid_Statics::ClassParams = {
		&ACastleforceHexGrid::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACastleforceHexGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforceHexGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforceHexGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforceHexGrid, 1795638064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceHexGrid(Z_Construct_UClass_ACastleforceHexGrid, &ACastleforceHexGrid::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceHexGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceHexGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
