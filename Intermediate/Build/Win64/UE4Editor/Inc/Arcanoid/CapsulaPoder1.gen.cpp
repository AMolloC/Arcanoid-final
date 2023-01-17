// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CapsulaPoder1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaPoder1() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPoder1_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPoder1();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACapsulaPoder1::StaticRegisterNativesACapsulaPoder1()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaPoder1_NoRegister()
	{
		return ACapsulaPoder1::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaPoder1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaPoder1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaPoder1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaPoder1.h" },
		{ "ModuleRelativePath", "CapsulaPoder1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaPoder1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaPoder1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaPoder1_Statics::ClassParams = {
		&ACapsulaPoder1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaPoder1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaPoder1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaPoder1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaPoder1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaPoder1, 2242406497);
	template<> ARCANOID_API UClass* StaticClass<ACapsulaPoder1>()
	{
		return ACapsulaPoder1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaPoder1(Z_Construct_UClass_ACapsulaPoder1, &ACapsulaPoder1::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACapsulaPoder1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaPoder1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
