// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/snakebase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesnakebase() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_Asnakebase_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Asnakebase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void Asnakebase::StaticRegisterNativesAsnakebase()
	{
	}
	UClass* Z_Construct_UClass_Asnakebase_NoRegister()
	{
		return Asnakebase::StaticClass();
	}
	struct Z_Construct_UClass_Asnakebase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Asnakebase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "snakebase.h" },
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Asnakebase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Asnakebase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Asnakebase_Statics::ClassParams = {
		&Asnakebase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Asnakebase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Asnakebase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Asnakebase, 691718780);
	template<> MYPROJECT2_API UClass* StaticClass<Asnakebase>()
	{
		return Asnakebase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Asnakebase(Z_Construct_UClass_Asnakebase, &Asnakebase::StaticClass, TEXT("/Script/MyProject2"), TEXT("Asnakebase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Asnakebase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
