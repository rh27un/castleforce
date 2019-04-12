// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforceBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforceBlock() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceBlock_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	CASTLEFORCE_API UFunction* Z_Construct_UFunction_ACastleforceBlock_BlockClicked();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	CASTLEFORCE_API UFunction* Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceBlockGrid_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ACastleforceBlock::StaticRegisterNativesACastleforceBlock()
	{
		UClass* Class = ACastleforceBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockClicked", &ACastleforceBlock::execBlockClicked },
			{ "OnFingerPressedBlock", &ACastleforceBlock::execOnFingerPressedBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics
	{
		struct CastleforceBlock_eventBlockClicked_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonClicked;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::NewProp_ButtonClicked = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonClicked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CastleforceBlock_eventBlockClicked_Parms, ButtonClicked), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CastleforceBlock_eventBlockClicked_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::NewProp_ButtonClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "Handle the block being clicked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACastleforceBlock, "BlockClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(CastleforceBlock_eventBlockClicked_Parms), Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACastleforceBlock_BlockClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACastleforceBlock_BlockClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics
	{
		struct CastleforceBlock_eventOnFingerPressedBlock_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TouchedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CastleforceBlock_eventOnFingerPressedBlock_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::NewProp_FingerIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "FingerIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CastleforceBlock_eventOnFingerPressedBlock_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::NewProp_TouchedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "Handle the block being touched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACastleforceBlock, "OnFingerPressedBlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(CastleforceBlock_eventOnFingerPressedBlock_Parms), Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACastleforceBlock_NoRegister()
	{
		return ACastleforceBlock::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforceBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforceBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACastleforceBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACastleforceBlock_BlockClicked, "BlockClicked" }, // 642195591
		{ &Z_Construct_UFunction_ACastleforceBlock_OnFingerPressedBlock, "OnFingerPressedBlock" }, // 3194398764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CastleforceBlock.h" },
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "A block that can be clicked" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "Grid that owns us" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OwningGrid = { UE4CodeGen_Private::EPropertyClass::Object, "OwningGrid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ACastleforceBlock, OwningGrid), Z_Construct_UClass_ACastleforceBlockGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OwningGrid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OwningGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OrangeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "Pointer to orange material used on active blocks" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OrangeMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OrangeMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ACastleforceBlock, OrangeMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OrangeMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OrangeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "Pointer to blue material used on inactive blocks" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlueMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "BlueMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ACastleforceBlock, BlueMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlueMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "Pointer to white material used on the focused block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BaseMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "BaseMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ACastleforceBlock, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BaseMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "StaticMesh component for the clickable block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlockMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BlockMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACastleforceBlock, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlockMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceBlock.h" },
		{ "ToolTip", "Dummy root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_DummyRoot = { UE4CodeGen_Private::EPropertyClass::Object, "DummyRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACastleforceBlock, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_DummyRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_DummyRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OwningGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_BlockMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceBlock_Statics::NewProp_DummyRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceBlock_Statics::ClassParams = {
		&ACastleforceBlock::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ACastleforceBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforceBlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforceBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforceBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforceBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforceBlock, 2121400863);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceBlock(Z_Construct_UClass_ACastleforceBlock, &ACastleforceBlock::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
