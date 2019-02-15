// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CASTLEFORCE_CastleforcePawn_generated_h
#error "CastleforcePawn.generated.h already included, missing '#pragma once' in CastleforcePawn.h"
#endif
#define CASTLEFORCE_CastleforcePawn_generated_h

#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_RPC_WRAPPERS
#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACastleforcePawn(); \
	friend struct Z_Construct_UClass_ACastleforcePawn_Statics; \
public: \
	DECLARE_CLASS(ACastleforcePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Castleforce"), NO_API) \
	DECLARE_SERIALIZER(ACastleforcePawn)


#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACastleforcePawn(); \
	friend struct Z_Construct_UClass_ACastleforcePawn_Statics; \
public: \
	DECLARE_CLASS(ACastleforcePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Castleforce"), NO_API) \
	DECLARE_SERIALIZER(ACastleforcePawn)


#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACastleforcePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACastleforcePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACastleforcePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACastleforcePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACastleforcePawn(ACastleforcePawn&&); \
	NO_API ACastleforcePawn(const ACastleforcePawn&); \
public:


#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACastleforcePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACastleforcePawn(ACastleforcePawn&&); \
	NO_API ACastleforcePawn(const ACastleforcePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACastleforcePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACastleforcePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACastleforcePawn)


#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(ACastleforcePawn, CurrentBlockFocus); }


#define Castleforce_Source_Castleforce_CastleforcePawn_h_11_PROLOG
#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_RPC_WRAPPERS \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_INCLASS \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Castleforce_Source_Castleforce_CastleforcePawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_INCLASS_NO_PURE_DECLS \
	Castleforce_Source_Castleforce_CastleforcePawn_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CastleforcePawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Castleforce_Source_Castleforce_CastleforcePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
