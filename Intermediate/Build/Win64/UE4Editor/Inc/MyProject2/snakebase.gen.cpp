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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPROJECT2_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "snakebase" },
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asnakebase, SnakeElementClass), Z_Construct_UClass_ASnakeElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Asnakebase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Asnakebase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Asnakebase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Asnakebase_Statics::ClassParams = {
		&Asnakebase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Asnakebase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(Asnakebase, 2312074706);
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
