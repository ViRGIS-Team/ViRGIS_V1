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

// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.String
struct String_t;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralF030BBBD32966CDE41037B98A8849C46B76E4BC1;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandler_GetCheckedDownloader_TisDownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_mEC5993D2AC651B08D7AA03920C9DF625AE22B965_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DownloadHandlerTexture_InternalGetTexture_m5F465AE5558980700E5D67C76A445582AFE40960_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWebRequestTexture_GetTexture_mFA6ED27378897B48D3D83FE653FC63B595AB4CE8_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1559CC8A802937295A65A1DCA2F81D3D5CEDAA58 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// UnityEngine.Networking.UnityWebRequestTexture
struct  UnityWebRequestTexture_t2F2C62D3509DDAF6615855FA3428F527BF166F09  : public RuntimeObject
{
public:

public:
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.DownloadHandlerTexture
struct  DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4  : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9
{
public:
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_3;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mTexture_1)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_mHasTexture_2() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mHasTexture_2)); }
	inline bool get_mHasTexture_2() const { return ___mHasTexture_2; }
	inline bool* get_address_of_mHasTexture_2() { return &___mHasTexture_2; }
	inline void set_mHasTexture_2(bool value)
	{
		___mHasTexture_2 = value;
	}

	inline static int32_t get_offset_of_mNonReadable_3() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mNonReadable_3)); }
	inline bool get_mNonReadable_3() const { return ___mNonReadable_3; }
	inline bool* get_address_of_mNonReadable_3() { return &___mNonReadable_3; }
	inline void set_mNonReadable_3(bool value)
	{
		___mNonReadable_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_pinvoke : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_com : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Networking.DownloadHandler::GetCheckedDownloader<System.Object>(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DownloadHandler_GetCheckedDownloader_TisRuntimeObject_mFFB60A2FC33EF784435EA688F93E0FC868D2463C_gshared (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method);

// System.IntPtr UnityEngine.Networking.DownloadHandlerTexture::Create(UnityEngine.Networking.DownloadHandlerTexture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerTexture_Create_m08D7E3E92552996FD1780DDBB43B0BF41DF688BC (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * ___obj0, bool ___readable1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m39F80F1C9B379B0D0362DF9264DE42604BDB24E0 (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerTexture::InternalCreateTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture_InternalCreateTexture_mC3BD10506A7EBB014A349361D10CA56126AB7B34 (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, bool ___readable0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___dh0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_InternalGetTexture_m5F465AE5558980700E5D67C76A445582AFE40960 (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_mFB317291362399115F8D112D8CE9E8C1BF454C29 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, bool ___markNonReadable2, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_InternalGetTextureNative_mC41A95DB3B4BFC7171CC0E4553C6947E30898940 (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Networking.DownloadHandler::GetCheckedDownloader<UnityEngine.Networking.DownloadHandlerTexture>(UnityEngine.Networking.UnityWebRequest)
inline DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * DownloadHandler_GetCheckedDownloader_TisDownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_mEC5993D2AC651B08D7AA03920C9DF625AE22B965 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method)
{
	return ((  DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * (*) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *, const RuntimeMethod*))DownloadHandler_GetCheckedDownloader_TisRuntimeObject_mFFB60A2FC33EF784435EA688F93E0FC868D2463C_gshared)(___www0, method);
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_get_texture_m07CC27F45F3628A969584963AC9D5B08016D685D (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestTexture_GetTexture_mFA6ED27378897B48D3D83FE653FC63B595AB4CE8 (String_t* ___uri0, bool ___nonReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerTexture::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture__ctor_mCD6A98C8B262A0D16BBD90F242C68AFA1C71504D (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, bool ___readable0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m0D2F8F3E1202EF4256D17E91B95DB6CC673FC8D6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___downloadHandler2, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___uploadHandler3, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke(const DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4& unmarshaled, DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_1Exception, NULL);
}
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke_back(const DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_pinvoke& marshaled, DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4& unmarshaled)
{
	Exception_t* ___mTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke_cleanup(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_com(const DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4& unmarshaled, DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_com& marshaled)
{
	Exception_t* ___mTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_1Exception, NULL);
}
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_com_back(const DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_com& marshaled, DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4& unmarshaled)
{
	Exception_t* ___mTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_com_cleanup(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerTexture::Create(UnityEngine.Networking.DownloadHandlerTexture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerTexture_Create_m08D7E3E92552996FD1780DDBB43B0BF41DF688BC (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * ___obj0, bool ___readable1, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerTexture_Create_m08D7E3E92552996FD1780DDBB43B0BF41DF688BC_ftn) (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 *, bool);
	static DownloadHandlerTexture_Create_m08D7E3E92552996FD1780DDBB43B0BF41DF688BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerTexture_Create_m08D7E3E92552996FD1780DDBB43B0BF41DF688BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerTexture::Create(UnityEngine.Networking.DownloadHandlerTexture,System.Boolean)");
	intptr_t retVal = _il2cpp_icall_func(___obj0, ___readable1);
	return retVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerTexture::InternalCreateTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture_InternalCreateTexture_mC3BD10506A7EBB014A349361D10CA56126AB7B34 (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, bool ___readable0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___readable0;
		intptr_t L_1 = DownloadHandlerTexture_Create_m08D7E3E92552996FD1780DDBB43B0BF41DF688BC(__this, L_0, /*hidden argument*/NULL);
		((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)__this)->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerTexture::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture__ctor_mCD6A98C8B262A0D16BBD90F242C68AFA1C71504D (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, bool ___readable0, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m39F80F1C9B379B0D0362DF9264DE42604BDB24E0(__this, /*hidden argument*/NULL);
		bool L_0 = ___readable0;
		DownloadHandlerTexture_InternalCreateTexture_mC3BD10506A7EBB014A349361D10CA56126AB7B34(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___readable0;
		__this->set_mNonReadable_3((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerTexture::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DownloadHandlerTexture_GetData_m9BDEC19CC3EB0453FAA613F39A03811F6F6F8501 (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_get_texture_m07CC27F45F3628A969584963AC9D5B08016D685D (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method)
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_0 = NULL;
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = DownloadHandlerTexture_InternalGetTexture_m5F465AE5558980700E5D67C76A445582AFE40960(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_InternalGetTexture_m5F465AE5558980700E5D67C76A445582AFE40960 (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandlerTexture_InternalGetTexture_m5F465AE5558980700E5D67C76A445582AFE40960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_3 = NULL;
	{
		bool L_0 = __this->get_mHasTexture_2();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = __this->get_mTexture_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_5, 2, 2, /*hidden argument*/NULL);
		__this->set_mTexture_1(L_5);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = __this->get_mTexture_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		bool L_8 = __this->get_mNonReadable_3();
		ImageConversion_LoadImage_mFB317291362399115F8D112D8CE9E8C1BF454C29(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0043:
	{
		goto IL_006b;
	}

IL_0046:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_9 = __this->get_mTexture_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = DownloadHandlerTexture_InternalGetTextureNative_mC41A95DB3B4BFC7171CC0E4553C6947E30898940(__this, /*hidden argument*/NULL);
		__this->set_mTexture_1(L_12);
		__this->set_mHasTexture_2((bool)1);
	}

IL_006b:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_13 = __this->get_mTexture_1();
		V_3 = L_13;
		goto IL_0074;
	}

IL_0074:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_14 = V_3;
		return L_14;
	}
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_InternalGetTextureNative_mC41A95DB3B4BFC7171CC0E4553C6947E30898940 (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method)
{
	typedef Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * (*DownloadHandlerTexture_InternalGetTextureNative_mC41A95DB3B4BFC7171CC0E4553C6947E30898940_ftn) (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 *);
	static DownloadHandlerTexture_InternalGetTextureNative_mC41A95DB3B4BFC7171CC0E4553C6947E30898940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerTexture_InternalGetTextureNative_mC41A95DB3B4BFC7171CC0E4553C6947E30898940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative()");
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_0 = NULL;
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = ___www0;
		DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * L_1 = DownloadHandler_GetCheckedDownloader_TisDownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_mEC5993D2AC651B08D7AA03920C9DF625AE22B965(L_0, /*hidden argument*/DownloadHandler_GetCheckedDownloader_TisDownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_mEC5993D2AC651B08D7AA03920C9DF625AE22B965_RuntimeMethod_var);
		NullCheck(L_1);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = DownloadHandlerTexture_get_texture_m07CC27F45F3628A969584963AC9D5B08016D685D(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = V_0;
		return L_3;
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
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestTexture_GetTexture_m45626D1CEA83B5DC281934CC74D383389CD781B9 (String_t* ___uri0, const RuntimeMethod* method)
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_0 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_1 = UnityWebRequestTexture_GetTexture_mFA6ED27378897B48D3D83FE653FC63B595AB4CE8(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestTexture_GetTexture_mFA6ED27378897B48D3D83FE653FC63B595AB4CE8 (String_t* ___uri0, bool ___nonReadable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequestTexture_GetTexture_mFA6ED27378897B48D3D83FE653FC63B595AB4CE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_0 = NULL;
	{
		String_t* L_0 = ___uri0;
		bool L_1 = ___nonReadable1;
		DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * L_2 = (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 *)il2cpp_codegen_object_new(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_il2cpp_TypeInfo_var);
		DownloadHandlerTexture__ctor_mCD6A98C8B262A0D16BBD90F242C68AFA1C71504D(L_2, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_3 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)il2cpp_codegen_object_new(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m0D2F8F3E1202EF4256D17E91B95DB6CC673FC8D6(L_3, L_0, _stringLiteralF030BBBD32966CDE41037B98A8849C46B76E4BC1, L_2, (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
