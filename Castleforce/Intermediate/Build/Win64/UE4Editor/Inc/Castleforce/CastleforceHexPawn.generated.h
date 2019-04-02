// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CASTLEFORCE_CastleforceHexPawn_generated_h
#error "CastleforceHexPawn.generated.h already included, missing '#pragma once' in CastleforceHexPawn.h"
#endif
#define CASTLEFORCE_CastleforceHexPawn_generated_h

#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBuildType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBuildType(Z_Param_type); \
		P_NATIVE_END; \
	}


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBuildType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBuildType(Z_Param_type); \
		P_NATIVE_END; \
	}


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACastleforceHexPawn(); \
	friend struct Z_Construct_UClass_ACastleforceHexPawn_Statics; \
public: \
	DECLARE_CLASS(ACastleforceHexPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Castleforce"), NO_API) \
	DECLARE_SERIALIZER(ACastleforceHexPawn)


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_INCLASS \
private: \
	static void StaticRegisterNativesACastleforceHexPawn(); \
	friend struct Z_Construct_UClass_ACastleforceHexPawn_Statics; \
public: \
	DECLARE_CLASS(ACastleforceHexPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Castleforce"), NO_API) \
	DECLARE_SERIALIZER(ACastleforceHexPawn)


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACastleforceHexPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACastleforceHexPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACastleforceHexPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACastleforceHexPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACastleforceHexPawn(ACastleforceHexPawn&&); \
	NO_API ACastleforceHexPawn(const ACastleforceHexPawn&); \
public:


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACastleforceHexPawn(ACastleforceHexPawn&&); \
	NO_API ACastleforceHexPawn(const ACastleforceHexPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACastleforceHexPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACastleforceHexPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACastleforceHexPawn)


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentTileFocus() { return STRUCT_OFFSET(ACastleforceHexPawn, CurrentTileFocus); } \
	FORCEINLINE static uint32 __PPO__SelectedUnit() { return STRUCT_OFFSET(ACastleforceHexPawn, SelectedUnit); }


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_20_PROLOG
#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_PRIVATE_PROPERTY_OFFSET \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_RPC_WRAPPERS \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_INCLASS \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_PRIVATE_PROPERTY_OFFSET \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_INCLASS_NO_PURE_DECLS \
	Castleforce_Source_Castleforce_CastleforceHexPawn_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Castleforce_Source_Castleforce_CastleforceHexPawn_h


#define FOREACH_ENUM_BUILDTYPE(op) \
	op(NoneBuild) \
	op(Knight) \
	op(Mythic) \
	op(Priest) \
	op(Mine) \
	op(Workshop) \
	op(Excavation) \
	op(Castle) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
