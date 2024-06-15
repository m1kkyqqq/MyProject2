// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInterface() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IMyInterface::execInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_Interactor);
		P_NATIVE_END;
	}
	void UMyInterface::StaticRegisterNativesUMyInterface()
	{
		UClass* Class = UMyInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &IMyInterface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyInterface_Interact_Statics
	{
		struct MyInterface_eventInteract_Parms
		{
			AActor* Interactor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyInterface_Interact_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyInterface_eventInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInterface_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInterface_Interact_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInterface, nullptr, "Interact", nullptr, nullptr, sizeof(MyInterface_eventInteract_Parms), Z_Construct_UFunction_UMyInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInterface_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyInterface_NoRegister()
	{
		return UMyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInterface_Interact, "Interact" }, // 752981938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMyInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyInterface_Statics::ClassParams = {
		&UMyInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyInterface, 3166526489);
	template<> MYPROJECT2_API UClass* StaticClass<UMyInterface>()
	{
		return UMyInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyInterface(Z_Construct_UClass_UMyInterface, &UMyInterface::StaticClass, TEXT("/Script/MyProject2"), TEXT("UMyInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
