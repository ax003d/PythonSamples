/*
 * Internal module API header file.
 *
 * Generated by SIP 0.1-unknown on Mon Feb 25 17:26:27 2013
 */

#ifndef _MyMathAPI_H
#define _MyMathAPI_H


#include <sip.h>

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_MyMath 0
#define sipName_MyMath &sipStrings_MyMath[0]
#define sipNameNr_Minus 7
#define sipName_Minus &sipStrings_MyMath[7]
#define sipNameNr_Add 13
#define sipName_Add &sipStrings_MyMath[13]

#define sipMalloc                   sipAPI_MyMath->api_malloc
#define sipFree                     sipAPI_MyMath->api_free
#define sipBuildResult              sipAPI_MyMath->api_build_result
#define sipCallMethod               sipAPI_MyMath->api_call_method
#define sipParseResult              sipAPI_MyMath->api_parse_result
#define sipParseArgs                sipAPI_MyMath->api_parse_args
#define sipParseKwdArgs             sipAPI_MyMath->api_parse_kwd_args
#define sipParsePair                sipAPI_MyMath->api_parse_pair
#define sipCommonDtor               sipAPI_MyMath->api_common_dtor
#define sipConvertFromSequenceIndex sipAPI_MyMath->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_MyMath->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_MyMath->api_convert_to_void_ptr
#define sipAddException             sipAPI_MyMath->api_add_exception
#define sipNoFunction               sipAPI_MyMath->api_no_function
#define sipNoMethod                 sipAPI_MyMath->api_no_method
#define sipAbstractMethod           sipAPI_MyMath->api_abstract_method
#define sipBadClass                 sipAPI_MyMath->api_bad_class
#define sipBadCatcherResult         sipAPI_MyMath->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_MyMath->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_MyMath->api_bad_operator_arg
#define sipTrace                    sipAPI_MyMath->api_trace
#define sipTransferBack             sipAPI_MyMath->api_transfer_back
#define sipTransferTo               sipAPI_MyMath->api_transfer_to
#define sipTransferBreak            sipAPI_MyMath->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_MyMath->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_MyMath->api_wrapper_type
#define sipWrapperType_Type         sipAPI_MyMath->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_MyMath->api_voidptr_type
#define sipGetPyObject              sipAPI_MyMath->api_get_pyobject
#define sipGetAddress               sipAPI_MyMath->api_get_address
#define sipGetCppPtr                sipAPI_MyMath->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_MyMath->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_MyMath->api_is_py_method
#define sipCallHook                 sipAPI_MyMath->api_call_hook
#define sipStartThread              sipAPI_MyMath->api_start_thread
#define sipEndThread                sipAPI_MyMath->api_end_thread
#define sipConnectRx                sipAPI_MyMath->api_connect_rx
#define sipDisconnectRx             sipAPI_MyMath->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_MyMath->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_MyMath->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_MyMath->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_MyMath->api_add_type_instance
#define sipFreeSipslot              sipAPI_MyMath->api_free_sipslot
#define sipSameSlot                 sipAPI_MyMath->api_same_slot
#define sipPySlotExtend             sipAPI_MyMath->api_pyslot_extend
#define sipConvertRx                sipAPI_MyMath->api_convert_rx
#define sipAddDelayedDtor           sipAPI_MyMath->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_MyMath->api_can_convert_to_type
#define sipConvertToType            sipAPI_MyMath->api_convert_to_type
#define sipForceConvertToType       sipAPI_MyMath->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_MyMath->api_can_convert_to_enum
#define sipReleaseType              sipAPI_MyMath->api_release_type
#define sipConvertFromType          sipAPI_MyMath->api_convert_from_type
#define sipConvertFromNewType       sipAPI_MyMath->api_convert_from_new_type
#define sipConvertFromEnum          sipAPI_MyMath->api_convert_from_enum
#define sipGetState                 sipAPI_MyMath->api_get_state
#define sipLong_AsUnsignedLong      sipAPI_MyMath->api_long_as_unsigned_long
#define sipExportSymbol             sipAPI_MyMath->api_export_symbol
#define sipImportSymbol             sipAPI_MyMath->api_import_symbol
#define sipFindType                 sipAPI_MyMath->api_find_type
#define sipFindNamedEnum            sipAPI_MyMath->api_find_named_enum
#define sipBytes_AsChar             sipAPI_MyMath->api_bytes_as_char
#define sipBytes_AsString           sipAPI_MyMath->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_MyMath->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_MyMath->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_MyMath->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_MyMath->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_MyMath->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_MyMath->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_MyMath->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_MyMath->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_MyMath->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_MyMath->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_MyMath->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_MyMath->api_invoke_slot
#define sipSaveSlot                 sipAPI_MyMath->api_save_slot
#define sipClearAnySlotReference    sipAPI_MyMath->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_MyMath->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->type->td_cname)
#define sipDeprecated               sipAPI_MyMath->api_deprecated
#define sipKeepReference            sipAPI_MyMath->api_keep_reference
#define sipRegisterPyType           sipAPI_MyMath->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_MyMath->api_type_from_py_type_object
#define sipTypeScope                sipAPI_MyMath->api_type_scope
#define sipResolveTypedef           sipAPI_MyMath->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_MyMath->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_MyMath->api_is_api_enabled
#define sipExportModule             sipAPI_MyMath->api_export_module
#define sipInitModule               sipAPI_MyMath->api_init_module

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_MyMath->api_map_string_to_class
#define sipMapIntToClass            sipAPI_MyMath->api_map_int_to_class
#define sipFindClass                sipAPI_MyMath->api_find_class
#define sipFindMappedType           sipAPI_MyMath->api_find_mapped_type
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_MyMath->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->type)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->type, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->type, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->type, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->type, (t))

/* The strings used by this module. */
extern const char sipStrings_MyMath[];

#define sipType_MyMath              sipModuleAPI_MyMath.em_types[0]
#define sipClass_MyMath             sipModuleAPI_MyMath.em_types[0]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_MyMath_MyMath;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_MyMath;
extern sipExportedModuleDef sipModuleAPI_MyMath;

#endif