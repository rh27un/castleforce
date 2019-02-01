// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef CASTLEFORCE_CastleforceBlock_generated_h
#error "CastleforceBlock.generated.h already included, missing '#pragma once' in CastleforceBlock.h"
#endif
#define CASTLEFORCE_CastleforceBlock_generated_h

#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACastleforceBlock(); \
	friend struct Z_Construct_UClass_ACastleforceBlock_Statics; \
public: \
	DECLARE_CLASS(ACastleforceBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Castleforce"), CASTLEFORCE_API) \
	DECLARE_SERIALIZER(ACastleforceBlock)


#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACastleforceBlock(); \
	friend struct Z_Construct_UClass_ACastleforceBlock_Statics; \
public: \
	DECLARE_CLASS(ACastleforceBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Castleforce"), CASTLEFORCE_API) \
	DECLARE_SERIALIZER(ACastleforceBlock)


#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CASTLEFORCE_API ACastleforceBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACastleforceBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CASTLEFORCE_API, ACastleforceBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACastleforceBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CASTLEFORCE_API ACastleforceBlock(ACastleforceBlock&&); \
	CASTLEFORCE_API ACastleforceBlock(const ACastleforceBlock&); \
public:


#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CASTLEFORCE_API ACastleforceBlock(ACastleforceBlock&&); \
	CASTLEFORCE_API ACastleforceBlock(const ACastleforceBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CASTLEFORCE_API, ACastleforceBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACastleforceBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACastleforceBlock)


#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ACastleforceBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ACastleforceBlock, BlockMesh); }


#define Castleforce_Source_Castleforce_CastleforceBlock_h_10_PROLOG
#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_RPC_WRAPPERS \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_INCLASS \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Castleforce_Source_Castleforce_CastleforceBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_INCLASS_NO_PURE_DECLS \
	Castleforce_Source_Castleforce_CastleforceBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Castleforce_Source_Castleforce_CastleforceBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
