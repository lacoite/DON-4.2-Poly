// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryXmlParser/Public/Classes/FLowEntryXmlParserNodeAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLowEntryXmlParserNodeAttribute() {}
// Cross Module References
	LOWENTRYXMLPARSER_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute();
	UPackage* Z_Construct_UPackage__Script_LowEntryXmlParser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute;
class UScriptStruct* FLowEntryXmlParserNodeAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute, Z_Construct_UPackage__Script_LowEntryXmlParser(), TEXT("LowEntryXmlParserNodeAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute.OuterSingleton;
}
template<> LOWENTRYXMLPARSER_API UScriptStruct* StaticStruct<FLowEntryXmlParserNodeAttribute>()
{
	return FLowEntryXmlParserNodeAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryXmlParserNodeAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowEntryXmlParserNodeAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Low Entry|Xml Parser|Node Attribute" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryXmlParserNodeAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLowEntryXmlParserNodeAttribute, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Low Entry|Xml Parser|Node Attribute" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryXmlParserNodeAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLowEntryXmlParserNodeAttribute, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryXmlParser,
		nullptr,
		&NewStructOps,
		"LowEntryXmlParserNodeAttribute",
		sizeof(FLowEntryXmlParserNodeAttribute),
		alignof(FLowEntryXmlParserNodeAttribute),
		Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute.InnerSingleton, Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_FLowEntryXmlParserNodeAttribute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_FLowEntryXmlParserNodeAttribute_h_Statics::ScriptStructInfo[] = {
		{ FLowEntryXmlParserNodeAttribute::StaticStruct, Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute_Statics::NewStructOps, TEXT("LowEntryXmlParserNodeAttribute"), &Z_Registration_Info_UScriptStruct_LowEntryXmlParserNodeAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLowEntryXmlParserNodeAttribute), 714198599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_FLowEntryXmlParserNodeAttribute_h_1846280308(TEXT("/Script/LowEntryXmlParser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_FLowEntryXmlParserNodeAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_FLowEntryXmlParserNodeAttribute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
