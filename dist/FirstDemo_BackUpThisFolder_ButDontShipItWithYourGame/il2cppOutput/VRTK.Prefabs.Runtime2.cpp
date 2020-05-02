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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<Zinnia.Action.BooleanAction>
struct List_1_tFFCF95B0E466631C358E7A86E9B8467172240E61;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer/EventData>
struct UnityEvent_1_t76A384D35E424E10C0BBBA75183379270B4902E9;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator
struct PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E;
// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade
struct PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9;
// VRTK.Prefabs.Pointers.PointerConfigurator
struct PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83;
// VRTK.Prefabs.Pointers.PointerFacade
struct PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87;
// VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor
struct PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1;
// VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor
struct PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A;
// Zinnia.Action.Action/BooleanUnityEvent
struct BooleanUnityEvent_t3DCF12CB5C5234D92509BE9AE8AA63761483536F;
// Zinnia.Action.BooleanAction
struct BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869;
// Zinnia.Action.BooleanAction/UnityEvent
struct UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771;
// Zinnia.Cast.PhysicsCast
struct PhysicsCast_t93DC77C88AE86C73121CF361FF510AC9326763AA;
// Zinnia.Cast.PointsCast
struct PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE;
// Zinnia.Cast.PointsCast/EventData
struct EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0;
// Zinnia.Cast.PointsCast/UnityEvent
struct UnityEvent_t3D826B72475B9F609EDEA4292C163D05376FAE52;
// Zinnia.Data.Collection.List.GameObjectObservableList
struct GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68;
// Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent
struct UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD;
// Zinnia.Data.Operation.Extraction.GameObjectExtractor
struct GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95;
// Zinnia.Data.Operation.Extraction.GameObjectExtractor/UnityEvent
struct UnityEvent_t27E37BBA1CE3BAFA5B3DE4238B07E92EDFFEA263;
// Zinnia.Data.Operation.Extraction.TransformPositionExtractor
struct TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B;
// Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2<UnityEngine.Vector3,System.Object>
struct TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB;
// Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2<UnityEngine.Vector3,Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent>
struct TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3;
// Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent
struct UnityEvent_t7C3BD5B0B186DFB145AD6406E87752B5BA828C19;
// Zinnia.Data.Operation.Mutation.TransformPositionMutator
struct TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3;
// Zinnia.Data.Operation.Mutation.TransformPropertyMutator
struct TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB;
// Zinnia.Data.Operation.Mutation.TransformScaleMutator
struct TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26;
// Zinnia.Data.Type.SurfaceData
struct SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E;
// Zinnia.Data.Type.TransformData
struct TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0;
// Zinnia.Pointer.ObjectPointer
struct ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5;
// Zinnia.Pointer.ObjectPointer/EventData
struct EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903;
// Zinnia.Pointer.ObjectPointer/PointsRendererUnityEvent
struct PointsRendererUnityEvent_t5EC479DE7D41BD1C9316B855E4D21E3FB49A1CDD;
// Zinnia.Pointer.ObjectPointer/UnityEvent
struct UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7;
// Zinnia.Pointer.PointerElement
struct PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE;
// Zinnia.Process.Component.GameObjectSourceTargetProcessor
struct GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2;
// Zinnia.Rule.IRule
struct IRule_tD0D3D1BDA87914744541D781448A028F12D317B1;
// Zinnia.Rule.RuleContainer
struct RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4;
// Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor
struct PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686;
// Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor/Vector3UnityEvent
struct Vector3UnityEvent_t1DA42BDB14484CFC81631D1C97AD906099DFBEE4;
// Zinnia.Tracking.Follow.Modifier.FollowModifier
struct FollowModifier_tCD8CDE0E56FC90432A78B66E54411D0CCAEE0AC8;
// Zinnia.Tracking.Follow.ObjectFollower
struct ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A;
// Zinnia.Visual.PointsRenderer/PointsData
struct PointsData_t8CBC1D7768AC953728F3FE47C6BE9A4547C04C1A;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mBE4257D12D20C29507E20D2F9EAAEDDD0859F14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObjectExtensions_TryGetComponent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mE61E75BB056160A4DD0AC11029BF93EDA35C364E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureActivationActionU3Eb__31_0_m5D6977748340332487060C6206F7A050B4A6C87B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureActivationActionU3Eb__31_1_m2EAF6BE9D521FBE4AA949EBFD08F182DD455F80F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureFollowSourcesU3Eb__29_0_m340980EFAD6C9E10CFC16D247F820BFBDFD1DA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureFollowSourcesU3Eb__29_1_m7415500896AE85E6ED7EB29DA4A71B939B00CD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_0_mC6CBFF8A00B38E75062CE333384F3CCA393ECEA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_1_mF07CE0D2BFB47E2DF4C593DFA19EDCA16258F7E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_2_m5C96D15EF15BCB5B0936546E621D2132ACC0FEED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_3_mEC7CAA3B555DEB41AD7A3F4E970C20EAEE4148D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformPropertyExtractor_2_set_Source_m624B0C0E489FE1CD9AB35B60B98DC7E128AF920A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t PlayAreaRepresentationConfigurator_ConfigureOffsetDestination_m30CBB3BB3B2E5534667E7898A491027536679970_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayAreaRepresentationConfigurator_ConfigureOffsetOrigin_m39E7780FD62D7B841347FCAE6FDE6472200A94E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_ConfigureActivationAction_m40E7E55FBE5784CBD9CDDB3FC4B29A8D7312ABC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_ConfigureFollowSources_mC5C1B7B41D5D8BBC1C43FB23B4054F7F8909A634_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_ConfigureSelectionAction_m09B4A5AA9401FE3324A2EC8DE9479FCB73D0E97E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_EmitActivated_m4B3B662EDA8C31AD755AF3563D3982E8F43D113E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_EmitDeactivated_m2E716A3748073F6976950C442B7FFAC3724F3D14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_EmitEntered_m42D5736CB7C395E5286EE934ABE26285B6812121_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_EmitExited_m35907200D28F605D5E92C6DA78965B9A86FA207D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_EmitHoverChanged_mC23B79C56B6C4B03C234C014D441E6AF0AA69DC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerConfigurator_EmitSelected_m279204AB86E4D186EE909A9757D7A11E74D33328_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerFacadeComponentGameObjectExtractor_Extract_m2F611940BFBD28F0B4DCE755F2106DD3F0C27507_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerFacadeComponentGameObjectExtractor_SetSource_m4562E8CA902D148380B413CCF047C66D91516EA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerFacadeGameObjectExtractor_Extract_m79B835F478988E63911848B5FAA52A69680C6DA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerFacadeGameObjectExtractor_SetSource_mD0BF40E58A5A8F39CA0BD72F03AC472212BE5352_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerFacade__ctor_mA7A1DB3B0DA8B9D3368585B386391B2E91CB7A4A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// Zinnia.Utility.InterfaceContainer
struct  InterfaceContainer_t03FD7B2B393FC2FD8FFD0BD2DD354DE5DF5E8C29  : public RuntimeObject
{
public:
	// UnityEngine.Object Zinnia.Utility.InterfaceContainer::field
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(InterfaceContainer_t03FD7B2B393FC2FD8FFD0BD2DD354DE5DF5E8C29, ___field_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_field_0() const { return ___field_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer_EventData>
struct  UnityEvent_1_t76A384D35E424E10C0BBBA75183379270B4902E9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t76A384D35E424E10C0BBBA75183379270B4902E9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Zinnia.Data.Type.Vector3State
struct  Vector3State_t11D632DA9081540258082D5C44600D44832CFE25 
{
public:
	// System.Boolean Zinnia.Data.Type.Vector3State::xState
	bool ___xState_0;
	// System.Boolean Zinnia.Data.Type.Vector3State::yState
	bool ___yState_1;
	// System.Boolean Zinnia.Data.Type.Vector3State::zState
	bool ___zState_2;

public:
	inline static int32_t get_offset_of_xState_0() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25, ___xState_0)); }
	inline bool get_xState_0() const { return ___xState_0; }
	inline bool* get_address_of_xState_0() { return &___xState_0; }
	inline void set_xState_0(bool value)
	{
		___xState_0 = value;
	}

	inline static int32_t get_offset_of_yState_1() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25, ___yState_1)); }
	inline bool get_yState_1() const { return ___yState_1; }
	inline bool* get_address_of_yState_1() { return &___yState_1; }
	inline void set_yState_1(bool value)
	{
		___yState_1 = value;
	}

	inline static int32_t get_offset_of_zState_2() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25, ___zState_2)); }
	inline bool get_zState_2() const { return ___zState_2; }
	inline bool* get_address_of_zState_2() { return &___zState_2; }
	inline void set_zState_2(bool value)
	{
		___zState_2 = value;
	}
};

struct Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_StaticFields
{
public:
	// Zinnia.Data.Type.Vector3State Zinnia.Data.Type.Vector3State::False
	Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  ___False_3;
	// Zinnia.Data.Type.Vector3State Zinnia.Data.Type.Vector3State::True
	Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  ___True_4;
	// Zinnia.Data.Type.Vector3State Zinnia.Data.Type.Vector3State::XOnly
	Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  ___XOnly_5;
	// Zinnia.Data.Type.Vector3State Zinnia.Data.Type.Vector3State::YOnly
	Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  ___YOnly_6;
	// Zinnia.Data.Type.Vector3State Zinnia.Data.Type.Vector3State::ZOnly
	Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  ___ZOnly_7;

public:
	inline static int32_t get_offset_of_False_3() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_StaticFields, ___False_3)); }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  get_False_3() const { return ___False_3; }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25 * get_address_of_False_3() { return &___False_3; }
	inline void set_False_3(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  value)
	{
		___False_3 = value;
	}

	inline static int32_t get_offset_of_True_4() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_StaticFields, ___True_4)); }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  get_True_4() const { return ___True_4; }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25 * get_address_of_True_4() { return &___True_4; }
	inline void set_True_4(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  value)
	{
		___True_4 = value;
	}

	inline static int32_t get_offset_of_XOnly_5() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_StaticFields, ___XOnly_5)); }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  get_XOnly_5() const { return ___XOnly_5; }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25 * get_address_of_XOnly_5() { return &___XOnly_5; }
	inline void set_XOnly_5(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  value)
	{
		___XOnly_5 = value;
	}

	inline static int32_t get_offset_of_YOnly_6() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_StaticFields, ___YOnly_6)); }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  get_YOnly_6() const { return ___YOnly_6; }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25 * get_address_of_YOnly_6() { return &___YOnly_6; }
	inline void set_YOnly_6(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  value)
	{
		___YOnly_6 = value;
	}

	inline static int32_t get_offset_of_ZOnly_7() { return static_cast<int32_t>(offsetof(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_StaticFields, ___ZOnly_7)); }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  get_ZOnly_7() const { return ___ZOnly_7; }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25 * get_address_of_ZOnly_7() { return &___ZOnly_7; }
	inline void set_ZOnly_7(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  value)
	{
		___ZOnly_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Zinnia.Data.Type.Vector3State
struct Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_marshaled_pinvoke
{
	int32_t ___xState_0;
	int32_t ___yState_1;
	int32_t ___zState_2;
};
// Native definition for COM marshalling of Zinnia.Data.Type.Vector3State
struct Vector3State_t11D632DA9081540258082D5C44600D44832CFE25_marshaled_com
{
	int32_t ___xState_0;
	int32_t ___yState_1;
	int32_t ___zState_2;
};

// Zinnia.Utility.InterfaceContainer`1<Zinnia.Rule.IRule>
struct  InterfaceContainer_1_t1A2A20DC019A339CABECEB3D477FF1307242F2A2  : public InterfaceContainer_t03FD7B2B393FC2FD8FFD0BD2DD354DE5DF5E8C29
{
public:
	// TInterface Zinnia.Utility.InterfaceContainer`1::_interface
	RuntimeObject* ____interface_1;

public:
	inline static int32_t get_offset_of__interface_1() { return static_cast<int32_t>(offsetof(InterfaceContainer_1_t1A2A20DC019A339CABECEB3D477FF1307242F2A2, ____interface_1)); }
	inline RuntimeObject* get__interface_1() const { return ____interface_1; }
	inline RuntimeObject** get_address_of__interface_1() { return &____interface_1; }
	inline void set__interface_1(RuntimeObject* value)
	{
		____interface_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_1), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Nullable`1<UnityEngine.Quaternion>
struct  Nullable_1_t1AF22E72609C109A63AC7BE47F596B5956149D41 
{
public:
	// T System.Nullable`1::value
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1AF22E72609C109A63AC7BE47F596B5956149D41, ___value_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_value_0() const { return ___value_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1AF22E72609C109A63AC7BE47F596B5956149D41, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 
{
public:
	// T System.Nullable`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// VRTK.Prefabs.Locomotion.Teleporters.TeleporterFacade_OffsetType
struct  OffsetType_t09778D802EDE78E3B209424921E913D03513A139 
{
public:
	// System.Int32 VRTK.Prefabs.Locomotion.Teleporters.TeleporterFacade_OffsetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OffsetType_t09778D802EDE78E3B209424921E913D03513A139, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VRTK.Prefabs.Pointers.PointerFacade_SelectionType
struct  SelectionType_t64FF92717FC1ED7906E34FB72241A2EBC0DB8B99 
{
public:
	// System.Int32 VRTK.Prefabs.Pointers.PointerFacade_SelectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionType_t64FF92717FC1ED7906E34FB72241A2EBC0DB8B99, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor_PointerComponentType
struct  PointerComponentType_t07BCBDECD90CC79EF74702B8289823BDDE0A607C 
{
public:
	// System.Int32 VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor_PointerComponentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerComponentType_t07BCBDECD90CC79EF74702B8289823BDDE0A607C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zinnia.Pointer.ObjectPointer_UnityEvent
struct  UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7  : public UnityEvent_1_t76A384D35E424E10C0BBBA75183379270B4902E9
{
public:

public:
};


// Zinnia.Pointer.PointerElement_Visibility
struct  Visibility_tA330D5AB559482B65C04852F3BF8BE8C0EA0F00F 
{
public:
	// System.Int32 Zinnia.Pointer.PointerElement_Visibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Visibility_tA330D5AB559482B65C04852F3BF8BE8C0EA0F00F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Zinnia.Rule.RuleContainer
struct  RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4  : public InterfaceContainer_1_t1A2A20DC019A339CABECEB3D477FF1307242F2A2
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<UnityEngine.RaycastHit>
struct  Nullable_1_t6224B732028631256932FA4C4176E10D171EFE29 
{
public:
	// T System.Nullable`1::value
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6224B732028631256932FA4C4176E10D171EFE29, ___value_0)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_value_0() const { return ___value_0; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6224B732028631256932FA4C4176E10D171EFE29, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Zinnia.Data.Type.TransformData
struct  TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0  : public RuntimeObject
{
public:
	// UnityEngine.Transform Zinnia.Data.Type.TransformData::transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform_0;
	// System.Boolean Zinnia.Data.Type.TransformData::useLocalValues
	bool ___useLocalValues_1;
	// System.Nullable`1<UnityEngine.Vector3> Zinnia.Data.Type.TransformData::positionOverride
	Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  ___positionOverride_2;
	// System.Nullable`1<UnityEngine.Quaternion> Zinnia.Data.Type.TransformData::rotationOverride
	Nullable_1_t1AF22E72609C109A63AC7BE47F596B5956149D41  ___rotationOverride_3;
	// System.Nullable`1<UnityEngine.Vector3> Zinnia.Data.Type.TransformData::scaleOverride
	Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  ___scaleOverride_4;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0, ___transform_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transform_0() const { return ___transform_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_0), (void*)value);
	}

	inline static int32_t get_offset_of_useLocalValues_1() { return static_cast<int32_t>(offsetof(TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0, ___useLocalValues_1)); }
	inline bool get_useLocalValues_1() const { return ___useLocalValues_1; }
	inline bool* get_address_of_useLocalValues_1() { return &___useLocalValues_1; }
	inline void set_useLocalValues_1(bool value)
	{
		___useLocalValues_1 = value;
	}

	inline static int32_t get_offset_of_positionOverride_2() { return static_cast<int32_t>(offsetof(TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0, ___positionOverride_2)); }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  get_positionOverride_2() const { return ___positionOverride_2; }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * get_address_of_positionOverride_2() { return &___positionOverride_2; }
	inline void set_positionOverride_2(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  value)
	{
		___positionOverride_2 = value;
	}

	inline static int32_t get_offset_of_rotationOverride_3() { return static_cast<int32_t>(offsetof(TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0, ___rotationOverride_3)); }
	inline Nullable_1_t1AF22E72609C109A63AC7BE47F596B5956149D41  get_rotationOverride_3() const { return ___rotationOverride_3; }
	inline Nullable_1_t1AF22E72609C109A63AC7BE47F596B5956149D41 * get_address_of_rotationOverride_3() { return &___rotationOverride_3; }
	inline void set_rotationOverride_3(Nullable_1_t1AF22E72609C109A63AC7BE47F596B5956149D41  value)
	{
		___rotationOverride_3 = value;
	}

	inline static int32_t get_offset_of_scaleOverride_4() { return static_cast<int32_t>(offsetof(TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0, ___scaleOverride_4)); }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  get_scaleOverride_4() const { return ___scaleOverride_4; }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * get_address_of_scaleOverride_4() { return &___scaleOverride_4; }
	inline void set_scaleOverride_4(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  value)
	{
		___scaleOverride_4 = value;
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Zinnia.Data.Type.SurfaceData
struct  SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E  : public TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0
{
public:
	// UnityEngine.Vector3 Zinnia.Data.Type.SurfaceData::origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin_5;
	// UnityEngine.Vector3 Zinnia.Data.Type.SurfaceData::direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction_6;
	// UnityEngine.RaycastHit Zinnia.Data.Type.SurfaceData::<CollisionData>k__BackingField
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CCollisionDataU3Ek__BackingField_7;
	// UnityEngine.RaycastHit Zinnia.Data.Type.SurfaceData::<PreviousCollisionData>k__BackingField
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CPreviousCollisionDataU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_origin_5() { return static_cast<int32_t>(offsetof(SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E, ___origin_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_origin_5() const { return ___origin_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_origin_5() { return &___origin_5; }
	inline void set_origin_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___origin_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E, ___direction_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_direction_6() const { return ___direction_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_U3CCollisionDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E, ___U3CCollisionDataU3Ek__BackingField_7)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_U3CCollisionDataU3Ek__BackingField_7() const { return ___U3CCollisionDataU3Ek__BackingField_7; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_U3CCollisionDataU3Ek__BackingField_7() { return &___U3CCollisionDataU3Ek__BackingField_7; }
	inline void set_U3CCollisionDataU3Ek__BackingField_7(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___U3CCollisionDataU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPreviousCollisionDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E, ___U3CPreviousCollisionDataU3Ek__BackingField_8)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_U3CPreviousCollisionDataU3Ek__BackingField_8() const { return ___U3CPreviousCollisionDataU3Ek__BackingField_8; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_U3CPreviousCollisionDataU3Ek__BackingField_8() { return &___U3CPreviousCollisionDataU3Ek__BackingField_8; }
	inline void set_U3CPreviousCollisionDataU3Ek__BackingField_8(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___U3CPreviousCollisionDataU3Ek__BackingField_8 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Zinnia.Pointer.ObjectPointer_EventData
struct  EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903  : public SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E
{
public:
	// System.Boolean Zinnia.Pointer.ObjectPointer_EventData::isCurrentlyActive
	bool ___isCurrentlyActive_9;
	// System.Boolean Zinnia.Pointer.ObjectPointer_EventData::isCurrentlyHovering
	bool ___isCurrentlyHovering_10;
	// System.Single Zinnia.Pointer.ObjectPointer_EventData::currentHoverDuration
	float ___currentHoverDuration_11;
	// Zinnia.Cast.PointsCast_EventData Zinnia.Pointer.ObjectPointer_EventData::currentPointsCastData
	EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * ___currentPointsCastData_12;

public:
	inline static int32_t get_offset_of_isCurrentlyActive_9() { return static_cast<int32_t>(offsetof(EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903, ___isCurrentlyActive_9)); }
	inline bool get_isCurrentlyActive_9() const { return ___isCurrentlyActive_9; }
	inline bool* get_address_of_isCurrentlyActive_9() { return &___isCurrentlyActive_9; }
	inline void set_isCurrentlyActive_9(bool value)
	{
		___isCurrentlyActive_9 = value;
	}

	inline static int32_t get_offset_of_isCurrentlyHovering_10() { return static_cast<int32_t>(offsetof(EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903, ___isCurrentlyHovering_10)); }
	inline bool get_isCurrentlyHovering_10() const { return ___isCurrentlyHovering_10; }
	inline bool* get_address_of_isCurrentlyHovering_10() { return &___isCurrentlyHovering_10; }
	inline void set_isCurrentlyHovering_10(bool value)
	{
		___isCurrentlyHovering_10 = value;
	}

	inline static int32_t get_offset_of_currentHoverDuration_11() { return static_cast<int32_t>(offsetof(EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903, ___currentHoverDuration_11)); }
	inline float get_currentHoverDuration_11() const { return ___currentHoverDuration_11; }
	inline float* get_address_of_currentHoverDuration_11() { return &___currentHoverDuration_11; }
	inline void set_currentHoverDuration_11(float value)
	{
		___currentHoverDuration_11 = value;
	}

	inline static int32_t get_offset_of_currentPointsCastData_12() { return static_cast<int32_t>(offsetof(EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903, ___currentPointsCastData_12)); }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * get_currentPointsCastData_12() const { return ___currentPointsCastData_12; }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 ** get_address_of_currentPointsCastData_12() { return &___currentPointsCastData_12; }
	inline void set_currentPointsCastData_12(EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * value)
	{
		___currentPointsCastData_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPointsCastData_12), (void*)value);
	}
};


// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator
struct  PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::facade
	PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * ___facade_4;
	// Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::dimensionExtractor
	PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * ___dimensionExtractor_5;
	// Zinnia.Data.Operation.Mutation.TransformScaleMutator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::objectScaler
	TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * ___objectScaler_6;
	// Zinnia.Data.Operation.Mutation.TransformPositionMutator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::objectPositioner
	TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * ___objectPositioner_7;
	// Zinnia.Data.Operation.Extraction.TransformPositionExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::offsetOriginExtractor
	TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * ___offsetOriginExtractor_8;
	// Zinnia.Data.Operation.Extraction.TransformPositionExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::offsetDestinationExtractor
	TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * ___offsetDestinationExtractor_9;

public:
	inline static int32_t get_offset_of_facade_4() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E, ___facade_4)); }
	inline PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * get_facade_4() const { return ___facade_4; }
	inline PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 ** get_address_of_facade_4() { return &___facade_4; }
	inline void set_facade_4(PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * value)
	{
		___facade_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facade_4), (void*)value);
	}

	inline static int32_t get_offset_of_dimensionExtractor_5() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E, ___dimensionExtractor_5)); }
	inline PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * get_dimensionExtractor_5() const { return ___dimensionExtractor_5; }
	inline PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 ** get_address_of_dimensionExtractor_5() { return &___dimensionExtractor_5; }
	inline void set_dimensionExtractor_5(PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * value)
	{
		___dimensionExtractor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimensionExtractor_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectScaler_6() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E, ___objectScaler_6)); }
	inline TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * get_objectScaler_6() const { return ___objectScaler_6; }
	inline TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 ** get_address_of_objectScaler_6() { return &___objectScaler_6; }
	inline void set_objectScaler_6(TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * value)
	{
		___objectScaler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectScaler_6), (void*)value);
	}

	inline static int32_t get_offset_of_objectPositioner_7() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E, ___objectPositioner_7)); }
	inline TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * get_objectPositioner_7() const { return ___objectPositioner_7; }
	inline TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 ** get_address_of_objectPositioner_7() { return &___objectPositioner_7; }
	inline void set_objectPositioner_7(TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * value)
	{
		___objectPositioner_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectPositioner_7), (void*)value);
	}

	inline static int32_t get_offset_of_offsetOriginExtractor_8() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E, ___offsetOriginExtractor_8)); }
	inline TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * get_offsetOriginExtractor_8() const { return ___offsetOriginExtractor_8; }
	inline TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B ** get_address_of_offsetOriginExtractor_8() { return &___offsetOriginExtractor_8; }
	inline void set_offsetOriginExtractor_8(TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * value)
	{
		___offsetOriginExtractor_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offsetOriginExtractor_8), (void*)value);
	}

	inline static int32_t get_offset_of_offsetDestinationExtractor_9() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E, ___offsetDestinationExtractor_9)); }
	inline TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * get_offsetDestinationExtractor_9() const { return ___offsetDestinationExtractor_9; }
	inline TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B ** get_address_of_offsetDestinationExtractor_9() { return &___offsetDestinationExtractor_9; }
	inline void set_offsetDestinationExtractor_9(TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * value)
	{
		___offsetDestinationExtractor_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offsetDestinationExtractor_9), (void*)value);
	}
};


// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade
struct  PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::target
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target_4;
	// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::offsetOrigin
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___offsetOrigin_5;
	// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::offsetDestination
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___offsetDestination_6;
	// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::configuration
	PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * ___configuration_7;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9, ___target_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_target_4() const { return ___target_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_offsetOrigin_5() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9, ___offsetOrigin_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_offsetOrigin_5() const { return ___offsetOrigin_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_offsetOrigin_5() { return &___offsetOrigin_5; }
	inline void set_offsetOrigin_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___offsetOrigin_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offsetOrigin_5), (void*)value);
	}

	inline static int32_t get_offset_of_offsetDestination_6() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9, ___offsetDestination_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_offsetDestination_6() const { return ___offsetDestination_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_offsetDestination_6() { return &___offsetDestination_6; }
	inline void set_offsetDestination_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___offsetDestination_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offsetDestination_6), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_7() { return static_cast<int32_t>(offsetof(PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9, ___configuration_7)); }
	inline PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * get_configuration_7() const { return ___configuration_7; }
	inline PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E ** get_address_of_configuration_7() { return &___configuration_7; }
	inline void set_configuration_7(PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * value)
	{
		___configuration_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_7), (void*)value);
	}
};


// VRTK.Prefabs.Pointers.PointerConfigurator
struct  PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerConfigurator::facade
	PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___facade_4;
	// Zinnia.Pointer.ObjectPointer VRTK.Prefabs.Pointers.PointerConfigurator::objectPointer
	ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * ___objectPointer_5;
	// Zinnia.Tracking.Follow.ObjectFollower VRTK.Prefabs.Pointers.PointerConfigurator::objectFollow
	ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * ___objectFollow_6;
	// Zinnia.Cast.PointsCast VRTK.Prefabs.Pointers.PointerConfigurator::caster
	PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * ___caster_7;
	// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::activationAction
	BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___activationAction_8;
	// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::selectOnActivatedAction
	BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___selectOnActivatedAction_9;
	// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::selectOnDeactivatedAction
	BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___selectOnDeactivatedAction_10;

public:
	inline static int32_t get_offset_of_facade_4() { return static_cast<int32_t>(offsetof(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83, ___facade_4)); }
	inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * get_facade_4() const { return ___facade_4; }
	inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 ** get_address_of_facade_4() { return &___facade_4; }
	inline void set_facade_4(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * value)
	{
		___facade_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facade_4), (void*)value);
	}

	inline static int32_t get_offset_of_objectPointer_5() { return static_cast<int32_t>(offsetof(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83, ___objectPointer_5)); }
	inline ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * get_objectPointer_5() const { return ___objectPointer_5; }
	inline ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 ** get_address_of_objectPointer_5() { return &___objectPointer_5; }
	inline void set_objectPointer_5(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * value)
	{
		___objectPointer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectPointer_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectFollow_6() { return static_cast<int32_t>(offsetof(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83, ___objectFollow_6)); }
	inline ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * get_objectFollow_6() const { return ___objectFollow_6; }
	inline ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A ** get_address_of_objectFollow_6() { return &___objectFollow_6; }
	inline void set_objectFollow_6(ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * value)
	{
		___objectFollow_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectFollow_6), (void*)value);
	}

	inline static int32_t get_offset_of_caster_7() { return static_cast<int32_t>(offsetof(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83, ___caster_7)); }
	inline PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * get_caster_7() const { return ___caster_7; }
	inline PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE ** get_address_of_caster_7() { return &___caster_7; }
	inline void set_caster_7(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * value)
	{
		___caster_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caster_7), (void*)value);
	}

	inline static int32_t get_offset_of_activationAction_8() { return static_cast<int32_t>(offsetof(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83, ___activationAction_8)); }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * get_activationAction_8() const { return ___activationAction_8; }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 ** get_address_of_activationAction_8() { return &___activationAction_8; }
	inline void set_activationAction_8(BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * value)
	{
		___activationAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_selectOnActivatedAction_9() { return static_cast<int32_t>(offsetof(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83, ___selectOnActivatedAction_9)); }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * get_selectOnActivatedAction_9() const { return ___selectOnActivatedAction_9; }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 ** get_address_of_selectOnActivatedAction_9() { return &___selectOnActivatedAction_9; }
	inline void set_selectOnActivatedAction_9(BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * value)
	{
		___selectOnActivatedAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectOnActivatedAction_9), (void*)value);
	}

	inline static int32_t get_offset_of_selectOnDeactivatedAction_10() { return static_cast<int32_t>(offsetof(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83, ___selectOnDeactivatedAction_10)); }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * get_selectOnDeactivatedAction_10() const { return ___selectOnDeactivatedAction_10; }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 ** get_address_of_selectOnDeactivatedAction_10() { return &___selectOnDeactivatedAction_10; }
	inline void set_selectOnDeactivatedAction_10(BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * value)
	{
		___selectOnDeactivatedAction_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectOnDeactivatedAction_10), (void*)value);
	}
};


// VRTK.Prefabs.Pointers.PointerFacade
struct  PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacade::followSource
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___followSource_4;
	// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerFacade::activationAction
	BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___activationAction_5;
	// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerFacade::selectionAction
	BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___selectionAction_6;
	// VRTK.Prefabs.Pointers.PointerFacade_SelectionType VRTK.Prefabs.Pointers.PointerFacade::selectionMethod
	int32_t ___selectionMethod_7;
	// Zinnia.Rule.RuleContainer VRTK.Prefabs.Pointers.PointerFacade::targetValidity
	RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___targetValidity_8;
	// Zinnia.Pointer.ObjectPointer_UnityEvent VRTK.Prefabs.Pointers.PointerFacade::Activated
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Activated_9;
	// Zinnia.Pointer.ObjectPointer_UnityEvent VRTK.Prefabs.Pointers.PointerFacade::Deactivated
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Deactivated_10;
	// Zinnia.Pointer.ObjectPointer_UnityEvent VRTK.Prefabs.Pointers.PointerFacade::Entered
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Entered_11;
	// Zinnia.Pointer.ObjectPointer_UnityEvent VRTK.Prefabs.Pointers.PointerFacade::Exited
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Exited_12;
	// Zinnia.Pointer.ObjectPointer_UnityEvent VRTK.Prefabs.Pointers.PointerFacade::HoverChanged
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___HoverChanged_13;
	// Zinnia.Pointer.ObjectPointer_UnityEvent VRTK.Prefabs.Pointers.PointerFacade::Selected
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Selected_14;
	// VRTK.Prefabs.Pointers.PointerConfigurator VRTK.Prefabs.Pointers.PointerFacade::configuration
	PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * ___configuration_15;

public:
	inline static int32_t get_offset_of_followSource_4() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___followSource_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_followSource_4() const { return ___followSource_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_followSource_4() { return &___followSource_4; }
	inline void set_followSource_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___followSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___followSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_activationAction_5() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___activationAction_5)); }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * get_activationAction_5() const { return ___activationAction_5; }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 ** get_address_of_activationAction_5() { return &___activationAction_5; }
	inline void set_activationAction_5(BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * value)
	{
		___activationAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_selectionAction_6() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___selectionAction_6)); }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * get_selectionAction_6() const { return ___selectionAction_6; }
	inline BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 ** get_address_of_selectionAction_6() { return &___selectionAction_6; }
	inline void set_selectionAction_6(BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * value)
	{
		___selectionAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectionAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_selectionMethod_7() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___selectionMethod_7)); }
	inline int32_t get_selectionMethod_7() const { return ___selectionMethod_7; }
	inline int32_t* get_address_of_selectionMethod_7() { return &___selectionMethod_7; }
	inline void set_selectionMethod_7(int32_t value)
	{
		___selectionMethod_7 = value;
	}

	inline static int32_t get_offset_of_targetValidity_8() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___targetValidity_8)); }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * get_targetValidity_8() const { return ___targetValidity_8; }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 ** get_address_of_targetValidity_8() { return &___targetValidity_8; }
	inline void set_targetValidity_8(RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * value)
	{
		___targetValidity_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetValidity_8), (void*)value);
	}

	inline static int32_t get_offset_of_Activated_9() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___Activated_9)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Activated_9() const { return ___Activated_9; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Activated_9() { return &___Activated_9; }
	inline void set_Activated_9(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Activated_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Activated_9), (void*)value);
	}

	inline static int32_t get_offset_of_Deactivated_10() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___Deactivated_10)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Deactivated_10() const { return ___Deactivated_10; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Deactivated_10() { return &___Deactivated_10; }
	inline void set_Deactivated_10(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Deactivated_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deactivated_10), (void*)value);
	}

	inline static int32_t get_offset_of_Entered_11() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___Entered_11)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Entered_11() const { return ___Entered_11; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Entered_11() { return &___Entered_11; }
	inline void set_Entered_11(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Entered_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entered_11), (void*)value);
	}

	inline static int32_t get_offset_of_Exited_12() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___Exited_12)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Exited_12() const { return ___Exited_12; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Exited_12() { return &___Exited_12; }
	inline void set_Exited_12(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Exited_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exited_12), (void*)value);
	}

	inline static int32_t get_offset_of_HoverChanged_13() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___HoverChanged_13)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_HoverChanged_13() const { return ___HoverChanged_13; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_HoverChanged_13() { return &___HoverChanged_13; }
	inline void set_HoverChanged_13(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___HoverChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoverChanged_13), (void*)value);
	}

	inline static int32_t get_offset_of_Selected_14() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___Selected_14)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Selected_14() const { return ___Selected_14; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Selected_14() { return &___Selected_14; }
	inline void set_Selected_14(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Selected_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Selected_14), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_15() { return static_cast<int32_t>(offsetof(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87, ___configuration_15)); }
	inline PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * get_configuration_15() const { return ___configuration_15; }
	inline PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 ** get_address_of_configuration_15() { return &___configuration_15; }
	inline void set_configuration_15(PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * value)
	{
		___configuration_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_15), (void*)value);
	}
};


// Zinnia.Action.Action
struct  Action_t8C419D196314F8CECE4D4CB1F9BCC26552B54C4A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Zinnia.Action.Action_BooleanUnityEvent Zinnia.Action.Action::ActivationStateChanged
	BooleanUnityEvent_t3DCF12CB5C5234D92509BE9AE8AA63761483536F * ___ActivationStateChanged_4;
	// System.Boolean Zinnia.Action.Action::isActivated
	bool ___isActivated_5;

public:
	inline static int32_t get_offset_of_ActivationStateChanged_4() { return static_cast<int32_t>(offsetof(Action_t8C419D196314F8CECE4D4CB1F9BCC26552B54C4A, ___ActivationStateChanged_4)); }
	inline BooleanUnityEvent_t3DCF12CB5C5234D92509BE9AE8AA63761483536F * get_ActivationStateChanged_4() const { return ___ActivationStateChanged_4; }
	inline BooleanUnityEvent_t3DCF12CB5C5234D92509BE9AE8AA63761483536F ** get_address_of_ActivationStateChanged_4() { return &___ActivationStateChanged_4; }
	inline void set_ActivationStateChanged_4(BooleanUnityEvent_t3DCF12CB5C5234D92509BE9AE8AA63761483536F * value)
	{
		___ActivationStateChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActivationStateChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of_isActivated_5() { return static_cast<int32_t>(offsetof(Action_t8C419D196314F8CECE4D4CB1F9BCC26552B54C4A, ___isActivated_5)); }
	inline bool get_isActivated_5() const { return ___isActivated_5; }
	inline bool* get_address_of_isActivated_5() { return &___isActivated_5; }
	inline void set_isActivated_5(bool value)
	{
		___isActivated_5 = value;
	}
};


// Zinnia.Cast.PointsCast
struct  PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Zinnia.Cast.PointsCast::origin
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___origin_4;
	// Zinnia.Cast.PhysicsCast Zinnia.Cast.PointsCast::physicsCast
	PhysicsCast_t93DC77C88AE86C73121CF361FF510AC9326763AA * ___physicsCast_5;
	// Zinnia.Rule.RuleContainer Zinnia.Cast.PointsCast::targetValidity
	RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___targetValidity_6;
	// System.Nullable`1<UnityEngine.Vector3> Zinnia.Cast.PointsCast::<DestinationPointOverride>k__BackingField
	Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  ___U3CDestinationPointOverrideU3Ek__BackingField_7;
	// Zinnia.Cast.PointsCast_UnityEvent Zinnia.Cast.PointsCast::ResultsChanged
	UnityEvent_t3D826B72475B9F609EDEA4292C163D05376FAE52 * ___ResultsChanged_8;
	// System.Nullable`1<UnityEngine.RaycastHit> Zinnia.Cast.PointsCast::<TargetHit>k__BackingField
	Nullable_1_t6224B732028631256932FA4C4176E10D171EFE29  ___U3CTargetHitU3Ek__BackingField_9;
	// System.Boolean Zinnia.Cast.PointsCast::<IsTargetHitValid>k__BackingField
	bool ___U3CIsTargetHitValidU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Zinnia.Cast.PointsCast::points
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___points_11;
	// Zinnia.Cast.PointsCast_EventData Zinnia.Cast.PointsCast::eventData
	EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * ___eventData_12;

public:
	inline static int32_t get_offset_of_origin_4() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___origin_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_origin_4() const { return ___origin_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_origin_4() { return &___origin_4; }
	inline void set_origin_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___origin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origin_4), (void*)value);
	}

	inline static int32_t get_offset_of_physicsCast_5() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___physicsCast_5)); }
	inline PhysicsCast_t93DC77C88AE86C73121CF361FF510AC9326763AA * get_physicsCast_5() const { return ___physicsCast_5; }
	inline PhysicsCast_t93DC77C88AE86C73121CF361FF510AC9326763AA ** get_address_of_physicsCast_5() { return &___physicsCast_5; }
	inline void set_physicsCast_5(PhysicsCast_t93DC77C88AE86C73121CF361FF510AC9326763AA * value)
	{
		___physicsCast_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsCast_5), (void*)value);
	}

	inline static int32_t get_offset_of_targetValidity_6() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___targetValidity_6)); }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * get_targetValidity_6() const { return ___targetValidity_6; }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 ** get_address_of_targetValidity_6() { return &___targetValidity_6; }
	inline void set_targetValidity_6(RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * value)
	{
		___targetValidity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetValidity_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDestinationPointOverrideU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___U3CDestinationPointOverrideU3Ek__BackingField_7)); }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  get_U3CDestinationPointOverrideU3Ek__BackingField_7() const { return ___U3CDestinationPointOverrideU3Ek__BackingField_7; }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * get_address_of_U3CDestinationPointOverrideU3Ek__BackingField_7() { return &___U3CDestinationPointOverrideU3Ek__BackingField_7; }
	inline void set_U3CDestinationPointOverrideU3Ek__BackingField_7(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  value)
	{
		___U3CDestinationPointOverrideU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_ResultsChanged_8() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___ResultsChanged_8)); }
	inline UnityEvent_t3D826B72475B9F609EDEA4292C163D05376FAE52 * get_ResultsChanged_8() const { return ___ResultsChanged_8; }
	inline UnityEvent_t3D826B72475B9F609EDEA4292C163D05376FAE52 ** get_address_of_ResultsChanged_8() { return &___ResultsChanged_8; }
	inline void set_ResultsChanged_8(UnityEvent_t3D826B72475B9F609EDEA4292C163D05376FAE52 * value)
	{
		___ResultsChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultsChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetHitU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___U3CTargetHitU3Ek__BackingField_9)); }
	inline Nullable_1_t6224B732028631256932FA4C4176E10D171EFE29  get_U3CTargetHitU3Ek__BackingField_9() const { return ___U3CTargetHitU3Ek__BackingField_9; }
	inline Nullable_1_t6224B732028631256932FA4C4176E10D171EFE29 * get_address_of_U3CTargetHitU3Ek__BackingField_9() { return &___U3CTargetHitU3Ek__BackingField_9; }
	inline void set_U3CTargetHitU3Ek__BackingField_9(Nullable_1_t6224B732028631256932FA4C4176E10D171EFE29  value)
	{
		___U3CTargetHitU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetHitValidU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___U3CIsTargetHitValidU3Ek__BackingField_10)); }
	inline bool get_U3CIsTargetHitValidU3Ek__BackingField_10() const { return ___U3CIsTargetHitValidU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsTargetHitValidU3Ek__BackingField_10() { return &___U3CIsTargetHitValidU3Ek__BackingField_10; }
	inline void set_U3CIsTargetHitValidU3Ek__BackingField_10(bool value)
	{
		___U3CIsTargetHitValidU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_points_11() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___points_11)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_points_11() const { return ___points_11; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_points_11() { return &___points_11; }
	inline void set_points_11(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___points_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_11), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_12() { return static_cast<int32_t>(offsetof(PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE, ___eventData_12)); }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * get_eventData_12() const { return ___eventData_12; }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 ** get_address_of_eventData_12() { return &___eventData_12; }
	inline void set_eventData_12(EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * value)
	{
		___eventData_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_12), (void*)value);
	}
};


// Zinnia.Data.Collection.List.ObservableList
struct  ObservableList_t3060897B749327B97D63A754859790CF3E553B0D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Zinnia.Data.Operation.Extraction.GameObjectExtractor
struct  GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Zinnia.Data.Operation.Extraction.GameObjectExtractor_UnityEvent Zinnia.Data.Operation.Extraction.GameObjectExtractor::Extracted
	UnityEvent_t27E37BBA1CE3BAFA5B3DE4238B07E92EDFFEA263 * ___Extracted_4;
	// UnityEngine.GameObject Zinnia.Data.Operation.Extraction.GameObjectExtractor::<Result>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_Extracted_4() { return static_cast<int32_t>(offsetof(GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95, ___Extracted_4)); }
	inline UnityEvent_t27E37BBA1CE3BAFA5B3DE4238B07E92EDFFEA263 * get_Extracted_4() const { return ___Extracted_4; }
	inline UnityEvent_t27E37BBA1CE3BAFA5B3DE4238B07E92EDFFEA263 ** get_address_of_Extracted_4() { return &___Extracted_4; }
	inline void set_Extracted_4(UnityEvent_t27E37BBA1CE3BAFA5B3DE4238B07E92EDFFEA263 * value)
	{
		___Extracted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extracted_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95, ___U3CResultU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_5), (void*)value);
	}
};


// Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2<UnityEngine.Vector3,System.Object>
struct  TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::source
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___source_4;
	// System.Boolean Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::useLocal
	bool ___useLocal_5;
	// TElement Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::<LastExtractedValue>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CLastExtractedValueU3Ek__BackingField_6;
	// TEvent Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::Extracted
	RuntimeObject * ___Extracted_7;

public:
	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB, ___source_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_source_4() const { return ___source_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_4), (void*)value);
	}

	inline static int32_t get_offset_of_useLocal_5() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB, ___useLocal_5)); }
	inline bool get_useLocal_5() const { return ___useLocal_5; }
	inline bool* get_address_of_useLocal_5() { return &___useLocal_5; }
	inline void set_useLocal_5(bool value)
	{
		___useLocal_5 = value;
	}

	inline static int32_t get_offset_of_U3CLastExtractedValueU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB, ___U3CLastExtractedValueU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CLastExtractedValueU3Ek__BackingField_6() const { return ___U3CLastExtractedValueU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CLastExtractedValueU3Ek__BackingField_6() { return &___U3CLastExtractedValueU3Ek__BackingField_6; }
	inline void set_U3CLastExtractedValueU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CLastExtractedValueU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_Extracted_7() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB, ___Extracted_7)); }
	inline RuntimeObject * get_Extracted_7() const { return ___Extracted_7; }
	inline RuntimeObject ** get_address_of_Extracted_7() { return &___Extracted_7; }
	inline void set_Extracted_7(RuntimeObject * value)
	{
		___Extracted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extracted_7), (void*)value);
	}
};


// Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2<UnityEngine.Vector3,Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor_UnityEvent>
struct  TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::source
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___source_4;
	// System.Boolean Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::useLocal
	bool ___useLocal_5;
	// TElement Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::<LastExtractedValue>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CLastExtractedValueU3Ek__BackingField_6;
	// TEvent Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2::Extracted
	UnityEvent_t7C3BD5B0B186DFB145AD6406E87752B5BA828C19 * ___Extracted_7;

public:
	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3, ___source_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_source_4() const { return ___source_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_4), (void*)value);
	}

	inline static int32_t get_offset_of_useLocal_5() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3, ___useLocal_5)); }
	inline bool get_useLocal_5() const { return ___useLocal_5; }
	inline bool* get_address_of_useLocal_5() { return &___useLocal_5; }
	inline void set_useLocal_5(bool value)
	{
		___useLocal_5 = value;
	}

	inline static int32_t get_offset_of_U3CLastExtractedValueU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3, ___U3CLastExtractedValueU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CLastExtractedValueU3Ek__BackingField_6() const { return ___U3CLastExtractedValueU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CLastExtractedValueU3Ek__BackingField_6() { return &___U3CLastExtractedValueU3Ek__BackingField_6; }
	inline void set_U3CLastExtractedValueU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CLastExtractedValueU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_Extracted_7() { return static_cast<int32_t>(offsetof(TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3, ___Extracted_7)); }
	inline UnityEvent_t7C3BD5B0B186DFB145AD6406E87752B5BA828C19 * get_Extracted_7() const { return ___Extracted_7; }
	inline UnityEvent_t7C3BD5B0B186DFB145AD6406E87752B5BA828C19 ** get_address_of_Extracted_7() { return &___Extracted_7; }
	inline void set_Extracted_7(UnityEvent_t7C3BD5B0B186DFB145AD6406E87752B5BA828C19 * value)
	{
		___Extracted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extracted_7), (void*)value);
	}
};


// Zinnia.Data.Operation.Mutation.TransformPropertyMutator
struct  TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Zinnia.Data.Operation.Mutation.TransformPropertyMutator::target
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target_4;
	// System.Boolean Zinnia.Data.Operation.Mutation.TransformPropertyMutator::useLocalValues
	bool ___useLocalValues_5;
	// Zinnia.Data.Type.Vector3State Zinnia.Data.Operation.Mutation.TransformPropertyMutator::mutateOnAxis
	Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  ___mutateOnAxis_6;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB, ___target_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_target_4() const { return ___target_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_useLocalValues_5() { return static_cast<int32_t>(offsetof(TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB, ___useLocalValues_5)); }
	inline bool get_useLocalValues_5() const { return ___useLocalValues_5; }
	inline bool* get_address_of_useLocalValues_5() { return &___useLocalValues_5; }
	inline void set_useLocalValues_5(bool value)
	{
		___useLocalValues_5 = value;
	}

	inline static int32_t get_offset_of_mutateOnAxis_6() { return static_cast<int32_t>(offsetof(TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB, ___mutateOnAxis_6)); }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  get_mutateOnAxis_6() const { return ___mutateOnAxis_6; }
	inline Vector3State_t11D632DA9081540258082D5C44600D44832CFE25 * get_address_of_mutateOnAxis_6() { return &___mutateOnAxis_6; }
	inline void set_mutateOnAxis_6(Vector3State_t11D632DA9081540258082D5C44600D44832CFE25  value)
	{
		___mutateOnAxis_6 = value;
	}
};


// Zinnia.Pointer.ObjectPointer
struct  ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::origin
	PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ___origin_4;
	// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::repeatedSegment
	PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ___repeatedSegment_5;
	// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::destination
	PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ___destination_6;
	// System.Boolean Zinnia.Pointer.ObjectPointer::enableDestinationOnNoCollision
	bool ___enableDestinationOnNoCollision_7;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Activated
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Activated_8;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Deactivated
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Deactivated_9;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Entered
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Entered_10;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Exited
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Exited_11;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Hovering
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Hovering_12;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Selected
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Selected_13;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Appeared
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Appeared_14;
	// Zinnia.Pointer.ObjectPointer_UnityEvent Zinnia.Pointer.ObjectPointer::Disappeared
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * ___Disappeared_15;
	// Zinnia.Pointer.ObjectPointer_PointsRendererUnityEvent Zinnia.Pointer.ObjectPointer::RenderDataChanged
	PointsRendererUnityEvent_t5EC479DE7D41BD1C9316B855E4D21E3FB49A1CDD * ___RenderDataChanged_16;
	// System.Boolean Zinnia.Pointer.ObjectPointer::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_17;
	// System.Boolean Zinnia.Pointer.ObjectPointer::<IsHovering>k__BackingField
	bool ___U3CIsHoveringU3Ek__BackingField_18;
	// System.Single Zinnia.Pointer.ObjectPointer::<HoverDuration>k__BackingField
	float ___U3CHoverDurationU3Ek__BackingField_19;
	// Zinnia.Pointer.ObjectPointer_EventData Zinnia.Pointer.ObjectPointer::<SelectedTarget>k__BackingField
	EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___U3CSelectedTargetU3Ek__BackingField_20;
	// Zinnia.Cast.PointsCast_EventData Zinnia.Pointer.ObjectPointer::activePointsCastData
	EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * ___activePointsCastData_21;
	// Zinnia.Cast.PointsCast_EventData Zinnia.Pointer.ObjectPointer::previousPointsCastData
	EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * ___previousPointsCastData_22;
	// System.Nullable`1<System.Boolean> Zinnia.Pointer.ObjectPointer::wasPreviouslyVisible
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___wasPreviouslyVisible_23;
	// Zinnia.Pointer.ObjectPointer_EventData Zinnia.Pointer.ObjectPointer::eventData
	EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___eventData_24;
	// Zinnia.Visual.PointsRenderer_PointsData Zinnia.Pointer.ObjectPointer::pointsData
	PointsData_t8CBC1D7768AC953728F3FE47C6BE9A4547C04C1A * ___pointsData_25;

public:
	inline static int32_t get_offset_of_origin_4() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___origin_4)); }
	inline PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * get_origin_4() const { return ___origin_4; }
	inline PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE ** get_address_of_origin_4() { return &___origin_4; }
	inline void set_origin_4(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * value)
	{
		___origin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origin_4), (void*)value);
	}

	inline static int32_t get_offset_of_repeatedSegment_5() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___repeatedSegment_5)); }
	inline PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * get_repeatedSegment_5() const { return ___repeatedSegment_5; }
	inline PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE ** get_address_of_repeatedSegment_5() { return &___repeatedSegment_5; }
	inline void set_repeatedSegment_5(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * value)
	{
		___repeatedSegment_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___repeatedSegment_5), (void*)value);
	}

	inline static int32_t get_offset_of_destination_6() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___destination_6)); }
	inline PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * get_destination_6() const { return ___destination_6; }
	inline PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE ** get_address_of_destination_6() { return &___destination_6; }
	inline void set_destination_6(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * value)
	{
		___destination_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destination_6), (void*)value);
	}

	inline static int32_t get_offset_of_enableDestinationOnNoCollision_7() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___enableDestinationOnNoCollision_7)); }
	inline bool get_enableDestinationOnNoCollision_7() const { return ___enableDestinationOnNoCollision_7; }
	inline bool* get_address_of_enableDestinationOnNoCollision_7() { return &___enableDestinationOnNoCollision_7; }
	inline void set_enableDestinationOnNoCollision_7(bool value)
	{
		___enableDestinationOnNoCollision_7 = value;
	}

	inline static int32_t get_offset_of_Activated_8() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Activated_8)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Activated_8() const { return ___Activated_8; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Activated_8() { return &___Activated_8; }
	inline void set_Activated_8(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Activated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Activated_8), (void*)value);
	}

	inline static int32_t get_offset_of_Deactivated_9() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Deactivated_9)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Deactivated_9() const { return ___Deactivated_9; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Deactivated_9() { return &___Deactivated_9; }
	inline void set_Deactivated_9(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Deactivated_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deactivated_9), (void*)value);
	}

	inline static int32_t get_offset_of_Entered_10() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Entered_10)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Entered_10() const { return ___Entered_10; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Entered_10() { return &___Entered_10; }
	inline void set_Entered_10(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Entered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entered_10), (void*)value);
	}

	inline static int32_t get_offset_of_Exited_11() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Exited_11)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Exited_11() const { return ___Exited_11; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Exited_11() { return &___Exited_11; }
	inline void set_Exited_11(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Exited_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exited_11), (void*)value);
	}

	inline static int32_t get_offset_of_Hovering_12() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Hovering_12)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Hovering_12() const { return ___Hovering_12; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Hovering_12() { return &___Hovering_12; }
	inline void set_Hovering_12(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Hovering_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hovering_12), (void*)value);
	}

	inline static int32_t get_offset_of_Selected_13() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Selected_13)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Selected_13() const { return ___Selected_13; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Selected_13() { return &___Selected_13; }
	inline void set_Selected_13(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Selected_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Selected_13), (void*)value);
	}

	inline static int32_t get_offset_of_Appeared_14() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Appeared_14)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Appeared_14() const { return ___Appeared_14; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Appeared_14() { return &___Appeared_14; }
	inline void set_Appeared_14(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Appeared_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Appeared_14), (void*)value);
	}

	inline static int32_t get_offset_of_Disappeared_15() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___Disappeared_15)); }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * get_Disappeared_15() const { return ___Disappeared_15; }
	inline UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 ** get_address_of_Disappeared_15() { return &___Disappeared_15; }
	inline void set_Disappeared_15(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * value)
	{
		___Disappeared_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Disappeared_15), (void*)value);
	}

	inline static int32_t get_offset_of_RenderDataChanged_16() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___RenderDataChanged_16)); }
	inline PointsRendererUnityEvent_t5EC479DE7D41BD1C9316B855E4D21E3FB49A1CDD * get_RenderDataChanged_16() const { return ___RenderDataChanged_16; }
	inline PointsRendererUnityEvent_t5EC479DE7D41BD1C9316B855E4D21E3FB49A1CDD ** get_address_of_RenderDataChanged_16() { return &___RenderDataChanged_16; }
	inline void set_RenderDataChanged_16(PointsRendererUnityEvent_t5EC479DE7D41BD1C9316B855E4D21E3FB49A1CDD * value)
	{
		___RenderDataChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderDataChanged_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsActivatedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___U3CIsActivatedU3Ek__BackingField_17)); }
	inline bool get_U3CIsActivatedU3Ek__BackingField_17() const { return ___U3CIsActivatedU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsActivatedU3Ek__BackingField_17() { return &___U3CIsActivatedU3Ek__BackingField_17; }
	inline void set_U3CIsActivatedU3Ek__BackingField_17(bool value)
	{
		___U3CIsActivatedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsHoveringU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___U3CIsHoveringU3Ek__BackingField_18)); }
	inline bool get_U3CIsHoveringU3Ek__BackingField_18() const { return ___U3CIsHoveringU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CIsHoveringU3Ek__BackingField_18() { return &___U3CIsHoveringU3Ek__BackingField_18; }
	inline void set_U3CIsHoveringU3Ek__BackingField_18(bool value)
	{
		___U3CIsHoveringU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CHoverDurationU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___U3CHoverDurationU3Ek__BackingField_19)); }
	inline float get_U3CHoverDurationU3Ek__BackingField_19() const { return ___U3CHoverDurationU3Ek__BackingField_19; }
	inline float* get_address_of_U3CHoverDurationU3Ek__BackingField_19() { return &___U3CHoverDurationU3Ek__BackingField_19; }
	inline void set_U3CHoverDurationU3Ek__BackingField_19(float value)
	{
		___U3CHoverDurationU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CSelectedTargetU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___U3CSelectedTargetU3Ek__BackingField_20)); }
	inline EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * get_U3CSelectedTargetU3Ek__BackingField_20() const { return ___U3CSelectedTargetU3Ek__BackingField_20; }
	inline EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 ** get_address_of_U3CSelectedTargetU3Ek__BackingField_20() { return &___U3CSelectedTargetU3Ek__BackingField_20; }
	inline void set_U3CSelectedTargetU3Ek__BackingField_20(EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * value)
	{
		___U3CSelectedTargetU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSelectedTargetU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_activePointsCastData_21() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___activePointsCastData_21)); }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * get_activePointsCastData_21() const { return ___activePointsCastData_21; }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 ** get_address_of_activePointsCastData_21() { return &___activePointsCastData_21; }
	inline void set_activePointsCastData_21(EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * value)
	{
		___activePointsCastData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointsCastData_21), (void*)value);
	}

	inline static int32_t get_offset_of_previousPointsCastData_22() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___previousPointsCastData_22)); }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * get_previousPointsCastData_22() const { return ___previousPointsCastData_22; }
	inline EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 ** get_address_of_previousPointsCastData_22() { return &___previousPointsCastData_22; }
	inline void set_previousPointsCastData_22(EventData_tB794FF3E05A3A9B6D79E59A367663F3369AA1BD0 * value)
	{
		___previousPointsCastData_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousPointsCastData_22), (void*)value);
	}

	inline static int32_t get_offset_of_wasPreviouslyVisible_23() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___wasPreviouslyVisible_23)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_wasPreviouslyVisible_23() const { return ___wasPreviouslyVisible_23; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_wasPreviouslyVisible_23() { return &___wasPreviouslyVisible_23; }
	inline void set_wasPreviouslyVisible_23(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___wasPreviouslyVisible_23 = value;
	}

	inline static int32_t get_offset_of_eventData_24() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___eventData_24)); }
	inline EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * get_eventData_24() const { return ___eventData_24; }
	inline EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 ** get_address_of_eventData_24() { return &___eventData_24; }
	inline void set_eventData_24(EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * value)
	{
		___eventData_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_24), (void*)value);
	}

	inline static int32_t get_offset_of_pointsData_25() { return static_cast<int32_t>(offsetof(ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5, ___pointsData_25)); }
	inline PointsData_t8CBC1D7768AC953728F3FE47C6BE9A4547C04C1A * get_pointsData_25() const { return ___pointsData_25; }
	inline PointsData_t8CBC1D7768AC953728F3FE47C6BE9A4547C04C1A ** get_address_of_pointsData_25() { return &___pointsData_25; }
	inline void set_pointsData_25(PointsData_t8CBC1D7768AC953728F3FE47C6BE9A4547C04C1A * value)
	{
		___pointsData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointsData_25), (void*)value);
	}
};


// Zinnia.Pointer.PointerElement
struct  PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::validElementContainer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___validElementContainer_4;
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::validMeshContainer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___validMeshContainer_5;
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::invalidElementContainer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___invalidElementContainer_6;
	// UnityEngine.GameObject Zinnia.Pointer.PointerElement::invalidMeshContainer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___invalidMeshContainer_7;
	// Zinnia.Pointer.PointerElement_Visibility Zinnia.Pointer.PointerElement::elementVisibility
	int32_t ___elementVisibility_8;
	// UnityEngine.Events.UnityEvent Zinnia.Pointer.PointerElement::VisibilityChanged
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___VisibilityChanged_9;
	// System.Boolean Zinnia.Pointer.PointerElement::<IsVisible>k__BackingField
	bool ___U3CIsVisibleU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_validElementContainer_4() { return static_cast<int32_t>(offsetof(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE, ___validElementContainer_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_validElementContainer_4() const { return ___validElementContainer_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_validElementContainer_4() { return &___validElementContainer_4; }
	inline void set_validElementContainer_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___validElementContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validElementContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of_validMeshContainer_5() { return static_cast<int32_t>(offsetof(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE, ___validMeshContainer_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_validMeshContainer_5() const { return ___validMeshContainer_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_validMeshContainer_5() { return &___validMeshContainer_5; }
	inline void set_validMeshContainer_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___validMeshContainer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validMeshContainer_5), (void*)value);
	}

	inline static int32_t get_offset_of_invalidElementContainer_6() { return static_cast<int32_t>(offsetof(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE, ___invalidElementContainer_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_invalidElementContainer_6() const { return ___invalidElementContainer_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_invalidElementContainer_6() { return &___invalidElementContainer_6; }
	inline void set_invalidElementContainer_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___invalidElementContainer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidElementContainer_6), (void*)value);
	}

	inline static int32_t get_offset_of_invalidMeshContainer_7() { return static_cast<int32_t>(offsetof(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE, ___invalidMeshContainer_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_invalidMeshContainer_7() const { return ___invalidMeshContainer_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_invalidMeshContainer_7() { return &___invalidMeshContainer_7; }
	inline void set_invalidMeshContainer_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___invalidMeshContainer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidMeshContainer_7), (void*)value);
	}

	inline static int32_t get_offset_of_elementVisibility_8() { return static_cast<int32_t>(offsetof(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE, ___elementVisibility_8)); }
	inline int32_t get_elementVisibility_8() const { return ___elementVisibility_8; }
	inline int32_t* get_address_of_elementVisibility_8() { return &___elementVisibility_8; }
	inline void set_elementVisibility_8(int32_t value)
	{
		___elementVisibility_8 = value;
	}

	inline static int32_t get_offset_of_VisibilityChanged_9() { return static_cast<int32_t>(offsetof(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE, ___VisibilityChanged_9)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_VisibilityChanged_9() const { return ___VisibilityChanged_9; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_VisibilityChanged_9() { return &___VisibilityChanged_9; }
	inline void set_VisibilityChanged_9(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___VisibilityChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VisibilityChanged_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsVisibleU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE, ___U3CIsVisibleU3Ek__BackingField_10)); }
	inline bool get_U3CIsVisibleU3Ek__BackingField_10() const { return ___U3CIsVisibleU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsVisibleU3Ek__BackingField_10() { return &___U3CIsVisibleU3Ek__BackingField_10; }
	inline void set_U3CIsVisibleU3Ek__BackingField_10(bool value)
	{
		___U3CIsVisibleU3Ek__BackingField_10 = value;
	}
};


// Zinnia.Process.Component.SourceTargetProcessor`2<UnityEngine.GameObject,UnityEngine.GameObject>
struct  SourceTargetProcessor_2_t979E6B62207AE03DEBE6A250C9286087874D022E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Zinnia.Process.Component.SourceTargetProcessor`2::ceaseAfterFirstSourceProcessed
	bool ___ceaseAfterFirstSourceProcessed_4;
	// TSource Zinnia.Process.Component.SourceTargetProcessor`2::<ActiveSource>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CActiveSourceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_ceaseAfterFirstSourceProcessed_4() { return static_cast<int32_t>(offsetof(SourceTargetProcessor_2_t979E6B62207AE03DEBE6A250C9286087874D022E, ___ceaseAfterFirstSourceProcessed_4)); }
	inline bool get_ceaseAfterFirstSourceProcessed_4() const { return ___ceaseAfterFirstSourceProcessed_4; }
	inline bool* get_address_of_ceaseAfterFirstSourceProcessed_4() { return &___ceaseAfterFirstSourceProcessed_4; }
	inline void set_ceaseAfterFirstSourceProcessed_4(bool value)
	{
		___ceaseAfterFirstSourceProcessed_4 = value;
	}

	inline static int32_t get_offset_of_U3CActiveSourceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceTargetProcessor_2_t979E6B62207AE03DEBE6A250C9286087874D022E, ___U3CActiveSourceU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CActiveSourceU3Ek__BackingField_5() const { return ___U3CActiveSourceU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CActiveSourceU3Ek__BackingField_5() { return &___U3CActiveSourceU3Ek__BackingField_5; }
	inline void set_U3CActiveSourceU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CActiveSourceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveSourceU3Ek__BackingField_5), (void*)value);
	}
};


// Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor
struct  PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor_Vector3UnityEvent Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor::Extracted
	Vector3UnityEvent_t1DA42BDB14484CFC81631D1C97AD906099DFBEE4 * ___Extracted_4;
	// UnityEngine.Events.UnityEvent Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor::Failed
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___Failed_5;
	// UnityEngine.Vector3 Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor::<Result>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_Extracted_4() { return static_cast<int32_t>(offsetof(PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686, ___Extracted_4)); }
	inline Vector3UnityEvent_t1DA42BDB14484CFC81631D1C97AD906099DFBEE4 * get_Extracted_4() const { return ___Extracted_4; }
	inline Vector3UnityEvent_t1DA42BDB14484CFC81631D1C97AD906099DFBEE4 ** get_address_of_Extracted_4() { return &___Extracted_4; }
	inline void set_Extracted_4(Vector3UnityEvent_t1DA42BDB14484CFC81631D1C97AD906099DFBEE4 * value)
	{
		___Extracted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extracted_4), (void*)value);
	}

	inline static int32_t get_offset_of_Failed_5() { return static_cast<int32_t>(offsetof(PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686, ___Failed_5)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_Failed_5() const { return ___Failed_5; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_Failed_5() { return &___Failed_5; }
	inline void set_Failed_5(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___Failed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Failed_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686, ___U3CResultU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
	}
};


// VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor
struct  PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1  : public GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95
{
public:
	// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::source
	PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___source_6;
	// VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor_PointerComponentType VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::pointerComponent
	int32_t ___pointerComponent_7;

public:
	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1, ___source_6)); }
	inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * get_source_6() const { return ___source_6; }
	inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 ** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_6), (void*)value);
	}

	inline static int32_t get_offset_of_pointerComponent_7() { return static_cast<int32_t>(offsetof(PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1, ___pointerComponent_7)); }
	inline int32_t get_pointerComponent_7() const { return ___pointerComponent_7; }
	inline int32_t* get_address_of_pointerComponent_7() { return &___pointerComponent_7; }
	inline void set_pointerComponent_7(int32_t value)
	{
		___pointerComponent_7 = value;
	}
};


// VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor
struct  PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A  : public GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95
{
public:
	// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::source
	PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___source_6;

public:
	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A, ___source_6)); }
	inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * get_source_6() const { return ___source_6; }
	inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 ** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_6), (void*)value);
	}
};


// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction_UnityEvent>
struct  Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885  : public Action_t8C419D196314F8CECE4D4CB1F9BCC26552B54C4A
{
public:
	// TValue Zinnia.Action.Action`3::defaultValue
	bool ___defaultValue_6;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_tFFCF95B0E466631C358E7A86E9B8467172240E61 * ___sources_7;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * ___Activated_8;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * ___ValueChanged_9;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * ___ValueUnchanged_10;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * ___Deactivated_11;
	// TValue Zinnia.Action.Action`3::<Value>k__BackingField
	bool ___U3CValueU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_defaultValue_6() { return static_cast<int32_t>(offsetof(Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885, ___defaultValue_6)); }
	inline bool get_defaultValue_6() const { return ___defaultValue_6; }
	inline bool* get_address_of_defaultValue_6() { return &___defaultValue_6; }
	inline void set_defaultValue_6(bool value)
	{
		___defaultValue_6 = value;
	}

	inline static int32_t get_offset_of_sources_7() { return static_cast<int32_t>(offsetof(Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885, ___sources_7)); }
	inline List_1_tFFCF95B0E466631C358E7A86E9B8467172240E61 * get_sources_7() const { return ___sources_7; }
	inline List_1_tFFCF95B0E466631C358E7A86E9B8467172240E61 ** get_address_of_sources_7() { return &___sources_7; }
	inline void set_sources_7(List_1_tFFCF95B0E466631C358E7A86E9B8467172240E61 * value)
	{
		___sources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_7), (void*)value);
	}

	inline static int32_t get_offset_of_Activated_8() { return static_cast<int32_t>(offsetof(Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885, ___Activated_8)); }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * get_Activated_8() const { return ___Activated_8; }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 ** get_address_of_Activated_8() { return &___Activated_8; }
	inline void set_Activated_8(UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * value)
	{
		___Activated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Activated_8), (void*)value);
	}

	inline static int32_t get_offset_of_ValueChanged_9() { return static_cast<int32_t>(offsetof(Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885, ___ValueChanged_9)); }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * get_ValueChanged_9() const { return ___ValueChanged_9; }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 ** get_address_of_ValueChanged_9() { return &___ValueChanged_9; }
	inline void set_ValueChanged_9(UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * value)
	{
		___ValueChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueChanged_9), (void*)value);
	}

	inline static int32_t get_offset_of_ValueUnchanged_10() { return static_cast<int32_t>(offsetof(Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885, ___ValueUnchanged_10)); }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * get_ValueUnchanged_10() const { return ___ValueUnchanged_10; }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 ** get_address_of_ValueUnchanged_10() { return &___ValueUnchanged_10; }
	inline void set_ValueUnchanged_10(UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * value)
	{
		___ValueUnchanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueUnchanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_Deactivated_11() { return static_cast<int32_t>(offsetof(Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885, ___Deactivated_11)); }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * get_Deactivated_11() const { return ___Deactivated_11; }
	inline UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 ** get_address_of_Deactivated_11() { return &___Deactivated_11; }
	inline void set_Deactivated_11(UnityEvent_t7D68508028A81491A7ABE4E45EBB6045DF1FE771 * value)
	{
		___Deactivated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deactivated_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885, ___U3CValueU3Ek__BackingField_12)); }
	inline bool get_U3CValueU3Ek__BackingField_12() const { return ___U3CValueU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CValueU3Ek__BackingField_12() { return &___U3CValueU3Ek__BackingField_12; }
	inline void set_U3CValueU3Ek__BackingField_12(bool value)
	{
		___U3CValueU3Ek__BackingField_12 = value;
	}
};


// Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList_UnityEvent>
struct  ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7  : public ObservableList_t3060897B749327B97D63A754859790CF3E553B0D
{
public:
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Found
	UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * ___Found_4;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::NotFound
	UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * ___NotFound_5;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Collection.List.ObservableList`2::IsEmpty
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___IsEmpty_6;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Collection.List.ObservableList`2::IsPopulated
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___IsPopulated_7;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Populated
	UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * ___Populated_8;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Added
	UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * ___Added_9;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Removed
	UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * ___Removed_10;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Emptied
	UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * ___Emptied_11;
	// System.Int32 Zinnia.Data.Collection.List.ObservableList`2::currentIndex
	int32_t ___currentIndex_12;
	// System.Boolean Zinnia.Data.Collection.List.ObservableList`2::wasStartCalled
	bool ___wasStartCalled_13;

public:
	inline static int32_t get_offset_of_Found_4() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___Found_4)); }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * get_Found_4() const { return ___Found_4; }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD ** get_address_of_Found_4() { return &___Found_4; }
	inline void set_Found_4(UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * value)
	{
		___Found_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Found_4), (void*)value);
	}

	inline static int32_t get_offset_of_NotFound_5() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___NotFound_5)); }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * get_NotFound_5() const { return ___NotFound_5; }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD ** get_address_of_NotFound_5() { return &___NotFound_5; }
	inline void set_NotFound_5(UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * value)
	{
		___NotFound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NotFound_5), (void*)value);
	}

	inline static int32_t get_offset_of_IsEmpty_6() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___IsEmpty_6)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_IsEmpty_6() const { return ___IsEmpty_6; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_IsEmpty_6() { return &___IsEmpty_6; }
	inline void set_IsEmpty_6(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___IsEmpty_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsEmpty_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsPopulated_7() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___IsPopulated_7)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_IsPopulated_7() const { return ___IsPopulated_7; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_IsPopulated_7() { return &___IsPopulated_7; }
	inline void set_IsPopulated_7(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___IsPopulated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsPopulated_7), (void*)value);
	}

	inline static int32_t get_offset_of_Populated_8() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___Populated_8)); }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * get_Populated_8() const { return ___Populated_8; }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD ** get_address_of_Populated_8() { return &___Populated_8; }
	inline void set_Populated_8(UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * value)
	{
		___Populated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Populated_8), (void*)value);
	}

	inline static int32_t get_offset_of_Added_9() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___Added_9)); }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * get_Added_9() const { return ___Added_9; }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD ** get_address_of_Added_9() { return &___Added_9; }
	inline void set_Added_9(UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * value)
	{
		___Added_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Added_9), (void*)value);
	}

	inline static int32_t get_offset_of_Removed_10() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___Removed_10)); }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * get_Removed_10() const { return ___Removed_10; }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD ** get_address_of_Removed_10() { return &___Removed_10; }
	inline void set_Removed_10(UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * value)
	{
		___Removed_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Removed_10), (void*)value);
	}

	inline static int32_t get_offset_of_Emptied_11() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___Emptied_11)); }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * get_Emptied_11() const { return ___Emptied_11; }
	inline UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD ** get_address_of_Emptied_11() { return &___Emptied_11; }
	inline void set_Emptied_11(UnityEvent_t65C8097F5DC5154BB562993F29D0B8E0622C07AD * value)
	{
		___Emptied_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Emptied_11), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_12() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___currentIndex_12)); }
	inline int32_t get_currentIndex_12() const { return ___currentIndex_12; }
	inline int32_t* get_address_of_currentIndex_12() { return &___currentIndex_12; }
	inline void set_currentIndex_12(int32_t value)
	{
		___currentIndex_12 = value;
	}

	inline static int32_t get_offset_of_wasStartCalled_13() { return static_cast<int32_t>(offsetof(ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7, ___wasStartCalled_13)); }
	inline bool get_wasStartCalled_13() const { return ___wasStartCalled_13; }
	inline bool* get_address_of_wasStartCalled_13() { return &___wasStartCalled_13; }
	inline void set_wasStartCalled_13(bool value)
	{
		___wasStartCalled_13 = value;
	}
};


// Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor
struct  TransformVector3PropertyExtractor_t2550929AA557DF32981BDB19594D2DB77A819C29  : public TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3
{
public:

public:
};


// Zinnia.Data.Operation.Mutation.TransformPositionMutator
struct  TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3  : public TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB
{
public:
	// UnityEngine.GameObject Zinnia.Data.Operation.Mutation.TransformPositionMutator::facingDirection
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___facingDirection_7;

public:
	inline static int32_t get_offset_of_facingDirection_7() { return static_cast<int32_t>(offsetof(TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3, ___facingDirection_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_facingDirection_7() const { return ___facingDirection_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_facingDirection_7() { return &___facingDirection_7; }
	inline void set_facingDirection_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___facingDirection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facingDirection_7), (void*)value);
	}
};


// Zinnia.Data.Operation.Mutation.TransformScaleMutator
struct  TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26  : public TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB
{
public:

public:
};


// Zinnia.Process.Component.GameObjectSourceTargetProcessor
struct  GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2  : public SourceTargetProcessor_2_t979E6B62207AE03DEBE6A250C9286087874D022E
{
public:
	// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Process.Component.GameObjectSourceTargetProcessor::sources
	GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * ___sources_6;
	// Zinnia.Rule.RuleContainer Zinnia.Process.Component.GameObjectSourceTargetProcessor::sourceValidity
	RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___sourceValidity_7;
	// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Process.Component.GameObjectSourceTargetProcessor::targets
	GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * ___targets_8;
	// Zinnia.Rule.RuleContainer Zinnia.Process.Component.GameObjectSourceTargetProcessor::targetValidity
	RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___targetValidity_9;

public:
	inline static int32_t get_offset_of_sources_6() { return static_cast<int32_t>(offsetof(GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2, ___sources_6)); }
	inline GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * get_sources_6() const { return ___sources_6; }
	inline GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 ** get_address_of_sources_6() { return &___sources_6; }
	inline void set_sources_6(GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * value)
	{
		___sources_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_6), (void*)value);
	}

	inline static int32_t get_offset_of_sourceValidity_7() { return static_cast<int32_t>(offsetof(GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2, ___sourceValidity_7)); }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * get_sourceValidity_7() const { return ___sourceValidity_7; }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 ** get_address_of_sourceValidity_7() { return &___sourceValidity_7; }
	inline void set_sourceValidity_7(RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * value)
	{
		___sourceValidity_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceValidity_7), (void*)value);
	}

	inline static int32_t get_offset_of_targets_8() { return static_cast<int32_t>(offsetof(GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2, ___targets_8)); }
	inline GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * get_targets_8() const { return ___targets_8; }
	inline GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 ** get_address_of_targets_8() { return &___targets_8; }
	inline void set_targets_8(GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * value)
	{
		___targets_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_8), (void*)value);
	}

	inline static int32_t get_offset_of_targetValidity_9() { return static_cast<int32_t>(offsetof(GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2, ___targetValidity_9)); }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * get_targetValidity_9() const { return ___targetValidity_9; }
	inline RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 ** get_address_of_targetValidity_9() { return &___targetValidity_9; }
	inline void set_targetValidity_9(RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * value)
	{
		___targetValidity_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetValidity_9), (void*)value);
	}
};


// Zinnia.Action.BooleanAction
struct  BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869  : public Action_3_t6B98C643DE344D4067C55C7489D0404BE2D35885
{
public:

public:
};


// Zinnia.Data.Collection.List.DefaultObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList_UnityEvent>
struct  DefaultObservableList_2_t968AEFD64D5C28531023BD7ED603E8102022C841  : public ObservableList_2_t1087B66593BC54D962BE91BF1671CF8C142EDAD7
{
public:
	// System.Collections.Generic.List`1<TElement> Zinnia.Data.Collection.List.DefaultObservableList`2::elements
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___elements_14;

public:
	inline static int32_t get_offset_of_elements_14() { return static_cast<int32_t>(offsetof(DefaultObservableList_2_t968AEFD64D5C28531023BD7ED603E8102022C841, ___elements_14)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_elements_14() const { return ___elements_14; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_elements_14() { return &___elements_14; }
	inline void set_elements_14(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___elements_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_14), (void*)value);
	}
};


// Zinnia.Data.Operation.Extraction.TransformPositionExtractor
struct  TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B  : public TransformVector3PropertyExtractor_t2550929AA557DF32981BDB19594D2DB77A819C29
{
public:

public:
};


// Zinnia.Tracking.Follow.ObjectFollower
struct  ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A  : public GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2
{
public:
	// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Tracking.Follow.ObjectFollower::targetOffsets
	GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * ___targetOffsets_10;
	// Zinnia.Tracking.Follow.Modifier.FollowModifier Zinnia.Tracking.Follow.ObjectFollower::followModifier
	FollowModifier_tCD8CDE0E56FC90432A78B66E54411D0CCAEE0AC8 * ___followModifier_11;
	// UnityEngine.Events.UnityEvent Zinnia.Tracking.Follow.ObjectFollower::Preprocessed
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___Preprocessed_12;
	// UnityEngine.Events.UnityEvent Zinnia.Tracking.Follow.ObjectFollower::Processed
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___Processed_13;

public:
	inline static int32_t get_offset_of_targetOffsets_10() { return static_cast<int32_t>(offsetof(ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A, ___targetOffsets_10)); }
	inline GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * get_targetOffsets_10() const { return ___targetOffsets_10; }
	inline GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 ** get_address_of_targetOffsets_10() { return &___targetOffsets_10; }
	inline void set_targetOffsets_10(GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * value)
	{
		___targetOffsets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetOffsets_10), (void*)value);
	}

	inline static int32_t get_offset_of_followModifier_11() { return static_cast<int32_t>(offsetof(ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A, ___followModifier_11)); }
	inline FollowModifier_tCD8CDE0E56FC90432A78B66E54411D0CCAEE0AC8 * get_followModifier_11() const { return ___followModifier_11; }
	inline FollowModifier_tCD8CDE0E56FC90432A78B66E54411D0CCAEE0AC8 ** get_address_of_followModifier_11() { return &___followModifier_11; }
	inline void set_followModifier_11(FollowModifier_tCD8CDE0E56FC90432A78B66E54411D0CCAEE0AC8 * value)
	{
		___followModifier_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___followModifier_11), (void*)value);
	}

	inline static int32_t get_offset_of_Preprocessed_12() { return static_cast<int32_t>(offsetof(ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A, ___Preprocessed_12)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_Preprocessed_12() const { return ___Preprocessed_12; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_Preprocessed_12() { return &___Preprocessed_12; }
	inline void set_Preprocessed_12(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___Preprocessed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Preprocessed_12), (void*)value);
	}

	inline static int32_t get_offset_of_Processed_13() { return static_cast<int32_t>(offsetof(ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A, ___Processed_13)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_Processed_13() const { return ___Processed_13; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_Processed_13() { return &___Processed_13; }
	inline void set_Processed_13(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___Processed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Processed_13), (void*)value);
	}
};


// Zinnia.Data.Collection.List.GameObjectObservableList
struct  GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68  : public DefaultObservableList_2_t968AEFD64D5C28531023BD7ED603E8102022C841
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2<UnityEngine.Vector3,System.Object>::set_Source(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TransformPropertyExtractor_2_set_Source_mACCBD967420113F4B12461B083B9E73B6F3FF4E1_gshared_inline (TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// !!0 Zinnia.Extension.GameObjectExtensions::TryGetComponent<System.Object>(UnityEngine.GameObject,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObjectExtensions_TryGetComponent_TisRuntimeObject_m4D4677AB4104677C145C4A63B635A451857A2D71_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, bool ___searchDescendants1, bool ___searchAncestors2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mAF22A00FA85F51B7F2099BFC8BF569187B04F6F9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// Zinnia.Data.Operation.Mutation.TransformScaleMutator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_ObjectScaler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * PlayAreaRepresentationConfigurator_get_ObjectScaler_m8AA2B1D48AB360964907E677D31E10D34A9C5AA9_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method);
// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_Facade()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * PlayAreaRepresentationConfigurator_get_Facade_mE38E145023A92C448CE569D541AB2FD32E13D02C_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_Target()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_Target_mF670FB0FCECA698065D47124A0156EEE4BC1E91B_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method);
// System.Void Zinnia.Data.Operation.Mutation.TransformPropertyMutator::set_Target(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransformPropertyMutator_set_Target_m2F275C86F84D89EFC90CDD407F750EFEA11D907F_inline (TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// Zinnia.Data.Operation.Mutation.TransformPositionMutator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_ObjectPositioner()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * PlayAreaRepresentationConfigurator_get_ObjectPositioner_m93F2D74A143918FE1F927C2361074367FD2D0571_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method);
// Zinnia.Data.Operation.Extraction.TransformPositionExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_OffsetOriginExtractor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * PlayAreaRepresentationConfigurator_get_OffsetOriginExtractor_m59B4370F922FE7988EE02B9987596920D5C3347C_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_OffsetOrigin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_OffsetOrigin_m06A99D6D09B982206B708D364134FF4ED20DD97E_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method);
// System.Void Zinnia.Data.Operation.Extraction.TransformPropertyExtractor`2<UnityEngine.Vector3,Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent>::set_Source(UnityEngine.GameObject)
inline void TransformPropertyExtractor_2_set_Source_m624B0C0E489FE1CD9AB35B60B98DC7E128AF920A_inline (TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	((  void (*) (TransformPropertyExtractor_2_t6901BF470505ED5CFAACE14010512333A7DD49A3 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))TransformPropertyExtractor_2_set_Source_mACCBD967420113F4B12461B083B9E73B6F3FF4E1_gshared_inline)(__this, ___value0, method);
}
// Zinnia.Data.Operation.Extraction.TransformPositionExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_OffsetDestinationExtractor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * PlayAreaRepresentationConfigurator_get_OffsetDestinationExtractor_m3077C32656A5C8638DFF42798B3F4086FB8756AB_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_OffsetDestination()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_OffsetDestination_mAD23368E9F9A7452B3FE98576D991A0772F74500_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method);
// Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_DimensionExtractor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * PlayAreaRepresentationConfigurator_get_DimensionExtractor_m484E9CB74C47130148C13969B204DC1411799926_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61 (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_Configuration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * PlayAreaRepresentationFacade_get_Configuration_m92692360AAF851EE3FAD21E8E5792380633E7556_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::set_Target(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_set_Target_m81FC3DC38FB0CD53A4C11A4276B90FB8366111FE (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::set_OffsetOrigin(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_set_OffsetOrigin_m94748481864CA81949356A995AB32B850A78C5CB (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::set_OffsetDestination(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_set_OffsetDestination_mDD6B6FACEFD43803185F6688AA3BB3E104FC6DD4 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// Zinnia.Cast.PointsCast VRTK.Prefabs.Pointers.PointerConfigurator::get_Caster()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * PointerConfigurator_get_Caster_mF5719A125B7AB40257C3E0A611FE6080E55E1C0A_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method);
// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerConfigurator::get_Facade()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method);
// Zinnia.Rule.RuleContainer VRTK.Prefabs.Pointers.PointerFacade::get_TargetValidity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * PointerFacade_get_TargetValidity_m08AC94749064A015AC900252F0EEFA00C1BE2677_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method);
// System.Void Zinnia.Cast.PointsCast::set_TargetValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointsCast_set_TargetValidity_m15EE5BD16BE14FB16861EF701EBE5D829FAF23D6_inline (PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * __this, RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___value0, const RuntimeMethod* method);
// Zinnia.Tracking.Follow.ObjectFollower VRTK.Prefabs.Pointers.PointerConfigurator::get_ObjectFollow()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * PointerConfigurator_get_ObjectFollow_m94F9AEAA1AAE024D07439CDCBB2A9CA26C8916A8_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method);
// Zinnia.Data.Collection.List.GameObjectObservableList Zinnia.Process.Component.GameObjectSourceTargetProcessor::get_Sources()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * GameObjectSourceTargetProcessor_get_Sources_mC909A41A412F13CF1F251FFFA9D88F49AC0C323F_inline (GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Zinnia.Extension.BehaviourExtensions::RunWhenActiveAndEnabled(UnityEngine.Behaviour,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80 (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * ___behaviour0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action1, const RuntimeMethod* method);
// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacade::get_FollowSource()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacade_get_FollowSource_mC5EEC56A59FF9ECD2C613D521943034846F9A288_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::get_SelectOnActivatedAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method);
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::get_SelectOnDeactivatedAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method);
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerFacade::get_SelectionAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerFacade_get_SelectionAction_mA3DDFC25DEEA1CACDF506F84B5ABD98E117F811D_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method);
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::get_ActivationAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method);
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerFacade::get_ActivationAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerFacade_get_ActivationAction_m8063A86D15B3919E8F33CFCBB7F4916849FE40BB_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method);
// VRTK.Prefabs.Pointers.PointerFacade/SelectionType VRTK.Prefabs.Pointers.PointerFacade::get_SelectionMethod()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PointerFacade_get_SelectionMethod_m2E3919D134A5A4361B592CC31752D2D8FC8F60A1_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Zinnia.Pointer.ObjectPointer/EventData>::Invoke(!0)
inline void UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34 (UnityEvent_1_t76A384D35E424E10C0BBBA75183379270B4902E9 * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t76A384D35E424E10C0BBBA75183379270B4902E9 *, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 *, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// VRTK.Prefabs.Pointers.PointerConfigurator VRTK.Prefabs.Pointers.PointerFacade::get_Configuration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method);
// System.Void Zinnia.Pointer.ObjectPointer/UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_mD445F9523EECD867FC62A5AA0B6EDAE297866861 (UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * __this, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_FollowSource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_FollowSource_mED328949F4A97A341DFD031164F14C5A6B4E9627 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_ActivationAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_ActivationAction_m3C4F6F1CF471CC124C27839A18AD290082F9A83A (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___value0, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_SelectionAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_SelectionAction_m6D50D8B41A472D7FB8A54FB31B352134A84E5FA2 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___value0, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_TargetValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_TargetValidity_mE90C17C0426E352F6CEFADC28DED61BEDD600B2F (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___value0, const RuntimeMethod* method);
// System.Void Zinnia.Data.Operation.Extraction.GameObjectExtractor::set_Result(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline (GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::get_Source()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6_inline (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor/PointerComponentType VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::get_PointerComponent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PointerFacadeComponentGameObjectExtractor_get_PointerComponent_mD46ADC787B66A412844C626B198030B821E96914_inline (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method);
// Zinnia.Pointer.ObjectPointer VRTK.Prefabs.Pointers.PointerConfigurator::get_ObjectPointer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * PointerConfigurator_get_ObjectPointer_m4DAA1F78069E49D7F94F1ABC8B343C28F281E272_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method);
// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::get_Origin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ObjectPointer_get_Origin_m62CFE9143B4F9BEADECC2AC96C6B1CBD47E0038F_inline (ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * __this, const RuntimeMethod* method);
// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::get_RepeatedSegment()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ObjectPointer_get_RepeatedSegment_mB25014CED2CCFFD6CA7402EEE42AD86A94CD6499_inline (ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * __this, const RuntimeMethod* method);
// Zinnia.Pointer.PointerElement Zinnia.Pointer.ObjectPointer::get_Destination()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ObjectPointer_get_Destination_m2A397076A2C570785A986E583277E065B8C1EBDC_inline (ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Zinnia.Data.Operation.Extraction.GameObjectExtractor::Extract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObjectExtractor_Extract_mCBD42E429B3742E7A0ACE41EF54135C1E36F6D0D (GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95 * __this, const RuntimeMethod* method);
// System.Void VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::set_Source(VRTK.Prefabs.Pointers.PointerFacade)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_set_Source_m2BE573875F4530FC178290CBC2426DAFC558712A_inline (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// !!0 Zinnia.Extension.GameObjectExtensions::TryGetComponent<VRTK.Prefabs.Pointers.PointerFacade>(UnityEngine.GameObject,System.Boolean,System.Boolean)
inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * GameObjectExtensions_TryGetComponent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mE61E75BB056160A4DD0AC11029BF93EDA35C364E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, bool ___searchDescendants1, bool ___searchAncestors2, const RuntimeMethod* method)
{
	return ((  PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, bool, const RuntimeMethod*))GameObjectExtensions_TryGetComponent_TisRuntimeObject_m4D4677AB4104677C145C4A63B635A451857A2D71_gshared)(___gameObject0, ___searchDescendants1, ___searchAncestors2, method);
}
// System.Void Zinnia.Data.Operation.Extraction.GameObjectExtractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtractor__ctor_m89686D340E32A8E6D234121990FAEE7947EF96A9 (GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95 * __this, const RuntimeMethod* method);
// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::get_Source()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerFacadeGameObjectExtractor_get_Source_m71F7AB61BFEF04B89891A64CF39E5786E1A9317E_inline (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, const RuntimeMethod* method);
// UnityEngine.Transform Zinnia.Data.Type.TransformData::get_Transform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * TransformData_get_Transform_mC917955F34EA21843F2826F3F3D3E55467C60B18_inline (TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<VRTK.Prefabs.Pointers.PointerFacade>()
inline PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * Component_GetComponentInParent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mBE4257D12D20C29507E20D2F9EAAEDDD0859F14B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mAF22A00FA85F51B7F2099BFC8BF569187B04F6F9_gshared)(__this, method);
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::set_Source(VRTK.Prefabs.Pointers.PointerFacade)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_set_Source_m230E89299C37B0A89F9D6678BE6C19F95FB15F82_inline (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___value0, const RuntimeMethod* method);
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
// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_Facade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * PlayAreaRepresentationConfigurator_get_Facade_mE38E145023A92C448CE569D541AB2FD32E13D02C (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public PlayAreaRepresentationFacade Facade { get; protected set; }
		PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * L_0 = __this->get_facade_4();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::set_Facade(VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_set_Facade_m0E7CDBF45764B819A990F1C183C9928A5BCE1965 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayAreaRepresentationFacade Facade { get; protected set; }
		PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * L_0 = ___value0;
		__this->set_facade_4(L_0);
		return;
	}
}
// Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_DimensionExtractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * PlayAreaRepresentationConfigurator_get_DimensionExtractor_m484E9CB74C47130148C13969B204DC1411799926 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public PlayAreaDimensionsExtractor DimensionExtractor { get; protected set; }
		PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * L_0 = __this->get_dimensionExtractor_5();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::set_DimensionExtractor(Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_set_DimensionExtractor_m9B18E23DC6F546BA834B69D4843830FF7BC6592F (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayAreaDimensionsExtractor DimensionExtractor { get; protected set; }
		PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * L_0 = ___value0;
		__this->set_dimensionExtractor_5(L_0);
		return;
	}
}
// Zinnia.Data.Operation.Mutation.TransformScaleMutator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_ObjectScaler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * PlayAreaRepresentationConfigurator_get_ObjectScaler_m8AA2B1D48AB360964907E677D31E10D34A9C5AA9 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformScaleMutator ObjectScaler { get; protected set; }
		TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * L_0 = __this->get_objectScaler_6();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::set_ObjectScaler(Zinnia.Data.Operation.Mutation.TransformScaleMutator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_set_ObjectScaler_mE0D5BAA17726E0BAB6CCFBB71F959ED78203D09B (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * ___value0, const RuntimeMethod* method)
{
	{
		// public TransformScaleMutator ObjectScaler { get; protected set; }
		TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * L_0 = ___value0;
		__this->set_objectScaler_6(L_0);
		return;
	}
}
// Zinnia.Data.Operation.Mutation.TransformPositionMutator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_ObjectPositioner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * PlayAreaRepresentationConfigurator_get_ObjectPositioner_m93F2D74A143918FE1F927C2361074367FD2D0571 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformPositionMutator ObjectPositioner { get; protected set; }
		TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * L_0 = __this->get_objectPositioner_7();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::set_ObjectPositioner(Zinnia.Data.Operation.Mutation.TransformPositionMutator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_set_ObjectPositioner_mF540C1E1B2D228D7C9B2D34D7473756CDB416A16 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * ___value0, const RuntimeMethod* method)
{
	{
		// public TransformPositionMutator ObjectPositioner { get; protected set; }
		TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * L_0 = ___value0;
		__this->set_objectPositioner_7(L_0);
		return;
	}
}
// Zinnia.Data.Operation.Extraction.TransformPositionExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_OffsetOriginExtractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * PlayAreaRepresentationConfigurator_get_OffsetOriginExtractor_m59B4370F922FE7988EE02B9987596920D5C3347C (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformPositionExtractor OffsetOriginExtractor { get; protected set; }
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = __this->get_offsetOriginExtractor_8();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::set_OffsetOriginExtractor(Zinnia.Data.Operation.Extraction.TransformPositionExtractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_set_OffsetOriginExtractor_m1ECA4938308F5FA24E7ED2DAD5BAD6C1DA97A9DD (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * ___value0, const RuntimeMethod* method)
{
	{
		// public TransformPositionExtractor OffsetOriginExtractor { get; protected set; }
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = ___value0;
		__this->set_offsetOriginExtractor_8(L_0);
		return;
	}
}
// Zinnia.Data.Operation.Extraction.TransformPositionExtractor VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::get_OffsetDestinationExtractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * PlayAreaRepresentationConfigurator_get_OffsetDestinationExtractor_m3077C32656A5C8638DFF42798B3F4086FB8756AB (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformPositionExtractor OffsetDestinationExtractor { get; protected set; }
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = __this->get_offsetDestinationExtractor_9();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::set_OffsetDestinationExtractor(Zinnia.Data.Operation.Extraction.TransformPositionExtractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_set_OffsetDestinationExtractor_mBBA86D161E0CC3E887B0CC305ABF5A4C5C7EFEAF (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * ___value0, const RuntimeMethod* method)
{
	{
		// public TransformPositionExtractor OffsetDestinationExtractor { get; protected set; }
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = ___value0;
		__this->set_offsetDestinationExtractor_9(L_0);
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_ConfigureTarget_m589B7389307261E475813AFED7E25080BEEE9CD4 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// ObjectScaler.Target = Facade.Target;
		TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * L_0 = PlayAreaRepresentationConfigurator_get_ObjectScaler_m8AA2B1D48AB360964907E677D31E10D34A9C5AA9_inline(__this, /*hidden argument*/NULL);
		PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * L_1 = PlayAreaRepresentationConfigurator_get_Facade_mE38E145023A92C448CE569D541AB2FD32E13D02C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = PlayAreaRepresentationFacade_get_Target_mF670FB0FCECA698065D47124A0156EEE4BC1E91B_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformPropertyMutator_set_Target_m2F275C86F84D89EFC90CDD407F750EFEA11D907F_inline(L_0, L_2, /*hidden argument*/NULL);
		// ObjectPositioner.Target = Facade.Target;
		TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * L_3 = PlayAreaRepresentationConfigurator_get_ObjectPositioner_m93F2D74A143918FE1F927C2361074367FD2D0571_inline(__this, /*hidden argument*/NULL);
		PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * L_4 = PlayAreaRepresentationConfigurator_get_Facade_mE38E145023A92C448CE569D541AB2FD32E13D02C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = PlayAreaRepresentationFacade_get_Target_mF670FB0FCECA698065D47124A0156EEE4BC1E91B_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		TransformPropertyMutator_set_Target_m2F275C86F84D89EFC90CDD407F750EFEA11D907F_inline(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureOffsetOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_ConfigureOffsetOrigin_m39E7780FD62D7B841347FCAE6FDE6472200A94E9 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayAreaRepresentationConfigurator_ConfigureOffsetOrigin_m39E7780FD62D7B841347FCAE6FDE6472200A94E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OffsetOriginExtractor.Source = Facade.OffsetOrigin;
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = PlayAreaRepresentationConfigurator_get_OffsetOriginExtractor_m59B4370F922FE7988EE02B9987596920D5C3347C_inline(__this, /*hidden argument*/NULL);
		PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * L_1 = PlayAreaRepresentationConfigurator_get_Facade_mE38E145023A92C448CE569D541AB2FD32E13D02C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = PlayAreaRepresentationFacade_get_OffsetOrigin_m06A99D6D09B982206B708D364134FF4ED20DD97E_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformPropertyExtractor_2_set_Source_m624B0C0E489FE1CD9AB35B60B98DC7E128AF920A_inline(L_0, L_2, /*hidden argument*/TransformPropertyExtractor_2_set_Source_m624B0C0E489FE1CD9AB35B60B98DC7E128AF920A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureOffsetDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_ConfigureOffsetDestination_m30CBB3BB3B2E5534667E7898A491027536679970 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayAreaRepresentationConfigurator_ConfigureOffsetDestination_m30CBB3BB3B2E5534667E7898A491027536679970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OffsetDestinationExtractor.Source = Facade.OffsetDestination;
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = PlayAreaRepresentationConfigurator_get_OffsetDestinationExtractor_m3077C32656A5C8638DFF42798B3F4086FB8756AB_inline(__this, /*hidden argument*/NULL);
		PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * L_1 = PlayAreaRepresentationConfigurator_get_Facade_mE38E145023A92C448CE569D541AB2FD32E13D02C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = PlayAreaRepresentationFacade_get_OffsetDestination_mAD23368E9F9A7452B3FE98576D991A0772F74500_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformPropertyExtractor_2_set_Source_m624B0C0E489FE1CD9AB35B60B98DC7E128AF920A_inline(L_0, L_2, /*hidden argument*/TransformPropertyExtractor_2_set_Source_m624B0C0E489FE1CD9AB35B60B98DC7E128AF920A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::RecalculateDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_RecalculateDimensions_m72BD1E5AA6B88DF0435A4DEF3B165977B3A479FA (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// DimensionExtractor.DoExtract();
		PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * L_0 = PlayAreaRepresentationConfigurator_get_DimensionExtractor_m484E9CB74C47130148C13969B204DC1411799926_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void Zinnia.Tracking.CameraRig.Operation.Extraction.PlayAreaDimensionsExtractor::DoExtract() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_OnEnable_mD0AEF9B0444BC3360D6B142451CB5C746F355DC8 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// ConfigureTarget();
		VirtActionInvoker0::Invoke(4 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureTarget() */, __this);
		// ConfigureOffsetOrigin();
		VirtActionInvoker0::Invoke(5 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureOffsetOrigin() */, __this);
		// ConfigureOffsetDestination();
		VirtActionInvoker0::Invoke(6 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureOffsetDestination() */, __this);
		// ObjectScaler.gameObject.SetActive(true);
		TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * L_0 = PlayAreaRepresentationConfigurator_get_ObjectScaler_m8AA2B1D48AB360964907E677D31E10D34A9C5AA9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator_OnDisable_mC47CF55FC041E992779C1B3A62D804112AECA5D7 (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// ObjectScaler.gameObject.SetActive(false);
		TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * L_0 = PlayAreaRepresentationConfigurator_get_ObjectScaler_m8AA2B1D48AB360964907E677D31E10D34A9C5AA9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationConfigurator__ctor_m2FF599B942F3E3EA95C6ACDCBB5006A82339296E (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_Target_mF670FB0FCECA698065D47124A0156EEE4BC1E91B (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Target { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_target_4();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::set_Target(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_set_Target_m81FC3DC38FB0CD53A4C11A4276B90FB8366111FE (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Target { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_target_4(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::OnAfterTargetChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_OffsetOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_OffsetOrigin_m06A99D6D09B982206B708D364134FF4ED20DD97E (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject OffsetOrigin { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_offsetOrigin_5();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::set_OffsetOrigin(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_set_OffsetOrigin_m94748481864CA81949356A995AB32B850A78C5CB (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject OffsetOrigin { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_offsetOrigin_5(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::OnAfterOffsetOriginChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// UnityEngine.GameObject VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_OffsetDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_OffsetDestination_mAD23368E9F9A7452B3FE98576D991A0772F74500 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject OffsetDestination { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_offsetDestination_6();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::set_OffsetDestination(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_set_OffsetDestination_mDD6B6FACEFD43803185F6688AA3BB3E104FC6DD4 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject OffsetDestination { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_offsetDestination_6(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::OnAfterOffsetDestinationChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * PlayAreaRepresentationFacade_get_Configuration_m92692360AAF851EE3FAD21E8E5792380633E7556 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public PlayAreaRepresentationConfigurator Configuration { get; protected set; }
		PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * L_0 = __this->get_configuration_7();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::set_Configuration(VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_set_Configuration_mA481EFFD7F0B2947FDBEA80E9458A16116F0896C (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayAreaRepresentationConfigurator Configuration { get; protected set; }
		PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * L_0 = ___value0;
		__this->set_configuration_7(L_0);
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::Recalculate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_Recalculate_m5575442D0D7C1EEED257D9213D9F285F4598E14F (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.RecalculateDimensions();
		PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * L_0 = PlayAreaRepresentationFacade_get_Configuration_m92692360AAF851EE3FAD21E8E5792380633E7556_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::RecalculateDimensions() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::OnAfterTargetChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_OnAfterTargetChange_mB9CE2F1E64074FECCBDFB27B2BD45DA188EAE620 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureTarget();
		PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * L_0 = PlayAreaRepresentationFacade_get_Configuration_m92692360AAF851EE3FAD21E8E5792380633E7556_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureTarget() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::OnAfterOffsetOriginChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_OnAfterOffsetOriginChange_m84C00F42D13D6B09CD425EDC2281F14DC2D6D1F2 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureOffsetOrigin();
		PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * L_0 = PlayAreaRepresentationFacade_get_Configuration_m92692360AAF851EE3FAD21E8E5792380633E7556_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureOffsetOrigin() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::OnAfterOffsetDestinationChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_OnAfterOffsetDestinationChange_m4D1129FAD8D5242D6C788AAA373E81B0A07DF93F (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureOffsetDestination();
		PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * L_0 = PlayAreaRepresentationFacade_get_Configuration_m92692360AAF851EE3FAD21E8E5792380633E7556_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationConfigurator::ConfigureOffsetDestination() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade__ctor_m2BD7C958EF6B01FE81DFD2E34A75B4871537CC89 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::ClearTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_ClearTarget_mB31469E236A41A535BA57E1D5BD95C59D5E5C13C (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		PlayAreaRepresentationFacade_set_Target_m81FC3DC38FB0CD53A4C11A4276B90FB8366111FE(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::ClearOffsetOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_ClearOffsetOrigin_m47C4A12134D32539C269AD897BCFA87E1DD7F82A (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		PlayAreaRepresentationFacade_set_OffsetOrigin_m94748481864CA81949356A995AB32B850A78C5CB(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.PlayAreaRepresentation.PlayAreaRepresentationFacade::ClearOffsetDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAreaRepresentationFacade_ClearOffsetDestination_m83D54050F351CFDCD89136EA049C92B4EA7A8BC3 (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		PlayAreaRepresentationFacade_set_OffsetDestination_mDD6B6FACEFD43803185F6688AA3BB3E104FC6DD4(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
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
// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerConfigurator::get_Facade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public PointerFacade Facade { get; protected set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = __this->get_facade_4();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::set_Facade(VRTK.Prefabs.Pointers.PointerFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_Facade_m52E8EBC39EE0B385DFC7B88C761226FBCC2B9C05 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerFacade Facade { get; protected set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = ___value0;
		__this->set_facade_4(L_0);
		return;
	}
}
// Zinnia.Pointer.ObjectPointer VRTK.Prefabs.Pointers.PointerConfigurator::get_ObjectPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * PointerConfigurator_get_ObjectPointer_m4DAA1F78069E49D7F94F1ABC8B343C28F281E272 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public ObjectPointer ObjectPointer { get; protected set; }
		ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * L_0 = __this->get_objectPointer_5();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::set_ObjectPointer(Zinnia.Pointer.ObjectPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_ObjectPointer_m714166D6A38C82049B3F201426C6405958DD71AB (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * ___value0, const RuntimeMethod* method)
{
	{
		// public ObjectPointer ObjectPointer { get; protected set; }
		ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * L_0 = ___value0;
		__this->set_objectPointer_5(L_0);
		return;
	}
}
// Zinnia.Tracking.Follow.ObjectFollower VRTK.Prefabs.Pointers.PointerConfigurator::get_ObjectFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * PointerConfigurator_get_ObjectFollow_m94F9AEAA1AAE024D07439CDCBB2A9CA26C8916A8 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public ObjectFollower ObjectFollow { get; protected set; }
		ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * L_0 = __this->get_objectFollow_6();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::set_ObjectFollow(Zinnia.Tracking.Follow.ObjectFollower)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_ObjectFollow_m231A3E72F05746C9A30D91C90B72245BBBD29F4F (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * ___value0, const RuntimeMethod* method)
{
	{
		// public ObjectFollower ObjectFollow { get; protected set; }
		ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * L_0 = ___value0;
		__this->set_objectFollow_6(L_0);
		return;
	}
}
// Zinnia.Cast.PointsCast VRTK.Prefabs.Pointers.PointerConfigurator::get_Caster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * PointerConfigurator_get_Caster_mF5719A125B7AB40257C3E0A611FE6080E55E1C0A (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public PointsCast Caster { get; protected set; }
		PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * L_0 = __this->get_caster_7();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::set_Caster(Zinnia.Cast.PointsCast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_Caster_mC1871817CFF5955E5C830FC4F8D4B07F3AB4DB39 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * ___value0, const RuntimeMethod* method)
{
	{
		// public PointsCast Caster { get; protected set; }
		PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * L_0 = ___value0;
		__this->set_caster_7(L_0);
		return;
	}
}
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::get_ActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction ActivationAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_activationAction_8();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::set_ActivationAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_ActivationAction_mDD72D6FC806BA9214939E291CBF1A2DEA2983588 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___value0, const RuntimeMethod* method)
{
	{
		// public BooleanAction ActivationAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = ___value0;
		__this->set_activationAction_8(L_0);
		return;
	}
}
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::get_SelectOnActivatedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectOnActivatedAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_selectOnActivatedAction_9();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::set_SelectOnActivatedAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_SelectOnActivatedAction_m1A9B3E997988E00B0D3BF49425793FA048D872F2 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___value0, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectOnActivatedAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = ___value0;
		__this->set_selectOnActivatedAction_9(L_0);
		return;
	}
}
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerConfigurator::get_SelectOnDeactivatedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectOnDeactivatedAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_selectOnDeactivatedAction_10();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::set_SelectOnDeactivatedAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_set_SelectOnDeactivatedAction_mF877F17C0CCA293B449197B69B9E998CB936293E (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___value0, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectOnDeactivatedAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = ___value0;
		__this->set_selectOnDeactivatedAction_10(L_0);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureTargetValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureTargetValidity_mEADA7991AD698C16D54AF6D470FCBA3D24E73008 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// Caster.TargetValidity = Facade.TargetValidity;
		PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * L_0 = PointerConfigurator_get_Caster_mF5719A125B7AB40257C3E0A611FE6080E55E1C0A_inline(__this, /*hidden argument*/NULL);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_1 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * L_2 = PointerFacade_get_TargetValidity_m08AC94749064A015AC900252F0EEFA00C1BE2677_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PointsCast_set_TargetValidity_m15EE5BD16BE14FB16861EF701EBE5D829FAF23D6_inline(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureFollowSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureFollowSources_mC5C1B7B41D5D8BBC1C43FB23B4054F7F8909A634 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_ConfigureFollowSources_mC5C1B7B41D5D8BBC1C43FB23B4054F7F8909A634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectFollow.Sources.RunWhenActiveAndEnabled(() => ObjectFollow.Sources.Clear());
		ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * L_0 = PointerConfigurator_get_ObjectFollow_m94F9AEAA1AAE024D07439CDCBB2A9CA26C8916A8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * L_1 = GameObjectSourceTargetProcessor_get_Sources_mC909A41A412F13CF1F251FFFA9D88F49AC0C323F_inline(L_0, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_2, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureFollowSourcesU3Eb__29_0_m340980EFAD6C9E10CFC16D247F820BFBDFD1DA00_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_1, L_2, /*hidden argument*/NULL);
		// if (Facade.FollowSource != null)
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_3 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = PointerFacade_get_FollowSource_mC5EEC56A59FF9ECD2C613D521943034846F9A288_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// ObjectFollow.Sources.RunWhenActiveAndEnabled(() => ObjectFollow.Sources.Add(Facade.FollowSource));
		ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * L_6 = PointerConfigurator_get_ObjectFollow_m94F9AEAA1AAE024D07439CDCBB2A9CA26C8916A8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * L_7 = GameObjectSourceTargetProcessor_get_Sources_mC909A41A412F13CF1F251FFFA9D88F49AC0C323F_inline(L_6, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_8, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureFollowSourcesU3Eb__29_1_m7415500896AE85E6ED7EB29DA4A71B939B00CD8D_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_7, L_8, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureSelectionAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureSelectionAction_m09B4A5AA9401FE3324A2EC8DE9479FCB73D0E97E (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_ConfigureSelectionAction_m09B4A5AA9401FE3324A2EC8DE9479FCB73D0E97E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SelectOnActivatedAction.RunWhenActiveAndEnabled(() => SelectOnActivatedAction.ClearSources());
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_1, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_0_mC6CBFF8A00B38E75062CE333384F3CCA393ECEA3_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_0, L_1, /*hidden argument*/NULL);
		// SelectOnDeactivatedAction.RunWhenActiveAndEnabled(() => SelectOnDeactivatedAction.ClearSources());
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_2 = PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_3, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_1_mF07CE0D2BFB47E2DF4C593DFA19EDCA16258F7E3_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_2, L_3, /*hidden argument*/NULL);
		// if (Facade.SelectionAction != null)
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_4 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_5 = PointerFacade_get_SelectionAction_mA3DDFC25DEEA1CACDF506F84B5ABD98E117F811D_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		// SelectOnActivatedAction.RunWhenActiveAndEnabled(() => SelectOnActivatedAction.AddSource(Facade.SelectionAction));
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_7 = PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_8, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_2_m5C96D15EF15BCB5B0936546E621D2132ACC0FEED_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_7, L_8, /*hidden argument*/NULL);
		// SelectOnDeactivatedAction.RunWhenActiveAndEnabled(() => SelectOnDeactivatedAction.AddSource(Facade.SelectionAction));
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_9 = PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_10, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_3_mEC7CAA3B555DEB41AD7A3F4E970C20EAEE4148D0_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_9, L_10, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureActivationAction_m40E7E55FBE5784CBD9CDDB3FC4B29A8D7312ABC8 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_ConfigureActivationAction_m40E7E55FBE5784CBD9CDDB3FC4B29A8D7312ABC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivationAction.RunWhenActiveAndEnabled(() => ActivationAction.ClearSources());
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_1, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureActivationActionU3Eb__31_0_m5D6977748340332487060C6206F7A050B4A6C87B_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_0, L_1, /*hidden argument*/NULL);
		// if (Facade.ActivationAction != null)
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_2 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_3 = PointerFacade_get_ActivationAction_m8063A86D15B3919E8F33CFCBB7F4916849FE40BB_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// ActivationAction.RunWhenActiveAndEnabled(() => ActivationAction.AddSource(Facade.ActivationAction));
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_5 = PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline(__this, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, __this, (intptr_t)((intptr_t)PointerConfigurator_U3CConfigureActivationActionU3Eb__31_1_m2EAF6BE9D521FBE4AA949EBFD08F182DD455F80F_RuntimeMethod_var), /*hidden argument*/NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_m1BD3C2231E5E693F87EF02D1B4C0FE652FC02A80(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureSelectionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_ConfigureSelectionType_m53187A3C883A01E25AEA6883BBE446B1ABF7F97E (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// ActivationAction.gameObject.SetActive(false);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// switch (Facade.SelectionMethod)
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_2 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PointerFacade_get_SelectionMethod_m2E3919D134A5A4361B592CC31752D2D8FC8F60A1_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		goto IL_006c;
	}

IL_0026:
	{
		// SelectOnActivatedAction.gameObject.SetActive(true);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_6 = PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// SelectOnDeactivatedAction.gameObject.SetActive(false);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_8 = PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_006c;
	}

IL_004a:
	{
		// SelectOnActivatedAction.gameObject.SetActive(false);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_10 = PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)0, /*hidden argument*/NULL);
		// SelectOnDeactivatedAction.gameObject.SetActive(true);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_12 = PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_13, (bool)1, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// ConfigureSelectionAction();
		VirtActionInvoker0::Invoke(6 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureSelectionAction() */, __this);
		// ConfigureActivationAction();
		VirtActionInvoker0::Invoke(7 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureActivationAction() */, __this);
		// ActivationAction.gameObject.SetActive(true);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_14 = PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_15, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::EmitActivated(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitActivated_m4B3B662EDA8C31AD755AF3563D3982E8F43D113E (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_EmitActivated_m4B3B662EDA8C31AD755AF3563D3982E8F43D113E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B2_0 = NULL;
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B1_0 = NULL;
	{
		// Facade.Activated?.Invoke(eventData);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_1 = L_0->get_Activated_9();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_3 = ___eventData0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::EmitDeactivated(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitDeactivated_m2E716A3748073F6976950C442B7FFAC3724F3D14 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_EmitDeactivated_m2E716A3748073F6976950C442B7FFAC3724F3D14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B2_0 = NULL;
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B1_0 = NULL;
	{
		// Facade.Deactivated?.Invoke(eventData);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_1 = L_0->get_Deactivated_10();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_3 = ___eventData0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::EmitEntered(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitEntered_m42D5736CB7C395E5286EE934ABE26285B6812121 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_EmitEntered_m42D5736CB7C395E5286EE934ABE26285B6812121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B2_0 = NULL;
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B1_0 = NULL;
	{
		// Facade.Entered?.Invoke(eventData);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_1 = L_0->get_Entered_11();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_3 = ___eventData0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::EmitExited(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitExited_m35907200D28F605D5E92C6DA78965B9A86FA207D (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_EmitExited_m35907200D28F605D5E92C6DA78965B9A86FA207D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B2_0 = NULL;
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B1_0 = NULL;
	{
		// Facade.Exited?.Invoke(eventData);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_1 = L_0->get_Exited_12();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_3 = ___eventData0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::EmitHoverChanged(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitHoverChanged_mC23B79C56B6C4B03C234C014D441E6AF0AA69DC5 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_EmitHoverChanged_mC23B79C56B6C4B03C234C014D441E6AF0AA69DC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B2_0 = NULL;
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B1_0 = NULL;
	{
		// Facade.HoverChanged?.Invoke(eventData);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_1 = L_0->get_HoverChanged_13();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_3 = ___eventData0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::EmitSelected(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_EmitSelected_m279204AB86E4D186EE909A9757D7A11E74D33328 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerConfigurator_EmitSelected_m279204AB86E4D186EE909A9757D7A11E74D33328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B2_0 = NULL;
	UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * G_B1_0 = NULL;
	{
		// Facade.Selected?.Invoke(eventData);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_1 = L_0->get_Selected_14();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_3 = ___eventData0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m321929C8F4354944A3BB2D49D21191FD6D8BAE34_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_OnEnable_m4D4F8A68496E4F5BD63257AE3E29948690F61282 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// ConfigureTargetValidity();
		VirtActionInvoker0::Invoke(4 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureTargetValidity() */, __this);
		// ConfigureFollowSources();
		VirtActionInvoker0::Invoke(5 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureFollowSources() */, __this);
		// ConfigureSelectionType();
		VirtActionInvoker0::Invoke(8 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureSelectionType() */, __this);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator__ctor_m1DE7B99FFE5A57F92D36992E2D1C1F3547CC4DB4 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureFollowSources>b__29_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureFollowSourcesU3Eb__29_0_m340980EFAD6C9E10CFC16D247F820BFBDFD1DA00 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// ObjectFollow.Sources.RunWhenActiveAndEnabled(() => ObjectFollow.Sources.Clear());
		ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * L_0 = PointerConfigurator_get_ObjectFollow_m94F9AEAA1AAE024D07439CDCBB2A9CA26C8916A8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * L_1 = GameObjectSourceTargetProcessor_get_Sources_mC909A41A412F13CF1F251FFFA9D88F49AC0C323F_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(29 /* System.Void Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>::Clear(System.Boolean) */, L_1, (bool)0);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureFollowSources>b__29_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureFollowSourcesU3Eb__29_1_m7415500896AE85E6ED7EB29DA4A71B939B00CD8D (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// ObjectFollow.Sources.RunWhenActiveAndEnabled(() => ObjectFollow.Sources.Add(Facade.FollowSource));
		ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * L_0 = PointerConfigurator_get_ObjectFollow_m94F9AEAA1AAE024D07439CDCBB2A9CA26C8916A8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * L_1 = GameObjectSourceTargetProcessor_get_Sources_mC909A41A412F13CF1F251FFFA9D88F49AC0C323F_inline(L_0, /*hidden argument*/NULL);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_2 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = PointerFacade_get_FollowSource_mC5EEC56A59FF9ECD2C613D521943034846F9A288_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(10 /* System.Void Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.GameObject,Zinnia.Data.Collection.List.GameObjectObservableList/UnityEvent>::Add(!0) */, L_1, L_3);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureSelectionAction>b__30_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_0_mC6CBFF8A00B38E75062CE333384F3CCA393ECEA3 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// SelectOnActivatedAction.RunWhenActiveAndEnabled(() => SelectOnActivatedAction.ClearSources());
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureSelectionAction>b__30_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_1_mF07CE0D2BFB47E2DF4C593DFA19EDCA16258F7E3 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// SelectOnDeactivatedAction.RunWhenActiveAndEnabled(() => SelectOnDeactivatedAction.ClearSources());
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureSelectionAction>b__30_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_2_m5C96D15EF15BCB5B0936546E621D2132ACC0FEED (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// SelectOnActivatedAction.RunWhenActiveAndEnabled(() => SelectOnActivatedAction.AddSource(Facade.SelectionAction));
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline(__this, /*hidden argument*/NULL);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_1 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_2 = PointerFacade_get_SelectionAction_mA3DDFC25DEEA1CACDF506F84B5ABD98E117F811D_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Action_t8C419D196314F8CECE4D4CB1F9BCC26552B54C4A * >::Invoke(4 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_0, L_2);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureSelectionAction>b__30_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureSelectionActionU3Eb__30_3_mEC7CAA3B555DEB41AD7A3F4E970C20EAEE4148D0 (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// SelectOnDeactivatedAction.RunWhenActiveAndEnabled(() => SelectOnDeactivatedAction.AddSource(Facade.SelectionAction));
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline(__this, /*hidden argument*/NULL);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_1 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_2 = PointerFacade_get_SelectionAction_mA3DDFC25DEEA1CACDF506F84B5ABD98E117F811D_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Action_t8C419D196314F8CECE4D4CB1F9BCC26552B54C4A * >::Invoke(4 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_0, L_2);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureActivationAction>b__31_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureActivationActionU3Eb__31_0_m5D6977748340332487060C6206F7A050B4A6C87B (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// ActivationAction.RunWhenActiveAndEnabled(() => ActivationAction.ClearSources());
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerConfigurator::<ConfigureActivationAction>b__31_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerConfigurator_U3CConfigureActivationActionU3Eb__31_1_m2EAF6BE9D521FBE4AA949EBFD08F182DD455F80F (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// ActivationAction.RunWhenActiveAndEnabled(() => ActivationAction.AddSource(Facade.ActivationAction));
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline(__this, /*hidden argument*/NULL);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_1 = PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_2 = PointerFacade_get_ActivationAction_m8063A86D15B3919E8F33CFCBB7F4916849FE40BB_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Action_t8C419D196314F8CECE4D4CB1F9BCC26552B54C4A * >::Invoke(4 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_0, L_2);
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
// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacade::get_FollowSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacade_get_FollowSource_mC5EEC56A59FF9ECD2C613D521943034846F9A288 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FollowSource { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_followSource_4();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_FollowSource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_FollowSource_mED328949F4A97A341DFD031164F14C5A6B4E9627 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject FollowSource { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_followSource_4(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(4 /* System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterFollowSourceChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerFacade::get_ActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerFacade_get_ActivationAction_m8063A86D15B3919E8F33CFCBB7F4916849FE40BB (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction ActivationAction { get; set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_activationAction_5();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_ActivationAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_ActivationAction_m3C4F6F1CF471CC124C27839A18AD290082F9A83A (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___value0, const RuntimeMethod* method)
{
	{
		// public BooleanAction ActivationAction { get; set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = ___value0;
		__this->set_activationAction_5(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterActivationActionChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// Zinnia.Action.BooleanAction VRTK.Prefabs.Pointers.PointerFacade::get_SelectionAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerFacade_get_SelectionAction_mA3DDFC25DEEA1CACDF506F84B5ABD98E117F811D (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectionAction { get; set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_selectionAction_6();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_SelectionAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_SelectionAction_m6D50D8B41A472D7FB8A54FB31B352134A84E5FA2 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * ___value0, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectionAction { get; set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = ___value0;
		__this->set_selectionAction_6(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterSelectionActionChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// VRTK.Prefabs.Pointers.PointerFacade_SelectionType VRTK.Prefabs.Pointers.PointerFacade::get_SelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerFacade_get_SelectionMethod_m2E3919D134A5A4361B592CC31752D2D8FC8F60A1 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public SelectionType SelectionMethod { get; set; }
		int32_t L_0 = __this->get_selectionMethod_7();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_SelectionMethod(VRTK.Prefabs.Pointers.PointerFacade_SelectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_SelectionMethod_m5F97D97EA1C67E725C083C37E8A577F8A44F406F (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SelectionType SelectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_selectionMethod_7(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterSelectionMethodChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// Zinnia.Rule.RuleContainer VRTK.Prefabs.Pointers.PointerFacade::get_TargetValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * PointerFacade_get_TargetValidity_m08AC94749064A015AC900252F0EEFA00C1BE2677 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public RuleContainer TargetValidity { get; set; }
		RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * L_0 = __this->get_targetValidity_8();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_TargetValidity(Zinnia.Rule.RuleContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_TargetValidity_mE90C17C0426E352F6CEFADC28DED61BEDD600B2F (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___value0, const RuntimeMethod* method)
{
	{
		// public RuleContainer TargetValidity { get; set; }
		RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * L_0 = ___value0;
		__this->set_targetValidity_8(L_0);
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VirtActionInvoker0::Invoke(8 /* System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterTargetValidityChange() */, __this);
	}

IL_001c:
	{
		return;
	}
}
// VRTK.Prefabs.Pointers.PointerConfigurator VRTK.Prefabs.Pointers.PointerFacade::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public PointerConfigurator Configuration { get; protected set; }
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = __this->get_configuration_15();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::set_Configuration(VRTK.Prefabs.Pointers.PointerConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_set_Configuration_m83F3566104CAA2C1BC4697D9FEB82EFDFFE51D41 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerConfigurator Configuration { get; protected set; }
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = ___value0;
		__this->set_configuration_15(L_0);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterFollowSourceChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterFollowSourceChange_mA2E2F439812A4112DD8624C8C49333A0AF440018 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureFollowSources();
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureFollowSources() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterActivationActionChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterActivationActionChange_m36DB652A4371307D3831A8CAE540CB3E3FF372A9 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureActivationAction();
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureActivationAction() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterSelectionActionChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterSelectionActionChange_m3DAB359160EE25FB46BD2B060B6C6348F2D90741 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureSelectionAction();
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureSelectionAction() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterSelectionMethodChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterSelectionMethodChange_mB664D55F37AEDFDC8720664481C0B4047D8336B1 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureSelectionType();
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureSelectionType() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::OnAfterTargetValidityChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_OnAfterTargetValidityChange_m32BF5745DBFA59F57F67F76067076890D1312084 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// Configuration.ConfigureTargetValidity();
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void VRTK.Prefabs.Pointers.PointerConfigurator::ConfigureTargetValidity() */, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade__ctor_mA7A1DB3B0DA8B9D3368585B386391B2E91CB7A4A (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerFacade__ctor_mA7A1DB3B0DA8B9D3368585B386391B2E91CB7A4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectPointer.UnityEvent Activated = new ObjectPointer.UnityEvent();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_0 = (UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 *)il2cpp_codegen_object_new(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7_il2cpp_TypeInfo_var);
		UnityEvent__ctor_mD445F9523EECD867FC62A5AA0B6EDAE297866861(L_0, /*hidden argument*/NULL);
		__this->set_Activated_9(L_0);
		// public ObjectPointer.UnityEvent Deactivated = new ObjectPointer.UnityEvent();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_1 = (UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 *)il2cpp_codegen_object_new(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7_il2cpp_TypeInfo_var);
		UnityEvent__ctor_mD445F9523EECD867FC62A5AA0B6EDAE297866861(L_1, /*hidden argument*/NULL);
		__this->set_Deactivated_10(L_1);
		// public ObjectPointer.UnityEvent Entered = new ObjectPointer.UnityEvent();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_2 = (UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 *)il2cpp_codegen_object_new(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7_il2cpp_TypeInfo_var);
		UnityEvent__ctor_mD445F9523EECD867FC62A5AA0B6EDAE297866861(L_2, /*hidden argument*/NULL);
		__this->set_Entered_11(L_2);
		// public ObjectPointer.UnityEvent Exited = new ObjectPointer.UnityEvent();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_3 = (UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 *)il2cpp_codegen_object_new(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7_il2cpp_TypeInfo_var);
		UnityEvent__ctor_mD445F9523EECD867FC62A5AA0B6EDAE297866861(L_3, /*hidden argument*/NULL);
		__this->set_Exited_12(L_3);
		// public ObjectPointer.UnityEvent HoverChanged = new ObjectPointer.UnityEvent();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_4 = (UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 *)il2cpp_codegen_object_new(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7_il2cpp_TypeInfo_var);
		UnityEvent__ctor_mD445F9523EECD867FC62A5AA0B6EDAE297866861(L_4, /*hidden argument*/NULL);
		__this->set_HoverChanged_13(L_4);
		// public ObjectPointer.UnityEvent Selected = new ObjectPointer.UnityEvent();
		UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 * L_5 = (UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7 *)il2cpp_codegen_object_new(UnityEvent_t826F15F7D5DCAE19512748F18211F3D538B203D7_il2cpp_TypeInfo_var);
		UnityEvent__ctor_mD445F9523EECD867FC62A5AA0B6EDAE297866861(L_5, /*hidden argument*/NULL);
		__this->set_Selected_14(L_5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::ClearFollowSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearFollowSource_m0BC55394D44EC04E419618246B74A71791DE4F09 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		PointerFacade_set_FollowSource_mED328949F4A97A341DFD031164F14C5A6B4E9627(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::ClearActivationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearActivationAction_m9C7B14876607CABB83ED686BCC5F7062A1BD593D (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		PointerFacade_set_ActivationAction_m3C4F6F1CF471CC124C27839A18AD290082F9A83A(__this, (BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::ClearSelectionAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearSelectionAction_m3AAA89C096EE05036FDF980EA9E172089689D1F8 (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		PointerFacade_set_SelectionAction_m6D50D8B41A472D7FB8A54FB31B352134A84E5FA2(__this, (BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacade::ClearTargetValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacade_ClearTargetValidity_mC492028E37E2C1E75447B75F3362AF086AF7558D (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		PointerFacade_set_TargetValidity_mE90C17C0426E352F6CEFADC28DED61BEDD600B2F(__this, (RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 *)NULL, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = __this->get_source_6();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::set_Source(VRTK.Prefabs.Pointers.PointerFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_set_Source_m2BE573875F4530FC178290CBC2426DAFC558712A (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = ___value0;
		__this->set_source_6(L_0);
		return;
	}
}
// VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor_PointerComponentType VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::get_PointerComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerFacadeComponentGameObjectExtractor_get_PointerComponent_mD46ADC787B66A412844C626B198030B821E96914 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method)
{
	{
		// public PointerComponentType PointerComponent { get; set; } = PointerComponentType.Caster;
		int32_t L_0 = __this->get_pointerComponent_7();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::set_PointerComponent(VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor_PointerComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_set_PointerComponent_mC3F2F1AE5E98BC6815C8C7E92AADF9630349FE49 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerComponentType PointerComponent { get; set; } = PointerComponentType.Caster;
		int32_t L_0 = ___value0;
		__this->set_pointerComponent_7(L_0);
		return;
	}
}
// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::Extract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacadeComponentGameObjectExtractor_Extract_m2F611940BFBD28F0B4DCE755F2106DD3F0C27507 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerFacadeComponentGameObjectExtractor_Extract_m2F611940BFBD28F0B4DCE755F2106DD3F0C27507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Result = null;
		GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		// if (Source == null)
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0017:
	{
		// switch (PointerComponent)
		int32_t L_2 = PointerFacadeComponentGameObjectExtractor_get_PointerComponent_mD46ADC787B66A412844C626B198030B821E96914_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_009a;
			}
		}
	}
	{
		goto IL_00bc;
	}

IL_0039:
	{
		// Result = Source.Configuration.Caster.gameObject;
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_4 = PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_5 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * L_6 = PointerConfigurator_get_Caster_mF5719A125B7AB40257C3E0A611FE6080E55E1C0A_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline(__this, L_7, /*hidden argument*/NULL);
		// break;
		goto IL_00be;
	}

IL_0056:
	{
		// Result = Source.Configuration.ObjectPointer.Origin.gameObject;
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_8 = PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_9 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * L_10 = PointerConfigurator_get_ObjectPointer_m4DAA1F78069E49D7F94F1ABC8B343C28F281E272_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * L_11 = ObjectPointer_get_Origin_m62CFE9143B4F9BEADECC2AC96C6B1CBD47E0038F_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_11, /*hidden argument*/NULL);
		GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline(__this, L_12, /*hidden argument*/NULL);
		// break;
		goto IL_00be;
	}

IL_0078:
	{
		// Result = Source.Configuration.ObjectPointer.RepeatedSegment.gameObject;
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_13 = PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_14 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * L_15 = PointerConfigurator_get_ObjectPointer_m4DAA1F78069E49D7F94F1ABC8B343C28F281E272_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * L_16 = ObjectPointer_get_RepeatedSegment_mB25014CED2CCFFD6CA7402EEE42AD86A94CD6499_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_16, /*hidden argument*/NULL);
		GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline(__this, L_17, /*hidden argument*/NULL);
		// break;
		goto IL_00be;
	}

IL_009a:
	{
		// Result = Source.Configuration.ObjectPointer.Destination.gameObject;
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_18 = PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_19 = PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * L_20 = PointerConfigurator_get_ObjectPointer_m4DAA1F78069E49D7F94F1ABC8B343C28F281E272_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * L_21 = ObjectPointer_get_Destination_m2A397076A2C570785A986E583277E065B8C1EBDC_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_21, /*hidden argument*/NULL);
		GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline(__this, L_22, /*hidden argument*/NULL);
		// break;
		goto IL_00be;
	}

IL_00bc:
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_00be:
	{
		// return base.Extract();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = GameObjectExtractor_Extract_mCBD42E429B3742E7A0ACE41EF54135C1E36F6D0D(__this, /*hidden argument*/NULL);
		return L_23;
	}
}
// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::Extract(VRTK.Prefabs.Pointers.PointerFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacadeComponentGameObjectExtractor_Extract_mACD22A840910C60075DC7BD900F1173AE15ECDE2 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___facade0, const RuntimeMethod* method)
{
	{
		// Source = facade;
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = ___facade0;
		PointerFacadeComponentGameObjectExtractor_set_Source_m2BE573875F4530FC178290CBC2426DAFC558712A_inline(__this, L_0, /*hidden argument*/NULL);
		// return Extract();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* UnityEngine.GameObject Zinnia.Data.Operation.Extraction.GameObjectExtractor::Extract() */, __this);
		return L_1;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::DoExtract(VRTK.Prefabs.Pointers.PointerFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_DoExtract_mFE8271A8388EC77A64EB20B89254EED9831CF8C0 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___facade0, const RuntimeMethod* method)
{
	{
		// Extract(facade);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = ___facade0;
		VirtFuncInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * >::Invoke(6 /* UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::Extract(VRTK.Prefabs.Pointers.PointerFacade) */, __this, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::SetSource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_SetSource_m4562E8CA902D148380B413CCF047C66D91516EA1 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerFacadeComponentGameObjectExtractor_SetSource_m4562E8CA902D148380B413CCF047C66D91516EA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		bool L_2 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Source = source.TryGetComponent<PointerFacade>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___source0;
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_4 = GameObjectExtensions_TryGetComponent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mE61E75BB056160A4DD0AC11029BF93EDA35C364E(L_3, (bool)0, (bool)0, /*hidden argument*/GameObjectExtensions_TryGetComponent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mE61E75BB056160A4DD0AC11029BF93EDA35C364E_RuntimeMethod_var);
		PointerFacadeComponentGameObjectExtractor_set_Source_m2BE573875F4530FC178290CBC2426DAFC558712A_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor__ctor_m2EB0D6AA472B82903F23E7B6C0D94565281C5201 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method)
{
	{
		GameObjectExtractor__ctor_m89686D340E32A8E6D234121990FAEE7947EF96A9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeComponentGameObjectExtractor::ClearSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_ClearSource_mECEA91B492A38A07FEA474BA29B35E2588B8B408 (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method)
{
	{
		PointerFacadeComponentGameObjectExtractor_set_Source_m2BE573875F4530FC178290CBC2426DAFC558712A_inline(__this, (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 *)NULL, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// VRTK.Prefabs.Pointers.PointerFacade VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerFacadeGameObjectExtractor_get_Source_m71F7AB61BFEF04B89891A64CF39E5786E1A9317E (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = __this->get_source_6();
		return L_0;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::set_Source(VRTK.Prefabs.Pointers.PointerFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_set_Source_m230E89299C37B0A89F9D6678BE6C19F95FB15F82 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = ___value0;
		__this->set_source_6(L_0);
		return;
	}
}
// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::Extract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacadeGameObjectExtractor_Extract_m79B835F478988E63911848B5FAA52A69680C6DA8 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerFacadeGameObjectExtractor_Extract_m79B835F478988E63911848B5FAA52A69680C6DA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Source == null)
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = PointerFacadeGameObjectExtractor_get_Source_m71F7AB61BFEF04B89891A64CF39E5786E1A9317E_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Result = null;
		GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0017:
	{
		// Result = Source.gameObject;
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_2 = PointerFacadeGameObjectExtractor_get_Source_m71F7AB61BFEF04B89891A64CF39E5786E1A9317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline(__this, L_3, /*hidden argument*/NULL);
		// return base.Extract();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObjectExtractor_Extract_mCBD42E429B3742E7A0ACE41EF54135C1E36F6D0D(__this, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::Extract(Zinnia.Data.Type.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacadeGameObjectExtractor_Extract_m2FDFACE88E4E61AAEB8011278C6055054D952A80 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * ___data0, const RuntimeMethod* method)
{
	{
		// SetSource(data);
		SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * L_0 = ___data0;
		VirtActionInvoker1< SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * >::Invoke(10 /* System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		// return Extract();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* UnityEngine.GameObject Zinnia.Data.Operation.Extraction.GameObjectExtractor::Extract() */, __this);
		return L_1;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::DoExtract(Zinnia.Data.Type.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_DoExtract_m44059D09D38F96C6DA500250E67A3F88E5299148 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * ___data0, const RuntimeMethod* method)
{
	{
		// Extract(data);
		SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * L_0 = ___data0;
		VirtFuncInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * >::Invoke(6 /* UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::Extract(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::Extract(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacadeGameObjectExtractor_Extract_m6CD941C33DFDC5DF29CD623A57817629A2538967 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___data0, const RuntimeMethod* method)
{
	{
		// return Extract((SurfaceData)data);
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_0 = ___data0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = VirtFuncInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * >::Invoke(6 /* UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::Extract(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		return L_1;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::DoExtract(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_DoExtract_m5C8499F98D3239BC54860C428BA8A639031A84DF (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___data0, const RuntimeMethod* method)
{
	{
		// Extract(data);
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_0 = ___data0;
		VirtFuncInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * >::Invoke(8 /* UnityEngine.GameObject VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::Extract(Zinnia.Pointer.ObjectPointer/EventData) */, __this, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Data.Type.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_SetSource_mD0BF40E58A5A8F39CA0BD72F03AC472212BE5352 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerFacadeGameObjectExtractor_SetSource_mD0BF40E58A5A8F39CA0BD72F03AC472212BE5352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// if (source == null || source.Transform == null)
		SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * L_3 = ___source0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * L_4 = ___source0;
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = TransformData_get_Transform_mC917955F34EA21843F2826F3F3D3E55467C60B18_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}

IL_0026:
	{
		// return;
		return;
	}

IL_0027:
	{
		// Source = source.Transform.GetComponentInParent<PointerFacade>();
		SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * L_7 = ___source0;
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = TransformData_get_Transform_mC917955F34EA21843F2826F3F3D3E55467C60B18_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_9 = Component_GetComponentInParent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mBE4257D12D20C29507E20D2F9EAAEDDD0859F14B(L_8, /*hidden argument*/Component_GetComponentInParent_TisPointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87_mBE4257D12D20C29507E20D2F9EAAEDDD0859F14B_RuntimeMethod_var);
		PointerFacadeGameObjectExtractor_set_Source_m230E89299C37B0A89F9D6678BE6C19F95FB15F82_inline(__this, L_9, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Pointer.ObjectPointer_EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_SetSource_mDE9CD6EB1FABD7D32340AE6689AC950B7D8661F8 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * ___source0, const RuntimeMethod* method)
{
	{
		// SetSource((SurfaceData)source);
		EventData_t505D47E6AB53C2FAB9A5B7E390543DE457BCA903 * L_0 = ___source0;
		VirtActionInvoker1< SurfaceData_tE979F3D748208056C26A05B84E88F00CEB8EDF5E * >::Invoke(10 /* System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::SetSource(Zinnia.Data.Type.SurfaceData) */, __this, L_0);
		// }
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor__ctor_m4704D22A3AA257C7EDB09454E61013B041C4A931 (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, const RuntimeMethod* method)
{
	{
		GameObjectExtractor__ctor_m89686D340E32A8E6D234121990FAEE7947EF96A9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRTK.Prefabs.Pointers.PointerFacadeGameObjectExtractor::ClearSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_ClearSource_mF7B11F14381C99AD6755322D63115120722A76AA (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, const RuntimeMethod* method)
{
	{
		PointerFacadeGameObjectExtractor_set_Source_m230E89299C37B0A89F9D6678BE6C19F95FB15F82_inline(__this, (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * PlayAreaRepresentationConfigurator_get_ObjectScaler_m8AA2B1D48AB360964907E677D31E10D34A9C5AA9_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformScaleMutator ObjectScaler { get; protected set; }
		TransformScaleMutator_t973302266C6C6E078C7F9CF536FCFE6ABDF10C26 * L_0 = __this->get_objectScaler_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * PlayAreaRepresentationConfigurator_get_Facade_mE38E145023A92C448CE569D541AB2FD32E13D02C_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public PlayAreaRepresentationFacade Facade { get; protected set; }
		PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * L_0 = __this->get_facade_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_Target_mF670FB0FCECA698065D47124A0156EEE4BC1E91B_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Target { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_target_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransformPropertyMutator_set_Target_m2F275C86F84D89EFC90CDD407F750EFEA11D907F_inline (TransformPropertyMutator_tED92C2E87BBFB2665651F74C35A29D3E4421C9FB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Target { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_target_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * PlayAreaRepresentationConfigurator_get_ObjectPositioner_m93F2D74A143918FE1F927C2361074367FD2D0571_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformPositionMutator ObjectPositioner { get; protected set; }
		TransformPositionMutator_tF2F4F8543476B29DD4B5C7CCC414593680CDBBC3 * L_0 = __this->get_objectPositioner_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * PlayAreaRepresentationConfigurator_get_OffsetOriginExtractor_m59B4370F922FE7988EE02B9987596920D5C3347C_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformPositionExtractor OffsetOriginExtractor { get; protected set; }
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = __this->get_offsetOriginExtractor_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_OffsetOrigin_m06A99D6D09B982206B708D364134FF4ED20DD97E_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject OffsetOrigin { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_offsetOrigin_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * PlayAreaRepresentationConfigurator_get_OffsetDestinationExtractor_m3077C32656A5C8638DFF42798B3F4086FB8756AB_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public TransformPositionExtractor OffsetDestinationExtractor { get; protected set; }
		TransformPositionExtractor_t79DFC1CAF8E395E8CFB756FA3CE46F4AB636A76B * L_0 = __this->get_offsetDestinationExtractor_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlayAreaRepresentationFacade_get_OffsetDestination_mAD23368E9F9A7452B3FE98576D991A0772F74500_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject OffsetDestination { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_offsetDestination_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * PlayAreaRepresentationConfigurator_get_DimensionExtractor_m484E9CB74C47130148C13969B204DC1411799926_inline (PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * __this, const RuntimeMethod* method)
{
	{
		// public PlayAreaDimensionsExtractor DimensionExtractor { get; protected set; }
		PlayAreaDimensionsExtractor_tCB4E2C67B7E4856E3C4CF0762AED8F586E409686 * L_0 = __this->get_dimensionExtractor_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * PlayAreaRepresentationFacade_get_Configuration_m92692360AAF851EE3FAD21E8E5792380633E7556_inline (PlayAreaRepresentationFacade_t2F078FA1840C93B29989151E7B5C2BB6EAA179C9 * __this, const RuntimeMethod* method)
{
	{
		// public PlayAreaRepresentationConfigurator Configuration { get; protected set; }
		PlayAreaRepresentationConfigurator_tC7EB71DC0D91B9D2A5254A1E2D52FFA9140F857E * L_0 = __this->get_configuration_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * PointerConfigurator_get_Caster_mF5719A125B7AB40257C3E0A611FE6080E55E1C0A_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public PointsCast Caster { get; protected set; }
		PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * L_0 = __this->get_caster_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerConfigurator_get_Facade_m18482C65C1ED6ED699191E0597885C98E4836E2E_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public PointerFacade Facade { get; protected set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = __this->get_facade_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * PointerFacade_get_TargetValidity_m08AC94749064A015AC900252F0EEFA00C1BE2677_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public RuleContainer TargetValidity { get; set; }
		RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * L_0 = __this->get_targetValidity_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointsCast_set_TargetValidity_m15EE5BD16BE14FB16861EF701EBE5D829FAF23D6_inline (PointsCast_t320FDBDFC0709B4973D3D2D0A755F911BFFA19EE * __this, RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * ___value0, const RuntimeMethod* method)
{
	{
		// public RuleContainer TargetValidity { get; set; }
		RuleContainer_t9FCE5A651B6C23CD9FA364312BE9AFE195AEABE4 * L_0 = ___value0;
		__this->set_targetValidity_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * PointerConfigurator_get_ObjectFollow_m94F9AEAA1AAE024D07439CDCBB2A9CA26C8916A8_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public ObjectFollower ObjectFollow { get; protected set; }
		ObjectFollower_t52ABA102C1B541BDC721839440478EA35C7C819A * L_0 = __this->get_objectFollow_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * GameObjectSourceTargetProcessor_get_Sources_mC909A41A412F13CF1F251FFFA9D88F49AC0C323F_inline (GameObjectSourceTargetProcessor_t4E8A8D2B58A3AC833D38980BD715441E35EC6CD2 * __this, const RuntimeMethod* method)
{
	{
		// public GameObjectObservableList Sources { get; set; }
		GameObjectObservableList_t23228977EBBDB84E649D9DCAB7AE56F55C881C68 * L_0 = __this->get_sources_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PointerFacade_get_FollowSource_mC5EEC56A59FF9ECD2C613D521943034846F9A288_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FollowSource { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_followSource_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_SelectOnActivatedAction_mCB65EF0F77E4487903C87412BEFDD3964D34A0E0_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectOnActivatedAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_selectOnActivatedAction_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_SelectOnDeactivatedAction_m940794613BAB1D024536995412460973A4198054_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectOnDeactivatedAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_selectOnDeactivatedAction_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerFacade_get_SelectionAction_mA3DDFC25DEEA1CACDF506F84B5ABD98E117F811D_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction SelectionAction { get; set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_selectionAction_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerConfigurator_get_ActivationAction_m5B37A7014FAE8AB42C466024404D416544F57CCB_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction ActivationAction { get; protected set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_activationAction_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * PointerFacade_get_ActivationAction_m8063A86D15B3919E8F33CFCBB7F4916849FE40BB_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public BooleanAction ActivationAction { get; set; }
		BooleanAction_t51EB001123E93B0C0378DE303FB741BE10325869 * L_0 = __this->get_activationAction_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PointerFacade_get_SelectionMethod_m2E3919D134A5A4361B592CC31752D2D8FC8F60A1_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public SelectionType SelectionMethod { get; set; }
		int32_t L_0 = __this->get_selectionMethod_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * PointerFacade_get_Configuration_m0662C9A6DC85693967B4E63483FD5470F5807C6D_inline (PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * __this, const RuntimeMethod* method)
{
	{
		// public PointerConfigurator Configuration { get; protected set; }
		PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * L_0 = __this->get_configuration_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameObjectExtractor_set_Result_m14826BE75EF74A48FB09D57452F468838E77D4C0_inline (GameObjectExtractor_tE9949676EA938343AA41E28009DC6BB56D0C6C95 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Result { get; protected set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerFacadeComponentGameObjectExtractor_get_Source_mFE740573DF7DC373F6F028957538D801636470E6_inline (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = __this->get_source_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PointerFacadeComponentGameObjectExtractor_get_PointerComponent_mD46ADC787B66A412844C626B198030B821E96914_inline (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, const RuntimeMethod* method)
{
	{
		// public PointerComponentType PointerComponent { get; set; } = PointerComponentType.Caster;
		int32_t L_0 = __this->get_pointerComponent_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * PointerConfigurator_get_ObjectPointer_m4DAA1F78069E49D7F94F1ABC8B343C28F281E272_inline (PointerConfigurator_tB9A212F219E80C4BDBCCC06047BD44072B619C83 * __this, const RuntimeMethod* method)
{
	{
		// public ObjectPointer ObjectPointer { get; protected set; }
		ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * L_0 = __this->get_objectPointer_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ObjectPointer_get_Origin_m62CFE9143B4F9BEADECC2AC96C6B1CBD47E0038F_inline (ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * __this, const RuntimeMethod* method)
{
	{
		// public PointerElement Origin { get; set; }
		PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * L_0 = __this->get_origin_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ObjectPointer_get_RepeatedSegment_mB25014CED2CCFFD6CA7402EEE42AD86A94CD6499_inline (ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * __this, const RuntimeMethod* method)
{
	{
		// public PointerElement RepeatedSegment { get; set; }
		PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * L_0 = __this->get_repeatedSegment_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * ObjectPointer_get_Destination_m2A397076A2C570785A986E583277E065B8C1EBDC_inline (ObjectPointer_t1AD733E63C4CF8BEA5C145FBD3074911BBD1B3E5 * __this, const RuntimeMethod* method)
{
	{
		// public PointerElement Destination { get; set; }
		PointerElement_tC06A6FB1A169204C48CAAEEEC8F60DFE9D77BBAE * L_0 = __this->get_destination_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointerFacadeComponentGameObjectExtractor_set_Source_m2BE573875F4530FC178290CBC2426DAFC558712A_inline (PointerFacadeComponentGameObjectExtractor_t3FC7C484638DD250ADDA8CE9D7A3F2AC5AE0D4E1 * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = ___value0;
		__this->set_source_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * PointerFacadeGameObjectExtractor_get_Source_m71F7AB61BFEF04B89891A64CF39E5786E1A9317E_inline (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = __this->get_source_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * TransformData_get_Transform_mC917955F34EA21843F2826F3F3D3E55467C60B18_inline (TransformData_t406F41E00B618673F97105B3DB8C03FD379174C0 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Transform { get; set; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_transform_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointerFacadeGameObjectExtractor_set_Source_m230E89299C37B0A89F9D6678BE6C19F95FB15F82_inline (PointerFacadeGameObjectExtractor_tB20E1B1C0704F551EFF2FB236EA13775DEF80D7A * __this, PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerFacade Source { get; set; }
		PointerFacade_t9FC8F68B674348A98903D374391AE4C488672A87 * L_0 = ___value0;
		__this->set_source_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TransformPropertyExtractor_2_set_Source_mACCBD967420113F4B12461B083B9E73B6F3FF4E1_gshared_inline (TransformPropertyExtractor_2_t9967FF77B2ACD989E7FCDA26C5BCAF3AD6205ABB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Source { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_source_4(L_0);
		return;
	}
}
