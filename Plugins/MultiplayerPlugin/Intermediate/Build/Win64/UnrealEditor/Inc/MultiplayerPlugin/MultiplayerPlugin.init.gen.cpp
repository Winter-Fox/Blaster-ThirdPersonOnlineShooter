// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerPlugin_init() {}
	MULTIPLAYERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MultiplayerPlugin_MultiplayerDestroySessionComplete__DelegateSignature();
	MULTIPLAYERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MultiplayerPlugin_MultiplayerOnCreateSessionComplete__DelegateSignature();
	MULTIPLAYERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MultiplayerPlugin_MultiplayerStartSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerPlugin_MultiplayerDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerPlugin_MultiplayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerPlugin_MultiplayerStartSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x31485E8D,
				0x88858190,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerPlugin(Z_Construct_UPackage__Script_MultiplayerPlugin, TEXT("/Script/MultiplayerPlugin"), Z_Registration_Info_UPackage__Script_MultiplayerPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x31485E8D, 0x88858190));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
