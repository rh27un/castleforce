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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexMetrics;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Int, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, Radius), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HexMetrics_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HexMetrics = { UE4CodeGen_Private::EPropertyClass::Object, "HexMetrics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, HexMetrics), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HexMetrics_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HexMetrics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass_MetaData[] = {
		{ "Category", "HexGrid" },
		{ "ModuleRelativePath", "CastleforceHexGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass = { UE4CodeGen_Private::EPropertyClass::Class, "CellClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexGrid, CellClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_CellClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceHexGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexGrid_Statics::NewProp_HexMetrics,
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
	IMPLEMENT_CLASS(ACastleforceHexGrid, 3532373456);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceHexGrid(Z_Construct_UClass_ACastleforceHexGrid, &ACastleforceHexGrid::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceHexGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceHexGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
