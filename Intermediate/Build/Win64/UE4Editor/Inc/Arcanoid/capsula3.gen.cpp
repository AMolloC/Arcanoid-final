// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/capsula3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecapsula3() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_Acapsula3_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_Acapsula3();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void Acapsula3::StaticRegisterNativesAcapsula3()
	{
	}
	UClass* Z_Construct_UClass_Acapsula3_NoRegister()
	{
		return Acapsula3::StaticClass();
	}
	struct Z_Construct_UClass_Acapsula3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acapsula3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acapsula3_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "capsula3.h" },
		{ "ModuleRelativePath", "capsula3.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acapsula3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acapsula3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acapsula3_Statics::ClassParams = {
		&Acapsula3::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acapsula3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acapsula3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acapsula3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acapsula3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acapsula3, 3721468398);
	template<> ARCANOID_API UClass* StaticClass<Acapsula3>()
	{
		return Acapsula3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acapsula3(Z_Construct_UClass_Acapsula3, &Acapsula3::StaticClass, TEXT("/Script/Arcanoid"), TEXT("Acapsula3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acapsula3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
