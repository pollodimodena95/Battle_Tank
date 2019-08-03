// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank_04/BattleTank_04GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleTank_04GameModeBase() {}
// Cross Module References
	BATTLETANK_04_API UClass* Z_Construct_UClass_ABattleTank_04GameModeBase_NoRegister();
	BATTLETANK_04_API UClass* Z_Construct_UClass_ABattleTank_04GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BattleTank_04();
// End Cross Module References
	void ABattleTank_04GameModeBase::StaticRegisterNativesABattleTank_04GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleTank_04GameModeBase_NoRegister()
	{
		return ABattleTank_04GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABattleTank_04GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleTank_04GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank_04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleTank_04GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleTank_04GameModeBase.h" },
		{ "ModuleRelativePath", "BattleTank_04GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleTank_04GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleTank_04GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleTank_04GameModeBase_Statics::ClassParams = {
		&ABattleTank_04GameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABattleTank_04GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABattleTank_04GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleTank_04GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleTank_04GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleTank_04GameModeBase, 204751377);
	template<> BATTLETANK_04_API UClass* StaticClass<ABattleTank_04GameModeBase>()
	{
		return ABattleTank_04GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleTank_04GameModeBase(Z_Construct_UClass_ABattleTank_04GameModeBase, &ABattleTank_04GameModeBase::StaticClass, TEXT("/Script/BattleTank_04"), TEXT("ABattleTank_04GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleTank_04GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
