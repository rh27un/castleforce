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
	CASTLEFORCE_API UEnum* Z_Construct_UEnum_Castleforce_BuildingType();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	CASTLEFORCE_API UEnum* Z_Construct_UEnum_Castleforce_UnitType();
	CASTLEFORCE_API UEnum* Z_Construct_UEnum_Castleforce_BuildMode();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexPawn_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	CASTLEFORCE_API UFunction* Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceUnit_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceHexTile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* BuildingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Castleforce_BuildingType, Z_Construct_UPackage__Script_Castleforce(), TEXT("BuildingType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BuildingType(BuildingType_StaticEnum, TEXT("/Script/Castleforce"), TEXT("BuildingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Castleforce_BuildingType_CRC() { return 2658966479U; }
	UEnum* Z_Construct_UEnum_Castleforce_BuildingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Castleforce();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BuildingType"), 0, Get_Z_Construct_UEnum_Castleforce_BuildingType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NoneBuilding", (int64)NoneBuilding },
				{ "Mine", (int64)Mine },
				{ "Workshop", (int64)Workshop },
				{ "Excavation", (int64)Excavation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Excavation.DisplayName", "Relic Excavation" },
				{ "Mine.DisplayName", "Mine" },
				{ "ModuleRelativePath", "CastleforceHexPawn.h" },
				{ "NoneBuilding.DisplayName", "None" },
				{ "Workshop.DisplayName", "Crystal Workshop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Castleforce,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"BuildingType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"BuildingType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* UnitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Castleforce_UnitType, Z_Construct_UPackage__Script_Castleforce(), TEXT("UnitType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UnitType(UnitType_StaticEnum, TEXT("/Script/Castleforce"), TEXT("UnitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Castleforce_UnitType_CRC() { return 2370286606U; }
	UEnum* Z_Construct_UEnum_Castleforce_UnitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Castleforce();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UnitType"), 0, Get_Z_Construct_UEnum_Castleforce_UnitType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NoneUnit", (int64)NoneUnit },
				{ "Knight", (int64)Knight },
				{ "Mythic", (int64)Mythic },
				{ "Priest", (int64)Priest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Knight.DisplayName", "Knight" },
				{ "ModuleRelativePath", "CastleforceHexPawn.h" },
				{ "Mythic.DisplayName", "Mythic" },
				{ "NoneUnit.DisplayName", "None" },
				{ "Priest.DisplayName", "Priest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Castleforce,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"UnitType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"UnitType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* BuildMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Castleforce_BuildMode, Z_Construct_UPackage__Script_Castleforce(), TEXT("BuildMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BuildMode(BuildMode_StaticEnum, TEXT("/Script/Castleforce"), TEXT("BuildMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Castleforce_BuildMode_CRC() { return 1033558209U; }
	UEnum* Z_Construct_UEnum_Castleforce_BuildMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Castleforce();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BuildMode"), 0, Get_Z_Construct_UEnum_Castleforce_BuildMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NoneMode", (int64)NoneMode },
				{ "BuildUnits", (int64)BuildUnits },
				{ "BuildBuildings", (int64)BuildBuildings },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "CastleforceHexPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Castleforce,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"BuildMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"BuildMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ACastleforceHexPawn::StaticRegisterNativesACastleforceHexPawn()
	{
		UClass* Class = ACastleforceHexPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUnitType", &ACastleforceHexPawn::execSetUnitType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics
	{
		struct CastleforceHexPawn_eventSetUnitType_Parms
		{
			int32 type;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Int, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CastleforceHexPawn_eventSetUnitType_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACastleforceHexPawn, "SetUnitType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CastleforceHexPawn_eventSetUnitType_Parms), Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACastleforceHexPawn_NoRegister()
	{
		return ACastleforceHexPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforceHexPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriestClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PriestClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MythicClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MythicClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnightClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KnightClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buildingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_unitType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforceHexPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACastleforceHexPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACastleforceHexPawn_SetUnitType, "SetUnitType" }, // 1017259924
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_PriestClass_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_PriestClass = { UE4CodeGen_Private::EPropertyClass::Class, "PriestClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, PriestClass), Z_Construct_UClass_ACastleforceUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_PriestClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_PriestClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_MythicClass_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_MythicClass = { UE4CodeGen_Private::EPropertyClass::Class, "MythicClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, MythicClass), Z_Construct_UClass_ACastleforceUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_MythicClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_MythicClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass = { UE4CodeGen_Private::EPropertyClass::Class, "KnightClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010015, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, KnightClass), Z_Construct_UClass_ACastleforceUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_buildingType_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_buildingType = { UE4CodeGen_Private::EPropertyClass::Byte, "buildingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, buildingType), Z_Construct_UEnum_Castleforce_BuildingType, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_buildingType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_buildingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_unitType_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_unitType = { UE4CodeGen_Private::EPropertyClass::Byte, "unitType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, unitType), Z_Construct_UEnum_Castleforce_UnitType, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_unitType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_unitType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_currentMode_MetaData[] = {
		{ "Category", "CastleforceHexPawn" },
		{ "ModuleRelativePath", "CastleforceHexPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_currentMode = { UE4CodeGen_Private::EPropertyClass::Byte, "currentMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ACastleforceHexPawn, currentMode), Z_Construct_UEnum_Castleforce_BuildMode, METADATA_PARAMS(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_currentMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_currentMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceHexPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_SelectedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_CurrentTileFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_PriestClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_MythicClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_KnightClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_buildingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_unitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceHexPawn_Statics::NewProp_currentMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceHexPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceHexPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceHexPawn_Statics::ClassParams = {
		&ACastleforceHexPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ACastleforceHexPawn, 1629306782);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceHexPawn(Z_Construct_UClass_ACastleforceHexPawn, &ACastleforceHexPawn::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceHexPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceHexPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
