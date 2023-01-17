// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CapsulaDano1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaDano1() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaDano1_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaDano1();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACapsulaDano1::StaticRegisterNativesACapsulaDano1()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaDano1_NoRegister()
	{
		return ACapsulaDano1::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaDano1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaDano1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaDano1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaDano1.h" },
		{ "ModuleRelativePath", "CapsulaDano1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaDano1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaDano1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaDano1_Statics::ClassParams = {
		&ACapsulaDano1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaDano1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaDano1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaDano1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaDano1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaDano1, 3200169768);
	template<> ARCANOID_API UClass* StaticClass<ACapsulaDano1>()
	{
		return ACapsulaDano1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaDano1(Z_Construct_UClass_ACapsulaDano1, &ACapsulaDano1::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACapsulaDano1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaDano1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
