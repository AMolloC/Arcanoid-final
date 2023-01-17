// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/InnerGeneradorCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInnerGeneradorCapsulas() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AInnerGeneradorCapsulas_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AInnerGeneradorCapsulas();
	ARCANOID_API UClass* Z_Construct_UClass_AGeneradorCapsulas();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void AInnerGeneradorCapsulas::StaticRegisterNativesAInnerGeneradorCapsulas()
	{
	}
	UClass* Z_Construct_UClass_AInnerGeneradorCapsulas_NoRegister()
	{
		return AInnerGeneradorCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_AInnerGeneradorCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInnerGeneradorCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneradorCapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInnerGeneradorCapsulas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InnerGeneradorCapsulas.h" },
		{ "ModuleRelativePath", "InnerGeneradorCapsulas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInnerGeneradorCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInnerGeneradorCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInnerGeneradorCapsulas_Statics::ClassParams = {
		&AInnerGeneradorCapsulas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInnerGeneradorCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInnerGeneradorCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInnerGeneradorCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInnerGeneradorCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInnerGeneradorCapsulas, 4028336205);
	template<> ARCANOID_API UClass* StaticClass<AInnerGeneradorCapsulas>()
	{
		return AInnerGeneradorCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInnerGeneradorCapsulas(Z_Construct_UClass_AInnerGeneradorCapsulas, &AInnerGeneradorCapsulas::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AInnerGeneradorCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInnerGeneradorCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
