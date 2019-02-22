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
	CASTLEFORCE_API UEnum* Z_Construct_UEnum_Castleforce_TileHeight();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexTile_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* TileHeight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Castleforce_TileHeight, Z_Construct_UPackage__Script_Castleforce(), TEXT("TileHeight"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TileHeight(TileHeight_StaticEnum, TEXT("/Script/Castleforce"), TEXT("TileHeight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Castleforce_TileHeight_CRC() { return 398523268U; }
	UEnum* Z_Construct_UEnum_Castleforce_TileHeight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Castleforce();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TileHeight"), 0, Get_Z_Construct_UEnum_Castleforce_TileHeight_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NoneHeight", (int64)NoneHeight },
				{ "Flat", (int64)Flat },
				{ "Hill", (int64)Hill },
				{ "Mountain", (int64)Mountain },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Flat.DisplayName", "Flat" },
				{ "Hill.DisplayName", "Hill" },
				{ "ModuleRelativePath", "CastleforceHexTile.h" },
				{ "Mountain.DisplayName", "Mountain" },
				{ "NoneHeight.DisplayName", "None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Castleforce,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"TileHeight",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"TileHeight",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkable_MetaData[];
#endif
		static void NewProp_walkable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_walkable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_materials;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_materials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_materials_ValueProp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkTime_MetaData[] = {
		{ "Category", "Hex" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkTime = { UE4CodeGen_Private::EPropertyClass::Float, "walkTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, walkTime), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkable_MetaData[] = {
		{ "Category", "Hex" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	void Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkable_SetBit(void* Obj)
	{
		((ACastleforceHexTile*)Obj)->walkable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkable = { UE4CodeGen_Private::EPropertyClass::Bool, "walkable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ACastleforceHexTile), &Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials_MetaData[] = {
		{ "Category", "Hex" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials = { UE4CodeGen_Private::EPropertyClass::Map, "materials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, materials), METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "materials_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Castleforce_TileHeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "materials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh_MetaData[] = {
		{ "Category", "Hex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceHexTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh = { UE4CodeGen_Private::EPropertyClass::Object, "hexMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ACastleforceHexTile, hexMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_hexMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceHexTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_walkable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_materials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexTile_Statics::NewProp_highlitMat,
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
	IMPLEMENT_CLASS(ACastleforceHexTile, 315293994);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceHexTile(Z_Construct_UClass_ACastleforceHexTile, &ACastleforceHexTile::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceHexTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceHexTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
