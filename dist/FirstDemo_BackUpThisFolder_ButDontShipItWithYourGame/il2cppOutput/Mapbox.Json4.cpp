#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Mapbox.Json.Utilities.TypeInformation
struct TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtils_ArgumentNotNull_m5B756D05E0523D93F093238D3CCCA4628764BC34_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t TypeNameKey_Equals_m007D969101F732B9D18EC1713E969423B7EA65C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValidationUtils_ArgumentNotNull_m5B756D05E0523D93F093238D3CCCA4628764BC34_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mapbox.Json.Utilities.ValidationUtils
struct  ValidationUtils_tED3ACF35C2A6529D0F997AD9AD3EF474EC9FAAFF  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Mapbox.Json.Utilities.TypeNameKey
struct  TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B 
{
public:
	// System.String Mapbox.Json.Utilities.TypeNameKey::AssemblyName
	String_t* ___AssemblyName_0;
	// System.String Mapbox.Json.Utilities.TypeNameKey::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of_AssemblyName_0() { return static_cast<int32_t>(offsetof(TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B, ___AssemblyName_0)); }
	inline String_t* get_AssemblyName_0() const { return ___AssemblyName_0; }
	inline String_t** get_address_of_AssemblyName_0() { return &___AssemblyName_0; }
	inline void set_AssemblyName_0(String_t* value)
	{
		___AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mapbox.Json.Utilities.TypeNameKey
struct TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_pinvoke
{
	char* ___AssemblyName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Mapbox.Json.Utilities.TypeNameKey
struct TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_com
{
	Il2CppChar* ___AssemblyName_0;
	Il2CppChar* ___TypeName_1;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Mapbox.Json.Utilities.PrimitiveTypeCode
struct  PrimitiveTypeCode_tEB60A4931181347BDC49C0A95BE368CA8974E131 
{
public:
	// System.Int32 Mapbox.Json.Utilities.PrimitiveTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveTypeCode_tEB60A4931181347BDC49C0A95BE368CA8974E131, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.WriteState
struct  WriteState_t438AFC76A581BCF4C924F479164659D3161D20FB 
{
public:
	// System.Int32 Mapbox.Json.WriteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteState_t438AFC76A581BCF4C924F479164659D3161D20FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Mapbox.Json.Utilities.TypeInformation
struct  TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1  : public RuntimeObject
{
public:
	// System.Type Mapbox.Json.Utilities.TypeInformation::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;
	// Mapbox.Json.Utilities.PrimitiveTypeCode Mapbox.Json.Utilities.TypeInformation::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1, ___U3CTypeCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_1() const { return ___U3CTypeCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_1() { return &___U3CTypeCodeU3Ek__BackingField_1; }
	inline void set_U3CTypeCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_1 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mapbox.Json.Utilities.TypeNameKey::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameKey__ctor_m4578A96836BB699194FDEACC33D2575324E921C8 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method);
// System.Int32 Mapbox.Json.Utilities.TypeNameKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeNameKey_GetHashCode_mBFF9512CF35D227D6F77108313BC9DBEE23F9387 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(Mapbox.Json.Utilities.TypeNameKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_mE5CBDA4FFCC9C6AD0D31379A1C70388986E2C1C3 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B  ___other0, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_m007D969101F732B9D18EC1713E969423B7EA65C6 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Mapbox.Json.Utilities.TypeInformation::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeInformation_get_Type_m4B92A593F21581127F189C9E5BB6B71D0E9C995D (TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Mapbox.Json.Utilities.TypeInformation::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInformation_set_Type_mD4186377A6DF590E31F1891C4BD2112EB57D60E0 (TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// Mapbox.Json.Utilities.PrimitiveTypeCode Mapbox.Json.Utilities.TypeInformation::get_TypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeInformation_get_TypeCode_mA636451B51821B22BD751C905610DED3901A31D4 (TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Mapbox.Json.Utilities.TypeInformation::set_TypeCode(Mapbox.Json.Utilities.PrimitiveTypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInformation_set_TypeCode_mACE42CBEA1C2BA4ED491B382C6ACF0ABD962B618 (TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Utilities.TypeInformation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInformation__ctor_m29B4BC86E4F71D8135AC9A6D3D034F865539E6C0 (TypeInformation_t01CC1C20A9D4B4C590C77A038BBAEBBD3C1938C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mapbox.Json.Utilities.TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshal_pinvoke(const TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B& unmarshaled, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_pinvoke& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshal_pinvoke_back(const TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_pinvoke& marshaled, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_string_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_string_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Mapbox.Json.Utilities.TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshal_pinvoke_cleanup(TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// Conversion methods for marshalling of: Mapbox.Json.Utilities.TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshal_com(const TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B& unmarshaled, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_com& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshal_com_back(const TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_com& marshaled, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Mapbox.Json.Utilities.TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshal_com_cleanup(TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// System.Void Mapbox.Json.Utilities.TypeNameKey::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameKey__ctor_m4578A96836BB699194FDEACC33D2575324E921C8 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___assemblyName0;
		__this->set_AssemblyName_0(L_0);
		String_t* L_1 = ___typeName1;
		__this->set_TypeName_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TypeNameKey__ctor_m4578A96836BB699194FDEACC33D2575324E921C8_AdjustorThunk (RuntimeObject * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * _thisAdjusted = reinterpret_cast<TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B *>(__this + _offset);
	TypeNameKey__ctor_m4578A96836BB699194FDEACC33D2575324E921C8(_thisAdjusted, ___assemblyName0, ___typeName1, method);
}
// System.Int32 Mapbox.Json.Utilities.TypeNameKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeNameKey_GetHashCode_mBFF9512CF35D227D6F77108313BC9DBEE23F9387 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		String_t* L_3 = __this->get_TypeName_1();
		String_t* L_4 = L_3;
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
		if (L_4)
		{
			G_B5_0 = L_4;
			G_B5_1 = G_B3_0;
			goto IL_0020;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_1;
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B5_0);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B5_0);
		G_B6_0 = L_5;
		G_B6_1 = G_B5_1;
	}

IL_0025:
	{
		V_0 = ((int32_t)((int32_t)G_B6_1^(int32_t)G_B6_0));
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t TypeNameKey_GetHashCode_mBFF9512CF35D227D6F77108313BC9DBEE23F9387_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * _thisAdjusted = reinterpret_cast<TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B *>(__this + _offset);
	return TypeNameKey_GetHashCode_mBFF9512CF35D227D6F77108313BC9DBEE23F9387(_thisAdjusted, method);
}
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_m007D969101F732B9D18EC1713E969423B7EA65C6 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeNameKey_Equals_m007D969101F732B9D18EC1713E969423B7EA65C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = TypeNameKey_Equals_mE5CBDA4FFCC9C6AD0D31379A1C70388986E2C1C3((TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B *)__this, ((*(TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B *)((TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B *)UnBox(L_2, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TypeNameKey_Equals_m007D969101F732B9D18EC1713E969423B7EA65C6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * _thisAdjusted = reinterpret_cast<TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B *>(__this + _offset);
	return TypeNameKey_Equals_m007D969101F732B9D18EC1713E969423B7EA65C6(_thisAdjusted, ___obj0, method);
}
// System.Boolean Mapbox.Json.Utilities.TypeNameKey::Equals(Mapbox.Json.Utilities.TypeNameKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_mE5CBDA4FFCC9C6AD0D31379A1C70388986E2C1C3 (TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * __this, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B  L_1 = ___other0;
		String_t* L_2 = L_1.get_AssemblyName_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4 = __this->get_TypeName_1();
		TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B  L_5 = ___other0;
		String_t* L_6 = L_5.get_TypeName_1();
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_6, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool TypeNameKey_Equals_mE5CBDA4FFCC9C6AD0D31379A1C70388986E2C1C3_AdjustorThunk (RuntimeObject * __this, TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B * _thisAdjusted = reinterpret_cast<TypeNameKey_t08B8944A2D187BD3C1E92593D61E8311DD4C7C7B *>(__this + _offset);
	return TypeNameKey_Equals_mE5CBDA4FFCC9C6AD0D31379A1C70388986E2C1C3(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_m5B756D05E0523D93F093238D3CCCA4628764BC34 (RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidationUtils_ArgumentNotNull_m5B756D05E0523D93F093238D3CCCA4628764BC34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___value0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___parameterName1;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ValidationUtils_ArgumentNotNull_m5B756D05E0523D93F093238D3CCCA4628764BC34_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
