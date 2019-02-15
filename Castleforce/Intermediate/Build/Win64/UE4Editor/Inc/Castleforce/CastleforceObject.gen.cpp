// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Castleforce/CastleforceObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCastleforceObject() {}
// Cross Module References
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceObject_NoRegister();
	CASTLEFORCE_API UClass* Z_Construct_UClass_ACastleforceObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Castleforce();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACastleforceObject::StaticRegisterNativesACastleforceObject()
	{
	}
	UClass* Z_Construct_UClass_ACastleforceObject_NoRegister()
	{
		return ACastleforceObject::StaticClass();
	}
	struct Z_Construct_UClass_ACastleforceObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACastleforceObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Castleforce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CastleforceObject.h" },
		{ "ModuleRelativePath", "CastleforceObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACastleforceObject_Statics::NewProp_ObjectMesh_MetaData[] = {
		{ "Category", "Object" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CastleforceObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACastleforceObject_Statics::NewProp_ObjectMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ACastleforceObject, ObjectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACastleforceObject_Statics::NewProp_ObjectMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACastleforceObject_Statics::NewProp_ObjectMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACastleforceObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACastleforceObject_Statics::NewProp_ObjectMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACastleforceObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACastleforceObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACastleforceObject_Statics::ClassParams = {
		&ACastleforceObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACastleforceObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACastleforceObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACastleforceObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACastleforceObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACastleforceObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACastleforceObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACastleforceObject, 292044949);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACastleforceObject(Z_Construct_UClass_ACastleforceObject, &ACastleforceObject::StaticClass, TEXT("/Script/Castleforce"), TEXT("ACastleforceObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACastleforceObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
