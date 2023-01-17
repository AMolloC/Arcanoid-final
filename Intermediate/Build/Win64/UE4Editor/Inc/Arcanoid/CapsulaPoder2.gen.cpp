// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CapsulaPoder2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaPoder2() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPoder2_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPoder2();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACapsulaPoder2::StaticRegisterNativesACapsulaPoder2()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaPoder2_NoRegister()
	{
		return ACapsulaPoder2::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaPoder2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaPoder2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaPoder2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaPoder2.h" },
		{ "ModuleRelativePath", "CapsulaPoder2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaPoder2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaPoder2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaPoder2_Statics::ClassParams = {
		&ACapsulaPoder2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaPoder2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaPoder2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaPoder2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaPoder2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaPoder2, 1452460978);
	template<> ARCANOID_API UClass* StaticClass<ACapsulaPoder2>()
	{
		return ACapsulaPoder2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaPoder2(Z_Construct_UClass_ACapsulaPoder2, &ACapsulaPoder2::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACapsulaPoder2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaPoder2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
