// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryXmlParser/Public/Classes/LowEntryXmlParserLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryXmlParserLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LOWENTRYXMLPARSER_API UClass* Z_Construct_UClass_ULowEntryXmlParserLibrary();
	LOWENTRYXMLPARSER_API UClass* Z_Construct_UClass_ULowEntryXmlParserLibrary_NoRegister();
	LOWENTRYXMLPARSER_API UClass* Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LowEntryXmlParser();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryXmlParserLibrary::execXmlToString)
	{
		P_GET_OBJECT(ULowEntryXmlParserNode,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryXmlParserLibrary::XmlToString(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserLibrary::execStringToXml)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Xml);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryXmlParserNode**)Z_Param__Result=ULowEntryXmlParserLibrary::StringToXml(Z_Param_Xml);
		P_NATIVE_END;
	}
	void ULowEntryXmlParserLibrary::StaticRegisterNativesULowEntryXmlParserLibrary()
	{
		UClass* Class = ULowEntryXmlParserLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StringToXml", &ULowEntryXmlParserLibrary::execStringToXml },
			{ "XmlToString", &ULowEntryXmlParserLibrary::execXmlToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics
	{
		struct LowEntryXmlParserLibrary_eventStringToXml_Parms
		{
			FString Xml;
			ULowEntryXmlParserNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Xml_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Xml;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::NewProp_Xml_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::NewProp_Xml = { "Xml", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserLibrary_eventStringToXml_Parms, Xml), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::NewProp_Xml_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::NewProp_Xml_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserLibrary_eventStringToXml_Parms, ReturnValue), Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::NewProp_Xml,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Library" },
		{ "Comment", "/**\n\x09* Parses XML data and returns the root node, returns NULL if it can't be parsed.\n\x09*/" },
		{ "DisplayName", "Parse Xml" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserLibrary.h" },
		{ "ToolTip", "Parses XML data and returns the root node, returns NULL if it can't be parsed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserLibrary, nullptr, "StringToXml", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::LowEntryXmlParserLibrary_eventStringToXml_Parms), Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics
	{
		struct LowEntryXmlParserLibrary_eventXmlToString_Parms
		{
			ULowEntryXmlParserNode* Node;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserLibrary_eventXmlToString_Parms, Node), Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserLibrary_eventXmlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Library" },
		{ "Comment", "/**\n\x09* Converts the given node and all children to XML data.\n\x09*/" },
		{ "DisplayName", "Get Xml" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserLibrary.h" },
		{ "ToolTip", "Converts the given node and all children to XML data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserLibrary, nullptr, "XmlToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::LowEntryXmlParserLibrary_eventXmlToString_Parms), Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryXmlParserLibrary);
	UClass* Z_Construct_UClass_ULowEntryXmlParserLibrary_NoRegister()
	{
		return ULowEntryXmlParserLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryXmlParser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryXmlParserLibrary_StringToXml, "StringToXml" }, // 53692546
		{ &Z_Construct_UFunction_ULowEntryXmlParserLibrary_XmlToString, "XmlToString" }, // 2869845881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/LowEntryXmlParserLibrary.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryXmlParserLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::ClassParams = {
		&ULowEntryXmlParserLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryXmlParserLibrary()
	{
		if (!Z_Registration_Info_UClass_ULowEntryXmlParserLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryXmlParserLibrary.OuterSingleton, Z_Construct_UClass_ULowEntryXmlParserLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULowEntryXmlParserLibrary.OuterSingleton;
	}
	template<> LOWENTRYXMLPARSER_API UClass* StaticClass<ULowEntryXmlParserLibrary>()
	{
		return ULowEntryXmlParserLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryXmlParserLibrary);
	ULowEntryXmlParserLibrary::~ULowEntryXmlParserLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryXmlParserLibrary, ULowEntryXmlParserLibrary::StaticClass, TEXT("ULowEntryXmlParserLibrary"), &Z_Registration_Info_UClass_ULowEntryXmlParserLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryXmlParserLibrary), 2441373768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserLibrary_h_366791877(TEXT("/Script/LowEntryXmlParser"),
		Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
