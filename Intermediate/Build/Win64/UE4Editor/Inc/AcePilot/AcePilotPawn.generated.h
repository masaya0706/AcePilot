// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACEPILOT_AcePilotPawn_generated_h
#error "AcePilotPawn.generated.h already included, missing '#pragma once' in AcePilotPawn.h"
#endif
#define ACEPILOT_AcePilotPawn_generated_h

#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_SPARSE_DATA
#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_RPC_WRAPPERS
#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAcePilotPawn(); \
	friend struct Z_Construct_UClass_AAcePilotPawn_Statics; \
public: \
	DECLARE_CLASS(AAcePilotPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AcePilot"), NO_API) \
	DECLARE_SERIALIZER(AAcePilotPawn)


#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAAcePilotPawn(); \
	friend struct Z_Construct_UClass_AAcePilotPawn_Statics; \
public: \
	DECLARE_CLASS(AAcePilotPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AcePilot"), NO_API) \
	DECLARE_SERIALIZER(AAcePilotPawn)


#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAcePilotPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAcePilotPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAcePilotPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAcePilotPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAcePilotPawn(AAcePilotPawn&&); \
	NO_API AAcePilotPawn(const AAcePilotPawn&); \
public:


#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAcePilotPawn(AAcePilotPawn&&); \
	NO_API AAcePilotPawn(const AAcePilotPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAcePilotPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAcePilotPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAcePilotPawn)


#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AAcePilotPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AAcePilotPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AAcePilotPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AAcePilotPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AAcePilotPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AAcePilotPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AAcePilotPawn, MinSpeed); }


#define AcePilot_Source_AcePilot_AcePilotPawn_h_8_PROLOG
#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_SPARSE_DATA \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_RPC_WRAPPERS \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_INCLASS \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AcePilot_Source_AcePilot_AcePilotPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_SPARSE_DATA \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_INCLASS_NO_PURE_DECLS \
	AcePilot_Source_AcePilot_AcePilotPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACEPILOT_API UClass* StaticClass<class AAcePilotPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AcePilot_Source_AcePilot_AcePilotPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
