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


// Malimbe.MemberChangeMethod.CalledAfterChangeOfAttribute
struct CalledAfterChangeOfAttribute_tB2E0BBE38F66810E029785351E1330353FCD1DCF;
// Malimbe.MemberChangeMethod.CalledBeforeChangeOfAttribute
struct CalledBeforeChangeOfAttribute_t8B32F87C2EE700A11B6255FA5C9506BB5A98FCDF;
// Malimbe.MemberChangeMethod.HandlesMemberChangeAttribute
struct HandlesMemberChangeAttribute_t9E5585FD53076697EEA2C03ADBAD5BD47223F46D;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t38A0D1D75ED9B95C2B0C244E61818DC140ED1DAA 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
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

// Malimbe.MemberChangeMethod.HandlesMemberChangeAttribute
struct  HandlesMemberChangeAttribute_t9E5585FD53076697EEA2C03ADBAD5BD47223F46D  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Malimbe.MemberChangeMethod.HandlesMemberChangeAttribute::DataMemberName
	String_t* ___DataMemberName_0;

public:
	inline static int32_t get_offset_of_DataMemberName_0() { return static_cast<int32_t>(offsetof(HandlesMemberChangeAttribute_t9E5585FD53076697EEA2C03ADBAD5BD47223F46D, ___DataMemberName_0)); }
	inline String_t* get_DataMemberName_0() const { return ___DataMemberName_0; }
	inline String_t** get_address_of_DataMemberName_0() { return &___DataMemberName_0; }
	inline void set_DataMemberName_0(String_t* value)
	{
		___DataMemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataMemberName_0), (void*)value);
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


// Malimbe.MemberChangeMethod.CalledAfterChangeOfAttribute
struct  CalledAfterChangeOfAttribute_tB2E0BBE38F66810E029785351E1330353FCD1DCF  : public HandlesMemberChangeAttribute_t9E5585FD53076697EEA2C03ADBAD5BD47223F46D
{
public:

public:
};


// Malimbe.MemberChangeMethod.CalledBeforeChangeOfAttribute
struct  CalledBeforeChangeOfAttribute_t8B32F87C2EE700A11B6255FA5C9506BB5A98FCDF  : public HandlesMemberChangeAttribute_t9E5585FD53076697EEA2C03ADBAD5BD47223F46D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Malimbe.MemberChangeMethod.HandlesMemberChangeAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandlesMemberChangeAttribute__ctor_mFD1A37B95A5732BFFFFD9AC0D2C337734C4C5F7F (HandlesMemberChangeAttribute_t9E5585FD53076697EEA2C03ADBAD5BD47223F46D * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Malimbe.MemberChangeMethod.CalledAfterChangeOfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CalledAfterChangeOfAttribute__ctor_mF17E2861041B0C90A5CBE2B0B213CA4AD48D608C (CalledAfterChangeOfAttribute_tB2E0BBE38F66810E029785351E1330353FCD1DCF * __this, String_t* ___memberName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___memberName0;
		HandlesMemberChangeAttribute__ctor_mFD1A37B95A5732BFFFFD9AC0D2C337734C4C5F7F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Malimbe.MemberChangeMethod.CalledBeforeChangeOfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CalledBeforeChangeOfAttribute__ctor_m5B7EDA1315AEAE21AA3C677FB691DE43A54A27D4 (CalledBeforeChangeOfAttribute_t8B32F87C2EE700A11B6255FA5C9506BB5A98FCDF * __this, String_t* ___memberName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___memberName0;
		HandlesMemberChangeAttribute__ctor_mFD1A37B95A5732BFFFFD9AC0D2C337734C4C5F7F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Malimbe.MemberChangeMethod.HandlesMemberChangeAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandlesMemberChangeAttribute__ctor_mFD1A37B95A5732BFFFFD9AC0D2C337734C4C5F7F (HandlesMemberChangeAttribute_t9E5585FD53076697EEA2C03ADBAD5BD47223F46D * __this, String_t* ___memberName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_DataMemberName_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
