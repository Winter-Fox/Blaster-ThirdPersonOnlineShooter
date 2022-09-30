// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPLUGIN_MultiplayerSessionsSubsystem_generated_h
#error "MultiplayerSessionsSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionsSubsystem.h"
#endif
#define MULTIPLAYERPLUGIN_MultiplayerSessionsSubsystem_generated_h

#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_15_DELEGATE \
struct _Script_MultiplayerPlugin_eventMultiplayerOnCreateSessionComplete_Parms \
{ \
	bool bWasSucceful; \
}; \
static inline void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSucceful) \
{ \
	_Script_MultiplayerPlugin_eventMultiplayerOnCreateSessionComplete_Parms Parms; \
	Parms.bWasSucceful=bWasSucceful ? true : false; \
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_20_DELEGATE \
struct _Script_MultiplayerPlugin_eventMultiplayerDestroySessionComplete_Parms \
{ \
	bool bWasSucceful; \
}; \
static inline void FMultiplayerDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerDestroySessionComplete, bool bWasSucceful) \
{ \
	_Script_MultiplayerPlugin_eventMultiplayerDestroySessionComplete_Parms Parms; \
	Parms.bWasSucceful=bWasSucceful ? true : false; \
	MultiplayerDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_21_DELEGATE \
struct _Script_MultiplayerPlugin_eventMultiplayerStartSessionComplete_Parms \
{ \
	bool bWasSucceful; \
}; \
static inline void FMultiplayerStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerStartSessionComplete, bool bWasSucceful) \
{ \
	_Script_MultiplayerPlugin_eventMultiplayerStartSessionComplete_Parms Parms; \
	Parms.bWasSucceful=bWasSucceful ? true : false; \
	MultiplayerStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_SPARSE_DATA
#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_RPC_WRAPPERS
#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayerSessionsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	NO_API UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public:


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	NO_API UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem)


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_23_PROLOG
#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_SPARSE_DATA \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_RPC_WRAPPERS \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_INCLASS \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_SPARSE_DATA \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPLUGIN_API UClass* StaticClass<class UMultiplayerSessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Plugins_MultiplayerPlugin_Source_MultiplayerPlugin_Public_MultiplayerSessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
