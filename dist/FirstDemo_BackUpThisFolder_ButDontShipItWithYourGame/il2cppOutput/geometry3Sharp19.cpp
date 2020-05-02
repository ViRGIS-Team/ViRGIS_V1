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

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t429E4750D84EBAC7EB494EB565EE0C8E1177C576;
// System.Action`2<g3.Remesher,System.Boolean>
struct Action_2_tA04000E22AE4BB80358647073628729031416298;
// System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32>
struct Action_4_tA3A7515617FB121D078F6AFFFC27CE76F2D28E6F;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.BitArray
struct BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t3D1E0789C91B455986C552F9C0EAC57810A8E165;
// System.Collections.Generic.Dictionary`2<System.Int32,g3.DMeshAABBTree3/FWNInfo>
struct Dictionary_2_t1AF426DB7EB5CFCB772DA430A7D307F2EBFD2811;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27;
// System.Collections.Generic.IEnumerator`1<g3.EdgeLoop>
struct IEnumerator_1_tEC2AC59EA398C1CC06ED77F4F1F3453AF23EE79C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t946CA250FDCDAF3493418F5354C7D62897FA0DE8;
// System.Collections.Generic.List`1<System.Double[]>
struct List_1_t4983F9F479080DD3F55B2BB2B5298ABBE8C5AD07;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<g3.EdgeLoop>
struct List_1_tFA1FAB9FE0A645449348BF147AD429C2F42A856B;
// System.Collections.Generic.List`1<g3.EdgeSpan>
struct List_1_t504829E47155B26456BF03FF32D012F5FB76A991;
// System.Collections.Generic.List`1<g3.Index2i>
struct List_1_tBAF3A9D9CD5E2CEC8D440E7C718B4D98162A97F5;
// System.Collections.Generic.List`1<g3.Vector3d>
struct List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6;
// System.Collections.Generic.List`1<g3.Vector3d[]>
struct List_1_tFA893745999A90895ABC32BC813CE0F693CEC8D0;
// System.Collections.Generic.List`1<gs.RemesherPro/SettingState>
struct List_1_t334DA225737840AAFF235B29CBE2258BB838B32D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Exception
struct Exception_t;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513;
// System.Func`2<System.Int32,System.Int32Enum>
struct Func_2_t60396AB01CC26332B95927AF78E75881609E4F58;
// System.Func`2<System.Int32,g3.Remesher/VertexControl>
struct Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881;
// System.Func`2<System.Int32,g3.Vector3d>
struct Func_2_tE513A1AF963327E6A947E9414F3E6D0BF130C831;
// System.Func`2<g3.Vector3d,System.Boolean>
struct Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE;
// System.Func`4<g3.DMesh3,System.Int32,System.Double,g3.Vector3d>
struct Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0;
// System.Func`4<g3.Vector3d,g3.Vector3f,System.Int32,g3.Vector3d>
struct Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// g3.DMesh3
struct DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF;
// g3.DMeshAABBTree3
struct DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5;
// g3.DSparseGrid3`1<gs.PointSetHashtable/PointList>
struct DSparseGrid3_1_t413FBDEE5A71ECEBC6EC3063C91E234C223DC514;
// g3.DSubmesh3
struct DSubmesh3_tF77FDDA481275AFFF11915C2479521474496C17F;
// g3.DVector`1<System.Double>
struct DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD;
// g3.DVector`1<System.Int32>
struct DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148;
// g3.DVector`1<System.Single>
struct DVector_1_tC990B04803675946897F5CBC80C42846A2C53244;
// g3.DVector`1<g3.Vector3d>
struct DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0;
// g3.DVector`1<g3.Vector3f>
struct DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D;
// g3.EdgeLoop
struct EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78;
// g3.ICancelSource
struct ICancelSource_tBFCB46AE21BBC25426B25ACBFD10724B08983533;
// g3.IMesh
struct IMesh_tA50EA1B4A28B7D9852D6D286943857BA6F66E31E;
// g3.IOrientedProjectionTarget
struct IOrientedProjectionTarget_tFC987D02E0D0E865BA37CF1C43211B1BD6F66092;
// g3.IPointSet
struct IPointSet_t5615EB492642AA6CDC4725AB762F7F178ED52B6B;
// g3.IProjectionTarget
struct IProjectionTarget_tCAA15705FAC6E3FA80F45B815E60C66125C62D0E;
// g3.ISpatial
struct ISpatial_t0CB07966958AE0E7920250B39CD457E6327E8486;
// g3.IndexMap
struct IndexMap_tC0E8AC834E9C6764B171E6E62C8D00D331EFA320;
// g3.MeshBoundaryLoops
struct MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965;
// g3.MeshConstraints
struct MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5;
// g3.MeshEditor
struct MeshEditor_t803B18DB096694419E2850701CC6C204891107A7;
// g3.MeshExtrudeFaces
struct MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9;
// g3.MeshFaceSelection
struct MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C;
// g3.MeshNormals
struct MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8;
// g3.MeshProjectionTarget
struct MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A;
// g3.MeshRefinerBase
struct MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810;
// g3.MeshVertexSelection
struct MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770;
// g3.ProgressCancel
struct ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985;
// g3.RefCountVector
struct RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261;
// g3.RegionRemesher
struct RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67;
// g3.Remesher
struct Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B;
// g3.SimpleHoleFiller
struct SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412;
// g3.SmallListSet
struct SmallListSet_tA70B31A2AC7B46B6CC0FD6DA7CE0DF236AE670A0;
// g3.Vector3d[]
struct Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F;
// gs.IFalloffFunction
struct IFalloffFunction_t5185664A92783F5AD39CF1518810DFEF02C794BE;
// gs.PointSetHashtable
struct PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6;
// gs.RemesherPro
struct RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD;
// gs.RemesherPro/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF21F9087EE224C2B28BD2C9F58F8D6BFD9D2ECDE;
// gs.RemesherPro/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7C5B0E54A8B1BE63E020B09A35D55B8A30BE2321;
// gs.RemesherPro/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2;
// gs.RemesherPro/<EdgesIterator>d__5
struct U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019;
// gs.RemoveDuplicateTriangles
struct RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5;
// gs.RemoveDuplicateTriangles/TriCentroids
struct TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A;
// gs.RemoveOccludedTriangles
struct RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0;
// gs.RemoveOccludedTriangles/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365;
// gs.RemoveOccludedTriangles/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159;
// gs.SmoothedHoleFill
struct SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC;
// gs.WyvillFalloff
struct WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tEC2AC59EA398C1CC06ED77F4F1F3453AF23EE79C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOrientedProjectionTarget_tFC987D02E0D0E865BA37CF1C43211B1BD6F66092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathUtil_t3BDAEBEE154E83DA161BFF225648454779924181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshEditor_t803B18DB096694419E2850701CC6C204891107A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA2360AE301EAF78FC8B9C36C2D29B88FAEF45512;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m902D0B2B4B4B589E6F3653D9CDB38E0AA97EBCF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m42C746E84C832B62E93536A47B4086F3A3AC6609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m219EC3BCCD8CF3A474AD0C4DBA55EB9B74C9F89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mB4AEAAA5ECFFEB679BFBBC4ECFF4ECF260A93A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0C98AB08A6FF2F2C7D01A397415D2C03A70F116A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_4__ctor_m72CBD8C19269B9A8CC98AF706770E4A73298676D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m74CC97C62D3F061D26A7DDB7A61DF7DFD7806154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m314324CDEF8004C81A770D4629D221AF10B75B9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mF14D47C26E1EF9BF8920827E27A32B9E8E20D131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE721B3C5E137DCDB408BE05CA472EECBAAAA418A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA3F76539208E05E0772ADEE285AEB538FB0A7ADF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m705801E33957190A1590511EEFC8A454771A120A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1974BD117BED7D513FA718522E8D9A7621D91628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoveDuplicateTriangles_Apply_m91953CE5A3A6D7E39F2EECA2F4F82FCADD82010A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmoothedHoleFill_U3CApplyU3Eb__17_0_m34B8F07EE91E9ABAB45F882F9863457BF499B7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_Reset_mD95BD8EE4EE888794DA18C52C0AA1F8DB424192B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__0_m472EA79CB5357912EC2DB0B848B01DD2307DC003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__1_m7C9FE798944C8D5E984331EC676BBD07BF3EE5FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_1_U3CApplyU3Eb__2_m37E9FDADF811010220C0DD0210E1FDE2A07D0511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t RemoveDuplicateTriangles_Apply_m91953CE5A3A6D7E39F2EECA2F4F82FCADD82010A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoveOccludedTriangles_Apply_m5C5890E4F91292423708276DD962E4D3DEDB0834_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmoothedHoleFill_Apply_m542E69F746077B1CF88C325BE2360673FCE7C3EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmoothedHoleFill_U3CApplyU3Eb__17_0_m34B8F07EE91E9ABAB45F882F9863457BF499B7E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmoothedHoleFill__ctor_m0E4FDF337C8392FA7E20AC9B9D6F54D6997DC1F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmoothedHoleFill_select_loop_tris_hint_m8C92AE0C9A616E40B1C43EB84970A40B095C1F15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmoothedHoleFill_smooth_and_remesh_m1C62C0854DECE31BAAEC14FD35B7400B922665FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmoothedHoleFill_smooth_and_remesh_preserve_m9CD724D95A6FAD2F4BBFBB71ED412A6A8C1B428D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriCentroids_GetVertexColor_mD677323433BFE30190A80ED4F6E8D34B985F939F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriCentroids_GetVertexNormal_mAD40D154A73D95A51DC96AB7E06B45F4D022FB9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CEdgesIteratorU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m662702AE131603BBF1E1CA47A76AC85B36B3B0CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_Reset_mD95BD8EE4EE888794DA18C52C0AA1F8DB424192B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_get_Current_m1D24A520C2D4A32DCBA5C334B7DD426167DFF8D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__0_m472EA79CB5357912EC2DB0B848B01DD2307DC003_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__1_m7C9FE798944C8D5E984331EC676BBD07BF3EE5FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_1_U3CApplyU3Eb__2_m37E9FDADF811010220C0DD0210E1FDE2A07D0511_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass16_0_U3CFastSplitIterationU3Eb__0_m76944DD0FF9EDCD0F73CF3DC68F339970CB60462_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass18_0_U3CTrackedSmoothPassU3Eb__0_m45EB4313712E74F46D36A61C58DFD9FF6423BE82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass23_0_U3CTrackedFaceProjectionPassU3Eb__0_m051F80D76FBEC640640F9D4B84EAFC1179E383B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass23_0_U3CTrackedFaceProjectionPassU3Eb__1_m01336987466158AF5090D7B04A29CD7A28EC699E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WyvillFalloff_Duplicate_m83237739941B531CFFD569B552B78976895D9822_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WyvillFalloff_FalloffT_mFF0D0AD416EB601AA65A422A1436C796D41872C9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F;

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


// System.Collections.BitArray
struct  BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.BitArray::m_array
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_array_0;
	// System.Int32 System.Collections.BitArray::m_length
	int32_t ___m_length_1;
	// System.Int32 System.Collections.BitArray::_version
	int32_t ____version_2;
	// System.Object System.Collections.BitArray::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C, ___m_array_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_array_0() const { return ___m_array_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_length_1() { return static_cast<int32_t>(offsetof(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C, ___m_length_1)); }
	inline int32_t get_m_length_1() const { return ___m_length_1; }
	inline int32_t* get_address_of_m_length_1() { return &___m_length_1; }
	inline void set_m_length_1(int32_t value)
	{
		___m_length_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Int32>
struct  HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____slots_8)); }
	inline SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<g3.Vector3d>
struct  List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6, ____items_1)); }
	inline Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F* get__items_1() const { return ____items_1; }
	inline Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6_StaticFields, ____emptyArray_5)); }
	inline Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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

// g3.DMeshAABBTree3
struct  DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.DMeshAABBTree3::mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh_0;
	// System.Int32 g3.DMeshAABBTree3::mesh_timestamp
	int32_t ___mesh_timestamp_1;
	// System.Func`2<System.Int32,System.Boolean> g3.DMeshAABBTree3::TriangleFilterF
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___TriangleFilterF_2;
	// System.Int32 g3.DMeshAABBTree3::TopDownLeafMaxTriCount
	int32_t ___TopDownLeafMaxTriCount_3;
	// System.Int32 g3.DMeshAABBTree3::BottomUpClusterLookahead
	int32_t ___BottomUpClusterLookahead_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> g3.DMeshAABBTree3::WindingCache
	Dictionary_2_t3D1E0789C91B455986C552F9C0EAC57810A8E165 * ___WindingCache_5;
	// System.Int32 g3.DMeshAABBTree3::winding_cache_timestamp
	int32_t ___winding_cache_timestamp_6;
	// System.Double g3.DMeshAABBTree3::FWNBeta
	double ___FWNBeta_7;
	// System.Int32 g3.DMeshAABBTree3::FWNApproxOrder
	int32_t ___FWNApproxOrder_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,g3.DMeshAABBTree3_FWNInfo> g3.DMeshAABBTree3::FastWindingCache
	Dictionary_2_t1AF426DB7EB5CFCB772DA430A7D307F2EBFD2811 * ___FastWindingCache_9;
	// System.Int32 g3.DMeshAABBTree3::fast_winding_cache_timestamp
	int32_t ___fast_winding_cache_timestamp_10;
	// g3.DVector`1<System.Int32> g3.DMeshAABBTree3::box_to_index
	DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * ___box_to_index_11;
	// g3.DVector`1<g3.Vector3f> g3.DMeshAABBTree3::box_centers
	DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D * ___box_centers_12;
	// g3.DVector`1<g3.Vector3f> g3.DMeshAABBTree3::box_extents
	DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D * ___box_extents_13;
	// g3.DVector`1<System.Int32> g3.DMeshAABBTree3::index_list
	DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * ___index_list_14;
	// System.Int32 g3.DMeshAABBTree3::triangles_end
	int32_t ___triangles_end_15;
	// System.Int32 g3.DMeshAABBTree3::root_index
	int32_t ___root_index_16;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_mesh_0() const { return ___mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_timestamp_1() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___mesh_timestamp_1)); }
	inline int32_t get_mesh_timestamp_1() const { return ___mesh_timestamp_1; }
	inline int32_t* get_address_of_mesh_timestamp_1() { return &___mesh_timestamp_1; }
	inline void set_mesh_timestamp_1(int32_t value)
	{
		___mesh_timestamp_1 = value;
	}

	inline static int32_t get_offset_of_TriangleFilterF_2() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___TriangleFilterF_2)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_TriangleFilterF_2() const { return ___TriangleFilterF_2; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_TriangleFilterF_2() { return &___TriangleFilterF_2; }
	inline void set_TriangleFilterF_2(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___TriangleFilterF_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TriangleFilterF_2), (void*)value);
	}

	inline static int32_t get_offset_of_TopDownLeafMaxTriCount_3() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___TopDownLeafMaxTriCount_3)); }
	inline int32_t get_TopDownLeafMaxTriCount_3() const { return ___TopDownLeafMaxTriCount_3; }
	inline int32_t* get_address_of_TopDownLeafMaxTriCount_3() { return &___TopDownLeafMaxTriCount_3; }
	inline void set_TopDownLeafMaxTriCount_3(int32_t value)
	{
		___TopDownLeafMaxTriCount_3 = value;
	}

	inline static int32_t get_offset_of_BottomUpClusterLookahead_4() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___BottomUpClusterLookahead_4)); }
	inline int32_t get_BottomUpClusterLookahead_4() const { return ___BottomUpClusterLookahead_4; }
	inline int32_t* get_address_of_BottomUpClusterLookahead_4() { return &___BottomUpClusterLookahead_4; }
	inline void set_BottomUpClusterLookahead_4(int32_t value)
	{
		___BottomUpClusterLookahead_4 = value;
	}

	inline static int32_t get_offset_of_WindingCache_5() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___WindingCache_5)); }
	inline Dictionary_2_t3D1E0789C91B455986C552F9C0EAC57810A8E165 * get_WindingCache_5() const { return ___WindingCache_5; }
	inline Dictionary_2_t3D1E0789C91B455986C552F9C0EAC57810A8E165 ** get_address_of_WindingCache_5() { return &___WindingCache_5; }
	inline void set_WindingCache_5(Dictionary_2_t3D1E0789C91B455986C552F9C0EAC57810A8E165 * value)
	{
		___WindingCache_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WindingCache_5), (void*)value);
	}

	inline static int32_t get_offset_of_winding_cache_timestamp_6() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___winding_cache_timestamp_6)); }
	inline int32_t get_winding_cache_timestamp_6() const { return ___winding_cache_timestamp_6; }
	inline int32_t* get_address_of_winding_cache_timestamp_6() { return &___winding_cache_timestamp_6; }
	inline void set_winding_cache_timestamp_6(int32_t value)
	{
		___winding_cache_timestamp_6 = value;
	}

	inline static int32_t get_offset_of_FWNBeta_7() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___FWNBeta_7)); }
	inline double get_FWNBeta_7() const { return ___FWNBeta_7; }
	inline double* get_address_of_FWNBeta_7() { return &___FWNBeta_7; }
	inline void set_FWNBeta_7(double value)
	{
		___FWNBeta_7 = value;
	}

	inline static int32_t get_offset_of_FWNApproxOrder_8() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___FWNApproxOrder_8)); }
	inline int32_t get_FWNApproxOrder_8() const { return ___FWNApproxOrder_8; }
	inline int32_t* get_address_of_FWNApproxOrder_8() { return &___FWNApproxOrder_8; }
	inline void set_FWNApproxOrder_8(int32_t value)
	{
		___FWNApproxOrder_8 = value;
	}

	inline static int32_t get_offset_of_FastWindingCache_9() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___FastWindingCache_9)); }
	inline Dictionary_2_t1AF426DB7EB5CFCB772DA430A7D307F2EBFD2811 * get_FastWindingCache_9() const { return ___FastWindingCache_9; }
	inline Dictionary_2_t1AF426DB7EB5CFCB772DA430A7D307F2EBFD2811 ** get_address_of_FastWindingCache_9() { return &___FastWindingCache_9; }
	inline void set_FastWindingCache_9(Dictionary_2_t1AF426DB7EB5CFCB772DA430A7D307F2EBFD2811 * value)
	{
		___FastWindingCache_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FastWindingCache_9), (void*)value);
	}

	inline static int32_t get_offset_of_fast_winding_cache_timestamp_10() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___fast_winding_cache_timestamp_10)); }
	inline int32_t get_fast_winding_cache_timestamp_10() const { return ___fast_winding_cache_timestamp_10; }
	inline int32_t* get_address_of_fast_winding_cache_timestamp_10() { return &___fast_winding_cache_timestamp_10; }
	inline void set_fast_winding_cache_timestamp_10(int32_t value)
	{
		___fast_winding_cache_timestamp_10 = value;
	}

	inline static int32_t get_offset_of_box_to_index_11() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___box_to_index_11)); }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * get_box_to_index_11() const { return ___box_to_index_11; }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 ** get_address_of_box_to_index_11() { return &___box_to_index_11; }
	inline void set_box_to_index_11(DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * value)
	{
		___box_to_index_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_to_index_11), (void*)value);
	}

	inline static int32_t get_offset_of_box_centers_12() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___box_centers_12)); }
	inline DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D * get_box_centers_12() const { return ___box_centers_12; }
	inline DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D ** get_address_of_box_centers_12() { return &___box_centers_12; }
	inline void set_box_centers_12(DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D * value)
	{
		___box_centers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_centers_12), (void*)value);
	}

	inline static int32_t get_offset_of_box_extents_13() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___box_extents_13)); }
	inline DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D * get_box_extents_13() const { return ___box_extents_13; }
	inline DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D ** get_address_of_box_extents_13() { return &___box_extents_13; }
	inline void set_box_extents_13(DVector_1_t67332A3D823AA531B5F7B5F70462476EB036DB6D * value)
	{
		___box_extents_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_extents_13), (void*)value);
	}

	inline static int32_t get_offset_of_index_list_14() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___index_list_14)); }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * get_index_list_14() const { return ___index_list_14; }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 ** get_address_of_index_list_14() { return &___index_list_14; }
	inline void set_index_list_14(DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * value)
	{
		___index_list_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___index_list_14), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_end_15() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___triangles_end_15)); }
	inline int32_t get_triangles_end_15() const { return ___triangles_end_15; }
	inline int32_t* get_address_of_triangles_end_15() { return &___triangles_end_15; }
	inline void set_triangles_end_15(int32_t value)
	{
		___triangles_end_15 = value;
	}

	inline static int32_t get_offset_of_root_index_16() { return static_cast<int32_t>(offsetof(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5, ___root_index_16)); }
	inline int32_t get_root_index_16() const { return ___root_index_16; }
	inline int32_t* get_address_of_root_index_16() { return &___root_index_16; }
	inline void set_root_index_16(int32_t value)
	{
		___root_index_16 = value;
	}
};


// g3.DVector`1<System.Double>
struct  DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T[]> g3.DVector`1::Blocks
	List_1_t4983F9F479080DD3F55B2BB2B5298ABBE8C5AD07 * ___Blocks_0;
	// System.Int32 g3.DVector`1::iCurBlock
	int32_t ___iCurBlock_1;
	// System.Int32 g3.DVector`1::iCurBlockUsed
	int32_t ___iCurBlockUsed_2;
	// System.Int32 g3.DVector`1::nBlockSize
	int32_t ___nBlockSize_3;

public:
	inline static int32_t get_offset_of_Blocks_0() { return static_cast<int32_t>(offsetof(DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD, ___Blocks_0)); }
	inline List_1_t4983F9F479080DD3F55B2BB2B5298ABBE8C5AD07 * get_Blocks_0() const { return ___Blocks_0; }
	inline List_1_t4983F9F479080DD3F55B2BB2B5298ABBE8C5AD07 ** get_address_of_Blocks_0() { return &___Blocks_0; }
	inline void set_Blocks_0(List_1_t4983F9F479080DD3F55B2BB2B5298ABBE8C5AD07 * value)
	{
		___Blocks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Blocks_0), (void*)value);
	}

	inline static int32_t get_offset_of_iCurBlock_1() { return static_cast<int32_t>(offsetof(DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD, ___iCurBlock_1)); }
	inline int32_t get_iCurBlock_1() const { return ___iCurBlock_1; }
	inline int32_t* get_address_of_iCurBlock_1() { return &___iCurBlock_1; }
	inline void set_iCurBlock_1(int32_t value)
	{
		___iCurBlock_1 = value;
	}

	inline static int32_t get_offset_of_iCurBlockUsed_2() { return static_cast<int32_t>(offsetof(DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD, ___iCurBlockUsed_2)); }
	inline int32_t get_iCurBlockUsed_2() const { return ___iCurBlockUsed_2; }
	inline int32_t* get_address_of_iCurBlockUsed_2() { return &___iCurBlockUsed_2; }
	inline void set_iCurBlockUsed_2(int32_t value)
	{
		___iCurBlockUsed_2 = value;
	}

	inline static int32_t get_offset_of_nBlockSize_3() { return static_cast<int32_t>(offsetof(DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD, ___nBlockSize_3)); }
	inline int32_t get_nBlockSize_3() const { return ___nBlockSize_3; }
	inline int32_t* get_address_of_nBlockSize_3() { return &___nBlockSize_3; }
	inline void set_nBlockSize_3(int32_t value)
	{
		___nBlockSize_3 = value;
	}
};


// g3.DVector`1<g3.Vector3d>
struct  DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T[]> g3.DVector`1::Blocks
	List_1_tFA893745999A90895ABC32BC813CE0F693CEC8D0 * ___Blocks_0;
	// System.Int32 g3.DVector`1::iCurBlock
	int32_t ___iCurBlock_1;
	// System.Int32 g3.DVector`1::iCurBlockUsed
	int32_t ___iCurBlockUsed_2;
	// System.Int32 g3.DVector`1::nBlockSize
	int32_t ___nBlockSize_3;

public:
	inline static int32_t get_offset_of_Blocks_0() { return static_cast<int32_t>(offsetof(DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0, ___Blocks_0)); }
	inline List_1_tFA893745999A90895ABC32BC813CE0F693CEC8D0 * get_Blocks_0() const { return ___Blocks_0; }
	inline List_1_tFA893745999A90895ABC32BC813CE0F693CEC8D0 ** get_address_of_Blocks_0() { return &___Blocks_0; }
	inline void set_Blocks_0(List_1_tFA893745999A90895ABC32BC813CE0F693CEC8D0 * value)
	{
		___Blocks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Blocks_0), (void*)value);
	}

	inline static int32_t get_offset_of_iCurBlock_1() { return static_cast<int32_t>(offsetof(DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0, ___iCurBlock_1)); }
	inline int32_t get_iCurBlock_1() const { return ___iCurBlock_1; }
	inline int32_t* get_address_of_iCurBlock_1() { return &___iCurBlock_1; }
	inline void set_iCurBlock_1(int32_t value)
	{
		___iCurBlock_1 = value;
	}

	inline static int32_t get_offset_of_iCurBlockUsed_2() { return static_cast<int32_t>(offsetof(DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0, ___iCurBlockUsed_2)); }
	inline int32_t get_iCurBlockUsed_2() const { return ___iCurBlockUsed_2; }
	inline int32_t* get_address_of_iCurBlockUsed_2() { return &___iCurBlockUsed_2; }
	inline void set_iCurBlockUsed_2(int32_t value)
	{
		___iCurBlockUsed_2 = value;
	}

	inline static int32_t get_offset_of_nBlockSize_3() { return static_cast<int32_t>(offsetof(DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0, ___nBlockSize_3)); }
	inline int32_t get_nBlockSize_3() const { return ___nBlockSize_3; }
	inline int32_t* get_address_of_nBlockSize_3() { return &___nBlockSize_3; }
	inline void set_nBlockSize_3(int32_t value)
	{
		___nBlockSize_3 = value;
	}
};


// g3.EdgeLoop
struct  EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.EdgeLoop::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// System.Int32[] g3.EdgeLoop::Vertices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___Vertices_1;
	// System.Int32[] g3.EdgeLoop::Edges
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___Edges_2;
	// System.Int32[] g3.EdgeLoop::BowtieVertices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___BowtieVertices_3;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Vertices_1() { return static_cast<int32_t>(offsetof(EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78, ___Vertices_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_Vertices_1() const { return ___Vertices_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_Vertices_1() { return &___Vertices_1; }
	inline void set_Vertices_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___Vertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Vertices_1), (void*)value);
	}

	inline static int32_t get_offset_of_Edges_2() { return static_cast<int32_t>(offsetof(EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78, ___Edges_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_Edges_2() const { return ___Edges_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_Edges_2() { return &___Edges_2; }
	inline void set_Edges_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___Edges_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Edges_2), (void*)value);
	}

	inline static int32_t get_offset_of_BowtieVertices_3() { return static_cast<int32_t>(offsetof(EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78, ___BowtieVertices_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_BowtieVertices_3() const { return ___BowtieVertices_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_BowtieVertices_3() { return &___BowtieVertices_3; }
	inline void set_BowtieVertices_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___BowtieVertices_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BowtieVertices_3), (void*)value);
	}
};


// g3.MeshEditor
struct  MeshEditor_t803B18DB096694419E2850701CC6C204891107A7  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.MeshEditor::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(MeshEditor_t803B18DB096694419E2850701CC6C204891107A7, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}
};


// g3.MeshFaceSelection
struct  MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.MeshFaceSelection::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// System.Collections.Generic.HashSet`1<System.Int32> g3.MeshFaceSelection::Selected
	HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * ___Selected_1;
	// System.Collections.Generic.List`1<System.Int32> g3.MeshFaceSelection::temp
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___temp_2;
	// System.Collections.Generic.List`1<System.Int32> g3.MeshFaceSelection::temp2
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___temp2_3;
	// System.Collections.BitArray g3.MeshFaceSelection::tempBits
	BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * ___tempBits_4;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Selected_1() { return static_cast<int32_t>(offsetof(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C, ___Selected_1)); }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * get_Selected_1() const { return ___Selected_1; }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD ** get_address_of_Selected_1() { return &___Selected_1; }
	inline void set_Selected_1(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * value)
	{
		___Selected_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Selected_1), (void*)value);
	}

	inline static int32_t get_offset_of_temp_2() { return static_cast<int32_t>(offsetof(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C, ___temp_2)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_temp_2() const { return ___temp_2; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_temp_2() { return &___temp_2; }
	inline void set_temp_2(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___temp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp_2), (void*)value);
	}

	inline static int32_t get_offset_of_temp2_3() { return static_cast<int32_t>(offsetof(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C, ___temp2_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_temp2_3() const { return ___temp2_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_temp2_3() { return &___temp2_3; }
	inline void set_temp2_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___temp2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp2_3), (void*)value);
	}

	inline static int32_t get_offset_of_tempBits_4() { return static_cast<int32_t>(offsetof(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C, ___tempBits_4)); }
	inline BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * get_tempBits_4() const { return ___tempBits_4; }
	inline BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C ** get_address_of_tempBits_4() { return &___tempBits_4; }
	inline void set_tempBits_4(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * value)
	{
		___tempBits_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempBits_4), (void*)value);
	}
};


// g3.MeshProjectionTarget
struct  MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.MeshProjectionTarget::<Mesh>k__BackingField
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___U3CMeshU3Ek__BackingField_0;
	// g3.ISpatial g3.MeshProjectionTarget::<Spatial>k__BackingField
	RuntimeObject* ___U3CSpatialU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMeshU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A, ___U3CMeshU3Ek__BackingField_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_U3CMeshU3Ek__BackingField_0() const { return ___U3CMeshU3Ek__BackingField_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_U3CMeshU3Ek__BackingField_0() { return &___U3CMeshU3Ek__BackingField_0; }
	inline void set_U3CMeshU3Ek__BackingField_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___U3CMeshU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSpatialU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A, ___U3CSpatialU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CSpatialU3Ek__BackingField_1() const { return ___U3CSpatialU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CSpatialU3Ek__BackingField_1() { return &___U3CSpatialU3Ek__BackingField_1; }
	inline void set_U3CSpatialU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CSpatialU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialU3Ek__BackingField_1), (void*)value);
	}
};


// g3.MeshRefinerBase
struct  MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.MeshRefinerBase::mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh_0;
	// g3.MeshConstraints g3.MeshRefinerBase::constraints
	MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 * ___constraints_1;
	// System.Boolean g3.MeshRefinerBase::AllowCollapseFixedVertsWithSameSetID
	bool ___AllowCollapseFixedVertsWithSameSetID_2;
	// System.Double g3.MeshRefinerBase::edge_flip_tol
	double ___edge_flip_tol_3;
	// g3.ProgressCancel g3.MeshRefinerBase::Progress
	ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * ___Progress_4;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810, ___mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_mesh_0() const { return ___mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_constraints_1() { return static_cast<int32_t>(offsetof(MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810, ___constraints_1)); }
	inline MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 * get_constraints_1() const { return ___constraints_1; }
	inline MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 ** get_address_of_constraints_1() { return &___constraints_1; }
	inline void set_constraints_1(MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 * value)
	{
		___constraints_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraints_1), (void*)value);
	}

	inline static int32_t get_offset_of_AllowCollapseFixedVertsWithSameSetID_2() { return static_cast<int32_t>(offsetof(MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810, ___AllowCollapseFixedVertsWithSameSetID_2)); }
	inline bool get_AllowCollapseFixedVertsWithSameSetID_2() const { return ___AllowCollapseFixedVertsWithSameSetID_2; }
	inline bool* get_address_of_AllowCollapseFixedVertsWithSameSetID_2() { return &___AllowCollapseFixedVertsWithSameSetID_2; }
	inline void set_AllowCollapseFixedVertsWithSameSetID_2(bool value)
	{
		___AllowCollapseFixedVertsWithSameSetID_2 = value;
	}

	inline static int32_t get_offset_of_edge_flip_tol_3() { return static_cast<int32_t>(offsetof(MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810, ___edge_flip_tol_3)); }
	inline double get_edge_flip_tol_3() const { return ___edge_flip_tol_3; }
	inline double* get_address_of_edge_flip_tol_3() { return &___edge_flip_tol_3; }
	inline void set_edge_flip_tol_3(double value)
	{
		___edge_flip_tol_3 = value;
	}

	inline static int32_t get_offset_of_Progress_4() { return static_cast<int32_t>(offsetof(MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810, ___Progress_4)); }
	inline ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * get_Progress_4() const { return ___Progress_4; }
	inline ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 ** get_address_of_Progress_4() { return &___Progress_4; }
	inline void set_Progress_4(ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * value)
	{
		___Progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Progress_4), (void*)value);
	}
};


// g3.MeshVertexSelection
struct  MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.MeshVertexSelection::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// System.Collections.Generic.HashSet`1<System.Int32> g3.MeshVertexSelection::Selected
	HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * ___Selected_1;
	// System.Collections.Generic.List`1<System.Int32> g3.MeshVertexSelection::temp
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___temp_2;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Selected_1() { return static_cast<int32_t>(offsetof(MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770, ___Selected_1)); }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * get_Selected_1() const { return ___Selected_1; }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD ** get_address_of_Selected_1() { return &___Selected_1; }
	inline void set_Selected_1(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * value)
	{
		___Selected_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Selected_1), (void*)value);
	}

	inline static int32_t get_offset_of_temp_2() { return static_cast<int32_t>(offsetof(MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770, ___temp_2)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_temp_2() const { return ___temp_2; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_temp_2() { return &___temp_2; }
	inline void set_temp_2(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___temp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp_2), (void*)value);
	}
};


// g3.ProgressCancel
struct  ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985  : public RuntimeObject
{
public:
	// g3.ICancelSource g3.ProgressCancel::Source
	RuntimeObject* ___Source_0;
	// System.Boolean g3.ProgressCancel::WasCancelled
	bool ___WasCancelled_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985, ___Source_0)); }
	inline RuntimeObject* get_Source_0() const { return ___Source_0; }
	inline RuntimeObject** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(RuntimeObject* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Source_0), (void*)value);
	}

	inline static int32_t get_offset_of_WasCancelled_1() { return static_cast<int32_t>(offsetof(ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985, ___WasCancelled_1)); }
	inline bool get_WasCancelled_1() const { return ___WasCancelled_1; }
	inline bool* get_address_of_WasCancelled_1() { return &___WasCancelled_1; }
	inline void set_WasCancelled_1(bool value)
	{
		___WasCancelled_1 = value;
	}
};


// g3.SimpleHoleFiller
struct  SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.SimpleHoleFiller::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// g3.EdgeLoop g3.SimpleHoleFiller::Loop
	EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * ___Loop_1;
	// System.Int32 g3.SimpleHoleFiller::NewVertex
	int32_t ___NewVertex_2;
	// System.Int32[] g3.SimpleHoleFiller::NewTriangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___NewTriangles_3;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loop_1() { return static_cast<int32_t>(offsetof(SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412, ___Loop_1)); }
	inline EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * get_Loop_1() const { return ___Loop_1; }
	inline EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 ** get_address_of_Loop_1() { return &___Loop_1; }
	inline void set_Loop_1(EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * value)
	{
		___Loop_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loop_1), (void*)value);
	}

	inline static int32_t get_offset_of_NewVertex_2() { return static_cast<int32_t>(offsetof(SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412, ___NewVertex_2)); }
	inline int32_t get_NewVertex_2() const { return ___NewVertex_2; }
	inline int32_t* get_address_of_NewVertex_2() { return &___NewVertex_2; }
	inline void set_NewVertex_2(int32_t value)
	{
		___NewVertex_2 = value;
	}

	inline static int32_t get_offset_of_NewTriangles_3() { return static_cast<int32_t>(offsetof(SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412, ___NewTriangles_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_NewTriangles_3() const { return ___NewTriangles_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_NewTriangles_3() { return &___NewTriangles_3; }
	inline void set_NewTriangles_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___NewTriangles_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewTriangles_3), (void*)value);
	}
};


// gs.RemesherPro_<>c__DisplayClass16_0
struct  U3CU3Ec__DisplayClass16_0_tF21F9087EE224C2B28BD2C9F58F8D6BFD9D2ECDE  : public RuntimeObject
{
public:
	// gs.RemesherPro gs.RemesherPro_<>c__DisplayClass16_0::<>4__this
	RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * ___U3CU3E4__this_0;
	// System.Double gs.RemesherPro_<>c__DisplayClass16_0::max_edge_len_sqr
	double ___max_edge_len_sqr_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF21F9087EE224C2B28BD2C9F58F8D6BFD9D2ECDE, ___U3CU3E4__this_0)); }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_max_edge_len_sqr_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF21F9087EE224C2B28BD2C9F58F8D6BFD9D2ECDE, ___max_edge_len_sqr_1)); }
	inline double get_max_edge_len_sqr_1() const { return ___max_edge_len_sqr_1; }
	inline double* get_address_of_max_edge_len_sqr_1() { return &___max_edge_len_sqr_1; }
	inline void set_max_edge_len_sqr_1(double value)
	{
		___max_edge_len_sqr_1 = value;
	}
};


// gs.RemesherPro_<>c__DisplayClass18_0
struct  U3CU3Ec__DisplayClass18_0_t7C5B0E54A8B1BE63E020B09A35D55B8A30BE2321  : public RuntimeObject
{
public:
	// gs.RemesherPro gs.RemesherPro_<>c__DisplayClass18_0::<>4__this
	RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * ___U3CU3E4__this_0;
	// System.Func`4<g3.DMesh3,System.Int32,System.Double,g3.Vector3d> gs.RemesherPro_<>c__DisplayClass18_0::smoothFunc
	Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 * ___smoothFunc_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t7C5B0E54A8B1BE63E020B09A35D55B8A30BE2321, ___U3CU3E4__this_0)); }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_smoothFunc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t7C5B0E54A8B1BE63E020B09A35D55B8A30BE2321, ___smoothFunc_1)); }
	inline Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 * get_smoothFunc_1() const { return ___smoothFunc_1; }
	inline Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 ** get_address_of_smoothFunc_1() { return &___smoothFunc_1; }
	inline void set_smoothFunc_1(Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 * value)
	{
		___smoothFunc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smoothFunc_1), (void*)value);
	}
};


// gs.RemesherPro_<EdgesIterator>d__5
struct  U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019  : public RuntimeObject
{
public:
	// System.Int32 gs.RemesherPro_<EdgesIterator>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Int32 gs.RemesherPro_<EdgesIterator>d__5::<>2__current
	int32_t ___U3CU3E2__current_1;
	// System.Int32 gs.RemesherPro_<EdgesIterator>d__5::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// gs.RemesherPro gs.RemesherPro_<EdgesIterator>d__5::<>4__this
	RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * ___U3CU3E4__this_3;
	// System.Int32 gs.RemesherPro_<EdgesIterator>d__5::<cur_eid>5__2
	int32_t ___U3Ccur_eidU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019, ___U3CU3E2__current_1)); }
	inline int32_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline int32_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(int32_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019, ___U3CU3E4__this_3)); }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ccur_eidU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019, ___U3Ccur_eidU3E5__2_4)); }
	inline int32_t get_U3Ccur_eidU3E5__2_4() const { return ___U3Ccur_eidU3E5__2_4; }
	inline int32_t* get_address_of_U3Ccur_eidU3E5__2_4() { return &___U3Ccur_eidU3E5__2_4; }
	inline void set_U3Ccur_eidU3E5__2_4(int32_t value)
	{
		___U3Ccur_eidU3E5__2_4 = value;
	}
};


// gs.RemoveDuplicateTriangles
struct  RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5  : public RuntimeObject
{
public:
	// g3.DMesh3 gs.RemoveDuplicateTriangles::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// System.Double gs.RemoveDuplicateTriangles::VertexTolerance
	double ___VertexTolerance_1;
	// System.Boolean gs.RemoveDuplicateTriangles::CheckOrientation
	bool ___CheckOrientation_2;
	// System.Int32 gs.RemoveDuplicateTriangles::Removed
	int32_t ___Removed_3;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_VertexTolerance_1() { return static_cast<int32_t>(offsetof(RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5, ___VertexTolerance_1)); }
	inline double get_VertexTolerance_1() const { return ___VertexTolerance_1; }
	inline double* get_address_of_VertexTolerance_1() { return &___VertexTolerance_1; }
	inline void set_VertexTolerance_1(double value)
	{
		___VertexTolerance_1 = value;
	}

	inline static int32_t get_offset_of_CheckOrientation_2() { return static_cast<int32_t>(offsetof(RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5, ___CheckOrientation_2)); }
	inline bool get_CheckOrientation_2() const { return ___CheckOrientation_2; }
	inline bool* get_address_of_CheckOrientation_2() { return &___CheckOrientation_2; }
	inline void set_CheckOrientation_2(bool value)
	{
		___CheckOrientation_2 = value;
	}

	inline static int32_t get_offset_of_Removed_3() { return static_cast<int32_t>(offsetof(RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5, ___Removed_3)); }
	inline int32_t get_Removed_3() const { return ___Removed_3; }
	inline int32_t* get_address_of_Removed_3() { return &___Removed_3; }
	inline void set_Removed_3(int32_t value)
	{
		___Removed_3 = value;
	}
};


// gs.RemoveDuplicateTriangles_TriCentroids
struct  TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A  : public RuntimeObject
{
public:
	// g3.DMesh3 gs.RemoveDuplicateTriangles_TriCentroids::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}
};


// gs.RemoveOccludedTriangles_<>c__DisplayClass13_1
struct  U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159  : public RuntimeObject
{
public:
	// g3.MeshNormals gs.RemoveOccludedTriangles_<>c__DisplayClass13_1::normals
	MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * ___normals_0;
	// gs.RemoveOccludedTriangles_<>c__DisplayClass13_0 gs.RemoveOccludedTriangles_<>c__DisplayClass13_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_normals_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159, ___normals_0)); }
	inline MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * get_normals_0() const { return ___normals_0; }
	inline MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 ** get_address_of_normals_0() { return &___normals_0; }
	inline void set_normals_0(MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * value)
	{
		___normals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// gs.WyvillFalloff
struct  WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC  : public RuntimeObject
{
public:
	// System.Double gs.WyvillFalloff::ConstantRange
	double ___ConstantRange_0;

public:
	inline static int32_t get_offset_of_ConstantRange_0() { return static_cast<int32_t>(offsetof(WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC, ___ConstantRange_0)); }
	inline double get_ConstantRange_0() const { return ___ConstantRange_0; }
	inline double* get_address_of_ConstantRange_0() { return &___ConstantRange_0; }
	inline void set_ConstantRange_0(double value)
	{
		___ConstantRange_0 = value;
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


// System.Collections.Generic.List`1_Enumerator<System.Int32>
struct  Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___list_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_list_0() const { return ___list_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// g3.Index2i
struct  Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596 
{
public:
	// System.Int32 g3.Index2i::a
	int32_t ___a_0;
	// System.Int32 g3.Index2i::b
	int32_t ___b_1;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}
};

struct Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596_StaticFields
{
public:
	// g3.Index2i g3.Index2i::Zero
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  ___Zero_2;
	// g3.Index2i g3.Index2i::One
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  ___One_3;
	// g3.Index2i g3.Index2i::Max
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  ___Max_4;
	// g3.Index2i g3.Index2i::Min
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  ___Min_5;

public:
	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596_StaticFields, ___Zero_2)); }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  get_Zero_2() const { return ___Zero_2; }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  value)
	{
		___Zero_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596_StaticFields, ___One_3)); }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  get_One_3() const { return ___One_3; }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Max_4() { return static_cast<int32_t>(offsetof(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596_StaticFields, ___Max_4)); }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  get_Max_4() const { return ___Max_4; }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596 * get_address_of_Max_4() { return &___Max_4; }
	inline void set_Max_4(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  value)
	{
		___Max_4 = value;
	}

	inline static int32_t get_offset_of_Min_5() { return static_cast<int32_t>(offsetof(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596_StaticFields, ___Min_5)); }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  get_Min_5() const { return ___Min_5; }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596 * get_address_of_Min_5() { return &___Min_5; }
	inline void set_Min_5(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  value)
	{
		___Min_5 = value;
	}
};


// g3.Index3i
struct  Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 
{
public:
	// System.Int32 g3.Index3i::a
	int32_t ___a_0;
	// System.Int32 g3.Index3i::b
	int32_t ___b_1;
	// System.Int32 g3.Index3i::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};

struct Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687_StaticFields
{
public:
	// g3.Index3i g3.Index3i::Zero
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  ___Zero_3;
	// g3.Index3i g3.Index3i::One
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  ___One_4;
	// g3.Index3i g3.Index3i::Max
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  ___Max_5;
	// g3.Index3i g3.Index3i::Min
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  ___Min_6;

public:
	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687_StaticFields, ___Zero_3)); }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  get_Zero_3() const { return ___Zero_3; }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  value)
	{
		___Zero_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687_StaticFields, ___One_4)); }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  get_One_4() const { return ___One_4; }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_Max_5() { return static_cast<int32_t>(offsetof(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687_StaticFields, ___Max_5)); }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  get_Max_5() const { return ___Max_5; }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 * get_address_of_Max_5() { return &___Max_5; }
	inline void set_Max_5(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  value)
	{
		___Max_5 = value;
	}

	inline static int32_t get_offset_of_Min_6() { return static_cast<int32_t>(offsetof(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687_StaticFields, ___Min_6)); }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  get_Min_6() const { return ___Min_6; }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 * get_address_of_Min_6() { return &___Min_6; }
	inline void set_Min_6(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  value)
	{
		___Min_6 = value;
	}
};


// g3.Quaternionf
struct  Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6 
{
public:
	// System.Single g3.Quaternionf::x
	float ___x_0;
	// System.Single g3.Quaternionf::y
	float ___y_1;
	// System.Single g3.Quaternionf::z
	float ___z_2;
	// System.Single g3.Quaternionf::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6_StaticFields
{
public:
	// g3.Quaternionf g3.Quaternionf::Zero
	Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  ___Zero_4;
	// g3.Quaternionf g3.Quaternionf::Identity
	Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  ___Identity_5;

public:
	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6_StaticFields, ___Zero_4)); }
	inline Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  get_Zero_4() const { return ___Zero_4; }
	inline Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_Identity_5() { return static_cast<int32_t>(offsetof(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6_StaticFields, ___Identity_5)); }
	inline Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  get_Identity_5() const { return ___Identity_5; }
	inline Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6 * get_address_of_Identity_5() { return &___Identity_5; }
	inline void set_Identity_5(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  value)
	{
		___Identity_5 = value;
	}
};


// g3.Vector3d
struct  Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B 
{
public:
	// System.Double g3.Vector3d::x
	double ___x_0;
	// System.Double g3.Vector3d::y
	double ___y_1;
	// System.Double g3.Vector3d::z
	double ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B, ___z_2)); }
	inline double get_z_2() const { return ___z_2; }
	inline double* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(double value)
	{
		___z_2 = value;
	}
};

struct Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields
{
public:
	// g3.Vector3d g3.Vector3d::Zero
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___Zero_3;
	// g3.Vector3d g3.Vector3d::One
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___One_4;
	// g3.Vector3d g3.Vector3d::AxisX
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___AxisX_5;
	// g3.Vector3d g3.Vector3d::AxisY
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___AxisY_6;
	// g3.Vector3d g3.Vector3d::AxisZ
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___AxisZ_7;
	// g3.Vector3d g3.Vector3d::MaxValue
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___MaxValue_8;
	// g3.Vector3d g3.Vector3d::MinValue
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___MinValue_9;

public:
	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields, ___Zero_3)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_Zero_3() const { return ___Zero_3; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___Zero_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields, ___One_4)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_One_4() const { return ___One_4; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_AxisX_5() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields, ___AxisX_5)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_AxisX_5() const { return ___AxisX_5; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_AxisX_5() { return &___AxisX_5; }
	inline void set_AxisX_5(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___AxisX_5 = value;
	}

	inline static int32_t get_offset_of_AxisY_6() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields, ___AxisY_6)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_AxisY_6() const { return ___AxisY_6; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_AxisY_6() { return &___AxisY_6; }
	inline void set_AxisY_6(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___AxisY_6 = value;
	}

	inline static int32_t get_offset_of_AxisZ_7() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields, ___AxisZ_7)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_AxisZ_7() const { return ___AxisZ_7; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_AxisZ_7() { return &___AxisZ_7; }
	inline void set_AxisZ_7(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___AxisZ_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields, ___MaxValue_8)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_MaxValue_8() const { return ___MaxValue_8; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields, ___MinValue_9)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_MinValue_9() const { return ___MinValue_9; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___MinValue_9 = value;
	}
};


// g3.Vector3f
struct  Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 
{
public:
	// System.Single g3.Vector3f::x
	float ___x_0;
	// System.Single g3.Vector3f::y
	float ___y_1;
	// System.Single g3.Vector3f::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields
{
public:
	// g3.Vector3f g3.Vector3f::Zero
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___Zero_3;
	// g3.Vector3f g3.Vector3f::One
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___One_4;
	// g3.Vector3f g3.Vector3f::OneNormalized
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___OneNormalized_5;
	// g3.Vector3f g3.Vector3f::Invalid
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___Invalid_6;
	// g3.Vector3f g3.Vector3f::AxisX
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___AxisX_7;
	// g3.Vector3f g3.Vector3f::AxisY
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___AxisY_8;
	// g3.Vector3f g3.Vector3f::AxisZ
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___AxisZ_9;
	// g3.Vector3f g3.Vector3f::MaxValue
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___MaxValue_10;
	// g3.Vector3f g3.Vector3f::MinValue
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___MinValue_11;

public:
	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___Zero_3)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_Zero_3() const { return ___Zero_3; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___Zero_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___One_4)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_One_4() const { return ___One_4; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_OneNormalized_5() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___OneNormalized_5)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_OneNormalized_5() const { return ___OneNormalized_5; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_OneNormalized_5() { return &___OneNormalized_5; }
	inline void set_OneNormalized_5(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___OneNormalized_5 = value;
	}

	inline static int32_t get_offset_of_Invalid_6() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___Invalid_6)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_Invalid_6() const { return ___Invalid_6; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_Invalid_6() { return &___Invalid_6; }
	inline void set_Invalid_6(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___Invalid_6 = value;
	}

	inline static int32_t get_offset_of_AxisX_7() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___AxisX_7)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_AxisX_7() const { return ___AxisX_7; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_AxisX_7() { return &___AxisX_7; }
	inline void set_AxisX_7(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___AxisX_7 = value;
	}

	inline static int32_t get_offset_of_AxisY_8() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___AxisY_8)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_AxisY_8() const { return ___AxisY_8; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_AxisY_8() { return &___AxisY_8; }
	inline void set_AxisY_8(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___AxisY_8 = value;
	}

	inline static int32_t get_offset_of_AxisZ_9() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___AxisZ_9)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_AxisZ_9() const { return ___AxisZ_9; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_AxisZ_9() { return &___AxisZ_9; }
	inline void set_AxisZ_9(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___AxisZ_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___MaxValue_10)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields, ___MinValue_11)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_MinValue_11() const { return ___MinValue_11; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___MinValue_11 = value;
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

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.SpinLock
struct  SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SpinLock::m_owner
	int32_t ___m_owner_0;

public:
	inline static int32_t get_offset_of_m_owner_0() { return static_cast<int32_t>(offsetof(SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1, ___m_owner_0)); }
	inline int32_t get_m_owner_0() const { return ___m_owner_0; }
	inline int32_t* get_address_of_m_owner_0() { return &___m_owner_0; }
	inline void set_m_owner_0(int32_t value)
	{
		___m_owner_0 = value;
	}
};

struct SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1_StaticFields
{
public:
	// System.Int32 System.Threading.SpinLock::MAXIMUM_WAITERS
	int32_t ___MAXIMUM_WAITERS_1;

public:
	inline static int32_t get_offset_of_MAXIMUM_WAITERS_1() { return static_cast<int32_t>(offsetof(SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1_StaticFields, ___MAXIMUM_WAITERS_1)); }
	inline int32_t get_MAXIMUM_WAITERS_1() const { return ___MAXIMUM_WAITERS_1; }
	inline int32_t* get_address_of_MAXIMUM_WAITERS_1() { return &___MAXIMUM_WAITERS_1; }
	inline void set_MAXIMUM_WAITERS_1(int32_t value)
	{
		___MAXIMUM_WAITERS_1 = value;
	}
};


// g3.AxisAlignedBox3d
struct  AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3 
{
public:
	// g3.Vector3d g3.AxisAlignedBox3d::Min
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___Min_0;
	// g3.Vector3d g3.AxisAlignedBox3d::Max
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___Max_1;

public:
	inline static int32_t get_offset_of_Min_0() { return static_cast<int32_t>(offsetof(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3, ___Min_0)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_Min_0() const { return ___Min_0; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_Min_0() { return &___Min_0; }
	inline void set_Min_0(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___Min_0 = value;
	}

	inline static int32_t get_offset_of_Max_1() { return static_cast<int32_t>(offsetof(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3, ___Max_1)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_Max_1() const { return ___Max_1; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_Max_1() { return &___Max_1; }
	inline void set_Max_1(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___Max_1 = value;
	}
};

struct AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3_StaticFields
{
public:
	// g3.AxisAlignedBox3d g3.AxisAlignedBox3d::Empty
	AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  ___Empty_2;
	// g3.AxisAlignedBox3d g3.AxisAlignedBox3d::Zero
	AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  ___Zero_3;
	// g3.AxisAlignedBox3d g3.AxisAlignedBox3d::UnitPositive
	AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  ___UnitPositive_4;
	// g3.AxisAlignedBox3d g3.AxisAlignedBox3d::Infinite
	AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  ___Infinite_5;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3_StaticFields, ___Empty_2)); }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  get_Empty_2() const { return ___Empty_2; }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  value)
	{
		___Empty_2 = value;
	}

	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3_StaticFields, ___Zero_3)); }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  get_Zero_3() const { return ___Zero_3; }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3 * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  value)
	{
		___Zero_3 = value;
	}

	inline static int32_t get_offset_of_UnitPositive_4() { return static_cast<int32_t>(offsetof(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3_StaticFields, ___UnitPositive_4)); }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  get_UnitPositive_4() const { return ___UnitPositive_4; }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3 * get_address_of_UnitPositive_4() { return &___UnitPositive_4; }
	inline void set_UnitPositive_4(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  value)
	{
		___UnitPositive_4 = value;
	}

	inline static int32_t get_offset_of_Infinite_5() { return static_cast<int32_t>(offsetof(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3_StaticFields, ___Infinite_5)); }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  get_Infinite_5() const { return ___Infinite_5; }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3 * get_address_of_Infinite_5() { return &___Infinite_5; }
	inline void set_Infinite_5(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  value)
	{
		___Infinite_5 = value;
	}
};


// g3.Frame3f
struct  Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 
{
public:
	// g3.Quaternionf g3.Frame3f::rotation
	Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  ___rotation_0;
	// g3.Vector3f g3.Frame3f::origin
	Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___origin_1;

public:
	inline static int32_t get_offset_of_rotation_0() { return static_cast<int32_t>(offsetof(Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87, ___rotation_0)); }
	inline Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  get_rotation_0() const { return ___rotation_0; }
	inline Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6 * get_address_of_rotation_0() { return &___rotation_0; }
	inline void set_rotation_0(Quaternionf_tBCF542B3CA5238D3AC4EE404C99FCF46105816E6  value)
	{
		___rotation_0 = value;
	}

	inline static int32_t get_offset_of_origin_1() { return static_cast<int32_t>(offsetof(Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87, ___origin_1)); }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  get_origin_1() const { return ___origin_1; }
	inline Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017 * get_address_of_origin_1() { return &___origin_1; }
	inline void set_origin_1(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  value)
	{
		___origin_1 = value;
	}
};

struct Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87_StaticFields
{
public:
	// g3.Frame3f g3.Frame3f::Identity
	Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87  ___Identity_2;

public:
	inline static int32_t get_offset_of_Identity_2() { return static_cast<int32_t>(offsetof(Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87_StaticFields, ___Identity_2)); }
	inline Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87  get_Identity_2() const { return ___Identity_2; }
	inline Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 * get_address_of_Identity_2() { return &___Identity_2; }
	inline void set_Identity_2(Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87  value)
	{
		___Identity_2 = value;
	}
};


// g3.MeshBoundaryLoops_FailureBehaviors
struct  FailureBehaviors_t88E4CF86EDF1FC7325261CD5AF785A1E964E3108 
{
public:
	// System.Int32 g3.MeshBoundaryLoops_FailureBehaviors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FailureBehaviors_t88E4CF86EDF1FC7325261CD5AF785A1E964E3108, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.MeshBoundaryLoops_SpanBehaviors
struct  SpanBehaviors_t8B1826B8EE4A0689D449740096C20F079764D4FD 
{
public:
	// System.Int32 g3.MeshBoundaryLoops_SpanBehaviors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpanBehaviors_t8B1826B8EE4A0689D449740096C20F079764D4FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.MeshEditor_DuplicateTriBehavior
struct  DuplicateTriBehavior_tDECD004EEFE74DECE8E2C98B2088C1751D0C9E28 
{
public:
	// System.Int32 g3.MeshEditor_DuplicateTriBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DuplicateTriBehavior_tDECD004EEFE74DECE8E2C98B2088C1751D0C9E28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.MeshNormals_NormalsTypes
struct  NormalsTypes_tBD161F2C37D946ABACEAD58CD5A304FC824A6D7D 
{
public:
	// System.Int32 g3.MeshNormals_NormalsTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalsTypes_tBD161F2C37D946ABACEAD58CD5A304FC824A6D7D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.MeshResult
struct  MeshResult_t599CA1534721DAEC25CF3F808CF672E703604057 
{
public:
	// System.Int32 g3.MeshResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshResult_t599CA1534721DAEC25CF3F808CF672E703604057, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.Ray3d
struct  Ray3d_t7A6B08A229386EA5F368EEA38147A7B9B54204E6 
{
public:
	// g3.Vector3d g3.Ray3d::Origin
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___Origin_0;
	// g3.Vector3d g3.Ray3d::Direction
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___Direction_1;

public:
	inline static int32_t get_offset_of_Origin_0() { return static_cast<int32_t>(offsetof(Ray3d_t7A6B08A229386EA5F368EEA38147A7B9B54204E6, ___Origin_0)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_Origin_0() const { return ___Origin_0; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_Origin_0() { return &___Origin_0; }
	inline void set_Origin_0(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___Origin_0 = value;
	}

	inline static int32_t get_offset_of_Direction_1() { return static_cast<int32_t>(offsetof(Ray3d_t7A6B08A229386EA5F368EEA38147A7B9B54204E6, ___Direction_1)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_Direction_1() const { return ___Direction_1; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_Direction_1() { return &___Direction_1; }
	inline void set_Direction_1(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___Direction_1 = value;
	}
};


// g3.Remesher_SmoothTypes
struct  SmoothTypes_tBD8E072C6B81D6B3AC929EDA79D3D942F8FE9F80 
{
public:
	// System.Int32 g3.Remesher_SmoothTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SmoothTypes_tBD8E072C6B81D6B3AC929EDA79D3D942F8FE9F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.Remesher_TargetProjectionMode
struct  TargetProjectionMode_t6CF20B3AEE885F0B7737ED08E309F40D363EF7F3 
{
public:
	// System.Int32 g3.Remesher_TargetProjectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetProjectionMode_t6CF20B3AEE885F0B7737ED08E309F40D363EF7F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.Remesher_VertexControl
struct  VertexControl_tA8A1068D4B35798A0E3EC24C57934FCF92D55BC5 
{
public:
	// System.Int32 g3.Remesher_VertexControl::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexControl_tA8A1068D4B35798A0E3EC24C57934FCF92D55BC5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.SetGroupBehavior_Modes
struct  Modes_tC2285F32566D94D9538A2597C2DB69B823AB0DDC 
{
public:
	// System.Int32 g3.SetGroupBehavior_Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_tC2285F32566D94D9538A2597C2DB69B823AB0DDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// g3.ShiftGridIndexer3
struct  ShiftGridIndexer3_tEC3C82B58D569B71476E383077F4F3F69181E95D 
{
public:
	// g3.Vector3d g3.ShiftGridIndexer3::Origin
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___Origin_0;
	// System.Double g3.ShiftGridIndexer3::CellSize
	double ___CellSize_1;

public:
	inline static int32_t get_offset_of_Origin_0() { return static_cast<int32_t>(offsetof(ShiftGridIndexer3_tEC3C82B58D569B71476E383077F4F3F69181E95D, ___Origin_0)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_Origin_0() const { return ___Origin_0; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_Origin_0() { return &___Origin_0; }
	inline void set_Origin_0(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___Origin_0 = value;
	}

	inline static int32_t get_offset_of_CellSize_1() { return static_cast<int32_t>(offsetof(ShiftGridIndexer3_tEC3C82B58D569B71476E383077F4F3F69181E95D, ___CellSize_1)); }
	inline double get_CellSize_1() const { return ___CellSize_1; }
	inline double* get_address_of_CellSize_1() { return &___CellSize_1; }
	inline void set_CellSize_1(double value)
	{
		___CellSize_1 = value;
	}
};


// gs.RemoveOccludedTriangles_CalculationMode
struct  CalculationMode_t2AD4A702A3EBDBEDB2F762D40EDDC83305F2536E 
{
public:
	// System.Int32 gs.RemoveOccludedTriangles_CalculationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CalculationMode_t2AD4A702A3EBDBEDB2F762D40EDDC83305F2536E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// gs.SmoothedHoleFill
struct  SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC  : public RuntimeObject
{
public:
	// g3.DMesh3 gs.SmoothedHoleFill::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// g3.Vector3d gs.SmoothedHoleFill::OffsetDirection
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___OffsetDirection_1;
	// System.Double gs.SmoothedHoleFill::OffsetDistance
	double ___OffsetDistance_2;
	// System.Double gs.SmoothedHoleFill::TargetEdgeLength
	double ___TargetEdgeLength_3;
	// System.Double gs.SmoothedHoleFill::SmoothAlpha
	double ___SmoothAlpha_4;
	// System.Int32 gs.SmoothedHoleFill::InitialRemeshPasses
	int32_t ___InitialRemeshPasses_5;
	// System.Boolean gs.SmoothedHoleFill::RemeshBeforeSmooth
	bool ___RemeshBeforeSmooth_6;
	// System.Boolean gs.SmoothedHoleFill::RemeshAfterSmooth
	bool ___RemeshAfterSmooth_7;
	// System.Action`2<g3.Remesher,System.Boolean> gs.SmoothedHoleFill::ConfigureRemesherF
	Action_2_tA04000E22AE4BB80358647073628729031416298 * ___ConfigureRemesherF_8;
	// System.Boolean gs.SmoothedHoleFill::EnableLaplacianSmooth
	bool ___EnableLaplacianSmooth_9;
	// System.Int32 gs.SmoothedHoleFill::SmoothSolveIterations
	int32_t ___SmoothSolveIterations_10;
	// System.Boolean gs.SmoothedHoleFill::ConstrainToHoleInterior
	bool ___ConstrainToHoleInterior_11;
	// g3.EdgeLoop gs.SmoothedHoleFill::FillLoop
	EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * ___FillLoop_12;
	// System.Collections.Generic.List`1<System.Int32> gs.SmoothedHoleFill::BorderHintTris
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___BorderHintTris_13;
	// System.Int32[] gs.SmoothedHoleFill::FillTriangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___FillTriangles_14;
	// System.Int32[] gs.SmoothedHoleFill::FillVertices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___FillVertices_15;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_OffsetDirection_1() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___OffsetDirection_1)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_OffsetDirection_1() const { return ___OffsetDirection_1; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_OffsetDirection_1() { return &___OffsetDirection_1; }
	inline void set_OffsetDirection_1(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___OffsetDirection_1 = value;
	}

	inline static int32_t get_offset_of_OffsetDistance_2() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___OffsetDistance_2)); }
	inline double get_OffsetDistance_2() const { return ___OffsetDistance_2; }
	inline double* get_address_of_OffsetDistance_2() { return &___OffsetDistance_2; }
	inline void set_OffsetDistance_2(double value)
	{
		___OffsetDistance_2 = value;
	}

	inline static int32_t get_offset_of_TargetEdgeLength_3() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___TargetEdgeLength_3)); }
	inline double get_TargetEdgeLength_3() const { return ___TargetEdgeLength_3; }
	inline double* get_address_of_TargetEdgeLength_3() { return &___TargetEdgeLength_3; }
	inline void set_TargetEdgeLength_3(double value)
	{
		___TargetEdgeLength_3 = value;
	}

	inline static int32_t get_offset_of_SmoothAlpha_4() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___SmoothAlpha_4)); }
	inline double get_SmoothAlpha_4() const { return ___SmoothAlpha_4; }
	inline double* get_address_of_SmoothAlpha_4() { return &___SmoothAlpha_4; }
	inline void set_SmoothAlpha_4(double value)
	{
		___SmoothAlpha_4 = value;
	}

	inline static int32_t get_offset_of_InitialRemeshPasses_5() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___InitialRemeshPasses_5)); }
	inline int32_t get_InitialRemeshPasses_5() const { return ___InitialRemeshPasses_5; }
	inline int32_t* get_address_of_InitialRemeshPasses_5() { return &___InitialRemeshPasses_5; }
	inline void set_InitialRemeshPasses_5(int32_t value)
	{
		___InitialRemeshPasses_5 = value;
	}

	inline static int32_t get_offset_of_RemeshBeforeSmooth_6() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___RemeshBeforeSmooth_6)); }
	inline bool get_RemeshBeforeSmooth_6() const { return ___RemeshBeforeSmooth_6; }
	inline bool* get_address_of_RemeshBeforeSmooth_6() { return &___RemeshBeforeSmooth_6; }
	inline void set_RemeshBeforeSmooth_6(bool value)
	{
		___RemeshBeforeSmooth_6 = value;
	}

	inline static int32_t get_offset_of_RemeshAfterSmooth_7() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___RemeshAfterSmooth_7)); }
	inline bool get_RemeshAfterSmooth_7() const { return ___RemeshAfterSmooth_7; }
	inline bool* get_address_of_RemeshAfterSmooth_7() { return &___RemeshAfterSmooth_7; }
	inline void set_RemeshAfterSmooth_7(bool value)
	{
		___RemeshAfterSmooth_7 = value;
	}

	inline static int32_t get_offset_of_ConfigureRemesherF_8() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___ConfigureRemesherF_8)); }
	inline Action_2_tA04000E22AE4BB80358647073628729031416298 * get_ConfigureRemesherF_8() const { return ___ConfigureRemesherF_8; }
	inline Action_2_tA04000E22AE4BB80358647073628729031416298 ** get_address_of_ConfigureRemesherF_8() { return &___ConfigureRemesherF_8; }
	inline void set_ConfigureRemesherF_8(Action_2_tA04000E22AE4BB80358647073628729031416298 * value)
	{
		___ConfigureRemesherF_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConfigureRemesherF_8), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLaplacianSmooth_9() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___EnableLaplacianSmooth_9)); }
	inline bool get_EnableLaplacianSmooth_9() const { return ___EnableLaplacianSmooth_9; }
	inline bool* get_address_of_EnableLaplacianSmooth_9() { return &___EnableLaplacianSmooth_9; }
	inline void set_EnableLaplacianSmooth_9(bool value)
	{
		___EnableLaplacianSmooth_9 = value;
	}

	inline static int32_t get_offset_of_SmoothSolveIterations_10() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___SmoothSolveIterations_10)); }
	inline int32_t get_SmoothSolveIterations_10() const { return ___SmoothSolveIterations_10; }
	inline int32_t* get_address_of_SmoothSolveIterations_10() { return &___SmoothSolveIterations_10; }
	inline void set_SmoothSolveIterations_10(int32_t value)
	{
		___SmoothSolveIterations_10 = value;
	}

	inline static int32_t get_offset_of_ConstrainToHoleInterior_11() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___ConstrainToHoleInterior_11)); }
	inline bool get_ConstrainToHoleInterior_11() const { return ___ConstrainToHoleInterior_11; }
	inline bool* get_address_of_ConstrainToHoleInterior_11() { return &___ConstrainToHoleInterior_11; }
	inline void set_ConstrainToHoleInterior_11(bool value)
	{
		___ConstrainToHoleInterior_11 = value;
	}

	inline static int32_t get_offset_of_FillLoop_12() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___FillLoop_12)); }
	inline EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * get_FillLoop_12() const { return ___FillLoop_12; }
	inline EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 ** get_address_of_FillLoop_12() { return &___FillLoop_12; }
	inline void set_FillLoop_12(EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * value)
	{
		___FillLoop_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FillLoop_12), (void*)value);
	}

	inline static int32_t get_offset_of_BorderHintTris_13() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___BorderHintTris_13)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_BorderHintTris_13() const { return ___BorderHintTris_13; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_BorderHintTris_13() { return &___BorderHintTris_13; }
	inline void set_BorderHintTris_13(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___BorderHintTris_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BorderHintTris_13), (void*)value);
	}

	inline static int32_t get_offset_of_FillTriangles_14() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___FillTriangles_14)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_FillTriangles_14() const { return ___FillTriangles_14; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_FillTriangles_14() { return &___FillTriangles_14; }
	inline void set_FillTriangles_14(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___FillTriangles_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FillTriangles_14), (void*)value);
	}

	inline static int32_t get_offset_of_FillVertices_15() { return static_cast<int32_t>(offsetof(SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC, ___FillVertices_15)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_FillVertices_15() const { return ___FillVertices_15; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_FillVertices_15() { return &___FillVertices_15; }
	inline void set_FillVertices_15(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___FillVertices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FillVertices_15), (void*)value);
	}
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// g3.DMesh3
struct  DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF  : public RuntimeObject
{
public:
	// g3.RefCountVector g3.DMesh3::vertices_refcount
	RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * ___vertices_refcount_5;
	// g3.DVector`1<System.Double> g3.DMesh3::vertices
	DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * ___vertices_6;
	// g3.DVector`1<System.Single> g3.DMesh3::normals
	DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * ___normals_7;
	// g3.DVector`1<System.Single> g3.DMesh3::colors
	DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * ___colors_8;
	// g3.DVector`1<System.Single> g3.DMesh3::uv
	DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * ___uv_9;
	// g3.SmallListSet g3.DMesh3::vertex_edges
	SmallListSet_tA70B31A2AC7B46B6CC0FD6DA7CE0DF236AE670A0 * ___vertex_edges_10;
	// g3.RefCountVector g3.DMesh3::triangles_refcount
	RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * ___triangles_refcount_11;
	// g3.DVector`1<System.Int32> g3.DMesh3::triangles
	DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * ___triangles_12;
	// g3.DVector`1<System.Int32> g3.DMesh3::triangle_edges
	DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * ___triangle_edges_13;
	// g3.DVector`1<System.Int32> g3.DMesh3::triangle_groups
	DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * ___triangle_groups_14;
	// g3.RefCountVector g3.DMesh3::edges_refcount
	RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * ___edges_refcount_15;
	// g3.DVector`1<System.Int32> g3.DMesh3::edges
	DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * ___edges_16;
	// System.Int32 g3.DMesh3::timestamp
	int32_t ___timestamp_17;
	// System.Int32 g3.DMesh3::shape_timestamp
	int32_t ___shape_timestamp_18;
	// System.Int32 g3.DMesh3::max_group_id
	int32_t ___max_group_id_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> g3.DMesh3::Metadata
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___Metadata_20;
	// g3.AxisAlignedBox3d g3.DMesh3::cached_bounds
	AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  ___cached_bounds_21;
	// System.Int32 g3.DMesh3::cached_bounds_timestamp
	int32_t ___cached_bounds_timestamp_22;
	// System.Boolean g3.DMesh3::cached_is_closed
	bool ___cached_is_closed_23;
	// System.Int32 g3.DMesh3::cached_is_closed_timestamp
	int32_t ___cached_is_closed_timestamp_24;

public:
	inline static int32_t get_offset_of_vertices_refcount_5() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___vertices_refcount_5)); }
	inline RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * get_vertices_refcount_5() const { return ___vertices_refcount_5; }
	inline RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 ** get_address_of_vertices_refcount_5() { return &___vertices_refcount_5; }
	inline void set_vertices_refcount_5(RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * value)
	{
		___vertices_refcount_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_refcount_5), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___vertices_6)); }
	inline DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * get_vertices_6() const { return ___vertices_6; }
	inline DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD ** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___normals_7)); }
	inline DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * get_normals_7() const { return ___normals_7; }
	inline DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 ** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_colors_8() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___colors_8)); }
	inline DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * get_colors_8() const { return ___colors_8; }
	inline DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 ** get_address_of_colors_8() { return &___colors_8; }
	inline void set_colors_8(DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * value)
	{
		___colors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_8), (void*)value);
	}

	inline static int32_t get_offset_of_uv_9() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___uv_9)); }
	inline DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * get_uv_9() const { return ___uv_9; }
	inline DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 ** get_address_of_uv_9() { return &___uv_9; }
	inline void set_uv_9(DVector_1_tC990B04803675946897F5CBC80C42846A2C53244 * value)
	{
		___uv_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uv_9), (void*)value);
	}

	inline static int32_t get_offset_of_vertex_edges_10() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___vertex_edges_10)); }
	inline SmallListSet_tA70B31A2AC7B46B6CC0FD6DA7CE0DF236AE670A0 * get_vertex_edges_10() const { return ___vertex_edges_10; }
	inline SmallListSet_tA70B31A2AC7B46B6CC0FD6DA7CE0DF236AE670A0 ** get_address_of_vertex_edges_10() { return &___vertex_edges_10; }
	inline void set_vertex_edges_10(SmallListSet_tA70B31A2AC7B46B6CC0FD6DA7CE0DF236AE670A0 * value)
	{
		___vertex_edges_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertex_edges_10), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_refcount_11() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___triangles_refcount_11)); }
	inline RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * get_triangles_refcount_11() const { return ___triangles_refcount_11; }
	inline RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 ** get_address_of_triangles_refcount_11() { return &___triangles_refcount_11; }
	inline void set_triangles_refcount_11(RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * value)
	{
		___triangles_refcount_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_refcount_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___triangles_12)); }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * get_triangles_12() const { return ___triangles_12; }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 ** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_triangle_edges_13() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___triangle_edges_13)); }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * get_triangle_edges_13() const { return ___triangle_edges_13; }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 ** get_address_of_triangle_edges_13() { return &___triangle_edges_13; }
	inline void set_triangle_edges_13(DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * value)
	{
		___triangle_edges_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangle_edges_13), (void*)value);
	}

	inline static int32_t get_offset_of_triangle_groups_14() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___triangle_groups_14)); }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * get_triangle_groups_14() const { return ___triangle_groups_14; }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 ** get_address_of_triangle_groups_14() { return &___triangle_groups_14; }
	inline void set_triangle_groups_14(DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * value)
	{
		___triangle_groups_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangle_groups_14), (void*)value);
	}

	inline static int32_t get_offset_of_edges_refcount_15() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___edges_refcount_15)); }
	inline RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * get_edges_refcount_15() const { return ___edges_refcount_15; }
	inline RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 ** get_address_of_edges_refcount_15() { return &___edges_refcount_15; }
	inline void set_edges_refcount_15(RefCountVector_t27E2CCFA16C1E1E3FD63FFF594CF1365F9755261 * value)
	{
		___edges_refcount_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___edges_refcount_15), (void*)value);
	}

	inline static int32_t get_offset_of_edges_16() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___edges_16)); }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * get_edges_16() const { return ___edges_16; }
	inline DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 ** get_address_of_edges_16() { return &___edges_16; }
	inline void set_edges_16(DVector_1_tD4A36F38585A9B2F65EB524C820A33E4BD013148 * value)
	{
		___edges_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___edges_16), (void*)value);
	}

	inline static int32_t get_offset_of_timestamp_17() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___timestamp_17)); }
	inline int32_t get_timestamp_17() const { return ___timestamp_17; }
	inline int32_t* get_address_of_timestamp_17() { return &___timestamp_17; }
	inline void set_timestamp_17(int32_t value)
	{
		___timestamp_17 = value;
	}

	inline static int32_t get_offset_of_shape_timestamp_18() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___shape_timestamp_18)); }
	inline int32_t get_shape_timestamp_18() const { return ___shape_timestamp_18; }
	inline int32_t* get_address_of_shape_timestamp_18() { return &___shape_timestamp_18; }
	inline void set_shape_timestamp_18(int32_t value)
	{
		___shape_timestamp_18 = value;
	}

	inline static int32_t get_offset_of_max_group_id_19() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___max_group_id_19)); }
	inline int32_t get_max_group_id_19() const { return ___max_group_id_19; }
	inline int32_t* get_address_of_max_group_id_19() { return &___max_group_id_19; }
	inline void set_max_group_id_19(int32_t value)
	{
		___max_group_id_19 = value;
	}

	inline static int32_t get_offset_of_Metadata_20() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___Metadata_20)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_Metadata_20() const { return ___Metadata_20; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_Metadata_20() { return &___Metadata_20; }
	inline void set_Metadata_20(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___Metadata_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_20), (void*)value);
	}

	inline static int32_t get_offset_of_cached_bounds_21() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___cached_bounds_21)); }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  get_cached_bounds_21() const { return ___cached_bounds_21; }
	inline AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3 * get_address_of_cached_bounds_21() { return &___cached_bounds_21; }
	inline void set_cached_bounds_21(AxisAlignedBox3d_t0C2765CBD53239038D7DF00C6EB371BFCB5949B3  value)
	{
		___cached_bounds_21 = value;
	}

	inline static int32_t get_offset_of_cached_bounds_timestamp_22() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___cached_bounds_timestamp_22)); }
	inline int32_t get_cached_bounds_timestamp_22() const { return ___cached_bounds_timestamp_22; }
	inline int32_t* get_address_of_cached_bounds_timestamp_22() { return &___cached_bounds_timestamp_22; }
	inline void set_cached_bounds_timestamp_22(int32_t value)
	{
		___cached_bounds_timestamp_22 = value;
	}

	inline static int32_t get_offset_of_cached_is_closed_23() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___cached_is_closed_23)); }
	inline bool get_cached_is_closed_23() const { return ___cached_is_closed_23; }
	inline bool* get_address_of_cached_is_closed_23() { return &___cached_is_closed_23; }
	inline void set_cached_is_closed_23(bool value)
	{
		___cached_is_closed_23 = value;
	}

	inline static int32_t get_offset_of_cached_is_closed_timestamp_24() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF, ___cached_is_closed_timestamp_24)); }
	inline int32_t get_cached_is_closed_timestamp_24() const { return ___cached_is_closed_timestamp_24; }
	inline int32_t* get_address_of_cached_is_closed_timestamp_24() { return &___cached_is_closed_timestamp_24; }
	inline void set_cached_is_closed_timestamp_24(int32_t value)
	{
		___cached_is_closed_timestamp_24 = value;
	}
};

struct DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF_StaticFields
{
public:
	// g3.Vector3d g3.DMesh3::InvalidVertex
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___InvalidVertex_2;
	// g3.Index3i g3.DMesh3::InvalidTriangle
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  ___InvalidTriangle_3;
	// g3.Index2i g3.DMesh3::InvalidEdge
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  ___InvalidEdge_4;

public:
	inline static int32_t get_offset_of_InvalidVertex_2() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF_StaticFields, ___InvalidVertex_2)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_InvalidVertex_2() const { return ___InvalidVertex_2; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_InvalidVertex_2() { return &___InvalidVertex_2; }
	inline void set_InvalidVertex_2(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___InvalidVertex_2 = value;
	}

	inline static int32_t get_offset_of_InvalidTriangle_3() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF_StaticFields, ___InvalidTriangle_3)); }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  get_InvalidTriangle_3() const { return ___InvalidTriangle_3; }
	inline Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 * get_address_of_InvalidTriangle_3() { return &___InvalidTriangle_3; }
	inline void set_InvalidTriangle_3(Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  value)
	{
		___InvalidTriangle_3 = value;
	}

	inline static int32_t get_offset_of_InvalidEdge_4() { return static_cast<int32_t>(offsetof(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF_StaticFields, ___InvalidEdge_4)); }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  get_InvalidEdge_4() const { return ___InvalidEdge_4; }
	inline Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596 * get_address_of_InvalidEdge_4() { return &___InvalidEdge_4; }
	inline void set_InvalidEdge_4(Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  value)
	{
		___InvalidEdge_4 = value;
	}
};


// g3.MeshBoundaryLoops
struct  MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.MeshBoundaryLoops::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// System.Collections.Generic.List`1<g3.EdgeLoop> g3.MeshBoundaryLoops::Loops
	List_1_tFA1FAB9FE0A645449348BF147AD429C2F42A856B * ___Loops_1;
	// System.Collections.Generic.List`1<g3.EdgeSpan> g3.MeshBoundaryLoops::Spans
	List_1_t504829E47155B26456BF03FF32D012F5FB76A991 * ___Spans_2;
	// System.Boolean g3.MeshBoundaryLoops::SawOpenSpans
	bool ___SawOpenSpans_3;
	// System.Boolean g3.MeshBoundaryLoops::FellBackToSpansOnFailure
	bool ___FellBackToSpansOnFailure_4;
	// g3.MeshBoundaryLoops_SpanBehaviors g3.MeshBoundaryLoops::SpanBehavior
	int32_t ___SpanBehavior_5;
	// g3.MeshBoundaryLoops_FailureBehaviors g3.MeshBoundaryLoops::FailureBehavior
	int32_t ___FailureBehavior_6;
	// System.Func`2<System.Int32,System.Boolean> g3.MeshBoundaryLoops::EdgeFilterF
	Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___EdgeFilterF_7;
	// System.Collections.Generic.List`1<System.Int32> g3.MeshBoundaryLoops::FailureBowties
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___FailureBowties_8;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loops_1() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___Loops_1)); }
	inline List_1_tFA1FAB9FE0A645449348BF147AD429C2F42A856B * get_Loops_1() const { return ___Loops_1; }
	inline List_1_tFA1FAB9FE0A645449348BF147AD429C2F42A856B ** get_address_of_Loops_1() { return &___Loops_1; }
	inline void set_Loops_1(List_1_tFA1FAB9FE0A645449348BF147AD429C2F42A856B * value)
	{
		___Loops_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loops_1), (void*)value);
	}

	inline static int32_t get_offset_of_Spans_2() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___Spans_2)); }
	inline List_1_t504829E47155B26456BF03FF32D012F5FB76A991 * get_Spans_2() const { return ___Spans_2; }
	inline List_1_t504829E47155B26456BF03FF32D012F5FB76A991 ** get_address_of_Spans_2() { return &___Spans_2; }
	inline void set_Spans_2(List_1_t504829E47155B26456BF03FF32D012F5FB76A991 * value)
	{
		___Spans_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Spans_2), (void*)value);
	}

	inline static int32_t get_offset_of_SawOpenSpans_3() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___SawOpenSpans_3)); }
	inline bool get_SawOpenSpans_3() const { return ___SawOpenSpans_3; }
	inline bool* get_address_of_SawOpenSpans_3() { return &___SawOpenSpans_3; }
	inline void set_SawOpenSpans_3(bool value)
	{
		___SawOpenSpans_3 = value;
	}

	inline static int32_t get_offset_of_FellBackToSpansOnFailure_4() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___FellBackToSpansOnFailure_4)); }
	inline bool get_FellBackToSpansOnFailure_4() const { return ___FellBackToSpansOnFailure_4; }
	inline bool* get_address_of_FellBackToSpansOnFailure_4() { return &___FellBackToSpansOnFailure_4; }
	inline void set_FellBackToSpansOnFailure_4(bool value)
	{
		___FellBackToSpansOnFailure_4 = value;
	}

	inline static int32_t get_offset_of_SpanBehavior_5() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___SpanBehavior_5)); }
	inline int32_t get_SpanBehavior_5() const { return ___SpanBehavior_5; }
	inline int32_t* get_address_of_SpanBehavior_5() { return &___SpanBehavior_5; }
	inline void set_SpanBehavior_5(int32_t value)
	{
		___SpanBehavior_5 = value;
	}

	inline static int32_t get_offset_of_FailureBehavior_6() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___FailureBehavior_6)); }
	inline int32_t get_FailureBehavior_6() const { return ___FailureBehavior_6; }
	inline int32_t* get_address_of_FailureBehavior_6() { return &___FailureBehavior_6; }
	inline void set_FailureBehavior_6(int32_t value)
	{
		___FailureBehavior_6 = value;
	}

	inline static int32_t get_offset_of_EdgeFilterF_7() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___EdgeFilterF_7)); }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * get_EdgeFilterF_7() const { return ___EdgeFilterF_7; }
	inline Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 ** get_address_of_EdgeFilterF_7() { return &___EdgeFilterF_7; }
	inline void set_EdgeFilterF_7(Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * value)
	{
		___EdgeFilterF_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EdgeFilterF_7), (void*)value);
	}

	inline static int32_t get_offset_of_FailureBowties_8() { return static_cast<int32_t>(offsetof(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965, ___FailureBowties_8)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_FailureBowties_8() const { return ___FailureBowties_8; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_FailureBowties_8() { return &___FailureBowties_8; }
	inline void set_FailureBowties_8(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___FailureBowties_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FailureBowties_8), (void*)value);
	}
};


// g3.MeshNormals
struct  MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8  : public RuntimeObject
{
public:
	// g3.IMesh g3.MeshNormals::Mesh
	RuntimeObject* ___Mesh_0;
	// g3.DVector`1<g3.Vector3d> g3.MeshNormals::Normals
	DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * ___Normals_1;
	// System.Func`2<System.Int32,g3.Vector3d> g3.MeshNormals::VertexF
	Func_2_tE513A1AF963327E6A947E9414F3E6D0BF130C831 * ___VertexF_2;
	// g3.MeshNormals_NormalsTypes g3.MeshNormals::NormalType
	int32_t ___NormalType_3;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8, ___Mesh_0)); }
	inline RuntimeObject* get_Mesh_0() const { return ___Mesh_0; }
	inline RuntimeObject** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(RuntimeObject* value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Normals_1() { return static_cast<int32_t>(offsetof(MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8, ___Normals_1)); }
	inline DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * get_Normals_1() const { return ___Normals_1; }
	inline DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 ** get_address_of_Normals_1() { return &___Normals_1; }
	inline void set_Normals_1(DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * value)
	{
		___Normals_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Normals_1), (void*)value);
	}

	inline static int32_t get_offset_of_VertexF_2() { return static_cast<int32_t>(offsetof(MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8, ___VertexF_2)); }
	inline Func_2_tE513A1AF963327E6A947E9414F3E6D0BF130C831 * get_VertexF_2() const { return ___VertexF_2; }
	inline Func_2_tE513A1AF963327E6A947E9414F3E6D0BF130C831 ** get_address_of_VertexF_2() { return &___VertexF_2; }
	inline void set_VertexF_2(Func_2_tE513A1AF963327E6A947E9414F3E6D0BF130C831 * value)
	{
		___VertexF_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexF_2), (void*)value);
	}

	inline static int32_t get_offset_of_NormalType_3() { return static_cast<int32_t>(offsetof(MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8, ___NormalType_3)); }
	inline int32_t get_NormalType_3() const { return ___NormalType_3; }
	inline int32_t* get_address_of_NormalType_3() { return &___NormalType_3; }
	inline void set_NormalType_3(int32_t value)
	{
		___NormalType_3 = value;
	}
};


// g3.Remesher
struct  Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B  : public MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810
{
public:
	// g3.IProjectionTarget g3.Remesher::target
	RuntimeObject* ___target_5;
	// System.Boolean g3.Remesher::EnableFlips
	bool ___EnableFlips_6;
	// System.Boolean g3.Remesher::EnableCollapses
	bool ___EnableCollapses_7;
	// System.Boolean g3.Remesher::EnableSplits
	bool ___EnableSplits_8;
	// System.Boolean g3.Remesher::EnableSmoothing
	bool ___EnableSmoothing_9;
	// System.Boolean g3.Remesher::PreventNormalFlips
	bool ___PreventNormalFlips_10;
	// System.Double g3.Remesher::MinEdgeLength
	double ___MinEdgeLength_11;
	// System.Double g3.Remesher::MaxEdgeLength
	double ___MaxEdgeLength_12;
	// System.Double g3.Remesher::SmoothSpeedT
	double ___SmoothSpeedT_13;
	// g3.Remesher_SmoothTypes g3.Remesher::SmoothType
	int32_t ___SmoothType_14;
	// System.Func`4<g3.DMesh3,System.Int32,System.Double,g3.Vector3d> g3.Remesher::CustomSmoothF
	Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 * ___CustomSmoothF_15;
	// System.Func`2<System.Int32,g3.Remesher_VertexControl> g3.Remesher::VertexControlF
	Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 * ___VertexControlF_16;
	// System.Collections.Generic.List`1<System.Int32> g3.Remesher::DebugEdges
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___DebugEdges_17;
	// g3.Remesher_TargetProjectionMode g3.Remesher::ProjectionMode
	int32_t ___ProjectionMode_18;
	// System.Boolean g3.Remesher::EnableParallelProjection
	bool ___EnableParallelProjection_19;
	// System.Boolean g3.Remesher::EnableParallelSmooth
	bool ___EnableParallelSmooth_20;
	// System.Boolean g3.Remesher::EnableSmoothInPlace
	bool ___EnableSmoothInPlace_21;
	// System.Boolean g3.Remesher::ENABLE_PROFILING
	bool ___ENABLE_PROFILING_22;
	// System.Boolean g3.Remesher::MeshIsClosed
	bool ___MeshIsClosed_23;
	// System.Int32 g3.Remesher::ModifiedEdgesLastPass
	int32_t ___ModifiedEdgesLastPass_24;
	// System.Int32 g3.Remesher::nMaxEdgeID
	int32_t ___nMaxEdgeID_26;
	// g3.DVector`1<g3.Vector3d> g3.Remesher::vBufferV
	DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * ___vBufferV_27;
	// System.Collections.BitArray g3.Remesher::vModifiedV
	BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * ___vModifiedV_28;
	// System.Boolean g3.Remesher::ENABLE_DEBUG_CHECKS
	bool ___ENABLE_DEBUG_CHECKS_29;
	// System.Int32 g3.Remesher::COUNT_SPLITS
	int32_t ___COUNT_SPLITS_30;
	// System.Int32 g3.Remesher::COUNT_COLLAPSES
	int32_t ___COUNT_COLLAPSES_31;
	// System.Int32 g3.Remesher::COUNT_FLIPS
	int32_t ___COUNT_FLIPS_32;
	// System.Diagnostics.Stopwatch g3.Remesher::AllOpsW
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___AllOpsW_33;
	// System.Diagnostics.Stopwatch g3.Remesher::SmoothW
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___SmoothW_34;
	// System.Diagnostics.Stopwatch g3.Remesher::ProjectW
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___ProjectW_35;
	// System.Diagnostics.Stopwatch g3.Remesher::FlipW
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___FlipW_36;
	// System.Diagnostics.Stopwatch g3.Remesher::SplitW
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___SplitW_37;
	// System.Diagnostics.Stopwatch g3.Remesher::CollapseW
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___CollapseW_38;

public:
	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___target_5)); }
	inline RuntimeObject* get_target_5() const { return ___target_5; }
	inline RuntimeObject** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(RuntimeObject* value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_EnableFlips_6() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___EnableFlips_6)); }
	inline bool get_EnableFlips_6() const { return ___EnableFlips_6; }
	inline bool* get_address_of_EnableFlips_6() { return &___EnableFlips_6; }
	inline void set_EnableFlips_6(bool value)
	{
		___EnableFlips_6 = value;
	}

	inline static int32_t get_offset_of_EnableCollapses_7() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___EnableCollapses_7)); }
	inline bool get_EnableCollapses_7() const { return ___EnableCollapses_7; }
	inline bool* get_address_of_EnableCollapses_7() { return &___EnableCollapses_7; }
	inline void set_EnableCollapses_7(bool value)
	{
		___EnableCollapses_7 = value;
	}

	inline static int32_t get_offset_of_EnableSplits_8() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___EnableSplits_8)); }
	inline bool get_EnableSplits_8() const { return ___EnableSplits_8; }
	inline bool* get_address_of_EnableSplits_8() { return &___EnableSplits_8; }
	inline void set_EnableSplits_8(bool value)
	{
		___EnableSplits_8 = value;
	}

	inline static int32_t get_offset_of_EnableSmoothing_9() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___EnableSmoothing_9)); }
	inline bool get_EnableSmoothing_9() const { return ___EnableSmoothing_9; }
	inline bool* get_address_of_EnableSmoothing_9() { return &___EnableSmoothing_9; }
	inline void set_EnableSmoothing_9(bool value)
	{
		___EnableSmoothing_9 = value;
	}

	inline static int32_t get_offset_of_PreventNormalFlips_10() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___PreventNormalFlips_10)); }
	inline bool get_PreventNormalFlips_10() const { return ___PreventNormalFlips_10; }
	inline bool* get_address_of_PreventNormalFlips_10() { return &___PreventNormalFlips_10; }
	inline void set_PreventNormalFlips_10(bool value)
	{
		___PreventNormalFlips_10 = value;
	}

	inline static int32_t get_offset_of_MinEdgeLength_11() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___MinEdgeLength_11)); }
	inline double get_MinEdgeLength_11() const { return ___MinEdgeLength_11; }
	inline double* get_address_of_MinEdgeLength_11() { return &___MinEdgeLength_11; }
	inline void set_MinEdgeLength_11(double value)
	{
		___MinEdgeLength_11 = value;
	}

	inline static int32_t get_offset_of_MaxEdgeLength_12() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___MaxEdgeLength_12)); }
	inline double get_MaxEdgeLength_12() const { return ___MaxEdgeLength_12; }
	inline double* get_address_of_MaxEdgeLength_12() { return &___MaxEdgeLength_12; }
	inline void set_MaxEdgeLength_12(double value)
	{
		___MaxEdgeLength_12 = value;
	}

	inline static int32_t get_offset_of_SmoothSpeedT_13() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___SmoothSpeedT_13)); }
	inline double get_SmoothSpeedT_13() const { return ___SmoothSpeedT_13; }
	inline double* get_address_of_SmoothSpeedT_13() { return &___SmoothSpeedT_13; }
	inline void set_SmoothSpeedT_13(double value)
	{
		___SmoothSpeedT_13 = value;
	}

	inline static int32_t get_offset_of_SmoothType_14() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___SmoothType_14)); }
	inline int32_t get_SmoothType_14() const { return ___SmoothType_14; }
	inline int32_t* get_address_of_SmoothType_14() { return &___SmoothType_14; }
	inline void set_SmoothType_14(int32_t value)
	{
		___SmoothType_14 = value;
	}

	inline static int32_t get_offset_of_CustomSmoothF_15() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___CustomSmoothF_15)); }
	inline Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 * get_CustomSmoothF_15() const { return ___CustomSmoothF_15; }
	inline Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 ** get_address_of_CustomSmoothF_15() { return &___CustomSmoothF_15; }
	inline void set_CustomSmoothF_15(Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 * value)
	{
		___CustomSmoothF_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomSmoothF_15), (void*)value);
	}

	inline static int32_t get_offset_of_VertexControlF_16() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___VertexControlF_16)); }
	inline Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 * get_VertexControlF_16() const { return ___VertexControlF_16; }
	inline Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 ** get_address_of_VertexControlF_16() { return &___VertexControlF_16; }
	inline void set_VertexControlF_16(Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 * value)
	{
		___VertexControlF_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexControlF_16), (void*)value);
	}

	inline static int32_t get_offset_of_DebugEdges_17() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___DebugEdges_17)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_DebugEdges_17() const { return ___DebugEdges_17; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_DebugEdges_17() { return &___DebugEdges_17; }
	inline void set_DebugEdges_17(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___DebugEdges_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugEdges_17), (void*)value);
	}

	inline static int32_t get_offset_of_ProjectionMode_18() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___ProjectionMode_18)); }
	inline int32_t get_ProjectionMode_18() const { return ___ProjectionMode_18; }
	inline int32_t* get_address_of_ProjectionMode_18() { return &___ProjectionMode_18; }
	inline void set_ProjectionMode_18(int32_t value)
	{
		___ProjectionMode_18 = value;
	}

	inline static int32_t get_offset_of_EnableParallelProjection_19() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___EnableParallelProjection_19)); }
	inline bool get_EnableParallelProjection_19() const { return ___EnableParallelProjection_19; }
	inline bool* get_address_of_EnableParallelProjection_19() { return &___EnableParallelProjection_19; }
	inline void set_EnableParallelProjection_19(bool value)
	{
		___EnableParallelProjection_19 = value;
	}

	inline static int32_t get_offset_of_EnableParallelSmooth_20() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___EnableParallelSmooth_20)); }
	inline bool get_EnableParallelSmooth_20() const { return ___EnableParallelSmooth_20; }
	inline bool* get_address_of_EnableParallelSmooth_20() { return &___EnableParallelSmooth_20; }
	inline void set_EnableParallelSmooth_20(bool value)
	{
		___EnableParallelSmooth_20 = value;
	}

	inline static int32_t get_offset_of_EnableSmoothInPlace_21() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___EnableSmoothInPlace_21)); }
	inline bool get_EnableSmoothInPlace_21() const { return ___EnableSmoothInPlace_21; }
	inline bool* get_address_of_EnableSmoothInPlace_21() { return &___EnableSmoothInPlace_21; }
	inline void set_EnableSmoothInPlace_21(bool value)
	{
		___EnableSmoothInPlace_21 = value;
	}

	inline static int32_t get_offset_of_ENABLE_PROFILING_22() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___ENABLE_PROFILING_22)); }
	inline bool get_ENABLE_PROFILING_22() const { return ___ENABLE_PROFILING_22; }
	inline bool* get_address_of_ENABLE_PROFILING_22() { return &___ENABLE_PROFILING_22; }
	inline void set_ENABLE_PROFILING_22(bool value)
	{
		___ENABLE_PROFILING_22 = value;
	}

	inline static int32_t get_offset_of_MeshIsClosed_23() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___MeshIsClosed_23)); }
	inline bool get_MeshIsClosed_23() const { return ___MeshIsClosed_23; }
	inline bool* get_address_of_MeshIsClosed_23() { return &___MeshIsClosed_23; }
	inline void set_MeshIsClosed_23(bool value)
	{
		___MeshIsClosed_23 = value;
	}

	inline static int32_t get_offset_of_ModifiedEdgesLastPass_24() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___ModifiedEdgesLastPass_24)); }
	inline int32_t get_ModifiedEdgesLastPass_24() const { return ___ModifiedEdgesLastPass_24; }
	inline int32_t* get_address_of_ModifiedEdgesLastPass_24() { return &___ModifiedEdgesLastPass_24; }
	inline void set_ModifiedEdgesLastPass_24(int32_t value)
	{
		___ModifiedEdgesLastPass_24 = value;
	}

	inline static int32_t get_offset_of_nMaxEdgeID_26() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___nMaxEdgeID_26)); }
	inline int32_t get_nMaxEdgeID_26() const { return ___nMaxEdgeID_26; }
	inline int32_t* get_address_of_nMaxEdgeID_26() { return &___nMaxEdgeID_26; }
	inline void set_nMaxEdgeID_26(int32_t value)
	{
		___nMaxEdgeID_26 = value;
	}

	inline static int32_t get_offset_of_vBufferV_27() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___vBufferV_27)); }
	inline DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * get_vBufferV_27() const { return ___vBufferV_27; }
	inline DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 ** get_address_of_vBufferV_27() { return &___vBufferV_27; }
	inline void set_vBufferV_27(DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * value)
	{
		___vBufferV_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vBufferV_27), (void*)value);
	}

	inline static int32_t get_offset_of_vModifiedV_28() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___vModifiedV_28)); }
	inline BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * get_vModifiedV_28() const { return ___vModifiedV_28; }
	inline BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C ** get_address_of_vModifiedV_28() { return &___vModifiedV_28; }
	inline void set_vModifiedV_28(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * value)
	{
		___vModifiedV_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vModifiedV_28), (void*)value);
	}

	inline static int32_t get_offset_of_ENABLE_DEBUG_CHECKS_29() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___ENABLE_DEBUG_CHECKS_29)); }
	inline bool get_ENABLE_DEBUG_CHECKS_29() const { return ___ENABLE_DEBUG_CHECKS_29; }
	inline bool* get_address_of_ENABLE_DEBUG_CHECKS_29() { return &___ENABLE_DEBUG_CHECKS_29; }
	inline void set_ENABLE_DEBUG_CHECKS_29(bool value)
	{
		___ENABLE_DEBUG_CHECKS_29 = value;
	}

	inline static int32_t get_offset_of_COUNT_SPLITS_30() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___COUNT_SPLITS_30)); }
	inline int32_t get_COUNT_SPLITS_30() const { return ___COUNT_SPLITS_30; }
	inline int32_t* get_address_of_COUNT_SPLITS_30() { return &___COUNT_SPLITS_30; }
	inline void set_COUNT_SPLITS_30(int32_t value)
	{
		___COUNT_SPLITS_30 = value;
	}

	inline static int32_t get_offset_of_COUNT_COLLAPSES_31() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___COUNT_COLLAPSES_31)); }
	inline int32_t get_COUNT_COLLAPSES_31() const { return ___COUNT_COLLAPSES_31; }
	inline int32_t* get_address_of_COUNT_COLLAPSES_31() { return &___COUNT_COLLAPSES_31; }
	inline void set_COUNT_COLLAPSES_31(int32_t value)
	{
		___COUNT_COLLAPSES_31 = value;
	}

	inline static int32_t get_offset_of_COUNT_FLIPS_32() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___COUNT_FLIPS_32)); }
	inline int32_t get_COUNT_FLIPS_32() const { return ___COUNT_FLIPS_32; }
	inline int32_t* get_address_of_COUNT_FLIPS_32() { return &___COUNT_FLIPS_32; }
	inline void set_COUNT_FLIPS_32(int32_t value)
	{
		___COUNT_FLIPS_32 = value;
	}

	inline static int32_t get_offset_of_AllOpsW_33() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___AllOpsW_33)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_AllOpsW_33() const { return ___AllOpsW_33; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_AllOpsW_33() { return &___AllOpsW_33; }
	inline void set_AllOpsW_33(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___AllOpsW_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllOpsW_33), (void*)value);
	}

	inline static int32_t get_offset_of_SmoothW_34() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___SmoothW_34)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_SmoothW_34() const { return ___SmoothW_34; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_SmoothW_34() { return &___SmoothW_34; }
	inline void set_SmoothW_34(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___SmoothW_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmoothW_34), (void*)value);
	}

	inline static int32_t get_offset_of_ProjectW_35() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___ProjectW_35)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_ProjectW_35() const { return ___ProjectW_35; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_ProjectW_35() { return &___ProjectW_35; }
	inline void set_ProjectW_35(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___ProjectW_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProjectW_35), (void*)value);
	}

	inline static int32_t get_offset_of_FlipW_36() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___FlipW_36)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_FlipW_36() const { return ___FlipW_36; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_FlipW_36() { return &___FlipW_36; }
	inline void set_FlipW_36(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___FlipW_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FlipW_36), (void*)value);
	}

	inline static int32_t get_offset_of_SplitW_37() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___SplitW_37)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_SplitW_37() const { return ___SplitW_37; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_SplitW_37() { return &___SplitW_37; }
	inline void set_SplitW_37(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___SplitW_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SplitW_37), (void*)value);
	}

	inline static int32_t get_offset_of_CollapseW_38() { return static_cast<int32_t>(offsetof(Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B, ___CollapseW_38)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_CollapseW_38() const { return ___CollapseW_38; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_CollapseW_38() { return &___CollapseW_38; }
	inline void set_CollapseW_38(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___CollapseW_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollapseW_38), (void*)value);
	}
};


// g3.SetGroupBehavior
struct  SetGroupBehavior_t7A0A542E2B8C7A9C8A43D833285F7FC78F1AB486 
{
public:
	// g3.SetGroupBehavior_Modes g3.SetGroupBehavior::Mode
	int32_t ___Mode_0;
	// System.Int32 g3.SetGroupBehavior::SetGroupID
	int32_t ___SetGroupID_1;

public:
	inline static int32_t get_offset_of_Mode_0() { return static_cast<int32_t>(offsetof(SetGroupBehavior_t7A0A542E2B8C7A9C8A43D833285F7FC78F1AB486, ___Mode_0)); }
	inline int32_t get_Mode_0() const { return ___Mode_0; }
	inline int32_t* get_address_of_Mode_0() { return &___Mode_0; }
	inline void set_Mode_0(int32_t value)
	{
		___Mode_0 = value;
	}

	inline static int32_t get_offset_of_SetGroupID_1() { return static_cast<int32_t>(offsetof(SetGroupBehavior_t7A0A542E2B8C7A9C8A43D833285F7FC78F1AB486, ___SetGroupID_1)); }
	inline int32_t get_SetGroupID_1() const { return ___SetGroupID_1; }
	inline int32_t* get_address_of_SetGroupID_1() { return &___SetGroupID_1; }
	inline void set_SetGroupID_1(int32_t value)
	{
		___SetGroupID_1 = value;
	}
};


// gs.PointSetHashtable
struct  PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6  : public RuntimeObject
{
public:
	// g3.IPointSet gs.PointSetHashtable::Points
	RuntimeObject* ___Points_0;
	// g3.DSparseGrid3`1<gs.PointSetHashtable_PointList> gs.PointSetHashtable::Grid
	DSparseGrid3_1_t413FBDEE5A71ECEBC6EC3063C91E234C223DC514 * ___Grid_1;
	// g3.ShiftGridIndexer3 gs.PointSetHashtable::indexF
	ShiftGridIndexer3_tEC3C82B58D569B71476E383077F4F3F69181E95D  ___indexF_2;
	// g3.Vector3d gs.PointSetHashtable::Origin
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___Origin_3;
	// System.Double gs.PointSetHashtable::CellSize
	double ___CellSize_4;

public:
	inline static int32_t get_offset_of_Points_0() { return static_cast<int32_t>(offsetof(PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6, ___Points_0)); }
	inline RuntimeObject* get_Points_0() const { return ___Points_0; }
	inline RuntimeObject** get_address_of_Points_0() { return &___Points_0; }
	inline void set_Points_0(RuntimeObject* value)
	{
		___Points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Points_0), (void*)value);
	}

	inline static int32_t get_offset_of_Grid_1() { return static_cast<int32_t>(offsetof(PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6, ___Grid_1)); }
	inline DSparseGrid3_1_t413FBDEE5A71ECEBC6EC3063C91E234C223DC514 * get_Grid_1() const { return ___Grid_1; }
	inline DSparseGrid3_1_t413FBDEE5A71ECEBC6EC3063C91E234C223DC514 ** get_address_of_Grid_1() { return &___Grid_1; }
	inline void set_Grid_1(DSparseGrid3_1_t413FBDEE5A71ECEBC6EC3063C91E234C223DC514 * value)
	{
		___Grid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Grid_1), (void*)value);
	}

	inline static int32_t get_offset_of_indexF_2() { return static_cast<int32_t>(offsetof(PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6, ___indexF_2)); }
	inline ShiftGridIndexer3_tEC3C82B58D569B71476E383077F4F3F69181E95D  get_indexF_2() const { return ___indexF_2; }
	inline ShiftGridIndexer3_tEC3C82B58D569B71476E383077F4F3F69181E95D * get_address_of_indexF_2() { return &___indexF_2; }
	inline void set_indexF_2(ShiftGridIndexer3_tEC3C82B58D569B71476E383077F4F3F69181E95D  value)
	{
		___indexF_2 = value;
	}

	inline static int32_t get_offset_of_Origin_3() { return static_cast<int32_t>(offsetof(PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6, ___Origin_3)); }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  get_Origin_3() const { return ___Origin_3; }
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * get_address_of_Origin_3() { return &___Origin_3; }
	inline void set_Origin_3(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		___Origin_3 = value;
	}

	inline static int32_t get_offset_of_CellSize_4() { return static_cast<int32_t>(offsetof(PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6, ___CellSize_4)); }
	inline double get_CellSize_4() const { return ___CellSize_4; }
	inline double* get_address_of_CellSize_4() { return &___CellSize_4; }
	inline void set_CellSize_4(double value)
	{
		___CellSize_4 = value;
	}
};


// gs.RemesherPro_<>c__DisplayClass23_0
struct  U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2  : public RuntimeObject
{
public:
	// gs.RemesherPro gs.RemesherPro_<>c__DisplayClass23_0::<>4__this
	RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * ___U3CU3E4__this_0;
	// g3.IOrientedProjectionTarget gs.RemesherPro_<>c__DisplayClass23_0::normalTarget
	RuntimeObject* ___normalTarget_1;
	// System.Threading.SpinLock gs.RemesherPro_<>c__DisplayClass23_0::buffer_lock
	SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  ___buffer_lock_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2, ___U3CU3E4__this_0)); }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_normalTarget_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2, ___normalTarget_1)); }
	inline RuntimeObject* get_normalTarget_1() const { return ___normalTarget_1; }
	inline RuntimeObject** get_address_of_normalTarget_1() { return &___normalTarget_1; }
	inline void set_normalTarget_1(RuntimeObject* value)
	{
		___normalTarget_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalTarget_1), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_lock_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2, ___buffer_lock_2)); }
	inline SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  get_buffer_lock_2() const { return ___buffer_lock_2; }
	inline SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * get_address_of_buffer_lock_2() { return &___buffer_lock_2; }
	inline void set_buffer_lock_2(SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  value)
	{
		___buffer_lock_2 = value;
	}
};


// gs.RemesherPro_SettingState
struct  SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4 
{
public:
	// System.Boolean gs.RemesherPro_SettingState::EnableFlips
	bool ___EnableFlips_0;
	// System.Boolean gs.RemesherPro_SettingState::EnableCollapses
	bool ___EnableCollapses_1;
	// System.Boolean gs.RemesherPro_SettingState::EnableSplits
	bool ___EnableSplits_2;
	// System.Boolean gs.RemesherPro_SettingState::EnableSmoothing
	bool ___EnableSmoothing_3;
	// System.Double gs.RemesherPro_SettingState::MinEdgeLength
	double ___MinEdgeLength_4;
	// System.Double gs.RemesherPro_SettingState::MaxEdgeLength
	double ___MaxEdgeLength_5;
	// System.Double gs.RemesherPro_SettingState::SmoothSpeedT
	double ___SmoothSpeedT_6;
	// g3.Remesher_SmoothTypes gs.RemesherPro_SettingState::SmoothType
	int32_t ___SmoothType_7;
	// g3.Remesher_TargetProjectionMode gs.RemesherPro_SettingState::ProjectionMode
	int32_t ___ProjectionMode_8;

public:
	inline static int32_t get_offset_of_EnableFlips_0() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___EnableFlips_0)); }
	inline bool get_EnableFlips_0() const { return ___EnableFlips_0; }
	inline bool* get_address_of_EnableFlips_0() { return &___EnableFlips_0; }
	inline void set_EnableFlips_0(bool value)
	{
		___EnableFlips_0 = value;
	}

	inline static int32_t get_offset_of_EnableCollapses_1() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___EnableCollapses_1)); }
	inline bool get_EnableCollapses_1() const { return ___EnableCollapses_1; }
	inline bool* get_address_of_EnableCollapses_1() { return &___EnableCollapses_1; }
	inline void set_EnableCollapses_1(bool value)
	{
		___EnableCollapses_1 = value;
	}

	inline static int32_t get_offset_of_EnableSplits_2() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___EnableSplits_2)); }
	inline bool get_EnableSplits_2() const { return ___EnableSplits_2; }
	inline bool* get_address_of_EnableSplits_2() { return &___EnableSplits_2; }
	inline void set_EnableSplits_2(bool value)
	{
		___EnableSplits_2 = value;
	}

	inline static int32_t get_offset_of_EnableSmoothing_3() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___EnableSmoothing_3)); }
	inline bool get_EnableSmoothing_3() const { return ___EnableSmoothing_3; }
	inline bool* get_address_of_EnableSmoothing_3() { return &___EnableSmoothing_3; }
	inline void set_EnableSmoothing_3(bool value)
	{
		___EnableSmoothing_3 = value;
	}

	inline static int32_t get_offset_of_MinEdgeLength_4() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___MinEdgeLength_4)); }
	inline double get_MinEdgeLength_4() const { return ___MinEdgeLength_4; }
	inline double* get_address_of_MinEdgeLength_4() { return &___MinEdgeLength_4; }
	inline void set_MinEdgeLength_4(double value)
	{
		___MinEdgeLength_4 = value;
	}

	inline static int32_t get_offset_of_MaxEdgeLength_5() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___MaxEdgeLength_5)); }
	inline double get_MaxEdgeLength_5() const { return ___MaxEdgeLength_5; }
	inline double* get_address_of_MaxEdgeLength_5() { return &___MaxEdgeLength_5; }
	inline void set_MaxEdgeLength_5(double value)
	{
		___MaxEdgeLength_5 = value;
	}

	inline static int32_t get_offset_of_SmoothSpeedT_6() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___SmoothSpeedT_6)); }
	inline double get_SmoothSpeedT_6() const { return ___SmoothSpeedT_6; }
	inline double* get_address_of_SmoothSpeedT_6() { return &___SmoothSpeedT_6; }
	inline void set_SmoothSpeedT_6(double value)
	{
		___SmoothSpeedT_6 = value;
	}

	inline static int32_t get_offset_of_SmoothType_7() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___SmoothType_7)); }
	inline int32_t get_SmoothType_7() const { return ___SmoothType_7; }
	inline int32_t* get_address_of_SmoothType_7() { return &___SmoothType_7; }
	inline void set_SmoothType_7(int32_t value)
	{
		___SmoothType_7 = value;
	}

	inline static int32_t get_offset_of_ProjectionMode_8() { return static_cast<int32_t>(offsetof(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4, ___ProjectionMode_8)); }
	inline int32_t get_ProjectionMode_8() const { return ___ProjectionMode_8; }
	inline int32_t* get_address_of_ProjectionMode_8() { return &___ProjectionMode_8; }
	inline void set_ProjectionMode_8(int32_t value)
	{
		___ProjectionMode_8 = value;
	}
};

// Native definition for P/Invoke marshalling of gs.RemesherPro/SettingState
struct SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_pinvoke
{
	int32_t ___EnableFlips_0;
	int32_t ___EnableCollapses_1;
	int32_t ___EnableSplits_2;
	int32_t ___EnableSmoothing_3;
	double ___MinEdgeLength_4;
	double ___MaxEdgeLength_5;
	double ___SmoothSpeedT_6;
	int32_t ___SmoothType_7;
	int32_t ___ProjectionMode_8;
};
// Native definition for COM marshalling of gs.RemesherPro/SettingState
struct SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_com
{
	int32_t ___EnableFlips_0;
	int32_t ___EnableCollapses_1;
	int32_t ___EnableSplits_2;
	int32_t ___EnableSmoothing_3;
	double ___MinEdgeLength_4;
	double ___MaxEdgeLength_5;
	double ___SmoothSpeedT_6;
	int32_t ___SmoothType_7;
	int32_t ___ProjectionMode_8;
};

// gs.RemoveOccludedTriangles
struct  RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0  : public RuntimeObject
{
public:
	// g3.DMesh3 gs.RemoveOccludedTriangles::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// g3.DMeshAABBTree3 gs.RemoveOccludedTriangles::Spatial
	DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * ___Spatial_1;
	// System.Collections.Generic.List`1<System.Int32> gs.RemoveOccludedTriangles::RemovedT
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___RemovedT_2;
	// System.Boolean gs.RemoveOccludedTriangles::RemoveFailed
	bool ___RemoveFailed_3;
	// System.Boolean gs.RemoveOccludedTriangles::PerVertex
	bool ___PerVertex_4;
	// System.Double gs.RemoveOccludedTriangles::NormalOffset
	double ___NormalOffset_5;
	// System.Double gs.RemoveOccludedTriangles::WindingIsoValue
	double ___WindingIsoValue_6;
	// gs.RemoveOccludedTriangles_CalculationMode gs.RemoveOccludedTriangles::InsideMode
	int32_t ___InsideMode_7;
	// g3.ProgressCancel gs.RemoveOccludedTriangles::Progress
	ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * ___Progress_8;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Spatial_1() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___Spatial_1)); }
	inline DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * get_Spatial_1() const { return ___Spatial_1; }
	inline DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 ** get_address_of_Spatial_1() { return &___Spatial_1; }
	inline void set_Spatial_1(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * value)
	{
		___Spatial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Spatial_1), (void*)value);
	}

	inline static int32_t get_offset_of_RemovedT_2() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___RemovedT_2)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_RemovedT_2() const { return ___RemovedT_2; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_RemovedT_2() { return &___RemovedT_2; }
	inline void set_RemovedT_2(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___RemovedT_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemovedT_2), (void*)value);
	}

	inline static int32_t get_offset_of_RemoveFailed_3() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___RemoveFailed_3)); }
	inline bool get_RemoveFailed_3() const { return ___RemoveFailed_3; }
	inline bool* get_address_of_RemoveFailed_3() { return &___RemoveFailed_3; }
	inline void set_RemoveFailed_3(bool value)
	{
		___RemoveFailed_3 = value;
	}

	inline static int32_t get_offset_of_PerVertex_4() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___PerVertex_4)); }
	inline bool get_PerVertex_4() const { return ___PerVertex_4; }
	inline bool* get_address_of_PerVertex_4() { return &___PerVertex_4; }
	inline void set_PerVertex_4(bool value)
	{
		___PerVertex_4 = value;
	}

	inline static int32_t get_offset_of_NormalOffset_5() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___NormalOffset_5)); }
	inline double get_NormalOffset_5() const { return ___NormalOffset_5; }
	inline double* get_address_of_NormalOffset_5() { return &___NormalOffset_5; }
	inline void set_NormalOffset_5(double value)
	{
		___NormalOffset_5 = value;
	}

	inline static int32_t get_offset_of_WindingIsoValue_6() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___WindingIsoValue_6)); }
	inline double get_WindingIsoValue_6() const { return ___WindingIsoValue_6; }
	inline double* get_address_of_WindingIsoValue_6() { return &___WindingIsoValue_6; }
	inline void set_WindingIsoValue_6(double value)
	{
		___WindingIsoValue_6 = value;
	}

	inline static int32_t get_offset_of_InsideMode_7() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___InsideMode_7)); }
	inline int32_t get_InsideMode_7() const { return ___InsideMode_7; }
	inline int32_t* get_address_of_InsideMode_7() { return &___InsideMode_7; }
	inline void set_InsideMode_7(int32_t value)
	{
		___InsideMode_7 = value;
	}

	inline static int32_t get_offset_of_Progress_8() { return static_cast<int32_t>(offsetof(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0, ___Progress_8)); }
	inline ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * get_Progress_8() const { return ___Progress_8; }
	inline ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 ** get_address_of_Progress_8() { return &___Progress_8; }
	inline void set_Progress_8(ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * value)
	{
		___Progress_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Progress_8), (void*)value);
	}
};


// gs.RemoveOccludedTriangles_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365  : public RuntimeObject
{
public:
	// gs.RemoveOccludedTriangles gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::<>4__this
	RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * ___U3CU3E4__this_0;
	// g3.DMeshAABBTree3 gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::spatial
	DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * ___spatial_1;
	// System.Collections.Generic.List`1<g3.Vector3d> gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::ray_dirs
	List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * ___ray_dirs_2;
	// System.Int32 gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::NR
	int32_t ___NR_3;
	// System.Boolean gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::cancel
	bool ___cancel_4;
	// System.Collections.BitArray gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::vertices
	BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * ___vertices_5;
	// System.Func`2<g3.Vector3d,System.Boolean> gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::isOccludedF
	Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * ___isOccludedF_6;
	// System.Threading.SpinLock gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::removeLock
	SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  ___removeLock_7;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___U3CU3E4__this_0)); }
	inline RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_spatial_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___spatial_1)); }
	inline DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * get_spatial_1() const { return ___spatial_1; }
	inline DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 ** get_address_of_spatial_1() { return &___spatial_1; }
	inline void set_spatial_1(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * value)
	{
		___spatial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatial_1), (void*)value);
	}

	inline static int32_t get_offset_of_ray_dirs_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___ray_dirs_2)); }
	inline List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * get_ray_dirs_2() const { return ___ray_dirs_2; }
	inline List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 ** get_address_of_ray_dirs_2() { return &___ray_dirs_2; }
	inline void set_ray_dirs_2(List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * value)
	{
		___ray_dirs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ray_dirs_2), (void*)value);
	}

	inline static int32_t get_offset_of_NR_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___NR_3)); }
	inline int32_t get_NR_3() const { return ___NR_3; }
	inline int32_t* get_address_of_NR_3() { return &___NR_3; }
	inline void set_NR_3(int32_t value)
	{
		___NR_3 = value;
	}

	inline static int32_t get_offset_of_cancel_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___cancel_4)); }
	inline bool get_cancel_4() const { return ___cancel_4; }
	inline bool* get_address_of_cancel_4() { return &___cancel_4; }
	inline void set_cancel_4(bool value)
	{
		___cancel_4 = value;
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___vertices_5)); }
	inline BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * get_vertices_5() const { return ___vertices_5; }
	inline BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C ** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOccludedF_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___isOccludedF_6)); }
	inline Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * get_isOccludedF_6() const { return ___isOccludedF_6; }
	inline Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE ** get_address_of_isOccludedF_6() { return &___isOccludedF_6; }
	inline void set_isOccludedF_6(Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * value)
	{
		___isOccludedF_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isOccludedF_6), (void*)value);
	}

	inline static int32_t get_offset_of_removeLock_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365, ___removeLock_7)); }
	inline SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  get_removeLock_7() const { return ___removeLock_7; }
	inline SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * get_address_of_removeLock_7() { return &___removeLock_7; }
	inline void set_removeLock_7(SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  value)
	{
		___removeLock_7 = value;
	}
};


// System.Action`1<System.Int32>
struct  Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<g3.Remesher,System.Boolean>
struct  Action_2_tA04000E22AE4BB80358647073628729031416298  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct  Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,g3.Remesher_VertexControl>
struct  Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<g3.Vector3d,System.Boolean>
struct  Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<g3.DMesh3,System.Int32,System.Double,g3.Vector3d>
struct  Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<g3.Vector3d,g3.Vector3f,System.Int32,g3.Vector3d>
struct  Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// g3.MeshExtrudeFaces
struct  MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9  : public RuntimeObject
{
public:
	// g3.DMesh3 g3.MeshExtrudeFaces::Mesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___Mesh_0;
	// System.Int32[] g3.MeshExtrudeFaces::Triangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___Triangles_1;
	// g3.SetGroupBehavior g3.MeshExtrudeFaces::Group
	SetGroupBehavior_t7A0A542E2B8C7A9C8A43D833285F7FC78F1AB486  ___Group_2;
	// System.Func`4<g3.Vector3d,g3.Vector3f,System.Int32,g3.Vector3d> g3.MeshExtrudeFaces::ExtrudedPositionF
	Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC * ___ExtrudedPositionF_3;
	// System.Collections.Generic.List`1<g3.Index2i> g3.MeshExtrudeFaces::EdgePairs
	List_1_tBAF3A9D9CD5E2CEC8D440E7C718B4D98162A97F5 * ___EdgePairs_4;
	// g3.MeshVertexSelection g3.MeshExtrudeFaces::ExtrudeVertices
	MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * ___ExtrudeVertices_5;
	// System.Int32[] g3.MeshExtrudeFaces::JoinTriangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___JoinTriangles_6;
	// System.Int32 g3.MeshExtrudeFaces::JoinGroupID
	int32_t ___JoinGroupID_7;
	// System.Boolean g3.MeshExtrudeFaces::JoinIncomplete
	bool ___JoinIncomplete_8;

public:
	inline static int32_t get_offset_of_Mesh_0() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___Mesh_0)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_Mesh_0() const { return ___Mesh_0; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_Mesh_0() { return &___Mesh_0; }
	inline void set_Mesh_0(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___Mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_Triangles_1() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___Triangles_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_Triangles_1() const { return ___Triangles_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_Triangles_1() { return &___Triangles_1; }
	inline void set_Triangles_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___Triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_Group_2() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___Group_2)); }
	inline SetGroupBehavior_t7A0A542E2B8C7A9C8A43D833285F7FC78F1AB486  get_Group_2() const { return ___Group_2; }
	inline SetGroupBehavior_t7A0A542E2B8C7A9C8A43D833285F7FC78F1AB486 * get_address_of_Group_2() { return &___Group_2; }
	inline void set_Group_2(SetGroupBehavior_t7A0A542E2B8C7A9C8A43D833285F7FC78F1AB486  value)
	{
		___Group_2 = value;
	}

	inline static int32_t get_offset_of_ExtrudedPositionF_3() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___ExtrudedPositionF_3)); }
	inline Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC * get_ExtrudedPositionF_3() const { return ___ExtrudedPositionF_3; }
	inline Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC ** get_address_of_ExtrudedPositionF_3() { return &___ExtrudedPositionF_3; }
	inline void set_ExtrudedPositionF_3(Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC * value)
	{
		___ExtrudedPositionF_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtrudedPositionF_3), (void*)value);
	}

	inline static int32_t get_offset_of_EdgePairs_4() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___EdgePairs_4)); }
	inline List_1_tBAF3A9D9CD5E2CEC8D440E7C718B4D98162A97F5 * get_EdgePairs_4() const { return ___EdgePairs_4; }
	inline List_1_tBAF3A9D9CD5E2CEC8D440E7C718B4D98162A97F5 ** get_address_of_EdgePairs_4() { return &___EdgePairs_4; }
	inline void set_EdgePairs_4(List_1_tBAF3A9D9CD5E2CEC8D440E7C718B4D98162A97F5 * value)
	{
		___EdgePairs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EdgePairs_4), (void*)value);
	}

	inline static int32_t get_offset_of_ExtrudeVertices_5() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___ExtrudeVertices_5)); }
	inline MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * get_ExtrudeVertices_5() const { return ___ExtrudeVertices_5; }
	inline MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 ** get_address_of_ExtrudeVertices_5() { return &___ExtrudeVertices_5; }
	inline void set_ExtrudeVertices_5(MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * value)
	{
		___ExtrudeVertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtrudeVertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_JoinTriangles_6() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___JoinTriangles_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_JoinTriangles_6() const { return ___JoinTriangles_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_JoinTriangles_6() { return &___JoinTriangles_6; }
	inline void set_JoinTriangles_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___JoinTriangles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JoinTriangles_6), (void*)value);
	}

	inline static int32_t get_offset_of_JoinGroupID_7() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___JoinGroupID_7)); }
	inline int32_t get_JoinGroupID_7() const { return ___JoinGroupID_7; }
	inline int32_t* get_address_of_JoinGroupID_7() { return &___JoinGroupID_7; }
	inline void set_JoinGroupID_7(int32_t value)
	{
		___JoinGroupID_7 = value;
	}

	inline static int32_t get_offset_of_JoinIncomplete_8() { return static_cast<int32_t>(offsetof(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9, ___JoinIncomplete_8)); }
	inline bool get_JoinIncomplete_8() const { return ___JoinIncomplete_8; }
	inline bool* get_address_of_JoinIncomplete_8() { return &___JoinIncomplete_8; }
	inline void set_JoinIncomplete_8(bool value)
	{
		___JoinIncomplete_8 = value;
	}
};


// g3.RegionRemesher
struct  RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67  : public Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B
{
public:
	// g3.DMesh3 g3.RegionRemesher::BaseMesh
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___BaseMesh_39;
	// g3.DSubmesh3 g3.RegionRemesher::Region
	DSubmesh3_tF77FDDA481275AFFF11915C2479521474496C17F * ___Region_40;
	// g3.IndexMap g3.RegionRemesher::ReinsertSubToBaseMapV
	IndexMap_tC0E8AC834E9C6764B171E6E62C8D00D331EFA320 * ___ReinsertSubToBaseMapV_41;
	// g3.MeshEditor_DuplicateTriBehavior g3.RegionRemesher::ReinsertDuplicateTriBehavior
	int32_t ___ReinsertDuplicateTriBehavior_42;
	// g3.MeshConstraints g3.RegionRemesher::bdry_constraints
	MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 * ___bdry_constraints_43;
	// System.Int32[] g3.RegionRemesher::cur_base_tris
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___cur_base_tris_44;

public:
	inline static int32_t get_offset_of_BaseMesh_39() { return static_cast<int32_t>(offsetof(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67, ___BaseMesh_39)); }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * get_BaseMesh_39() const { return ___BaseMesh_39; }
	inline DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF ** get_address_of_BaseMesh_39() { return &___BaseMesh_39; }
	inline void set_BaseMesh_39(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * value)
	{
		___BaseMesh_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseMesh_39), (void*)value);
	}

	inline static int32_t get_offset_of_Region_40() { return static_cast<int32_t>(offsetof(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67, ___Region_40)); }
	inline DSubmesh3_tF77FDDA481275AFFF11915C2479521474496C17F * get_Region_40() const { return ___Region_40; }
	inline DSubmesh3_tF77FDDA481275AFFF11915C2479521474496C17F ** get_address_of_Region_40() { return &___Region_40; }
	inline void set_Region_40(DSubmesh3_tF77FDDA481275AFFF11915C2479521474496C17F * value)
	{
		___Region_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Region_40), (void*)value);
	}

	inline static int32_t get_offset_of_ReinsertSubToBaseMapV_41() { return static_cast<int32_t>(offsetof(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67, ___ReinsertSubToBaseMapV_41)); }
	inline IndexMap_tC0E8AC834E9C6764B171E6E62C8D00D331EFA320 * get_ReinsertSubToBaseMapV_41() const { return ___ReinsertSubToBaseMapV_41; }
	inline IndexMap_tC0E8AC834E9C6764B171E6E62C8D00D331EFA320 ** get_address_of_ReinsertSubToBaseMapV_41() { return &___ReinsertSubToBaseMapV_41; }
	inline void set_ReinsertSubToBaseMapV_41(IndexMap_tC0E8AC834E9C6764B171E6E62C8D00D331EFA320 * value)
	{
		___ReinsertSubToBaseMapV_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReinsertSubToBaseMapV_41), (void*)value);
	}

	inline static int32_t get_offset_of_ReinsertDuplicateTriBehavior_42() { return static_cast<int32_t>(offsetof(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67, ___ReinsertDuplicateTriBehavior_42)); }
	inline int32_t get_ReinsertDuplicateTriBehavior_42() const { return ___ReinsertDuplicateTriBehavior_42; }
	inline int32_t* get_address_of_ReinsertDuplicateTriBehavior_42() { return &___ReinsertDuplicateTriBehavior_42; }
	inline void set_ReinsertDuplicateTriBehavior_42(int32_t value)
	{
		___ReinsertDuplicateTriBehavior_42 = value;
	}

	inline static int32_t get_offset_of_bdry_constraints_43() { return static_cast<int32_t>(offsetof(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67, ___bdry_constraints_43)); }
	inline MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 * get_bdry_constraints_43() const { return ___bdry_constraints_43; }
	inline MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 ** get_address_of_bdry_constraints_43() { return &___bdry_constraints_43; }
	inline void set_bdry_constraints_43(MeshConstraints_t903DC29C408D9799F286829FCBCE710622E635F5 * value)
	{
		___bdry_constraints_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bdry_constraints_43), (void*)value);
	}

	inline static int32_t get_offset_of_cur_base_tris_44() { return static_cast<int32_t>(offsetof(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67, ___cur_base_tris_44)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_cur_base_tris_44() const { return ___cur_base_tris_44; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_cur_base_tris_44() { return &___cur_base_tris_44; }
	inline void set_cur_base_tris_44(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___cur_base_tris_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cur_base_tris_44), (void*)value);
	}
};


// gs.RemesherPro
struct  RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD  : public Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B
{
public:
	// System.Boolean gs.RemesherPro::UseFaceAlignedProjection
	bool ___UseFaceAlignedProjection_39;
	// System.Int32 gs.RemesherPro::FaceProjectionPassesPerIteration
	int32_t ___FaceProjectionPassesPerIteration_40;
	// System.Collections.Generic.HashSet`1<System.Int32> gs.RemesherPro::modified_edges
	HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * ___modified_edges_41;
	// System.Threading.SpinLock gs.RemesherPro::modified_edges_lock
	SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  ___modified_edges_lock_42;
	// System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32> gs.RemesherPro::SplitF
	Action_4_tA3A7515617FB121D078F6AFFFC27CE76F2D28E6F * ___SplitF_43;
	// System.Collections.Generic.List`1<System.Int32> gs.RemesherPro::edges_buffer
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___edges_buffer_44;
	// g3.DVector`1<System.Double> gs.RemesherPro::vBufferVWeights
	DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * ___vBufferVWeights_45;
	// System.Collections.Generic.List`1<gs.RemesherPro_SettingState> gs.RemesherPro::stateStack
	List_1_t334DA225737840AAFF235B29CBE2258BB838B32D * ___stateStack_46;

public:
	inline static int32_t get_offset_of_UseFaceAlignedProjection_39() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___UseFaceAlignedProjection_39)); }
	inline bool get_UseFaceAlignedProjection_39() const { return ___UseFaceAlignedProjection_39; }
	inline bool* get_address_of_UseFaceAlignedProjection_39() { return &___UseFaceAlignedProjection_39; }
	inline void set_UseFaceAlignedProjection_39(bool value)
	{
		___UseFaceAlignedProjection_39 = value;
	}

	inline static int32_t get_offset_of_FaceProjectionPassesPerIteration_40() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___FaceProjectionPassesPerIteration_40)); }
	inline int32_t get_FaceProjectionPassesPerIteration_40() const { return ___FaceProjectionPassesPerIteration_40; }
	inline int32_t* get_address_of_FaceProjectionPassesPerIteration_40() { return &___FaceProjectionPassesPerIteration_40; }
	inline void set_FaceProjectionPassesPerIteration_40(int32_t value)
	{
		___FaceProjectionPassesPerIteration_40 = value;
	}

	inline static int32_t get_offset_of_modified_edges_41() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___modified_edges_41)); }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * get_modified_edges_41() const { return ___modified_edges_41; }
	inline HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD ** get_address_of_modified_edges_41() { return &___modified_edges_41; }
	inline void set_modified_edges_41(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * value)
	{
		___modified_edges_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modified_edges_41), (void*)value);
	}

	inline static int32_t get_offset_of_modified_edges_lock_42() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___modified_edges_lock_42)); }
	inline SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  get_modified_edges_lock_42() const { return ___modified_edges_lock_42; }
	inline SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * get_address_of_modified_edges_lock_42() { return &___modified_edges_lock_42; }
	inline void set_modified_edges_lock_42(SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1  value)
	{
		___modified_edges_lock_42 = value;
	}

	inline static int32_t get_offset_of_SplitF_43() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___SplitF_43)); }
	inline Action_4_tA3A7515617FB121D078F6AFFFC27CE76F2D28E6F * get_SplitF_43() const { return ___SplitF_43; }
	inline Action_4_tA3A7515617FB121D078F6AFFFC27CE76F2D28E6F ** get_address_of_SplitF_43() { return &___SplitF_43; }
	inline void set_SplitF_43(Action_4_tA3A7515617FB121D078F6AFFFC27CE76F2D28E6F * value)
	{
		___SplitF_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SplitF_43), (void*)value);
	}

	inline static int32_t get_offset_of_edges_buffer_44() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___edges_buffer_44)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_edges_buffer_44() const { return ___edges_buffer_44; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_edges_buffer_44() { return &___edges_buffer_44; }
	inline void set_edges_buffer_44(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___edges_buffer_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___edges_buffer_44), (void*)value);
	}

	inline static int32_t get_offset_of_vBufferVWeights_45() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___vBufferVWeights_45)); }
	inline DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * get_vBufferVWeights_45() const { return ___vBufferVWeights_45; }
	inline DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD ** get_address_of_vBufferVWeights_45() { return &___vBufferVWeights_45; }
	inline void set_vBufferVWeights_45(DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * value)
	{
		___vBufferVWeights_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vBufferVWeights_45), (void*)value);
	}

	inline static int32_t get_offset_of_stateStack_46() { return static_cast<int32_t>(offsetof(RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD, ___stateStack_46)); }
	inline List_1_t334DA225737840AAFF235B29CBE2258BB838B32D * get_stateStack_46() const { return ___stateStack_46; }
	inline List_1_t334DA225737840AAFF235B29CBE2258BB838B32D ** get_address_of_stateStack_46() { return &___stateStack_46; }
	inline void set_stateStack_46(List_1_t334DA225737840AAFF235B29CBE2258BB838B32D * value)
	{
		___stateStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateStack_46), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// g3.Vector3d[]
struct Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  m_Items[1];

public:
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  value)
	{
		m_Items[index] = value;
	}
};


// System.Void g3.DVector`1<g3.Vector3d>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_gshared (DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * __this, int32_t ___i0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___value1, const RuntimeMethod* method);
// T g3.DVector`1<g3.Vector3d>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F_gshared (DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * __this, int32_t ___i0, const RuntimeMethod* method);
// T g3.DVector`1<System.Double>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_gshared (DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void g3.DVector`1<System.Double>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F_gshared (DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * __this, int32_t ___i0, double ___value1, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mA3967F293B9EFD496B8807A74EF34EE69482E79C_gshared (Func_2_t60396AB01CC26332B95927AF78E75881609E4F58 * __this, int32_t ___arg0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<g3.Vector3d>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA3F76539208E05E0772ADEE285AEB538FB0A7ADF_gshared (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<g3.Vector3d>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_gshared (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<g3.Vector3d>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m705801E33957190A1590511EEFC8A454771A120A_gshared_inline (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<g3.Vector3d,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m0C98AB08A6FF2F2C7D01A397415D2C03A70F116A_gshared (Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_gshared (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void g3.gParallel::ForEach<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0_gshared (RuntimeObject* ___source0, Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___body1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<g3.Vector3d>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  List_1_get_Item_m1974BD117BED7D513FA718522E8D9A7621D91628_gshared_inline (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, int32_t ___index0, const RuntimeMethod* method);
// !1 System.Func`2<g3.Vector3d,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B_gshared (Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___arg0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Func`4<g3.Vector3d,g3.Vector3f,System.Int32,g3.Vector3d>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_4__ctor_m72CBD8C19269B9A8CC98AF706770E4A73298676D_gshared (Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m7A04B203A571345E2BAEF8243CCC59E208EB189E_gshared (Action_2_t429E4750D84EBAC7EB494EB565EE0C8E1177C576 * __this, RuntimeObject * ___arg10, bool ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF14D47C26E1EF9BF8920827E27A32B9E8E20D131_gshared (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  List_1_GetEnumerator_mE721B3C5E137DCDB408BE05CA472EECBAAAA418A_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m219EC3BCCD8CF3A474AD0C4DBA55EB9B74C9F89C_gshared_inline (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m74CC97C62D3F061D26A7DDB7A61DF7DFD7806154_gshared (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m42C746E84C832B62E93536A47B4086F3A3AC6609_gshared (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m902D0B2B4B4B589E6F3653D9CDB38E0AA97EBCF9_gshared (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m314324CDEF8004C81A770D4629D221AF10B75B9E_gshared (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * __this, int32_t ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// g3.DMesh3 g3.MeshRefinerBase::get_Mesh()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline (MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 * __this, const RuntimeMethod* method);
// g3.Vector3d g3.DMesh3::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___vID0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Int32> g3.DMesh3::VtxEdgesItr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DMesh3_VtxEdgesItr_m16E37249A611C88FB44A74CD3D7F2CCF64A39378 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___vID0, const RuntimeMethod* method);
// g3.Index2i g3.DMesh3::GetEdgeV(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  DMesh3_GetEdgeV_m0FDB14A0CED0A7FFFAF93BFAF0359B9365E933AC (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___eID0, const RuntimeMethod* method);
// System.Double g3.Vector3d::DistanceSquared(g3.Vector3d&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3d_DistanceSquared_m296B3C12D816E413B3F2FA1F308AB7C1B54DF1A7 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___v20, const RuntimeMethod* method);
// System.Void gs.RemesherPro::queue_edge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemesherPro_queue_edge_mD3C493FD0AA0C5C1C44F24AC4200B74ED7FA2F88 (RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * __this, int32_t ___eid0, const RuntimeMethod* method);
// System.Void System.Collections.BitArray::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray_set_Item_m935E7A8491A931AB3C6C05EB523D0D565A67A6B2 (BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method);
// System.Void g3.DVector`1<g3.Vector3d>::set_Item(System.Int32,T)
inline void DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B (DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * __this, int32_t ___i0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___value1, const RuntimeMethod* method)
{
	((  void (*) (DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 *, int32_t, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B , const RuntimeMethod*))DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_gshared)(__this, ___i0, ___value1, method);
}
// System.Double g3.Vector3d::Distance(g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3d_Distance_m22D18C89A295187A00618BD059B16E679A74AF51 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v20, const RuntimeMethod* method);
// System.Void gs.RemesherPro::queue_edge_safe(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemesherPro_queue_edge_safe_m9745819C44817E9670BEA4826DB6CDCE34A5D01A (RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * __this, int32_t ___eid0, const RuntimeMethod* method);
// System.Void g3.DMesh3::GetTriInfo(System.Int32,g3.Vector3d&,System.Double&,g3.Vector3d&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DMesh3_GetTriInfo_m7F269486D712B99B5D0F77A06696F258106B6FEA (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___normal1, double* ___fArea2, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___vCentroid3, const RuntimeMethod* method);
// g3.Index3i g3.DMesh3::GetTriangle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  DMesh3_GetTriangle_m3241FD4A420BD3AB97FFA0DA62AA42B738673C34 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, const RuntimeMethod* method);
// System.Void g3.Frame3f::.ctor(g3.Vector3d,g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame3f__ctor_mF9265F298D6F7337E69E1957BD299BF697BA2305 (Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___origin0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___setZ1, const RuntimeMethod* method);
// g3.Vector3d g3.Frame3f::ToFrameP(g3.Vector3d&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Frame3f_ToFrameP_m85EBC2DCBA65F40BF48882EC3744AB5FBF9039C1 (Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___v0, const RuntimeMethod* method);
// g3.Vector3f g3.Vector3d::op_Explicit(g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  Vector3d_op_Explicit_m8EEAE8BF5F7EC35A0AC1BBE973F8BC2EFD358054 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v0, const RuntimeMethod* method);
// System.Void g3.Frame3f::AlignAxis(System.Int32,g3.Vector3f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame3f_AlignAxis_m4F45BFD7B7BE0D4314B5AED62578152694C33ADF (Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 * __this, int32_t ___nAxis0, Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___vTo1, const RuntimeMethod* method);
// System.Void g3.Frame3f::set_Origin(g3.Vector3f)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Frame3f_set_Origin_m79A9D57D64B52EE30948B26B53B9A4AD26F593C0_inline (Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 * __this, Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___value0, const RuntimeMethod* method);
// g3.Vector3d g3.Frame3f::FromFrameP(g3.Vector3d&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Frame3f_FromFrameP_mEAA71CB0E8B06C40D95894D767B1951AA67564A9 (Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___v0, const RuntimeMethod* method);
// System.Double g3.Vector3d::Dot(g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3d_Dot_m892E5F48ABBB5BFDA2D4B094979CA0C4ECF26925 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v20, const RuntimeMethod* method);
// System.Double g3.MathUtil::Clamp(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathUtil_Clamp_mD17F435EDB33DF30487DBA51AB82ACFF37CC2B7C (double ___f0, double ___low1, double ___high2, const RuntimeMethod* method);
// System.Void System.Threading.SpinLock::Enter(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinLock_Enter_mF3E9D6327B1767595E94264ABB9526C5CF3CFC3B (SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * __this, bool* ___lockTaken0, const RuntimeMethod* method);
// T g3.DVector`1<g3.Vector3d>::get_Item(System.Int32)
inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F (DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  (*) (DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 *, int32_t, const RuntimeMethod*))DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F_gshared)(__this, ___i0, method);
}
// g3.Vector3d g3.Vector3d::op_Multiply(System.Double,g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Vector3d_op_Multiply_m4A7B9A9BA25B443696049F1DA44448B72E30C0AE (double ___f0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v1, const RuntimeMethod* method);
// g3.Vector3d g3.Vector3d::op_Addition(g3.Vector3d,g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Vector3d_op_Addition_m9F4F9B4A361E3A869F9B126073A5DCE91E2BEAD9 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v00, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v11, const RuntimeMethod* method);
// T g3.DVector`1<System.Double>::get_Item(System.Int32)
inline double DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783 (DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  double (*) (DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD *, int32_t, const RuntimeMethod*))DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_gshared)(__this, ___i0, method);
}
// System.Void g3.DVector`1<System.Double>::set_Item(System.Int32,T)
inline void DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F (DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * __this, int32_t ___i0, double ___value1, const RuntimeMethod* method)
{
	((  void (*) (DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD *, int32_t, double, const RuntimeMethod*))DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F_gshared)(__this, ___i0, ___value1, method);
}
// System.Void System.Threading.SpinLock::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinLock_Exit_mBCAF79B24D11C11DA659E92B42EBF03BF4717EAB (SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * __this, const RuntimeMethod* method);
// System.Boolean g3.MeshRefinerBase::vertex_is_constrained(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshRefinerBase_vertex_is_constrained_m13A7728BA6F097233B2C2B447E2F30D4ED8A583B (MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 * __this, int32_t ___vid0, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,g3.Remesher/VertexControl>::Invoke(!0)
inline int32_t Func_2_Invoke_mB4AEAAA5ECFFEB679BFBBC4ECFF4ECF260A93A56 (Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 *, int32_t, const RuntimeMethod*))Func_2_Invoke_mA3967F293B9EFD496B8807A74EF34EE69482E79C_gshared)(__this, ___arg0, method);
}
// g3.Vector3d g3.Vector3d::op_Division(g3.Vector3d,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Vector3d_op_Division_mFB9D25E5B7F390440B9ECD1A8321E78E6F2B0E26 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v0, double ___f1, const RuntimeMethod* method);
// System.Boolean g3.Vector3d::EpsilonEqual(g3.Vector3d,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3d_EpsilonEqual_mB861B8566C0808CAF64A3F2EDF7A814DDBBCAC70 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v20, double ___epsilon1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void gs.RemesherPro/<EdgesIterator>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEdgesIteratorU3Ed__5__ctor_m608C172EFF55C947FBDB22F0D94D6D670943F760 (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Int32> gs.RemesherPro/<EdgesIterator>d__5::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEdgesIteratorU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m662702AE131603BBF1E1CA47A76AC85B36B3B0CD (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method);
// System.Void gs.RemoveDuplicateTriangles/TriCentroids::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriCentroids__ctor_m970A1D552ECCB802646EDB0372AB8ECE8608B7D3 (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method);
// System.Void gs.PointSetHashtable::.ctor(g3.IPointSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSetHashtable__ctor_m94D6CDE5873DE55FB49AC9F2347F922962FA62C9 (PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 * __this, RuntimeObject* ___points0, const RuntimeMethod* method);
// System.Int32 g3.DMesh3::get_TriangleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DMesh3_get_TriangleCount_mCFCEA8932FB24165FB21067964E52E8CAE08518A (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method);
// System.Void gs.PointSetHashtable::Build(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSetHashtable_Build_mBBA64A2069FEC4B62625B430E0CB815F3A422795 (PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 * __this, int32_t ___maxAxisSubdivs0, const RuntimeMethod* method);
// System.Int32 g3.DMesh3::get_MaxTriangleID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DMesh3_get_MaxTriangleID_m68244F0E95267717492F9ABD56C4BAF738E3CF18 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method);
// System.Boolean g3.DMesh3::IsTriangle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DMesh3_IsTriangle_m56AE4DB3A080B0A087D02BD9347ECD6F1D7FDEC2 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, const RuntimeMethod* method);
// g3.Vector3d g3.DMesh3::GetTriCentroid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  DMesh3_GetTriCentroid_m351840C9BF22AC6053ADF3DB57D6A96BF61CAA70 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, const RuntimeMethod* method);
// System.Boolean gs.PointSetHashtable::FindInBall(g3.Vector3d,System.Double,System.Int32[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointSetHashtable_FindInBall_m13D796C91C90C649BB223E649C7C26B13CF24B03 (PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___pt0, double ___r1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buffer2, int32_t* ___buffer_count3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void g3.DMesh3::GetTriVertices(System.Int32,g3.Vector3d&,g3.Vector3d&,g3.Vector3d&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DMesh3_GetTriVertices_mA2EFC0B50CE149FCDB60331656345327698A5EFD (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___v01, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___v12, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___v23, const RuntimeMethod* method);
// g3.Vector3d g3.MathUtil::Normal(g3.Vector3d,g3.Vector3d,g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  MathUtil_Normal_m2DBDAF0373520F19792D2DADFDE24954C8E234C5 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v10, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v21, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v32, const RuntimeMethod* method);
// System.Boolean gs.RemoveDuplicateTriangles::is_same_triangle(g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoveDuplicateTriangles_is_same_triangle_m8DC1351DAA151ED82A8D7B9E0A021C2D0511BD4D (RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___a0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___b1, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___c2, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___x3, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___y4, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___z5, double ___tolSqr6, const RuntimeMethod* method);
// g3.MeshResult g3.DMesh3::RemoveTriangle(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DMesh3_RemoveTriangle_m1A6343A727A71B2CFDCF792C70F78B57A95987F1 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, bool ___bRemoveIsolatedVertices1, bool ___bPreserveManifold2, const RuntimeMethod* method);
// System.Double g3.Vector3d::DistanceSquared(g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v20, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Int32> g3.DMesh3::TriangleIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DMesh3_TriangleIndices_mA55F7FDA0C1F985E93B36211441CA8948632EC4C (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method);
// System.Int32 g3.DMesh3::get_Timestamp()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t DMesh3_get_Timestamp_m97E466421467DEA22BC83C368A3B440438775FA2_inline (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method);
// System.Boolean g3.ProgressCancel::Cancelled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProgressCancel_Cancelled_mE3BBC58C2B521DE29280C019F403C8D30122F36E (ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * __this, const RuntimeMethod* method);
// System.Void gs.RemoveOccludedTriangles/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mCC98A3E3C2F2EECC8E5EC93B7F3F08673F102F73 (U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * __this, const RuntimeMethod* method);
// System.Void g3.MeshBoundaryLoops::.ctor(g3.DMesh3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBoundaryLoops__ctor_m7935B856992D4EC83B81C5C611962930C7C75138 (MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, bool ___bAutoCompute1, const RuntimeMethod* method);
// System.Int32 g3.MeshBoundaryLoops::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshBoundaryLoops_get_Count_m7851220861D3C582DDEC6DBD3285CE421CFB6079 (MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * __this, const RuntimeMethod* method);
// System.Void g3.DMesh3::.ctor(g3.DMesh3,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DMesh3__ctor_m148A2F73972D16DBCD564EFA4A278985495EB1DC (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___copy0, bool ___bCompact1, bool ___bWantNormals2, bool ___bWantColors3, bool ___bWantUVs4, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<g3.EdgeLoop> g3.MeshBoundaryLoops::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshBoundaryLoops_GetEnumerator_m7BA9E280F67E59DECE9D5C1622D5B49E7983F5A8 (MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * __this, const RuntimeMethod* method);
// System.Void g3.SimpleHoleFiller::.ctor(g3.DMesh3,g3.EdgeLoop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleHoleFiller__ctor_m5168EB8709886C2730F8C8CA5A0034DA041D839C (SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * ___loop1, const RuntimeMethod* method);
// System.Void g3.DMeshAABBTree3::.ctor(g3.DMesh3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DMeshAABBTree3__ctor_mB092FEBD48F7A7FA3DD0FBE25A6014887E70F21A (DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___m0, bool ___autoBuild1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<g3.Vector3d>::.ctor()
inline void List_1__ctor_mA3F76539208E05E0772ADEE285AEB538FB0A7ADF (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 *, const RuntimeMethod*))List_1__ctor_mA3F76539208E05E0772ADEE285AEB538FB0A7ADF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<g3.Vector3d>::Add(!0)
inline void List_1_Add_m4E299E5B871B4A419334452600038FEA48178722 (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 *, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B , const RuntimeMethod*))List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_gshared)(__this, ___item0, method);
}
// g3.Vector3d g3.Vector3d::op_UnaryNegation(g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Vector3d_op_UnaryNegation_m60562586C7B9721CF854DC542DE190AED86A651D (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<g3.Vector3d>::get_Count()
inline int32_t List_1_get_Count_m705801E33957190A1590511EEFC8A454771A120A_inline (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 *, const RuntimeMethod*))List_1_get_Count_m705801E33957190A1590511EEFC8A454771A120A_gshared_inline)(__this, method);
}
// System.Void System.Func`2<g3.Vector3d,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0C98AB08A6FF2F2C7D01A397415D2C03A70F116A (Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m0C98AB08A6FF2F2C7D01A397415D2C03A70F116A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void gs.RemoveOccludedTriangles/<>c__DisplayClass13_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1__ctor_m9F0FEC0713CA825FEBCDC9F2A6E480EFD9FA4327 (U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * __this, const RuntimeMethod* method);
// System.Int32 g3.DMesh3::get_MaxVertexID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DMesh3_get_MaxVertexID_m0BD2745116CF61A6EA845E210169BBEAAF98FC49 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method);
// System.Void System.Collections.BitArray::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray__ctor_mFCF5EE42D4A347EF9A86932CCA1161F6AB382282 (BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * __this, int32_t ___length0, const RuntimeMethod* method);
// System.Boolean g3.DMesh3::get_HasVertexNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DMesh3_get_HasVertexNormals_m15D23B9A35C1742D4D4505190FB236F6D0ED8F3E (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method);
// System.Void g3.MeshNormals::.ctor(g3.IMesh,g3.MeshNormals/NormalsTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshNormals__ctor_m11B423C7669798A098E23540B14B8F5599BD43AE (MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * __this, RuntimeObject* ___mesh0, int32_t ___eType1, const RuntimeMethod* method);
// System.Void g3.MeshNormals::Compute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshNormals_Compute_m682A56F74A6175E57A71E63A274FE229323D3C1B (MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Int32> g3.DMesh3::VertexIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DMesh3_VertexIndices_m1B7368CA7BF3F3069C56B13086AC3E62B0697FCB (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void g3.gParallel::ForEach<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.Action`1<T>)
inline void gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0 (RuntimeObject* ___source0, Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___body1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *, const RuntimeMethod*))gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0_gshared)(___source0, ___body1, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline)(__this, method);
}
// System.Void g3.MeshEditor::.ctor(g3.DMesh3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor__ctor_mD7175093A09D81B11A3E62E8B3C921659AD07A2E (MeshEditor_t803B18DB096694419E2850701CC6C204891107A7 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, const RuntimeMethod* method);
// System.Boolean g3.MeshEditor::RemoveTriangles(System.Collections.Generic.IList`1<System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshEditor_RemoveTriangles_mD3959971E436D50DC70220C8E9986742E592F0D3 (MeshEditor_t803B18DB096694419E2850701CC6C204891107A7 * __this, RuntimeObject* ___triangles0, bool ___bRemoveIsolatedVerts1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<g3.Vector3d>::get_Item(System.Int32)
inline Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  List_1_get_Item_m1974BD117BED7D513FA718522E8D9A7621D91628_inline (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  (*) (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1974BD117BED7D513FA718522E8D9A7621D91628_gshared_inline)(__this, ___index0, method);
}
// System.Void g3.Ray3d::.ctor(g3.Vector3d,g3.Vector3d,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray3d__ctor_m1888C92146B72CB7A9EC2A0062B6E112838744A5 (Ray3d_t7A6B08A229386EA5F368EEA38147A7B9B54204E6 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___origin0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___direction1, bool ___bIsNormalized2, const RuntimeMethod* method);
// System.Boolean System.Collections.BitArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitArray_get_Item_m1016DFD6DE9A2CADDB37B264BD2F691CFE2D3DAC (BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * __this, int32_t ___index0, const RuntimeMethod* method);
// g3.Vector3d g3.DMesh3::GetTriNormal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  DMesh3_GetTriNormal_m45AB1C8BAB57727D5D419943A4A4A00008B6E7D9 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, const RuntimeMethod* method);
// g3.Vector3d g3.Vector3d::op_Multiply(g3.Vector3d,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Vector3d_op_Multiply_mE9F4DF0CA4853CD0B4A3A8045A6B2ED8859A53D4 (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v0, double ___f1, const RuntimeMethod* method);
// !1 System.Func`2<g3.Vector3d,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B (Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE *, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B , const RuntimeMethod*))Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B_gshared)(__this, ___arg0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// g3.Vector3d g3.MeshNormals::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  MeshNormals_get_Item_mC53EA691E4DEFBF83E1ED2CAA6841F619B1FA8B5 (MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * __this, int32_t ___vid0, const RuntimeMethod* method);
// g3.Vector3f g3.DMesh3::GetVertexNormal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  DMesh3_GetVertexNormal_m3E79DC7D2E17B2CFF73CEB61E1DAE390687267BD (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___vID0, const RuntimeMethod* method);
// g3.Vector3d g3.Vector3d::op_Implicit(g3.Vector3f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  Vector3d_op_Implicit_m7DEA1C778BCC104E1015679E42512A1C56590997 (Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___v0, const RuntimeMethod* method);
// g3.EdgeLoop gs.SmoothedHoleFill::select_loop_tris_hint(g3.MeshBoundaryLoops)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * SmoothedHoleFill_select_loop_tris_hint_m8C92AE0C9A616E40B1C43EB84970A40B095C1F15 (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * ___loops0, const RuntimeMethod* method);
// System.Int32 g3.MeshBoundaryLoops::get_MaxVerticesLoopIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshBoundaryLoops_get_MaxVerticesLoopIndex_mF2E062BDD4668264BFF7708D6BD9FC4758860034 (MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * __this, const RuntimeMethod* method);
// g3.EdgeLoop g3.MeshBoundaryLoops::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * MeshBoundaryLoops_get_Item_m1307EAF0DD80592FE7AA6502DDBA6D0F03A16EBB (MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void g3.MeshFaceSelection::.ctor(g3.DMesh3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFaceSelection__ctor_m1EFAE9CDBD6185350BAF0DE77E83CE7D57D39EB1 (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, const RuntimeMethod* method);
// System.Void g3.MeshFaceSelection::Select(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFaceSelection_Select_m07FB5796C3143FEE705F4FE9E8401E123A49E3D7 (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___triangles0, const RuntimeMethod* method);
// System.Void g3.MeshExtrudeFaces::.ctor(g3.DMesh3,System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshExtrudeFaces__ctor_m2A785E4EF05F8AD2AF2754FBD4E0204D4B4A20B8 (MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, RuntimeObject* ___triangles1, const RuntimeMethod* method);
// System.Void System.Func`4<g3.Vector3d,g3.Vector3f,System.Int32,g3.Vector3d>::.ctor(System.Object,System.IntPtr)
inline void Func_4__ctor_m72CBD8C19269B9A8CC98AF706770E4A73298676D (Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_4__ctor_m72CBD8C19269B9A8CC98AF706770E4A73298676D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void g3.MeshFaceSelection::ExpandToOneRingNeighbours(System.Int32,System.Func`2<System.Int32,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFaceSelection_ExpandToOneRingNeighbours_m0C35EB47E16A99048A1A438F7697741B24352377 (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * __this, int32_t ___nRings0, Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 * ___FilterF1, const RuntimeMethod* method);
// System.Boolean g3.MeshFaceSelection::LocalOptimize(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshFaceSelection_LocalOptimize_mD5BA0705B6DE7D1B916C47D410E90814532001B0 (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * __this, bool ___bClipFins0, bool ___bFillEars1, bool ___bFillTinyHoles2, bool ___bClipLoners3, bool ___bRemoveBowties4, const RuntimeMethod* method);
// System.Void g3.RegionRemesher::.ctor(g3.DMesh3,System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionRemesher__ctor_mEE289F89207AA5A2DC6553AA335E942CFB80B226 (RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, RuntimeObject* ___regionTris1, const RuntimeMethod* method);
// System.Void g3.Remesher::SetTargetEdgeLength(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Remesher_SetTargetEdgeLength_mEC01CF9C764FD63EBD90BD50926F879BB24961E3 (Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B * __this, double ___fLength0, const RuntimeMethod* method);
// System.Void System.Action`2<g3.Remesher,System.Boolean>::Invoke(!0,!1)
inline void Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7 (Action_2_tA04000E22AE4BB80358647073628729031416298 * __this, Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B * ___arg10, bool ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA04000E22AE4BB80358647073628729031416298 *, Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *, bool, const RuntimeMethod*))Action_2_Invoke_m7A04B203A571345E2BAEF8243CCC59E208EB189E_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean g3.RegionRemesher::BackPropropagate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionRemesher_BackPropropagate_m69D6C290D6CF96E8DDC97FE41B401A2DFE21B10A (RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * __this, bool ___bAllowSubmeshRepairs0, const RuntimeMethod* method);
// System.Int32[] g3.RegionRemesher::get_CurrentBaseTriangles()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* RegionRemesher_get_CurrentBaseTriangles_m36B4D59C3EE131D0047A81E140617B416395E9ED_inline (RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * __this, const RuntimeMethod* method);
// System.Void gs.SmoothedHoleFill::smooth_and_remesh_preserve(g3.MeshFaceSelection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothedHoleFill_smooth_and_remesh_preserve_m9CD724D95A6FAD2F4BBFBB71ED412A6A8C1B428D (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * ___tris0, bool ___bFinal1, const RuntimeMethod* method);
// System.Void gs.SmoothedHoleFill::smooth_and_remesh(g3.MeshFaceSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothedHoleFill_smooth_and_remesh_m1C62C0854DECE31BAAEC14FD35B7400B922665FA (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * ___tris0, const RuntimeMethod* method);
// System.Void g3.MeshVertexSelection::.ctor(g3.DMesh3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshVertexSelection__ctor_mC60BAEDDA2A8C25C7EB12B37F5E01AD0139C1E3B (MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, const RuntimeMethod* method);
// System.Void g3.MeshVertexSelection::SelectInteriorVertices(g3.MeshFaceSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshVertexSelection_SelectInteriorVertices_m32FE2C62A14FA487D11D1FFEB12473DB942C9205 (MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * __this, MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * ___triangles0, const RuntimeMethod* method);
// System.Int32[] g3.MeshVertexSelection::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* MeshVertexSelection_ToArray_m047929E7A06CDF621F679AD468B7B0B74F205AD9 (MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * __this, const RuntimeMethod* method);
// System.Void g3.LaplacianMeshSmoother::RegionSmooth(g3.DMesh3,System.Collections.Generic.IEnumerable`1<System.Int32>,System.Int32,System.Int32,System.Boolean,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaplacianMeshSmoother_RegionSmooth_m2214FB4F51DEF33A5A1C7EB3BF9C9F8D51DF0126 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, RuntimeObject* ___triangles1, int32_t ___nConstrainLoops2, int32_t ___nIncludeExteriorRings3, bool ___bPreserveExteriorRings4, double ___borderWeight5, double ___interiorWeight6, const RuntimeMethod* method);
// g3.MeshProjectionTarget g3.MeshProjectionTarget::Auto(g3.DMesh3,System.Collections.Generic.IEnumerable`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * MeshProjectionTarget_Auto_mA28FF3889E732D9B17891CB986CBF04A35FD29BE (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, RuntimeObject* ___triangles1, int32_t ___nExpandRings2, const RuntimeMethod* method);
// System.Void g3.Remesher::SetProjectionTarget(g3.IProjectionTarget)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Remesher_SetProjectionTarget_m52713B2B349592183AD1D236BE183DB7E274C5DF_inline (Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B * __this, RuntimeObject* ___target0, const RuntimeMethod* method);
// System.Int32[] g3.MeshFaceSelection::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* MeshFaceSelection_ToArray_mC9B5F4B6AA45AB08DBE8A6E3162E9A74B77FAA36 (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_mF14D47C26E1EF9BF8920827E27A32B9E8E20D131 (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD *, const RuntimeMethod*))HashSet_1__ctor_mF14D47C26E1EF9BF8920827E27A32B9E8E20D131_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  List_1_GetEnumerator_mE721B3C5E137DCDB408BE05CA472EECBAAAA418A (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_GetEnumerator_mE721B3C5E137DCDB408BE05CA472EECBAAAA418A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m219EC3BCCD8CF3A474AD0C4DBA55EB9B74C9F89C_inline (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 *, const RuntimeMethod*))Enumerator_get_Current_m219EC3BCCD8CF3A474AD0C4DBA55EB9B74C9F89C_gshared_inline)(__this, method);
}
// g3.Index3i g3.DMesh3::GetTriEdges(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  DMesh3_GetTriEdges_mC58DF83E17B1F69F08B2F67167623BE12F83FB79 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___tID0, const RuntimeMethod* method);
// System.Int32 g3.Index3i::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index3i_get_Item_m0B94C28E8347CAC03785874EE3773BB399724311 (Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean g3.DMesh3::IsBoundaryEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DMesh3_IsBoundaryEdge_m7F7B2248A794ECCFBD82BDFE3FA978AF6677E635 (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, int32_t ___eid0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
inline bool HashSet_1_Add_m74CC97C62D3F061D26A7DDB7A61DF7DFD7806154 (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD *, int32_t, const RuntimeMethod*))HashSet_1_Add_m74CC97C62D3F061D26A7DDB7A61DF7DFD7806154_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m42C746E84C832B62E93536A47B4086F3A3AC6609 (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 *, const RuntimeMethod*))Enumerator_MoveNext_m42C746E84C832B62E93536A47B4086F3A3AC6609_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m902D0B2B4B4B589E6F3653D9CDB38E0AA97EBCF9 (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 *, const RuntimeMethod*))Enumerator_Dispose_m902D0B2B4B4B589E6F3653D9CDB38E0AA97EBCF9_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
inline bool HashSet_1_Contains_m314324CDEF8004C81A770D4629D221AF10B75B9E (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD *, int32_t, const RuntimeMethod*))HashSet_1_Contains_m314324CDEF8004C81A770D4629D221AF10B75B9E_gshared)(__this, ___item0, method);
}
// System.Double g3.MathUtil::WyvillFalloff01(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathUtil_WyvillFalloff01_mBD8552BBD9EACBB74754F49F2F492A3568F2F804 (double ___fX0, const RuntimeMethod* method);
// System.Double g3.MathUtil::WyvillFalloff(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathUtil_WyvillFalloff_mE3C74A9AB6354157A58A2E71B616C71251773083 (double ___fD0, double ___fInnerRad1, double ___fOuterRad2, const RuntimeMethod* method);
// System.Void gs.WyvillFalloff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WyvillFalloff__ctor_m374372C97948DE49DB386BAE3AACB7AE12C9EF19 (WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void gs.RemesherPro_<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mCCCF7A04E199E04EA01176080D2DEBB13A464FB3 (U3CU3Ec__DisplayClass16_0_tF21F9087EE224C2B28BD2C9F58F8D6BFD9D2ECDE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gs.RemesherPro_<>c__DisplayClass16_0::<FastSplitIteration>b__0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CFastSplitIterationU3Eb__0_m76944DD0FF9EDCD0F73CF3DC68F339970CB60462 (U3CU3Ec__DisplayClass16_0_tF21F9087EE224C2B28BD2C9F58F8D6BFD9D2ECDE * __this, int32_t ___edgeID0, int32_t ___a1, int32_t ___b2, int32_t ___vNew3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass16_0_U3CFastSplitIterationU3Eb__0_m76944DD0FF9EDCD0F73CF3DC68F339970CB60462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		// Vector3d v = Mesh.GetVertex(vNew);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_1 = MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___vNew3;
		NullCheck(L_1);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_3 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// foreach (int eid in Mesh.VtxEdgesItr(vNew)) {
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_4 = __this->get_U3CU3E4__this_0();
		NullCheck(L_4);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_5 = MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___vNew3;
		NullCheck(L_5);
		RuntimeObject* L_7 = DMesh3_VtxEdgesItr_m16E37249A611C88FB44A74CD3D7F2CCF64A39378(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0091;
		}

IL_002d:
		{
			// foreach (int eid in Mesh.VtxEdgesItr(vNew)) {
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var, L_9);
			V_2 = L_10;
			// Index2i ev = Mesh.GetEdgeV(eid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_11 = __this->get_U3CU3E4__this_0();
			NullCheck(L_11);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_12 = MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline(L_11, /*hidden argument*/NULL);
			int32_t L_13 = V_2;
			NullCheck(L_12);
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_14 = DMesh3_GetEdgeV_m0FDB14A0CED0A7FFFAF93BFAF0359B9365E933AC(L_12, L_13, /*hidden argument*/NULL);
			V_3 = L_14;
			// int othervid = (ev.a == vNew) ? ev.b : ev.a;
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_15 = V_3;
			int32_t L_16 = L_15.get_a_0();
			int32_t L_17 = ___vNew3;
			if ((((int32_t)L_16) == ((int32_t)L_17)))
			{
				goto IL_0058;
			}
		}

IL_0050:
		{
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_18 = V_3;
			int32_t L_19 = L_18.get_a_0();
			G_B5_0 = L_19;
			goto IL_005e;
		}

IL_0058:
		{
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_20 = V_3;
			int32_t L_21 = L_20.get_b_1();
			G_B5_0 = L_21;
		}

IL_005e:
		{
			V_4 = G_B5_0;
			// if (mesh.GetVertex(othervid).DistanceSquared(ref v) > max_edge_len_sqr)
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_22 = __this->get_U3CU3E4__this_0();
			NullCheck(L_22);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_23 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_22)->get_mesh_0();
			int32_t L_24 = V_4;
			NullCheck(L_23);
			Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_25 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_23, L_24, /*hidden argument*/NULL);
			V_5 = L_25;
			double L_26 = Vector3d_DistanceSquared_m296B3C12D816E413B3F2FA1F308AB7C1B54DF1A7((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_5), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_0), /*hidden argument*/NULL);
			double L_27 = __this->get_max_edge_len_sqr_1();
			if ((!(((double)L_26) > ((double)L_27))))
			{
				goto IL_0091;
			}
		}

IL_0085:
		{
			// queue_edge(eid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_28 = __this->get_U3CU3E4__this_0();
			int32_t L_29 = V_2;
			NullCheck(L_28);
			RemesherPro_queue_edge_mD3C493FD0AA0C5C1C44F24AC4200B74ED7FA2F88(L_28, L_29, /*hidden argument*/NULL);
		}

IL_0091:
		{
			// foreach (int eid in Mesh.VtxEdgesItr(vNew)) {
			RuntimeObject* L_30 = V_1;
			NullCheck(L_30);
			bool L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_002d;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_32 = V_1;
			if (!L_32)
			{
				goto IL_00a4;
			}
		}

IL_009e:
		{
			RuntimeObject* L_33 = V_1;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_33);
		}

IL_00a4:
		{
			IL2CPP_END_FINALLY(155)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		// };
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
// System.Void gs.RemesherPro_<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mEE4DBCCC0840C99EAEFAF9E3A826837645F795E6 (U3CU3Ec__DisplayClass18_0_t7C5B0E54A8B1BE63E020B09A35D55B8A30BE2321 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gs.RemesherPro_<>c__DisplayClass18_0::<TrackedSmoothPass>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CTrackedSmoothPassU3Eb__0_m45EB4313712E74F46D36A61C58DFD9FF6423BE82 (U3CU3Ec__DisplayClass18_0_t7C5B0E54A8B1BE63E020B09A35D55B8A30BE2321 * __this, int32_t ___vID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass18_0_U3CTrackedSmoothPassU3Eb__0_m45EB4313712E74F46D36A61C58DFD9FF6423BE82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_7;
	memset((&V_7), 0, sizeof(V_7));
	double V_8 = 0.0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	{
		// Vector3d vCur = Mesh.GetVertex(vID);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_1 = MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___vID0;
		NullCheck(L_1);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_3 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// bool bModified = false;
		V_1 = (bool)0;
		// Vector3d vSmoothed = ComputeSmoothedVertexPos(vID, smoothFunc, out bModified);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_4 = __this->get_U3CU3E4__this_0();
		int32_t L_5 = ___vID0;
		Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 * L_6 = __this->get_smoothFunc_1();
		NullCheck(L_4);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_7 = VirtFuncInvoker3< Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B , int32_t, Func_4_tF4A7E75988CCA4D6522B2A48FE44C2D6522B51E0 *, bool* >::Invoke(21 /* g3.Vector3d g3.Remesher::ComputeSmoothedVertexPos(System.Int32,System.Func`4<g3.DMesh3,System.Int32,System.Double,g3.Vector3d>,System.Boolean&) */, L_4, L_5, L_6, (bool*)(&V_1));
		V_2 = L_7;
		// if (bModified) {
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0112;
		}
	}
	{
		// vModifiedV[vID] = true;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_9 = __this->get_U3CU3E4__this_0();
		NullCheck(L_9);
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_10 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_9)->get_vModifiedV_28();
		int32_t L_11 = ___vID0;
		NullCheck(L_10);
		BitArray_set_Item_m935E7A8491A931AB3C6C05EB523D0D565A67A6B2(L_10, L_11, (bool)1, /*hidden argument*/NULL);
		// vBufferV[vID] = vSmoothed;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_13 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_12)->get_vBufferV_27();
		int32_t L_14 = ___vID0;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_15 = V_2;
		NullCheck(L_13);
		DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B(L_13, L_14, L_15, /*hidden argument*/DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_RuntimeMethod_var);
		// foreach (int eid in mesh.VtxEdgesItr(vID)) {
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_16 = __this->get_U3CU3E4__this_0();
		NullCheck(L_16);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_17 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_16)->get_mesh_0();
		int32_t L_18 = ___vID0;
		NullCheck(L_17);
		RuntimeObject* L_19 = DMesh3_VtxEdgesItr_m16E37249A611C88FB44A74CD3D7F2CCF64A39378(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var, L_19);
		V_3 = L_20;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fb;
		}

IL_006f:
		{
			// foreach (int eid in mesh.VtxEdgesItr(vID)) {
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			int32_t L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var, L_21);
			V_4 = L_22;
			// Index2i ev = Mesh.GetEdgeV(eid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_23 = __this->get_U3CU3E4__this_0();
			NullCheck(L_23);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_24 = MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline(L_23, /*hidden argument*/NULL);
			int32_t L_25 = V_4;
			NullCheck(L_24);
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_26 = DMesh3_GetEdgeV_m0FDB14A0CED0A7FFFAF93BFAF0359B9365E933AC(L_24, L_25, /*hidden argument*/NULL);
			V_5 = L_26;
			// int othervid = (ev.a == vID) ? ev.b : ev.a;
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_27 = V_5;
			int32_t L_28 = L_27.get_a_0();
			int32_t L_29 = ___vID0;
			if ((((int32_t)L_28) == ((int32_t)L_29)))
			{
				goto IL_009e;
			}
		}

IL_0095:
		{
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_30 = V_5;
			int32_t L_31 = L_30.get_a_0();
			G_B6_0 = L_31;
			goto IL_00a5;
		}

IL_009e:
		{
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_32 = V_5;
			int32_t L_33 = L_32.get_b_1();
			G_B6_0 = L_33;
		}

IL_00a5:
		{
			V_6 = G_B6_0;
			// Vector3d otherv = mesh.GetVertex(othervid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_34 = __this->get_U3CU3E4__this_0();
			NullCheck(L_34);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_35 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_34)->get_mesh_0();
			int32_t L_36 = V_6;
			NullCheck(L_35);
			Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_37 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_35, L_36, /*hidden argument*/NULL);
			V_7 = L_37;
			// double old_len = vCur.Distance(otherv);
			Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_38 = V_7;
			Vector3d_Distance_m22D18C89A295187A00618BD059B16E679A74AF51((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_0), L_38, /*hidden argument*/NULL);
			// double new_len = vSmoothed.Distance(otherv);
			Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_39 = V_7;
			double L_40 = Vector3d_Distance_m22D18C89A295187A00618BD059B16E679A74AF51((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_2), L_39, /*hidden argument*/NULL);
			V_8 = L_40;
			// if (new_len < MinEdgeLength || new_len > MaxEdgeLength)
			double L_41 = V_8;
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_42 = __this->get_U3CU3E4__this_0();
			NullCheck(L_42);
			double L_43 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_42)->get_MinEdgeLength_11();
			if ((((double)L_41) < ((double)L_43)))
			{
				goto IL_00ee;
			}
		}

IL_00df:
		{
			double L_44 = V_8;
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_45 = __this->get_U3CU3E4__this_0();
			NullCheck(L_45);
			double L_46 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_45)->get_MaxEdgeLength_12();
			if ((!(((double)L_44) > ((double)L_46))))
			{
				goto IL_00fb;
			}
		}

IL_00ee:
		{
			// queue_edge_safe(eid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_47 = __this->get_U3CU3E4__this_0();
			int32_t L_48 = V_4;
			NullCheck(L_47);
			RemesherPro_queue_edge_safe_m9745819C44817E9670BEA4826DB6CDCE34A5D01A(L_47, L_48, /*hidden argument*/NULL);
		}

IL_00fb:
		{
			// foreach (int eid in mesh.VtxEdgesItr(vID)) {
			RuntimeObject* L_49 = V_3;
			NullCheck(L_49);
			bool L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_49);
			if (L_50)
			{
				goto IL_006f;
			}
		}

IL_0106:
		{
			IL2CPP_LEAVE(0x112, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_51 = V_3;
			if (!L_51)
			{
				goto IL_0111;
			}
		}

IL_010b:
		{
			RuntimeObject* L_52 = V_3;
			NullCheck(L_52);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_52);
		}

IL_0111:
		{
			IL2CPP_END_FINALLY(264)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_JUMP_TBL(0x112, IL_0112)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0112:
	{
		// };
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
// System.Void gs.RemesherPro_<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m015DFEB7B501596E249A31DF55D135372031E60D (U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gs.RemesherPro_<>c__DisplayClass23_0::<TrackedFaceProjectionPass>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CTrackedFaceProjectionPassU3Eb__0_m051F80D76FBEC640640F9D4B84EAFC1179E383B4 (U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2 * __this, int32_t ___tid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass23_0_U3CTrackedFaceProjectionPassU3Eb__0_m051F80D76FBEC640640F9D4B84EAFC1179E383B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87  V_9;
	memset((&V_9), 0, sizeof(V_9));
	double V_10 = 0.0;
	double V_11 = 0.0;
	bool V_12 = false;
	DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * V_13 = NULL;
	int32_t V_14 = 0;
	DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * V_15 = NULL;
	{
		// mesh.GetTriInfo(tid, out normal, out area, out centroid);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_1 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_0)->get_mesh_0();
		int32_t L_2 = ___tid0;
		NullCheck(L_1);
		DMesh3_GetTriInfo_m7F269486D712B99B5D0F77A06696F258106B6FEA(L_1, L_2, (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_0), (double*)(&V_1), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_2), /*hidden argument*/NULL);
		// Vector3d projPos = normalTarget.Project(centroid, out projNormal);
		RuntimeObject* L_3 = __this->get_normalTarget_1();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_4 = V_2;
		NullCheck(L_3);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_5 = InterfaceFuncInvoker3< Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B , Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B , Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *, int32_t >::Invoke(0 /* g3.Vector3d g3.IOrientedProjectionTarget::Project(g3.Vector3d,g3.Vector3d&,System.Int32) */, IOrientedProjectionTarget_tFC987D02E0D0E865BA37CF1C43211B1BD6F66092_il2cpp_TypeInfo_var, L_3, L_4, (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_3), (-1));
		V_4 = L_5;
		// Index3i tv = mesh.GetTriangle(tid);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_7 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_6)->get_mesh_0();
		int32_t L_8 = ___tid0;
		NullCheck(L_7);
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_9 = DMesh3_GetTriangle_m3241FD4A420BD3AB97FFA0DA62AA42B738673C34(L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		// Vector3d v0 = mesh.GetVertex(tv.a), v1 = mesh.GetVertex(tv.b), v2 = mesh.GetVertex(tv.c);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_11 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_10)->get_mesh_0();
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_12 = V_5;
		int32_t L_13 = L_12.get_a_0();
		NullCheck(L_11);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_14 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_11, L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		// Vector3d v0 = mesh.GetVertex(tv.a), v1 = mesh.GetVertex(tv.b), v2 = mesh.GetVertex(tv.c);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_15 = __this->get_U3CU3E4__this_0();
		NullCheck(L_15);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_16 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_15)->get_mesh_0();
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_17 = V_5;
		int32_t L_18 = L_17.get_b_1();
		NullCheck(L_16);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_19 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_16, L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		// Vector3d v0 = mesh.GetVertex(tv.a), v1 = mesh.GetVertex(tv.b), v2 = mesh.GetVertex(tv.c);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_20 = __this->get_U3CU3E4__this_0();
		NullCheck(L_20);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_21 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_20)->get_mesh_0();
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_22 = V_5;
		int32_t L_23 = L_22.get_c_2();
		NullCheck(L_21);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_24 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_21, L_23, /*hidden argument*/NULL);
		V_8 = L_24;
		// Frame3f triF = new Frame3f(centroid, normal);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_25 = V_2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_26 = V_0;
		Frame3f__ctor_mF9265F298D6F7337E69E1957BD299BF697BA2305((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), L_25, L_26, /*hidden argument*/NULL);
		// v0 = triF.ToFrameP(ref v0); v1 = triF.ToFrameP(ref v1); v2 = triF.ToFrameP(ref v2);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_27 = Frame3f_ToFrameP_m85EBC2DCBA65F40BF48882EC3744AB5FBF9039C1((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_6), /*hidden argument*/NULL);
		V_6 = L_27;
		// v0 = triF.ToFrameP(ref v0); v1 = triF.ToFrameP(ref v1); v2 = triF.ToFrameP(ref v2);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_28 = Frame3f_ToFrameP_m85EBC2DCBA65F40BF48882EC3744AB5FBF9039C1((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_7), /*hidden argument*/NULL);
		V_7 = L_28;
		// v0 = triF.ToFrameP(ref v0); v1 = triF.ToFrameP(ref v1); v2 = triF.ToFrameP(ref v2);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_29 = Frame3f_ToFrameP_m85EBC2DCBA65F40BF48882EC3744AB5FBF9039C1((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_8), /*hidden argument*/NULL);
		V_8 = L_29;
		// triF.AlignAxis(2, (Vector3f)projNormal);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  L_31 = Vector3d_op_Explicit_m8EEAE8BF5F7EC35A0AC1BBE973F8BC2EFD358054(L_30, /*hidden argument*/NULL);
		Frame3f_AlignAxis_m4F45BFD7B7BE0D4314B5AED62578152694C33ADF((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), 2, L_31, /*hidden argument*/NULL);
		// triF.Origin = (Vector3f)projPos;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_32 = V_4;
		Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  L_33 = Vector3d_op_Explicit_m8EEAE8BF5F7EC35A0AC1BBE973F8BC2EFD358054(L_32, /*hidden argument*/NULL);
		Frame3f_set_Origin_m79A9D57D64B52EE30948B26B53B9A4AD26F593C0_inline((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), L_33, /*hidden argument*/NULL);
		// v0 = triF.FromFrameP(ref v0); v1 = triF.FromFrameP(ref v1); v2 = triF.FromFrameP(ref v2);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_34 = Frame3f_FromFrameP_mEAA71CB0E8B06C40D95894D767B1951AA67564A9((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_6), /*hidden argument*/NULL);
		V_6 = L_34;
		// v0 = triF.FromFrameP(ref v0); v1 = triF.FromFrameP(ref v1); v2 = triF.FromFrameP(ref v2);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_35 = Frame3f_FromFrameP_mEAA71CB0E8B06C40D95894D767B1951AA67564A9((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_7), /*hidden argument*/NULL);
		V_7 = L_35;
		// v0 = triF.FromFrameP(ref v0); v1 = triF.FromFrameP(ref v1); v2 = triF.FromFrameP(ref v2);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_36 = Frame3f_FromFrameP_mEAA71CB0E8B06C40D95894D767B1951AA67564A9((Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 *)(&V_9), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_8), /*hidden argument*/NULL);
		V_8 = L_36;
		// double dot = normal.Dot(projNormal);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_37 = V_3;
		double L_38 = Vector3d_Dot_m892E5F48ABBB5BFDA2D4B094979CA0C4ECF26925((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_0), L_37, /*hidden argument*/NULL);
		V_10 = L_38;
		// dot = MathUtil.Clamp(dot, 0, 1.0);
		double L_39 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtil_t3BDAEBEE154E83DA161BFF225648454779924181_il2cpp_TypeInfo_var);
		double L_40 = MathUtil_Clamp_mD17F435EDB33DF30487DBA51AB82ACFF37CC2B7C(L_39, (0.0), (1.0), /*hidden argument*/NULL);
		V_10 = L_40;
		// double w = area * (dot * dot * dot);
		double L_41 = V_1;
		double L_42 = V_10;
		double L_43 = V_10;
		double L_44 = V_10;
		V_11 = ((double)il2cpp_codegen_multiply((double)L_41, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_42, (double)L_43)), (double)L_44))));
		// bool taken = false;
		V_12 = (bool)0;
		// buffer_lock.Enter(ref taken);
		SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * L_45 = __this->get_address_of_buffer_lock_2();
		SpinLock_Enter_mF3E9D6327B1767595E94264ABB9526C5CF3CFC3B((SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 *)L_45, (bool*)(&V_12), /*hidden argument*/NULL);
		// vBufferV[tv.a] += w * v0; vBufferVWeights[tv.a] += w;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_46 = __this->get_U3CU3E4__this_0();
		NullCheck(L_46);
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_47 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_46)->get_vBufferV_27();
		V_13 = L_47;
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_48 = V_5;
		int32_t L_49 = L_48.get_a_0();
		V_14 = L_49;
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_50 = V_13;
		int32_t L_51 = V_14;
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_52 = V_13;
		int32_t L_53 = V_14;
		NullCheck(L_52);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_54 = DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F(L_52, L_53, /*hidden argument*/DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F_RuntimeMethod_var);
		double L_55 = V_11;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_56 = V_6;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_57 = Vector3d_op_Multiply_m4A7B9A9BA25B443696049F1DA44448B72E30C0AE(L_55, L_56, /*hidden argument*/NULL);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_58 = Vector3d_op_Addition_m9F4F9B4A361E3A869F9B126073A5DCE91E2BEAD9(L_54, L_57, /*hidden argument*/NULL);
		NullCheck(L_50);
		DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B(L_50, L_51, L_58, /*hidden argument*/DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_RuntimeMethod_var);
		// vBufferV[tv.a] += w * v0; vBufferVWeights[tv.a] += w;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_59 = __this->get_U3CU3E4__this_0();
		NullCheck(L_59);
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_60 = L_59->get_vBufferVWeights_45();
		V_15 = L_60;
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_61 = V_5;
		int32_t L_62 = L_61.get_a_0();
		V_14 = L_62;
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_63 = V_15;
		int32_t L_64 = V_14;
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_65 = V_15;
		int32_t L_66 = V_14;
		NullCheck(L_65);
		double L_67 = DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783(L_65, L_66, /*hidden argument*/DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_RuntimeMethod_var);
		double L_68 = V_11;
		NullCheck(L_63);
		DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F(L_63, L_64, ((double)il2cpp_codegen_add((double)L_67, (double)L_68)), /*hidden argument*/DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F_RuntimeMethod_var);
		// vBufferV[tv.b] += w * v1; vBufferVWeights[tv.b] += w;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_69 = __this->get_U3CU3E4__this_0();
		NullCheck(L_69);
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_70 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_69)->get_vBufferV_27();
		V_13 = L_70;
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_71 = V_5;
		int32_t L_72 = L_71.get_b_1();
		V_14 = L_72;
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_73 = V_13;
		int32_t L_74 = V_14;
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_75 = V_13;
		int32_t L_76 = V_14;
		NullCheck(L_75);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_77 = DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F(L_75, L_76, /*hidden argument*/DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F_RuntimeMethod_var);
		double L_78 = V_11;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_79 = V_7;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_80 = Vector3d_op_Multiply_m4A7B9A9BA25B443696049F1DA44448B72E30C0AE(L_78, L_79, /*hidden argument*/NULL);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_81 = Vector3d_op_Addition_m9F4F9B4A361E3A869F9B126073A5DCE91E2BEAD9(L_77, L_80, /*hidden argument*/NULL);
		NullCheck(L_73);
		DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B(L_73, L_74, L_81, /*hidden argument*/DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_RuntimeMethod_var);
		// vBufferV[tv.b] += w * v1; vBufferVWeights[tv.b] += w;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_82 = __this->get_U3CU3E4__this_0();
		NullCheck(L_82);
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_83 = L_82->get_vBufferVWeights_45();
		V_15 = L_83;
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_84 = V_5;
		int32_t L_85 = L_84.get_b_1();
		V_14 = L_85;
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_86 = V_15;
		int32_t L_87 = V_14;
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_88 = V_15;
		int32_t L_89 = V_14;
		NullCheck(L_88);
		double L_90 = DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783(L_88, L_89, /*hidden argument*/DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_RuntimeMethod_var);
		double L_91 = V_11;
		NullCheck(L_86);
		DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F(L_86, L_87, ((double)il2cpp_codegen_add((double)L_90, (double)L_91)), /*hidden argument*/DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F_RuntimeMethod_var);
		// vBufferV[tv.c] += w * v2; vBufferVWeights[tv.c] += w;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_92 = __this->get_U3CU3E4__this_0();
		NullCheck(L_92);
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_93 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_92)->get_vBufferV_27();
		V_13 = L_93;
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_94 = V_5;
		int32_t L_95 = L_94.get_c_2();
		V_14 = L_95;
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_96 = V_13;
		int32_t L_97 = V_14;
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_98 = V_13;
		int32_t L_99 = V_14;
		NullCheck(L_98);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_100 = DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F(L_98, L_99, /*hidden argument*/DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F_RuntimeMethod_var);
		double L_101 = V_11;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_102 = V_8;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_103 = Vector3d_op_Multiply_m4A7B9A9BA25B443696049F1DA44448B72E30C0AE(L_101, L_102, /*hidden argument*/NULL);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_104 = Vector3d_op_Addition_m9F4F9B4A361E3A869F9B126073A5DCE91E2BEAD9(L_100, L_103, /*hidden argument*/NULL);
		NullCheck(L_96);
		DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B(L_96, L_97, L_104, /*hidden argument*/DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_RuntimeMethod_var);
		// vBufferV[tv.c] += w * v2; vBufferVWeights[tv.c] += w;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_105 = __this->get_U3CU3E4__this_0();
		NullCheck(L_105);
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_106 = L_105->get_vBufferVWeights_45();
		V_15 = L_106;
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_107 = V_5;
		int32_t L_108 = L_107.get_c_2();
		V_14 = L_108;
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_109 = V_15;
		int32_t L_110 = V_14;
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_111 = V_15;
		int32_t L_112 = V_14;
		NullCheck(L_111);
		double L_113 = DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783(L_111, L_112, /*hidden argument*/DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_RuntimeMethod_var);
		double L_114 = V_11;
		NullCheck(L_109);
		DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F(L_109, L_110, ((double)il2cpp_codegen_add((double)L_113, (double)L_114)), /*hidden argument*/DVector_1_set_Item_mA765384C3F6C17417DDC20DBD1090E2128244A8F_RuntimeMethod_var);
		// buffer_lock.Exit();
		SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * L_115 = __this->get_address_of_buffer_lock_2();
		SpinLock_Exit_mBCAF79B24D11C11DA659E92B42EBF03BF4717EAB((SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 *)L_115, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void gs.RemesherPro_<>c__DisplayClass23_0::<TrackedFaceProjectionPass>b__1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CTrackedFaceProjectionPassU3Eb__1_m01336987466158AF5090D7B04A29CD7A28EC699E (U3CU3Ec__DisplayClass23_0_tE209E262732316E392A2854119D63F342D1C2FB2 * __this, int32_t ___vID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass23_0_U3CTrackedFaceProjectionPassU3Eb__1_m01336987466158AF5090D7B04A29CD7A28EC699E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	double V_7 = 0.0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B14_0 = 0;
	{
		// vModifiedV[vID] = false;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_1 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_0)->get_vModifiedV_28();
		int32_t L_2 = ___vID0;
		NullCheck(L_1);
		BitArray_set_Item_m935E7A8491A931AB3C6C05EB523D0D565A67A6B2(L_1, L_2, (bool)0, /*hidden argument*/NULL);
		// if (vBufferVWeights[vID] < MathUtil.ZeroTolerance)
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_4 = L_3->get_vBufferVWeights_45();
		int32_t L_5 = ___vID0;
		NullCheck(L_4);
		double L_6 = DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783(L_4, L_5, /*hidden argument*/DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_RuntimeMethod_var);
		if ((!(((double)L_6) < ((double)(1.0E-08)))))
		{
			goto IL_002f;
		}
	}
	{
		// return;
		return;
	}

IL_002f:
	{
		// if (vertex_is_constrained(vID))
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_7 = __this->get_U3CU3E4__this_0();
		int32_t L_8 = ___vID0;
		NullCheck(L_7);
		bool L_9 = MeshRefinerBase_vertex_is_constrained_m13A7728BA6F097233B2C2B447E2F30D4ED8A583B(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (VertexControlF != null && (VertexControlF(vID) & VertexControl.NoProject) != 0)
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 * L_11 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_10)->get_VertexControlF_16();
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		Func_2_t8A42B60A77AB8A04A7893C51C390B4E060312881 * L_13 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_12)->get_VertexControlF_16();
		int32_t L_14 = ___vID0;
		NullCheck(L_13);
		int32_t L_15 = Func_2_Invoke_mB4AEAAA5ECFFEB679BFBBC4ECFF4ECF260A93A56(L_13, L_14, /*hidden argument*/Func_2_Invoke_mB4AEAAA5ECFFEB679BFBBC4ECFF4ECF260A93A56_RuntimeMethod_var);
		if (!((int32_t)((int32_t)L_15&(int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		// return;
		return;
	}

IL_0061:
	{
		// Vector3d curpos = mesh.GetVertex(vID);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_16 = __this->get_U3CU3E4__this_0();
		NullCheck(L_16);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_17 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_16)->get_mesh_0();
		int32_t L_18 = ___vID0;
		NullCheck(L_17);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_19 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// Vector3d projPos = vBufferV[vID] / vBufferVWeights[vID];
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_20 = __this->get_U3CU3E4__this_0();
		NullCheck(L_20);
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_21 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_20)->get_vBufferV_27();
		int32_t L_22 = ___vID0;
		NullCheck(L_21);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_23 = DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F(L_21, L_22, /*hidden argument*/DVector_1_get_Item_m6D5175801B7E2A13C16D958923D09F3CBF23AD2F_RuntimeMethod_var);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_24 = __this->get_U3CU3E4__this_0();
		NullCheck(L_24);
		DVector_1_tD8C81708A99E61A37AC970D5D6E577EAEBA95BAD * L_25 = L_24->get_vBufferVWeights_45();
		int32_t L_26 = ___vID0;
		NullCheck(L_25);
		double L_27 = DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783(L_25, L_26, /*hidden argument*/DVector_1_get_Item_m73500F46FCEC0189907835EF82346A978B9FD783_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_28 = Vector3d_op_Division_mFB9D25E5B7F390440B9ECD1A8321E78E6F2B0E26(L_23, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// if (curpos.EpsilonEqual(projPos, MathUtil.ZeroTolerancef))
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_29 = V_1;
		bool L_30 = Vector3d_EpsilonEqual_mB861B8566C0808CAF64A3F2EDF7A814DDBBCAC70((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_0), L_29, (9.9999999747524271E-07), /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00af;
		}
	}
	{
		// return;
		return;
	}

IL_00af:
	{
		// vModifiedV[vID] = true;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_31 = __this->get_U3CU3E4__this_0();
		NullCheck(L_31);
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_32 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_31)->get_vModifiedV_28();
		int32_t L_33 = ___vID0;
		NullCheck(L_32);
		BitArray_set_Item_m935E7A8491A931AB3C6C05EB523D0D565A67A6B2(L_32, L_33, (bool)1, /*hidden argument*/NULL);
		// vBufferV[vID] = projPos;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_34 = __this->get_U3CU3E4__this_0();
		NullCheck(L_34);
		DVector_1_t9762482914A1B2B5A4385F7C9563BEF561D54FB0 * L_35 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_34)->get_vBufferV_27();
		int32_t L_36 = ___vID0;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_37 = V_1;
		NullCheck(L_35);
		DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B(L_35, L_36, L_37, /*hidden argument*/DVector_1_set_Item_mE67F1BB4278A1DF8C51384B3E885657759849A2B_RuntimeMethod_var);
		// foreach (int eid in mesh.VtxEdgesItr(vID)) {
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_38 = __this->get_U3CU3E4__this_0();
		NullCheck(L_38);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_39 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_38)->get_mesh_0();
		int32_t L_40 = ___vID0;
		NullCheck(L_39);
		RuntimeObject* L_41 = DMesh3_VtxEdgesItr_m16E37249A611C88FB44A74CD3D7F2CCF64A39378(L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		RuntimeObject* L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var, L_41);
		V_2 = L_42;
	}

IL_00ea:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0178;
		}

IL_00ef:
		{
			// foreach (int eid in mesh.VtxEdgesItr(vID)) {
			RuntimeObject* L_43 = V_2;
			NullCheck(L_43);
			int32_t L_44 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var, L_43);
			V_3 = L_44;
			// Index2i ev = Mesh.GetEdgeV(eid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_45 = __this->get_U3CU3E4__this_0();
			NullCheck(L_45);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_46 = MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline(L_45, /*hidden argument*/NULL);
			int32_t L_47 = V_3;
			NullCheck(L_46);
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_48 = DMesh3_GetEdgeV_m0FDB14A0CED0A7FFFAF93BFAF0359B9365E933AC(L_46, L_47, /*hidden argument*/NULL);
			V_4 = L_48;
			// int othervid = (ev.a == vID) ? ev.b : ev.a;
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_49 = V_4;
			int32_t L_50 = L_49.get_a_0();
			int32_t L_51 = ___vID0;
			if ((((int32_t)L_50) == ((int32_t)L_51)))
			{
				goto IL_011c;
			}
		}

IL_0113:
		{
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_52 = V_4;
			int32_t L_53 = L_52.get_a_0();
			G_B14_0 = L_53;
			goto IL_0123;
		}

IL_011c:
		{
			Index2i_tCFF2040003E4B93FEE21A87B65B6E37CA1B35596  L_54 = V_4;
			int32_t L_55 = L_54.get_b_1();
			G_B14_0 = L_55;
		}

IL_0123:
		{
			V_5 = G_B14_0;
			// Vector3d otherv = mesh.GetVertex(othervid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_56 = __this->get_U3CU3E4__this_0();
			NullCheck(L_56);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_57 = ((MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 *)L_56)->get_mesh_0();
			int32_t L_58 = V_5;
			NullCheck(L_57);
			Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_59 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_57, L_58, /*hidden argument*/NULL);
			V_6 = L_59;
			// double old_len = curpos.Distance(otherv);
			Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_60 = V_6;
			Vector3d_Distance_m22D18C89A295187A00618BD059B16E679A74AF51((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_0), L_60, /*hidden argument*/NULL);
			// double new_len = projPos.Distance(otherv);
			Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_61 = V_6;
			double L_62 = Vector3d_Distance_m22D18C89A295187A00618BD059B16E679A74AF51((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_1), L_61, /*hidden argument*/NULL);
			V_7 = L_62;
			// if (new_len < MinEdgeLength || new_len > MaxEdgeLength)
			double L_63 = V_7;
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_64 = __this->get_U3CU3E4__this_0();
			NullCheck(L_64);
			double L_65 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_64)->get_MinEdgeLength_11();
			if ((((double)L_63) < ((double)L_65)))
			{
				goto IL_016c;
			}
		}

IL_015d:
		{
			double L_66 = V_7;
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_67 = __this->get_U3CU3E4__this_0();
			NullCheck(L_67);
			double L_68 = ((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_67)->get_MaxEdgeLength_12();
			if ((!(((double)L_66) > ((double)L_68))))
			{
				goto IL_0178;
			}
		}

IL_016c:
		{
			// queue_edge_safe(eid);
			RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_69 = __this->get_U3CU3E4__this_0();
			int32_t L_70 = V_3;
			NullCheck(L_69);
			RemesherPro_queue_edge_safe_m9745819C44817E9670BEA4826DB6CDCE34A5D01A(L_69, L_70, /*hidden argument*/NULL);
		}

IL_0178:
		{
			// foreach (int eid in mesh.VtxEdgesItr(vID)) {
			RuntimeObject* L_71 = V_2;
			NullCheck(L_71);
			bool L_72 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_71);
			if (L_72)
			{
				goto IL_00ef;
			}
		}

IL_0183:
		{
			IL2CPP_LEAVE(0x18F, FINALLY_0185);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0185;
	}

FINALLY_0185:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_73 = V_2;
			if (!L_73)
			{
				goto IL_018e;
			}
		}

IL_0188:
		{
			RuntimeObject* L_74 = V_2;
			NullCheck(L_74);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_74);
		}

IL_018e:
		{
			IL2CPP_END_FINALLY(389)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(389)
	{
		IL2CPP_JUMP_TBL(0x18F, IL_018f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_018f:
	{
		// });
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
// System.Void gs.RemesherPro_<EdgesIterator>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEdgesIteratorU3Ed__5__ctor_m608C172EFF55C947FBDB22F0D94D6D670943F760 (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void gs.RemesherPro_<EdgesIterator>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEdgesIteratorU3Ed__5_System_IDisposable_Dispose_m40B4CDF3041E648FFED19027921518C9D6544C25 (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean gs.RemesherPro_<EdgesIterator>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEdgesIteratorU3Ed__5_MoveNext_mE8B937A8072B812D390F9BC142AA92F7D9A91FCE (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int cur_eid = start_edges();
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 g3.Remesher::start_edges() */, L_4);
		__this->set_U3Ccur_eidU3E5__2_4(L_5);
		// bool done = false;
		V_2 = (bool)0;
	}

IL_002c:
	{
		// yield return cur_eid;
		int32_t L_6 = __this->get_U3Ccur_eidU3E5__2_4();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
		// cur_eid = next_edge(cur_eid, out done);
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_7 = V_1;
		int32_t L_8 = __this->get_U3Ccur_eidU3E5__2_4();
		NullCheck(L_7);
		int32_t L_9 = VirtFuncInvoker2< int32_t, int32_t, bool* >::Invoke(10 /* System.Int32 g3.Remesher::next_edge(System.Int32,System.Boolean&) */, L_7, L_8, (bool*)(&V_2));
		__this->set_U3Ccur_eidU3E5__2_4(L_9);
		// } while (done == false);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_002c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Int32 gs.RemesherPro_<EdgesIterator>d__5::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CEdgesIteratorU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m42F7B46458B64E6B49B6BE238BB6280A4BAB2F8C (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void gs.RemesherPro_<EdgesIterator>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_Reset_mD95BD8EE4EE888794DA18C52C0AA1F8DB424192B (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_Reset_mD95BD8EE4EE888794DA18C52C0AA1F8DB424192B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_Reset_mD95BD8EE4EE888794DA18C52C0AA1F8DB424192B_RuntimeMethod_var);
	}
}
// System.Object gs.RemesherPro_<EdgesIterator>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_get_Current_m1D24A520C2D4A32DCBA5C334B7DD426167DFF8D6 (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerator_get_Current_m1D24A520C2D4A32DCBA5C334B7DD426167DFF8D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_U3CU3E2__current_1();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Int32> gs.RemesherPro_<EdgesIterator>d__5::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEdgesIteratorU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m662702AE131603BBF1E1CA47A76AC85B36B3B0CD (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEdgesIteratorU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m662702AE131603BBF1E1CA47A76AC85B36B3B0CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * L_3 = (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 *)il2cpp_codegen_object_new(U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019_il2cpp_TypeInfo_var);
		U3CEdgesIteratorU3Ed__5__ctor_m608C172EFF55C947FBDB22F0D94D6D670943F760(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * L_4 = V_0;
		RemesherPro_t7D33F5591188BDC1F48DFF8975F945AABAC005DD * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator gs.RemesherPro_<EdgesIterator>d__5::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEdgesIteratorU3Ed__5_System_Collections_IEnumerable_GetEnumerator_mBE67E390CDAD277CC98A69434A71EEE7F3ABE9C4 (U3CEdgesIteratorU3Ed__5_tEE92FD07353F6EA70EA2E98AA9DC230E9BBDC019 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CEdgesIteratorU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m662702AE131603BBF1E1CA47A76AC85B36B3B0CD(__this, /*hidden argument*/NULL);
		return L_0;
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
// Conversion methods for marshalling of: gs.RemesherPro/SettingState
IL2CPP_EXTERN_C void SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshal_pinvoke(const SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4& unmarshaled, SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_pinvoke& marshaled)
{
	marshaled.___EnableFlips_0 = static_cast<int32_t>(unmarshaled.get_EnableFlips_0());
	marshaled.___EnableCollapses_1 = static_cast<int32_t>(unmarshaled.get_EnableCollapses_1());
	marshaled.___EnableSplits_2 = static_cast<int32_t>(unmarshaled.get_EnableSplits_2());
	marshaled.___EnableSmoothing_3 = static_cast<int32_t>(unmarshaled.get_EnableSmoothing_3());
	marshaled.___MinEdgeLength_4 = unmarshaled.get_MinEdgeLength_4();
	marshaled.___MaxEdgeLength_5 = unmarshaled.get_MaxEdgeLength_5();
	marshaled.___SmoothSpeedT_6 = unmarshaled.get_SmoothSpeedT_6();
	marshaled.___SmoothType_7 = unmarshaled.get_SmoothType_7();
	marshaled.___ProjectionMode_8 = unmarshaled.get_ProjectionMode_8();
}
IL2CPP_EXTERN_C void SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshal_pinvoke_back(const SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_pinvoke& marshaled, SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4& unmarshaled)
{
	bool unmarshaled_EnableFlips_temp_0 = false;
	unmarshaled_EnableFlips_temp_0 = static_cast<bool>(marshaled.___EnableFlips_0);
	unmarshaled.set_EnableFlips_0(unmarshaled_EnableFlips_temp_0);
	bool unmarshaled_EnableCollapses_temp_1 = false;
	unmarshaled_EnableCollapses_temp_1 = static_cast<bool>(marshaled.___EnableCollapses_1);
	unmarshaled.set_EnableCollapses_1(unmarshaled_EnableCollapses_temp_1);
	bool unmarshaled_EnableSplits_temp_2 = false;
	unmarshaled_EnableSplits_temp_2 = static_cast<bool>(marshaled.___EnableSplits_2);
	unmarshaled.set_EnableSplits_2(unmarshaled_EnableSplits_temp_2);
	bool unmarshaled_EnableSmoothing_temp_3 = false;
	unmarshaled_EnableSmoothing_temp_3 = static_cast<bool>(marshaled.___EnableSmoothing_3);
	unmarshaled.set_EnableSmoothing_3(unmarshaled_EnableSmoothing_temp_3);
	double unmarshaled_MinEdgeLength_temp_4 = 0.0;
	unmarshaled_MinEdgeLength_temp_4 = marshaled.___MinEdgeLength_4;
	unmarshaled.set_MinEdgeLength_4(unmarshaled_MinEdgeLength_temp_4);
	double unmarshaled_MaxEdgeLength_temp_5 = 0.0;
	unmarshaled_MaxEdgeLength_temp_5 = marshaled.___MaxEdgeLength_5;
	unmarshaled.set_MaxEdgeLength_5(unmarshaled_MaxEdgeLength_temp_5);
	double unmarshaled_SmoothSpeedT_temp_6 = 0.0;
	unmarshaled_SmoothSpeedT_temp_6 = marshaled.___SmoothSpeedT_6;
	unmarshaled.set_SmoothSpeedT_6(unmarshaled_SmoothSpeedT_temp_6);
	int32_t unmarshaled_SmoothType_temp_7 = 0;
	unmarshaled_SmoothType_temp_7 = marshaled.___SmoothType_7;
	unmarshaled.set_SmoothType_7(unmarshaled_SmoothType_temp_7);
	int32_t unmarshaled_ProjectionMode_temp_8 = 0;
	unmarshaled_ProjectionMode_temp_8 = marshaled.___ProjectionMode_8;
	unmarshaled.set_ProjectionMode_8(unmarshaled_ProjectionMode_temp_8);
}
// Conversion method for clean up from marshalling of: gs.RemesherPro/SettingState
IL2CPP_EXTERN_C void SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshal_pinvoke_cleanup(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: gs.RemesherPro/SettingState
IL2CPP_EXTERN_C void SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshal_com(const SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4& unmarshaled, SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_com& marshaled)
{
	marshaled.___EnableFlips_0 = static_cast<int32_t>(unmarshaled.get_EnableFlips_0());
	marshaled.___EnableCollapses_1 = static_cast<int32_t>(unmarshaled.get_EnableCollapses_1());
	marshaled.___EnableSplits_2 = static_cast<int32_t>(unmarshaled.get_EnableSplits_2());
	marshaled.___EnableSmoothing_3 = static_cast<int32_t>(unmarshaled.get_EnableSmoothing_3());
	marshaled.___MinEdgeLength_4 = unmarshaled.get_MinEdgeLength_4();
	marshaled.___MaxEdgeLength_5 = unmarshaled.get_MaxEdgeLength_5();
	marshaled.___SmoothSpeedT_6 = unmarshaled.get_SmoothSpeedT_6();
	marshaled.___SmoothType_7 = unmarshaled.get_SmoothType_7();
	marshaled.___ProjectionMode_8 = unmarshaled.get_ProjectionMode_8();
}
IL2CPP_EXTERN_C void SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshal_com_back(const SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_com& marshaled, SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4& unmarshaled)
{
	bool unmarshaled_EnableFlips_temp_0 = false;
	unmarshaled_EnableFlips_temp_0 = static_cast<bool>(marshaled.___EnableFlips_0);
	unmarshaled.set_EnableFlips_0(unmarshaled_EnableFlips_temp_0);
	bool unmarshaled_EnableCollapses_temp_1 = false;
	unmarshaled_EnableCollapses_temp_1 = static_cast<bool>(marshaled.___EnableCollapses_1);
	unmarshaled.set_EnableCollapses_1(unmarshaled_EnableCollapses_temp_1);
	bool unmarshaled_EnableSplits_temp_2 = false;
	unmarshaled_EnableSplits_temp_2 = static_cast<bool>(marshaled.___EnableSplits_2);
	unmarshaled.set_EnableSplits_2(unmarshaled_EnableSplits_temp_2);
	bool unmarshaled_EnableSmoothing_temp_3 = false;
	unmarshaled_EnableSmoothing_temp_3 = static_cast<bool>(marshaled.___EnableSmoothing_3);
	unmarshaled.set_EnableSmoothing_3(unmarshaled_EnableSmoothing_temp_3);
	double unmarshaled_MinEdgeLength_temp_4 = 0.0;
	unmarshaled_MinEdgeLength_temp_4 = marshaled.___MinEdgeLength_4;
	unmarshaled.set_MinEdgeLength_4(unmarshaled_MinEdgeLength_temp_4);
	double unmarshaled_MaxEdgeLength_temp_5 = 0.0;
	unmarshaled_MaxEdgeLength_temp_5 = marshaled.___MaxEdgeLength_5;
	unmarshaled.set_MaxEdgeLength_5(unmarshaled_MaxEdgeLength_temp_5);
	double unmarshaled_SmoothSpeedT_temp_6 = 0.0;
	unmarshaled_SmoothSpeedT_temp_6 = marshaled.___SmoothSpeedT_6;
	unmarshaled.set_SmoothSpeedT_6(unmarshaled_SmoothSpeedT_temp_6);
	int32_t unmarshaled_SmoothType_temp_7 = 0;
	unmarshaled_SmoothType_temp_7 = marshaled.___SmoothType_7;
	unmarshaled.set_SmoothType_7(unmarshaled_SmoothType_temp_7);
	int32_t unmarshaled_ProjectionMode_temp_8 = 0;
	unmarshaled_ProjectionMode_temp_8 = marshaled.___ProjectionMode_8;
	unmarshaled.set_ProjectionMode_8(unmarshaled_ProjectionMode_temp_8);
}
// Conversion method for clean up from marshalling of: gs.RemesherPro/SettingState
IL2CPP_EXTERN_C void SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshal_com_cleanup(SettingState_t9E7BB7C23DA56DE76AD8D7B6A15E42F68D6A7EE4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void gs.RemoveDuplicateTriangles::.ctor(g3.DMesh3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveDuplicateTriangles__ctor_m7FA11EB76D418D5AA7D0D764B68C50DB3FF30B47 (RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, const RuntimeMethod* method)
{
	{
		// public double VertexTolerance = MathUtil.ZeroTolerancef;
		__this->set_VertexTolerance_1((9.9999999747524271E-07));
		// public bool CheckOrientation = true;
		__this->set_CheckOrientation_2((bool)1);
		// public RemoveDuplicateTriangles(DMesh3 mesh)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Mesh = mesh;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = ___mesh0;
		__this->set_Mesh_0(L_0);
		// }
		return;
	}
}
// System.Boolean gs.RemoveDuplicateTriangles::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoveDuplicateTriangles_Apply_m91953CE5A3A6D7E39F2EECA2F4F82FCADD82010A (RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoveDuplicateTriangles_Apply_m91953CE5A3A6D7E39F2EECA2F4F82FCADD82010A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 * V_1 = NULL;
	int32_t V_2 = 0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_10 = NULL;
	int32_t V_11 = 0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t G_B3_0 = 0;
	{
		// Removed = 0;
		__this->set_Removed_3(0);
		// double merge_r2 = VertexTolerance * VertexTolerance;
		double L_0 = __this->get_VertexTolerance_1();
		double L_1 = __this->get_VertexTolerance_1();
		V_0 = ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
		// TriCentroids pointset = new TriCentroids() { Mesh = this.Mesh };
		TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * L_2 = (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A *)il2cpp_codegen_object_new(TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A_il2cpp_TypeInfo_var);
		TriCentroids__ctor_m970A1D552ECCB802646EDB0372AB8ECE8608B7D3(L_2, /*hidden argument*/NULL);
		TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * L_3 = L_2;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_4 = __this->get_Mesh_0();
		NullCheck(L_3);
		L_3->set_Mesh_0(L_4);
		// PointSetHashtable hash = new PointSetHashtable(pointset);
		PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 * L_5 = (PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 *)il2cpp_codegen_object_new(PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6_il2cpp_TypeInfo_var);
		PointSetHashtable__ctor_m94D6CDE5873DE55FB49AC9F2347F922962FA62C9(L_5, L_3, /*hidden argument*/NULL);
		V_1 = L_5;
		// int hashN = (Mesh.TriangleCount > 100000) ? 128 : 64;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_6 = __this->get_Mesh_0();
		NullCheck(L_6);
		int32_t L_7 = DMesh3_get_TriangleCount_mCFCEA8932FB24165FB21067964E52E8CAE08518A(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) > ((int32_t)((int32_t)100000))))
		{
			goto IL_0042;
		}
	}
	{
		G_B3_0 = ((int32_t)64);
		goto IL_0047;
	}

IL_0042:
	{
		G_B3_0 = ((int32_t)128);
	}

IL_0047:
	{
		V_2 = G_B3_0;
		// hash.Build(hashN);
		PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 * L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		PointSetHashtable_Build_mBBA64A2069FEC4B62625B430E0CB815F3A422795(L_8, L_9, /*hidden argument*/NULL);
		// Vector3d a = Vector3d.Zero, b = Vector3d.Zero, c = Vector3d.Zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_10 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		V_3 = L_10;
		// Vector3d a = Vector3d.Zero, b = Vector3d.Zero, c = Vector3d.Zero;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_11 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		V_4 = L_11;
		// Vector3d a = Vector3d.Zero, b = Vector3d.Zero, c = Vector3d.Zero;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_12 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		V_5 = L_12;
		// Vector3d x = Vector3d.Zero, y = Vector3d.Zero, z = Vector3d.Zero;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_13 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		V_6 = L_13;
		// Vector3d x = Vector3d.Zero, y = Vector3d.Zero, z = Vector3d.Zero;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_14 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		V_7 = L_14;
		// Vector3d x = Vector3d.Zero, y = Vector3d.Zero, z = Vector3d.Zero;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_15 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		V_8 = L_15;
		// int MaxTriID = Mesh.MaxTriangleID;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_16 = __this->get_Mesh_0();
		NullCheck(L_16);
		int32_t L_17 = DMesh3_get_MaxTriangleID_m68244F0E95267717492F9ABD56C4BAF738E3CF18(L_16, /*hidden argument*/NULL);
		V_9 = L_17;
		// int[] buffer = new int[1024];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_10 = L_18;
		// for ( int tid = 0; tid < MaxTriID; ++tid ) {
		V_11 = 0;
		goto IL_01b6;
	}

IL_0099:
	{
		// if (!Mesh.IsTriangle(tid))
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_19 = __this->get_Mesh_0();
		int32_t L_20 = V_11;
		NullCheck(L_19);
		bool L_21 = DMesh3_IsTriangle_m56AE4DB3A080B0A087D02BD9347ECD6F1D7FDEC2(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_01b0;
		}
	}
	{
		// Vector3d centroid = Mesh.GetTriCentroid(tid);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_22 = __this->get_Mesh_0();
		int32_t L_23 = V_11;
		NullCheck(L_22);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_24 = DMesh3_GetTriCentroid_m351840C9BF22AC6053ADF3DB57D6A96BF61CAA70(L_22, L_23, /*hidden argument*/NULL);
		V_12 = L_24;
		goto IL_00c7;
	}

IL_00bc:
	{
		// buffer = new int[buffer.Length];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = V_10;
		NullCheck(L_25);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))));
		V_10 = L_26;
	}

IL_00c7:
	{
		// while (hash.FindInBall(centroid, VertexTolerance, buffer, out N) == false)
		PointSetHashtable_tE4BDA46BB804D87F93506F0A63146A43BBBC40E6 * L_27 = V_1;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_28 = V_12;
		double L_29 = __this->get_VertexTolerance_1();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = V_10;
		NullCheck(L_27);
		bool L_31 = PointSetHashtable_FindInBall_m13D796C91C90C649BB223E649C7C26B13CF24B03(L_27, L_28, L_29, L_30, (int32_t*)(&V_13), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00bc;
		}
	}
	{
		// if (N == 1 && buffer[0] != tid)
		int32_t L_32 = V_13;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00f3;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_33 = V_10;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = V_11;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_00f3;
		}
	}
	{
		// throw new Exception("RemoveDuplicateTriangles.Apply: how could this happen?!");
		Exception_t * L_37 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_37, _stringLiteralA2360AE301EAF78FC8B9C36C2D29B88FAEF45512, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, RemoveDuplicateTriangles_Apply_m91953CE5A3A6D7E39F2EECA2F4F82FCADD82010A_RuntimeMethod_var);
	}

IL_00f3:
	{
		// if (N <= 1)
		int32_t L_38 = V_13;
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_01b0;
		}
	}
	{
		// Mesh.GetTriVertices(tid, ref a, ref b, ref c);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_39 = __this->get_Mesh_0();
		int32_t L_40 = V_11;
		NullCheck(L_39);
		DMesh3_GetTriVertices_mA2EFC0B50CE149FCDB60331656345327698A5EFD(L_39, L_40, (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_3), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_4), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_5), /*hidden argument*/NULL);
		// Vector3d n = MathUtil.Normal(a, b, c);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_41 = V_3;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_42 = V_4;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_43 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtil_t3BDAEBEE154E83DA161BFF225648454779924181_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_44 = MathUtil_Normal_m2DBDAF0373520F19792D2DADFDE24954C8E234C5(L_41, L_42, L_43, /*hidden argument*/NULL);
		V_14 = L_44;
		// for (int i = 0; i < N; ++i) {
		V_15 = 0;
		goto IL_01a7;
	}

IL_0122:
	{
		// if (buffer[i] != tid) {
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_45 = V_10;
		int32_t L_46 = V_15;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = V_11;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_01a1;
		}
	}
	{
		// Mesh.GetTriVertices(buffer[i], ref x, ref y, ref z);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_50 = __this->get_Mesh_0();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_51 = V_10;
		int32_t L_52 = V_15;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_50);
		DMesh3_GetTriVertices_mA2EFC0B50CE149FCDB60331656345327698A5EFD(L_50, L_54, (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_6), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_7), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_8), /*hidden argument*/NULL);
		// if (is_same_triangle(ref a, ref b, ref c, ref x, ref y, ref z, merge_r2) == false)
		double L_55 = V_0;
		bool L_56 = RemoveDuplicateTriangles_is_same_triangle_m8DC1351DAA151ED82A8D7B9E0A021C2D0511BD4D(__this, (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_3), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_4), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_5), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_6), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_7), (Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_8), L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01a1;
		}
	}
	{
		// if (CheckOrientation) {
		bool L_57 = __this->get_CheckOrientation_2();
		if (!L_57)
		{
			goto IL_017f;
		}
	}
	{
		// Vector3d n2 = MathUtil.Normal(x, y, z);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_58 = V_6;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_59 = V_7;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_60 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtil_t3BDAEBEE154E83DA161BFF225648454779924181_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_61 = MathUtil_Normal_m2DBDAF0373520F19792D2DADFDE24954C8E234C5(L_58, L_59, L_60, /*hidden argument*/NULL);
		V_16 = L_61;
		// if (n.Dot(n2) < 0.99)
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_62 = V_16;
		double L_63 = Vector3d_Dot_m892E5F48ABBB5BFDA2D4B094979CA0C4ECF26925((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)(&V_14), L_62, /*hidden argument*/NULL);
		if ((((double)L_63) < ((double)(0.99))))
		{
			goto IL_01a1;
		}
	}

IL_017f:
	{
		// MeshResult result =  Mesh.RemoveTriangle(buffer[i], true, false);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_64 = __this->get_Mesh_0();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_65 = V_10;
		int32_t L_66 = V_15;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_64);
		int32_t L_69 = DMesh3_RemoveTriangle_m1A6343A727A71B2CFDCF792C70F78B57A95987F1(L_64, L_68, (bool)1, (bool)0, /*hidden argument*/NULL);
		// if (result == MeshResult.Ok)
		if (L_69)
		{
			goto IL_01a1;
		}
	}
	{
		// ++Removed;
		int32_t L_70 = __this->get_Removed_3();
		__this->set_Removed_3(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1)));
	}

IL_01a1:
	{
		// for (int i = 0; i < N; ++i) {
		int32_t L_71 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_01a7:
	{
		// for (int i = 0; i < N; ++i) {
		int32_t L_72 = V_15;
		int32_t L_73 = V_13;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0122;
		}
	}

IL_01b0:
	{
		// for ( int tid = 0; tid < MaxTriID; ++tid ) {
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01b6:
	{
		// for ( int tid = 0; tid < MaxTriID; ++tid ) {
		int32_t L_75 = V_11;
		int32_t L_76 = V_9;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0099;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean gs.RemoveDuplicateTriangles::is_same_triangle(g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,g3.Vector3d&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoveDuplicateTriangles_is_same_triangle_m8DC1351DAA151ED82A8D7B9E0A021C2D0511BD4D (RemoveDuplicateTriangles_t86F033446CA5D1AD00BB4BA66AB9078C634D58C5 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___a0, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___b1, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___c2, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___x3, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___y4, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * ___z5, double ___tolSqr6, const RuntimeMethod* method)
{
	{
		// if ( a.DistanceSquared(x) < tolSqr) {
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_0 = ___a0;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_1 = ___x3;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_2 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_1);
		double L_3 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_0, L_2, /*hidden argument*/NULL);
		double L_4 = ___tolSqr6;
		if ((!(((double)L_3) < ((double)L_4))))
		{
			goto IL_005f;
		}
	}
	{
		// if (b.DistanceSquared(y) < tolSqr && c.DistanceSquared(z) < tolSqr)
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_5 = ___b1;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_6 = ___y4;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_7 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_6);
		double L_8 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_5, L_7, /*hidden argument*/NULL);
		double L_9 = ___tolSqr6;
		if ((!(((double)L_8) < ((double)L_9))))
		{
			goto IL_0035;
		}
	}
	{
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_10 = ___c2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_11 = ___z5;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_12 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_11);
		double L_13 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_10, L_12, /*hidden argument*/NULL);
		double L_14 = ___tolSqr6;
		if ((!(((double)L_13) < ((double)L_14))))
		{
			goto IL_0035;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0035:
	{
		// if (b.DistanceSquared(z) < tolSqr && c.DistanceSquared(y) < tolSqr)
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_15 = ___b1;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_16 = ___z5;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_17 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_16);
		double L_18 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_15, L_17, /*hidden argument*/NULL);
		double L_19 = ___tolSqr6;
		if ((!(((double)L_18) < ((double)L_19))))
		{
			goto IL_0111;
		}
	}
	{
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_20 = ___c2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_21 = ___y4;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_22 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_21);
		double L_23 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_20, L_22, /*hidden argument*/NULL);
		double L_24 = ___tolSqr6;
		if ((!(((double)L_23) < ((double)L_24))))
		{
			goto IL_0111;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005f:
	{
		// } else if (a.DistanceSquared(y) < tolSqr) {
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_25 = ___a0;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_26 = ___y4;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_27 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_26);
		double L_28 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_25, L_27, /*hidden argument*/NULL);
		double L_29 = ___tolSqr6;
		if ((!(((double)L_28) < ((double)L_29))))
		{
			goto IL_00b8;
		}
	}
	{
		// if (b.DistanceSquared(x) < tolSqr && c.DistanceSquared(z) < tolSqr)
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_30 = ___b1;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_31 = ___x3;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_32 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_31);
		double L_33 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_30, L_32, /*hidden argument*/NULL);
		double L_34 = ___tolSqr6;
		if ((!(((double)L_33) < ((double)L_34))))
		{
			goto IL_0094;
		}
	}
	{
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_35 = ___c2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_36 = ___z5;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_37 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_36);
		double L_38 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_35, L_37, /*hidden argument*/NULL);
		double L_39 = ___tolSqr6;
		if ((!(((double)L_38) < ((double)L_39))))
		{
			goto IL_0094;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0094:
	{
		// if (b.DistanceSquared(z) < tolSqr && c.DistanceSquared(x) < tolSqr)
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_40 = ___b1;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_41 = ___z5;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_42 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_41);
		double L_43 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_40, L_42, /*hidden argument*/NULL);
		double L_44 = ___tolSqr6;
		if ((!(((double)L_43) < ((double)L_44))))
		{
			goto IL_0111;
		}
	}
	{
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_45 = ___c2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_46 = ___x3;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_47 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_46);
		double L_48 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_45, L_47, /*hidden argument*/NULL);
		double L_49 = ___tolSqr6;
		if ((!(((double)L_48) < ((double)L_49))))
		{
			goto IL_0111;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00b8:
	{
		// } else if (a.DistanceSquared(z) < tolSqr) {
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_50 = ___a0;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_51 = ___z5;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_52 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_51);
		double L_53 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_50, L_52, /*hidden argument*/NULL);
		double L_54 = ___tolSqr6;
		if ((!(((double)L_53) < ((double)L_54))))
		{
			goto IL_0111;
		}
	}
	{
		// if (b.DistanceSquared(x) < tolSqr && c.DistanceSquared(y) < tolSqr)
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_55 = ___b1;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_56 = ___x3;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_57 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_56);
		double L_58 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_55, L_57, /*hidden argument*/NULL);
		double L_59 = ___tolSqr6;
		if ((!(((double)L_58) < ((double)L_59))))
		{
			goto IL_00ed;
		}
	}
	{
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_60 = ___c2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_61 = ___y4;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_62 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_61);
		double L_63 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_60, L_62, /*hidden argument*/NULL);
		double L_64 = ___tolSqr6;
		if ((!(((double)L_63) < ((double)L_64))))
		{
			goto IL_00ed;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00ed:
	{
		// if (b.DistanceSquared(y) < tolSqr && c.DistanceSquared(x) < tolSqr)
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_65 = ___b1;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_66 = ___y4;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_67 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_66);
		double L_68 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_65, L_67, /*hidden argument*/NULL);
		double L_69 = ___tolSqr6;
		if ((!(((double)L_68) < ((double)L_69))))
		{
			goto IL_0111;
		}
	}
	{
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_70 = ___c2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B * L_71 = ___x3;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_72 = (*(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_71);
		double L_73 = Vector3d_DistanceSquared_mBF612629BEF5D255AD8BB7F2FABBDE55EA520382((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B *)L_70, L_72, /*hidden argument*/NULL);
		double L_74 = ___tolSqr6;
		if ((!(((double)L_73) < ((double)L_74))))
		{
			goto IL_0111;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// return false;
		return (bool)0;
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
// System.Int32 gs.RemoveDuplicateTriangles_TriCentroids::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriCentroids_get_VertexCount_m1B7B0483084ACBE6AF9DF675A4D1F4807A1953E3 (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method)
{
	{
		// public int VertexCount { get { return Mesh.TriangleCount; } }
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = __this->get_Mesh_0();
		NullCheck(L_0);
		int32_t L_1 = DMesh3_get_TriangleCount_mCFCEA8932FB24165FB21067964E52E8CAE08518A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 gs.RemoveDuplicateTriangles_TriCentroids::get_MaxVertexID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriCentroids_get_MaxVertexID_m88CAA43B50165727149F72805F3C779188627B6D (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method)
{
	{
		// public int MaxVertexID { get { return Mesh.MaxTriangleID; } }
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = __this->get_Mesh_0();
		NullCheck(L_0);
		int32_t L_1 = DMesh3_get_MaxTriangleID_m68244F0E95267717492F9ABD56C4BAF738E3CF18(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean gs.RemoveDuplicateTriangles_TriCentroids::get_HasVertexNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriCentroids_get_HasVertexNormals_m35927BF84500D808E0757947226D3127366290FE (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method)
{
	{
		// public bool HasVertexNormals { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean gs.RemoveDuplicateTriangles_TriCentroids::get_HasVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriCentroids_get_HasVertexColors_m803B34F96A1123F909D1B34B464F340F31C2C8F1 (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method)
{
	{
		// public bool HasVertexColors { get { return false; } }
		return (bool)0;
	}
}
// g3.Vector3d gs.RemoveDuplicateTriangles_TriCentroids::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  TriCentroids_GetVertex_mFBC915F3C4643833A07C5E6892080A293632359B (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// public Vector3d GetVertex(int i) { return Mesh.GetTriCentroid(i); }
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = __this->get_Mesh_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_2 = DMesh3_GetTriCentroid_m351840C9BF22AC6053ADF3DB57D6A96BF61CAA70(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// g3.Vector3f gs.RemoveDuplicateTriangles_TriCentroids::GetVertexNormal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  TriCentroids_GetVertexNormal_mAD40D154A73D95A51DC96AB7E06B45F4D022FB9E (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriCentroids_GetVertexNormal_mAD40D154A73D95A51DC96AB7E06B45F4D022FB9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3f GetVertexNormal(int i) { return Vector3f.AxisY; }
		IL2CPP_RUNTIME_CLASS_INIT(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_il2cpp_TypeInfo_var);
		Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  L_0 = ((Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields*)il2cpp_codegen_static_fields_for(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_il2cpp_TypeInfo_var))->get_AxisY_8();
		return L_0;
	}
}
// g3.Vector3f gs.RemoveDuplicateTriangles_TriCentroids::GetVertexColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  TriCentroids_GetVertexColor_mD677323433BFE30190A80ED4F6E8D34B985F939F (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriCentroids_GetVertexColor_mD677323433BFE30190A80ED4F6E8D34B985F939F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3f GetVertexColor(int i) { return Vector3f.One; }
		IL2CPP_RUNTIME_CLASS_INIT(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_il2cpp_TypeInfo_var);
		Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  L_0 = ((Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_StaticFields*)il2cpp_codegen_static_fields_for(Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017_il2cpp_TypeInfo_var))->get_One_4();
		return L_0;
	}
}
// System.Boolean gs.RemoveDuplicateTriangles_TriCentroids::IsVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriCentroids_IsVertex_mF180DBDF6229B780584231BEDD4E869C1008E9FB (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, int32_t ___tID0, const RuntimeMethod* method)
{
	{
		// public bool IsVertex(int tID) { return Mesh.IsTriangle(tID); }
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = __this->get_Mesh_0();
		int32_t L_1 = ___tID0;
		NullCheck(L_0);
		bool L_2 = DMesh3_IsTriangle_m56AE4DB3A080B0A087D02BD9347ECD6F1D7FDEC2(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Int32> gs.RemoveDuplicateTriangles_TriCentroids::VertexIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriCentroids_VertexIndices_m49C25425122DD7CF687AB8CABCEA55432D21F323 (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method)
{
	{
		// return Mesh.TriangleIndices();
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = __this->get_Mesh_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = DMesh3_TriangleIndices_mA55F7FDA0C1F985E93B36211441CA8948632EC4C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 gs.RemoveDuplicateTriangles_TriCentroids::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriCentroids_get_Timestamp_mF936C7BC5DE8D78EC616AD2B93FC70A1DDBF9DD8 (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method)
{
	{
		// public int Timestamp { get { return Mesh.Timestamp; } }
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = __this->get_Mesh_0();
		NullCheck(L_0);
		int32_t L_1 = DMesh3_get_Timestamp_m97E466421467DEA22BC83C368A3B440438775FA2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void gs.RemoveDuplicateTriangles_TriCentroids::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriCentroids__ctor_m970A1D552ECCB802646EDB0372AB8ECE8608B7D3 (TriCentroids_t700105B455FDE0AE5FFECCEEE02FD8D2C03CAC9A * __this, const RuntimeMethod* method)
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
// System.Boolean gs.RemoveOccludedTriangles::Cancelled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoveOccludedTriangles_Cancelled_mD7568CA3DD16C809E13450BD2CC2BF33C8C5318A (RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * __this, const RuntimeMethod* method)
{
	{
		// return (Progress == null) ? false : Progress.Cancelled();
		ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * L_0 = __this->get_Progress_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ProgressCancel_t15A8AD319B6EA9A67FE6EB4F3293060E335D5985 * L_1 = __this->get_Progress_8();
		NullCheck(L_1);
		bool L_2 = ProgressCancel_Cancelled_mE3BBC58C2B521DE29280C019F403C8D30122F36E(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void gs.RemoveOccludedTriangles::.ctor(g3.DMesh3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveOccludedTriangles__ctor_m6FC28460A8B406CD9E5429D5F014BC26067F1ADE (RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, const RuntimeMethod* method)
{
	{
		// public double NormalOffset = MathUtil.ZeroTolerance;
		__this->set_NormalOffset_5((1.0E-08));
		// public double WindingIsoValue = 0.5;
		__this->set_WindingIsoValue_6((0.5));
		// public RemoveOccludedTriangles(DMesh3 mesh)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Mesh = mesh;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = ___mesh0;
		__this->set_Mesh_0(L_0);
		// }
		return;
	}
}
// System.Void gs.RemoveOccludedTriangles::.ctor(g3.DMesh3,g3.DMeshAABBTree3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveOccludedTriangles__ctor_m919D10B561284B328150A8A43EC0B9986E61602E (RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * ___spatial1, const RuntimeMethod* method)
{
	{
		// public double NormalOffset = MathUtil.ZeroTolerance;
		__this->set_NormalOffset_5((1.0E-08));
		// public double WindingIsoValue = 0.5;
		__this->set_WindingIsoValue_6((0.5));
		// public RemoveOccludedTriangles(DMesh3 mesh, DMeshAABBTree3 spatial)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Mesh = mesh;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = ___mesh0;
		__this->set_Mesh_0(L_0);
		// Spatial = spatial;
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_1 = ___spatial1;
		__this->set_Spatial_1(L_1);
		// }
		return;
	}
}
// System.Boolean gs.RemoveOccludedTriangles::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoveOccludedTriangles_Apply_m5C5890E4F91292423708276DD962E4D3DEDB0834 (RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoveOccludedTriangles_Apply_m5C5890E4F91292423708276DD962E4D3DEDB0834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * V_0 = NULL;
	DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * V_1 = NULL;
	MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * V_4 = NULL;
	bool V_5 = false;
	U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * G_B14_0 = NULL;
	U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * G_B13_0 = NULL;
	U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * G_B15_0 = NULL;
	DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * G_B16_0 = NULL;
	U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * G_B16_1 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_0 = (U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_mCC98A3E3C2F2EECC8E5EC93B7F3F08673F102F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// DMesh3 testAgainstMesh = Mesh;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_2 = __this->get_Mesh_0();
		V_1 = L_2;
		// if (InsideMode == CalculationMode.RayParity) {
		int32_t L_3 = __this->get_InsideMode_7();
		if (L_3)
		{
			goto IL_0081;
		}
	}
	{
		// MeshBoundaryLoops loops = new MeshBoundaryLoops(testAgainstMesh);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_4 = V_1;
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_5 = (MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 *)il2cpp_codegen_object_new(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965_il2cpp_TypeInfo_var);
		MeshBoundaryLoops__ctor_m7935B856992D4EC83B81C5C611962930C7C75138(L_5, L_4, (bool)1, /*hidden argument*/NULL);
		V_2 = L_5;
		// if (loops.Count > 0) {
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = MeshBoundaryLoops_get_Count_m7851220861D3C582DDEC6DBD3285CE421CFB6079(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// testAgainstMesh = new DMesh3(Mesh);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_8 = __this->get_Mesh_0();
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_9 = (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF *)il2cpp_codegen_object_new(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF_il2cpp_TypeInfo_var);
		DMesh3__ctor_m148A2F73972D16DBCD564EFA4A278985495EB1DC(L_9, L_8, (bool)0, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_1 = L_9;
		// foreach (var loop in loops) {
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_10 = V_2;
		NullCheck(L_10);
		RuntimeObject* L_11 = MeshBoundaryLoops_GetEnumerator_m7BA9E280F67E59DECE9D5C1622D5B49E7983F5A8(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006d;
		}

IL_0046:
		{
			// foreach (var loop in loops) {
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_13 = InterfaceFuncInvoker0< EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<g3.EdgeLoop>::get_Current() */, IEnumerator_1_tEC2AC59EA398C1CC06ED77F4F1F3453AF23EE79C_il2cpp_TypeInfo_var, L_12);
			V_4 = L_13;
			// if (Cancelled())
			bool L_14 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean gs.RemoveOccludedTriangles::Cancelled() */, __this);
			if (!L_14)
			{
				goto IL_005e;
			}
		}

IL_0056:
		{
			// return false;
			V_5 = (bool)0;
			IL2CPP_LEAVE(0x2AB, FINALLY_0077);
		}

IL_005e:
		{
			// SimpleHoleFiller filler = new SimpleHoleFiller(testAgainstMesh, loop);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_15 = V_1;
			EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_16 = V_4;
			SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 * L_17 = (SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 *)il2cpp_codegen_object_new(SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412_il2cpp_TypeInfo_var);
			SimpleHoleFiller__ctor_m5168EB8709886C2730F8C8CA5A0034DA041D839C(L_17, L_15, L_16, /*hidden argument*/NULL);
			// filler.Fill();
			NullCheck(L_17);
			VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean g3.SimpleHoleFiller::Fill(System.Int32) */, L_17, (-1));
		}

IL_006d:
		{
			// foreach (var loop in loops) {
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0046;
			}
		}

IL_0075:
		{
			IL2CPP_LEAVE(0x81, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0080;
			}
		}

IL_007a:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_21);
		}

IL_0080:
		{
			IL2CPP_END_FINALLY(119)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_JUMP_TBL(0x2AB, IL_02ab)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0081:
	{
		// DMeshAABBTree3 spatial = (Spatial != null && testAgainstMesh == Mesh) ?
		//     Spatial : new DMeshAABBTree3(testAgainstMesh, true);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_22 = V_0;
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_23 = __this->get_Spatial_1();
		G_B13_0 = L_22;
		if (!L_23)
		{
			G_B14_0 = L_22;
			goto IL_0093;
		}
	}
	{
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_24 = V_1;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_25 = __this->get_Mesh_0();
		G_B14_0 = G_B13_0;
		if ((((RuntimeObject*)(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF *)L_24) == ((RuntimeObject*)(DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF *)L_25)))
		{
			G_B15_0 = G_B13_0;
			goto IL_009c;
		}
	}

IL_0093:
	{
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_26 = V_1;
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_27 = (DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 *)il2cpp_codegen_object_new(DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5_il2cpp_TypeInfo_var);
		DMeshAABBTree3__ctor_mB092FEBD48F7A7FA3DD0FBE25A6014887E70F21A(L_27, L_26, (bool)1, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		G_B16_1 = G_B14_0;
		goto IL_00a2;
	}

IL_009c:
	{
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_28 = __this->get_Spatial_1();
		G_B16_0 = L_28;
		G_B16_1 = G_B15_0;
	}

IL_00a2:
	{
		NullCheck(G_B16_1);
		G_B16_1->set_spatial_1(G_B16_0);
		// if (InsideMode == CalculationMode.AnalyticWindingNumber)
		int32_t L_29 = __this->get_InsideMode_7();
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_00c3;
		}
	}
	{
		// spatial.WindingNumber(Vector3d.Zero);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_30 = V_0;
		NullCheck(L_30);
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_31 = L_30->get_spatial_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_32 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		NullCheck(L_31);
		VirtFuncInvoker1< double, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  >::Invoke(23 /* System.Double g3.DMeshAABBTree3::WindingNumber(g3.Vector3d) */, L_31, L_32);
		goto IL_00dd;
	}

IL_00c3:
	{
		// else if (InsideMode == CalculationMode.FastWindingNumber )
		int32_t L_33 = __this->get_InsideMode_7();
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_00dd;
		}
	}
	{
		// spatial.FastWindingNumber(Vector3d.Zero);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_34 = V_0;
		NullCheck(L_34);
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_35 = L_34->get_spatial_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_36 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		NullCheck(L_35);
		VirtFuncInvoker1< double, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  >::Invoke(24 /* System.Double g3.DMeshAABBTree3::FastWindingNumber(g3.Vector3d) */, L_35, L_36);
	}

IL_00dd:
	{
		// if (Cancelled())
		bool L_37 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean gs.RemoveOccludedTriangles::Cancelled() */, __this);
		if (!L_37)
		{
			goto IL_00e7;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00e7:
	{
		// List<Vector3d> ray_dirs = null; int NR = 0;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_38 = V_0;
		NullCheck(L_38);
		L_38->set_ray_dirs_2((List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 *)NULL);
		// List<Vector3d> ray_dirs = null; int NR = 0;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_39 = V_0;
		NullCheck(L_39);
		L_39->set_NR_3(0);
		// if (InsideMode == CalculationMode.SimpleOcclusionTest) {
		int32_t L_40 = __this->get_InsideMode_7();
		if ((!(((uint32_t)L_40) == ((uint32_t)3))))
		{
			goto IL_018c;
		}
	}
	{
		// ray_dirs = new List<Vector3d>();
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_41 = V_0;
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_42 = (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 *)il2cpp_codegen_object_new(List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6_il2cpp_TypeInfo_var);
		List_1__ctor_mA3F76539208E05E0772ADEE285AEB538FB0A7ADF(L_42, /*hidden argument*/List_1__ctor_mA3F76539208E05E0772ADEE285AEB538FB0A7ADF_RuntimeMethod_var);
		NullCheck(L_41);
		L_41->set_ray_dirs_2(L_42);
		// ray_dirs.Add(Vector3d.AxisX); ray_dirs.Add(-Vector3d.AxisX);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_43 = V_0;
		NullCheck(L_43);
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_44 = L_43->get_ray_dirs_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_45 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_AxisX_5();
		NullCheck(L_44);
		List_1_Add_m4E299E5B871B4A419334452600038FEA48178722(L_44, L_45, /*hidden argument*/List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_RuntimeMethod_var);
		// ray_dirs.Add(Vector3d.AxisX); ray_dirs.Add(-Vector3d.AxisX);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_46 = V_0;
		NullCheck(L_46);
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_47 = L_46->get_ray_dirs_2();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_48 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_AxisX_5();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_49 = Vector3d_op_UnaryNegation_m60562586C7B9721CF854DC542DE190AED86A651D(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		List_1_Add_m4E299E5B871B4A419334452600038FEA48178722(L_47, L_49, /*hidden argument*/List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_RuntimeMethod_var);
		// ray_dirs.Add(Vector3d.AxisY); ray_dirs.Add(-Vector3d.AxisY);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_50 = V_0;
		NullCheck(L_50);
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_51 = L_50->get_ray_dirs_2();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_52 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_AxisY_6();
		NullCheck(L_51);
		List_1_Add_m4E299E5B871B4A419334452600038FEA48178722(L_51, L_52, /*hidden argument*/List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_RuntimeMethod_var);
		// ray_dirs.Add(Vector3d.AxisY); ray_dirs.Add(-Vector3d.AxisY);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_53 = V_0;
		NullCheck(L_53);
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_54 = L_53->get_ray_dirs_2();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_55 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_AxisY_6();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_56 = Vector3d_op_UnaryNegation_m60562586C7B9721CF854DC542DE190AED86A651D(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		List_1_Add_m4E299E5B871B4A419334452600038FEA48178722(L_54, L_56, /*hidden argument*/List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_RuntimeMethod_var);
		// ray_dirs.Add(Vector3d.AxisZ); ray_dirs.Add(-Vector3d.AxisZ);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_57 = V_0;
		NullCheck(L_57);
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_58 = L_57->get_ray_dirs_2();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_59 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_AxisZ_7();
		NullCheck(L_58);
		List_1_Add_m4E299E5B871B4A419334452600038FEA48178722(L_58, L_59, /*hidden argument*/List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_RuntimeMethod_var);
		// ray_dirs.Add(Vector3d.AxisZ); ray_dirs.Add(-Vector3d.AxisZ);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_60 = V_0;
		NullCheck(L_60);
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_61 = L_60->get_ray_dirs_2();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_62 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_AxisZ_7();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_63 = Vector3d_op_UnaryNegation_m60562586C7B9721CF854DC542DE190AED86A651D(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_m4E299E5B871B4A419334452600038FEA48178722(L_61, L_63, /*hidden argument*/List_1_Add_m4E299E5B871B4A419334452600038FEA48178722_RuntimeMethod_var);
		// NR = ray_dirs.Count;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_64 = V_0;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_65 = V_0;
		NullCheck(L_65);
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_66 = L_65->get_ray_dirs_2();
		NullCheck(L_66);
		int32_t L_67 = List_1_get_Count_m705801E33957190A1590511EEFC8A454771A120A_inline(L_66, /*hidden argument*/List_1_get_Count_m705801E33957190A1590511EEFC8A454771A120A_RuntimeMethod_var);
		NullCheck(L_64);
		L_64->set_NR_3(L_67);
	}

IL_018c:
	{
		// Func<Vector3d, bool> isOccludedF = (pt) => {
		// 
		//     if (InsideMode == CalculationMode.RayParity) {
		//         return spatial.IsInside(pt);
		//     } else if (InsideMode == CalculationMode.AnalyticWindingNumber) {
		//         return spatial.WindingNumber(pt) > WindingIsoValue;
		//     } else if (InsideMode == CalculationMode.FastWindingNumber) {
		//         return spatial.FastWindingNumber(pt) > WindingIsoValue;
		//     } else {
		//         for (int k = 0; k < NR; ++k) {
		//             int hit_tid = spatial.FindNearestHitTriangle(new Ray3d(pt, ray_dirs[k]));
		//             if (hit_tid == DMesh3.InvalidID)
		//                 return false;
		//         }
		//         return true;
		//     }
		// };
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_68 = V_0;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_69 = V_0;
		Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * L_70 = (Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE *)il2cpp_codegen_object_new(Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE_il2cpp_TypeInfo_var);
		Func_2__ctor_m0C98AB08A6FF2F2C7D01A397415D2C03A70F116A(L_70, L_69, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__0_m472EA79CB5357912EC2DB0B848B01DD2307DC003_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0C98AB08A6FF2F2C7D01A397415D2C03A70F116A_RuntimeMethod_var);
		NullCheck(L_68);
		L_68->set_isOccludedF_6(L_70);
		// bool cancel = false;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_71 = V_0;
		NullCheck(L_71);
		L_71->set_cancel_4((bool)0);
		// BitArray vertices = null;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_72 = V_0;
		NullCheck(L_72);
		L_72->set_vertices_5((BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C *)NULL);
		// if ( PerVertex ) {
		bool L_73 = __this->get_PerVertex_4();
		if (!L_73)
		{
			goto IL_0230;
		}
	}
	{
		U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * L_74 = (U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_1__ctor_m9F0FEC0713CA825FEBCDC9F2A6E480EFD9FA4327(L_74, /*hidden argument*/NULL);
		V_6 = L_74;
		U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * L_75 = V_6;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_76 = V_0;
		NullCheck(L_75);
		L_75->set_CSU24U3CU3E8__locals1_1(L_76);
		// vertices = new BitArray(Mesh.MaxVertexID);
		U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * L_77 = V_6;
		NullCheck(L_77);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_78 = L_77->get_CSU24U3CU3E8__locals1_1();
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_79 = __this->get_Mesh_0();
		NullCheck(L_79);
		int32_t L_80 = DMesh3_get_MaxVertexID_m0BD2745116CF61A6EA845E210169BBEAAF98FC49(L_79, /*hidden argument*/NULL);
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_81 = (BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C *)il2cpp_codegen_object_new(BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C_il2cpp_TypeInfo_var);
		BitArray__ctor_mFCF5EE42D4A347EF9A86932CCA1161F6AB382282(L_81, L_80, /*hidden argument*/NULL);
		NullCheck(L_78);
		L_78->set_vertices_5(L_81);
		// MeshNormals normals = null;
		U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * L_82 = V_6;
		NullCheck(L_82);
		L_82->set_normals_0((MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 *)NULL);
		// if (Mesh.HasVertexNormals == false) {
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_83 = __this->get_Mesh_0();
		NullCheck(L_83);
		bool L_84 = DMesh3_get_HasVertexNormals_m15D23B9A35C1742D4D4505190FB236F6D0ED8F3E(L_83, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0213;
		}
	}
	{
		// normals = new MeshNormals(Mesh);
		U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * L_85 = V_6;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_86 = __this->get_Mesh_0();
		MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * L_87 = (MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 *)il2cpp_codegen_object_new(MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8_il2cpp_TypeInfo_var);
		MeshNormals__ctor_m11B423C7669798A098E23540B14B8F5599BD43AE(L_87, L_86, 0, /*hidden argument*/NULL);
		NullCheck(L_85);
		L_85->set_normals_0(L_87);
		// normals.Compute();
		U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * L_88 = V_6;
		NullCheck(L_88);
		MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * L_89 = L_88->get_normals_0();
		NullCheck(L_89);
		MeshNormals_Compute_m682A56F74A6175E57A71E63A274FE229323D3C1B(L_89, /*hidden argument*/NULL);
	}

IL_0213:
	{
		// gParallel.ForEach(Mesh.VertexIndices(), (vid) => {
		//     if (cancel) return;
		//     if (vid % 10 == 0) cancel = Cancelled();
		// 
		//     Vector3d c = Mesh.GetVertex(vid);
		//     Vector3d n = (normals == null) ? Mesh.GetVertexNormal(vid) : normals[vid];
		//     c += n * NormalOffset;
		//     vertices[vid] = isOccludedF(c);
		// });
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_90 = __this->get_Mesh_0();
		NullCheck(L_90);
		RuntimeObject* L_91 = DMesh3_VertexIndices_m1B7368CA7BF3F3069C56B13086AC3E62B0697FCB(L_90, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * L_92 = V_6;
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_93 = (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *)il2cpp_codegen_object_new(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var);
		Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E(L_93, L_92, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_1_U3CApplyU3Eb__2_m37E9FDADF811010220C0DD0210E1FDE2A07D0511_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var);
		gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0(L_91, L_93, /*hidden argument*/gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0_RuntimeMethod_var);
	}

IL_0230:
	{
		// if (Cancelled())
		bool L_94 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean gs.RemoveOccludedTriangles::Cancelled() */, __this);
		if (!L_94)
		{
			goto IL_023a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_023a:
	{
		// RemovedT = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_95 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_95, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_RemovedT_2(L_95);
		// SpinLock removeLock = new SpinLock();
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_96 = V_0;
		NullCheck(L_96);
		SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * L_97 = L_96->get_address_of_removeLock_7();
		il2cpp_codegen_initobj(L_97, sizeof(SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 ));
		// gParallel.ForEach(Mesh.TriangleIndices(), (tid) => {
		//     if (cancel) return;
		//     if (tid % 10 == 0) cancel = Cancelled();
		// 
		//     bool inside = false;
		//     if (PerVertex) {
		//         Index3i tri = Mesh.GetTriangle(tid);
		//         inside = vertices[tri.a] || vertices[tri.b] || vertices[tri.c];
		// 
		//     } else {
		//         Vector3d c = Mesh.GetTriCentroid(tid);
		//         Vector3d n = Mesh.GetTriNormal(tid);
		//         c += n * NormalOffset;
		//         inside = isOccludedF(c);
		//     }
		// 
		//     if (inside) {
		//         bool taken = false;
		//         removeLock.Enter(ref taken);
		//         RemovedT.Add(tid);
		//         removeLock.Exit();
		//     }
		// });
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_98 = __this->get_Mesh_0();
		NullCheck(L_98);
		RuntimeObject* L_99 = DMesh3_TriangleIndices_mA55F7FDA0C1F985E93B36211441CA8948632EC4C(L_98, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_100 = V_0;
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_101 = (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *)il2cpp_codegen_object_new(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B_il2cpp_TypeInfo_var);
		Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E(L_101, L_100, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__1_m7C9FE798944C8D5E984331EC676BBD07BF3EE5FE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2CDF7A9DFEDA8D59543C004CB97A89C47A0CDC3E_RuntimeMethod_var);
		gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0(L_99, L_101, /*hidden argument*/gParallel_ForEach_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m17676E8CCBF3B94F9BE0C9A4AA9EA3163F6377C0_RuntimeMethod_var);
		// if (Cancelled())
		bool L_102 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean gs.RemoveOccludedTriangles::Cancelled() */, __this);
		if (!L_102)
		{
			goto IL_0277;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0277:
	{
		// if (RemovedT.Count > 0) {
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_103 = __this->get_RemovedT_2();
		NullCheck(L_103);
		int32_t L_104 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_103, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		if ((((int32_t)L_104) <= ((int32_t)0)))
		{
			goto IL_02a9;
		}
	}
	{
		// MeshEditor editor = new MeshEditor(Mesh);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_105 = __this->get_Mesh_0();
		MeshEditor_t803B18DB096694419E2850701CC6C204891107A7 * L_106 = (MeshEditor_t803B18DB096694419E2850701CC6C204891107A7 *)il2cpp_codegen_object_new(MeshEditor_t803B18DB096694419E2850701CC6C204891107A7_il2cpp_TypeInfo_var);
		MeshEditor__ctor_mD7175093A09D81B11A3E62E8B3C921659AD07A2E(L_106, L_105, /*hidden argument*/NULL);
		// bool bOK = editor.RemoveTriangles(RemovedT, true);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_107 = __this->get_RemovedT_2();
		NullCheck(L_106);
		bool L_108 = MeshEditor_RemoveTriangles_mD3959971E436D50DC70220C8E9986742E592F0D3(L_106, L_107, (bool)1, /*hidden argument*/NULL);
		V_7 = L_108;
		// RemoveFailed = (bOK == false);
		bool L_109 = V_7;
		__this->set_RemoveFailed_3((bool)((((int32_t)L_109) == ((int32_t)0))? 1 : 0));
	}

IL_02a9:
	{
		// return true;
		return (bool)1;
	}

IL_02ab:
	{
		// }
		bool L_110 = V_5;
		return L_110;
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
// System.Void gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mCC98A3E3C2F2EECC8E5EC93B7F3F08673F102F73 (U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::<Apply>b__0(g3.Vector3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__0_m472EA79CB5357912EC2DB0B848B01DD2307DC003 (U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___pt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__0_m472EA79CB5357912EC2DB0B848B01DD2307DC003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (InsideMode == CalculationMode.RayParity) {
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_InsideMode_7();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return spatial.IsInside(pt);
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_2 = __this->get_spatial_1();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_3 = ___pt0;
		NullCheck(L_2);
		bool L_4 = VirtFuncInvoker1< bool, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  >::Invoke(20 /* System.Boolean g3.DMeshAABBTree3::IsInside(g3.Vector3d) */, L_2, L_3);
		return L_4;
	}

IL_001a:
	{
		// } else if (InsideMode == CalculationMode.AnalyticWindingNumber) {
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_5 = __this->get_U3CU3E4__this_0();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_InsideMode_7();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// return spatial.WindingNumber(pt) > WindingIsoValue;
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_7 = __this->get_spatial_1();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_8 = ___pt0;
		NullCheck(L_7);
		double L_9 = VirtFuncInvoker1< double, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  >::Invoke(23 /* System.Double g3.DMeshAABBTree3::WindingNumber(g3.Vector3d) */, L_7, L_8);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		double L_11 = L_10->get_WindingIsoValue_6();
		return (bool)((((double)L_9) > ((double)L_11))? 1 : 0);
	}

IL_0042:
	{
		// } else if (InsideMode == CalculationMode.FastWindingNumber) {
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_InsideMode_7();
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_006a;
		}
	}
	{
		// return spatial.FastWindingNumber(pt) > WindingIsoValue;
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_14 = __this->get_spatial_1();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_15 = ___pt0;
		NullCheck(L_14);
		double L_16 = VirtFuncInvoker1< double, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  >::Invoke(24 /* System.Double g3.DMeshAABBTree3::FastWindingNumber(g3.Vector3d) */, L_14, L_15);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_17 = __this->get_U3CU3E4__this_0();
		NullCheck(L_17);
		double L_18 = L_17->get_WindingIsoValue_6();
		return (bool)((((double)L_16) > ((double)L_18))? 1 : 0);
	}

IL_006a:
	{
		// for (int k = 0; k < NR; ++k) {
		V_0 = 0;
		goto IL_009e;
	}

IL_006e:
	{
		// int hit_tid = spatial.FindNearestHitTriangle(new Ray3d(pt, ray_dirs[k]));
		DMeshAABBTree3_t0FC72F09FB4918962B61A1B50B86BD9547D969C5 * L_19 = __this->get_spatial_1();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_20 = ___pt0;
		List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * L_21 = __this->get_ray_dirs_2();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_23 = List_1_get_Item_m1974BD117BED7D513FA718522E8D9A7621D91628_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m1974BD117BED7D513FA718522E8D9A7621D91628_RuntimeMethod_var);
		Ray3d_t7A6B08A229386EA5F368EEA38147A7B9B54204E6  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Ray3d__ctor_m1888C92146B72CB7A9EC2A0062B6E112838744A5((&L_24), L_20, L_23, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_25 = VirtFuncInvoker2< int32_t, Ray3d_t7A6B08A229386EA5F368EEA38147A7B9B54204E6 , double >::Invoke(13 /* System.Int32 g3.DMeshAABBTree3::FindNearestHitTriangle(g3.Ray3d,System.Double) */, L_19, L_24, (1.7976931348623157E+308));
		// if (hit_tid == DMesh3.InvalidID)
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_009a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_009a:
	{
		// for (int k = 0; k < NR; ++k) {
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009e:
	{
		// for (int k = 0; k < NR; ++k) {
		int32_t L_27 = V_0;
		int32_t L_28 = __this->get_NR_3();
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_006e;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void gs.RemoveOccludedTriangles_<>c__DisplayClass13_0::<Apply>b__1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__1_m7C9FE798944C8D5E984331EC676BBD07BF3EE5FE (U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * __this, int32_t ___tid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CApplyU3Eb__1_m7C9FE798944C8D5E984331EC676BBD07BF3EE5FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t G_B9_0 = 0;
	{
		// if (cancel) return;
		bool L_0 = __this->get_cancel_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (cancel) return;
		return;
	}

IL_0009:
	{
		// if (tid % 10 == 0) cancel = Cancelled();
		int32_t L_1 = ___tid0;
		if (((int32_t)((int32_t)L_1%(int32_t)((int32_t)10))))
		{
			goto IL_0020;
		}
	}
	{
		// if (tid % 10 == 0) cancel = Cancelled();
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean gs.RemoveOccludedTriangles::Cancelled() */, L_2);
		__this->set_cancel_4(L_3);
	}

IL_0020:
	{
		// bool inside = false;
		V_0 = (bool)0;
		// if (PerVertex) {
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_4 = __this->get_U3CU3E4__this_0();
		NullCheck(L_4);
		bool L_5 = L_4->get_PerVertex_4();
		if (!L_5)
		{
			goto IL_007e;
		}
	}
	{
		// Index3i tri = Mesh.GetTriangle(tid);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_7 = L_6->get_Mesh_0();
		int32_t L_8 = ___tid0;
		NullCheck(L_7);
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_9 = DMesh3_GetTriangle_m3241FD4A420BD3AB97FFA0DA62AA42B738673C34(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// inside = vertices[tri.a] || vertices[tri.b] || vertices[tri.c];
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_10 = __this->get_vertices_5();
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_11 = V_1;
		int32_t L_12 = L_11.get_a_0();
		NullCheck(L_10);
		bool L_13 = BitArray_get_Item_m1016DFD6DE9A2CADDB37B264BD2F691CFE2D3DAC(L_10, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_007a;
		}
	}
	{
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_14 = __this->get_vertices_5();
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_15 = V_1;
		int32_t L_16 = L_15.get_b_1();
		NullCheck(L_14);
		bool L_17 = BitArray_get_Item_m1016DFD6DE9A2CADDB37B264BD2F691CFE2D3DAC(L_14, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_007a;
		}
	}
	{
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_18 = __this->get_vertices_5();
		Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_19 = V_1;
		int32_t L_20 = L_19.get_c_2();
		NullCheck(L_18);
		bool L_21 = BitArray_get_Item_m1016DFD6DE9A2CADDB37B264BD2F691CFE2D3DAC(L_18, L_20, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_21));
		goto IL_007b;
	}

IL_007a:
	{
		G_B9_0 = 1;
	}

IL_007b:
	{
		V_0 = (bool)G_B9_0;
		// } else {
		goto IL_00c7;
	}

IL_007e:
	{
		// Vector3d c = Mesh.GetTriCentroid(tid);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_22 = __this->get_U3CU3E4__this_0();
		NullCheck(L_22);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_23 = L_22->get_Mesh_0();
		int32_t L_24 = ___tid0;
		NullCheck(L_23);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_25 = DMesh3_GetTriCentroid_m351840C9BF22AC6053ADF3DB57D6A96BF61CAA70(L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// Vector3d n = Mesh.GetTriNormal(tid);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_26 = __this->get_U3CU3E4__this_0();
		NullCheck(L_26);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_27 = L_26->get_Mesh_0();
		int32_t L_28 = ___tid0;
		NullCheck(L_27);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_29 = DMesh3_GetTriNormal_m45AB1C8BAB57727D5D419943A4A4A00008B6E7D9(L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		// c += n * NormalOffset;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_30 = V_2;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_31 = V_3;
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_32 = __this->get_U3CU3E4__this_0();
		NullCheck(L_32);
		double L_33 = L_32->get_NormalOffset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_34 = Vector3d_op_Multiply_mE9F4DF0CA4853CD0B4A3A8045A6B2ED8859A53D4(L_31, L_33, /*hidden argument*/NULL);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_35 = Vector3d_op_Addition_m9F4F9B4A361E3A869F9B126073A5DCE91E2BEAD9(L_30, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		// inside = isOccludedF(c);
		Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * L_36 = __this->get_isOccludedF_6();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_37 = V_2;
		NullCheck(L_36);
		bool L_38 = Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B(L_36, L_37, /*hidden argument*/Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B_RuntimeMethod_var);
		V_0 = L_38;
	}

IL_00c7:
	{
		// if (inside) {
		bool L_39 = V_0;
		if (!L_39)
		{
			goto IL_00f6;
		}
	}
	{
		// bool taken = false;
		V_4 = (bool)0;
		// removeLock.Enter(ref taken);
		SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * L_40 = __this->get_address_of_removeLock_7();
		SpinLock_Enter_mF3E9D6327B1767595E94264ABB9526C5CF3CFC3B((SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 *)L_40, (bool*)(&V_4), /*hidden argument*/NULL);
		// RemovedT.Add(tid);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_41 = __this->get_U3CU3E4__this_0();
		NullCheck(L_41);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_42 = L_41->get_RemovedT_2();
		int32_t L_43 = ___tid0;
		NullCheck(L_42);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_42, L_43, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// removeLock.Exit();
		SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 * L_44 = __this->get_address_of_removeLock_7();
		SpinLock_Exit_mBCAF79B24D11C11DA659E92B42EBF03BF4717EAB((SpinLock_t8C6A214261382587D0A07AD354500141672A1DE1 *)L_44, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// });
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
// System.Void gs.RemoveOccludedTriangles_<>c__DisplayClass13_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1__ctor_m9F0FEC0713CA825FEBCDC9F2A6E480EFD9FA4327 (U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gs.RemoveOccludedTriangles_<>c__DisplayClass13_1::<Apply>b__2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1_U3CApplyU3Eb__2_m37E9FDADF811010220C0DD0210E1FDE2A07D0511 (U3CU3Ec__DisplayClass13_1_tD8B36B286DD12312BCF50203A2096AE18A011159 * __this, int32_t ___vid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_1_U3CApplyU3Eb__2_m37E9FDADF811010220C0DD0210E1FDE2A07D0511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// if (cancel) return;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_cancel_4();
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (cancel) return;
		return;
	}

IL_000e:
	{
		// if (vid % 10 == 0) cancel = Cancelled();
		int32_t L_2 = ___vid0;
		if (((int32_t)((int32_t)L_2%(int32_t)((int32_t)10))))
		{
			goto IL_002f;
		}
	}
	{
		// if (vid % 10 == 0) cancel = Cancelled();
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_4 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_4);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_5 = L_4->get_U3CU3E4__this_0();
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean gs.RemoveOccludedTriangles::Cancelled() */, L_5);
		NullCheck(L_3);
		L_3->set_cancel_4(L_6);
	}

IL_002f:
	{
		// Vector3d c = Mesh.GetVertex(vid);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_7 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_7);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_8 = L_7->get_U3CU3E4__this_0();
		NullCheck(L_8);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_9 = L_8->get_Mesh_0();
		int32_t L_10 = ___vid0;
		NullCheck(L_9);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_11 = DMesh3_GetVertex_m84982C6F580FF4C1251825BDF11D3D3A8361037C(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// Vector3d n = (normals == null) ? Mesh.GetVertexNormal(vid) : normals[vid];
		MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * L_12 = __this->get_normals_0();
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		MeshNormals_t5438ECDFDF1DD1C9A3670BC160D72BB0551238F8 * L_13 = __this->get_normals_0();
		int32_t L_14 = ___vid0;
		NullCheck(L_13);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_15 = MeshNormals_get_Item_mC53EA691E4DEFBF83E1ED2CAA6841F619B1FA8B5(L_13, L_14, /*hidden argument*/NULL);
		G_B7_0 = L_15;
		goto IL_0077;
	}

IL_005c:
	{
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_16 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_16);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_17 = L_16->get_U3CU3E4__this_0();
		NullCheck(L_17);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_18 = L_17->get_Mesh_0();
		int32_t L_19 = ___vid0;
		NullCheck(L_18);
		Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  L_20 = DMesh3_GetVertexNormal_m3E79DC7D2E17B2CFF73CEB61E1DAE390687267BD(L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_21 = Vector3d_op_Implicit_m7DEA1C778BCC104E1015679E42512A1C56590997(L_20, /*hidden argument*/NULL);
		G_B7_0 = L_21;
	}

IL_0077:
	{
		V_1 = G_B7_0;
		// c += n * NormalOffset;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_22 = V_0;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_23 = V_1;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_24 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_24);
		RemoveOccludedTriangles_t98712012D96C1C6349CB5C9CFAFB1BCB393414C0 * L_25 = L_24->get_U3CU3E4__this_0();
		NullCheck(L_25);
		double L_26 = L_25->get_NormalOffset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_27 = Vector3d_op_Multiply_mE9F4DF0CA4853CD0B4A3A8045A6B2ED8859A53D4(L_23, L_26, /*hidden argument*/NULL);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_28 = Vector3d_op_Addition_m9F4F9B4A361E3A869F9B126073A5DCE91E2BEAD9(L_22, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// vertices[vid] = isOccludedF(c);
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_29 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_29);
		BitArray_tAB60A36F4653297D4A34A925D0FF0762249E0A5C * L_30 = L_29->get_vertices_5();
		int32_t L_31 = ___vid0;
		U3CU3Ec__DisplayClass13_0_t72BEEF6F895E7F4A74E63462870C5ABBD87F5365 * L_32 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_32);
		Func_2_t144D13242EF02DDAF2976E3942EAE34FFE0615EE * L_33 = L_32->get_isOccludedF_6();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_34 = V_0;
		NullCheck(L_33);
		bool L_35 = Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B(L_33, L_34, /*hidden argument*/Func_2_Invoke_m5F1FF3C6B4678239042DA0B5D2E295FB9212072B_RuntimeMethod_var);
		NullCheck(L_30);
		BitArray_set_Item_m935E7A8491A931AB3C6C05EB523D0D565A67A6B2(L_30, L_31, L_35, /*hidden argument*/NULL);
		// });
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
// System.Void gs.SmoothedHoleFill::.ctor(g3.DMesh3,g3.EdgeLoop)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothedHoleFill__ctor_m0E4FDF337C8392FA7E20AC9B9D6F54D6997DC1F1 (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * ___mesh0, EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * ___fillLoop1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothedHoleFill__ctor_m0E4FDF337C8392FA7E20AC9B9D6F54D6997DC1F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3d OffsetDirection = Vector3d.Zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_0 = ((Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var))->get_Zero_3();
		__this->set_OffsetDirection_1(L_0);
		// public double TargetEdgeLength = 2.5;
		__this->set_TargetEdgeLength_3((2.5));
		// public double SmoothAlpha = 1.0;
		__this->set_SmoothAlpha_4((1.0));
		// public int InitialRemeshPasses = 20;
		__this->set_InitialRemeshPasses_5(((int32_t)20));
		// public bool RemeshBeforeSmooth = true;
		__this->set_RemeshBeforeSmooth_6((bool)1);
		// public bool RemeshAfterSmooth = true;
		__this->set_RemeshAfterSmooth_7((bool)1);
		// public bool EnableLaplacianSmooth = true;
		__this->set_EnableLaplacianSmooth_9((bool)1);
		// public int SmoothSolveIterations = 1;
		__this->set_SmoothSolveIterations_10(1);
		// public SmoothedHoleFill(DMesh3 mesh, EdgeLoop fillLoop = null)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Mesh = mesh;
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_1 = ___mesh0;
		__this->set_Mesh_0(L_1);
		// this.FillLoop = fillLoop;
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_2 = ___fillLoop1;
		__this->set_FillLoop_12(L_2);
		// }
		return;
	}
}
// System.Boolean gs.SmoothedHoleFill::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SmoothedHoleFill_Apply_m542E69F746077B1CF88C325BE2360673FCE7C3EE (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothedHoleFill_Apply_m542E69F746077B1CF88C325BE2360673FCE7C3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * V_0 = NULL;
	SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 * V_1 = NULL;
	MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * V_2 = NULL;
	MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * V_3 = NULL;
	MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * V_4 = NULL;
	MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9 * V_5 = NULL;
	RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// EdgeLoop useLoop = null;
		V_0 = (EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 *)NULL;
		// if (FillLoop == null) {
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_0 = __this->get_FillLoop_12();
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		// MeshBoundaryLoops loops = new MeshBoundaryLoops(Mesh, true);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_1 = __this->get_Mesh_0();
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_2 = (MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 *)il2cpp_codegen_object_new(MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965_il2cpp_TypeInfo_var);
		MeshBoundaryLoops__ctor_m7935B856992D4EC83B81C5C611962930C7C75138(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		V_4 = L_2;
		// if (loops.Count == 0)
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_3 = V_4;
		NullCheck(L_3);
		int32_t L_4 = MeshBoundaryLoops_get_Count_m7851220861D3C582DDEC6DBD3285CE421CFB6079(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// if (BorderHintTris != null)
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = __this->get_BorderHintTris_13();
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// useLoop = select_loop_tris_hint(loops);
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_6 = V_4;
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_7 = SmoothedHoleFill_select_loop_tris_hint_m8C92AE0C9A616E40B1C43EB84970A40B095C1F15(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0034:
	{
		// if (useLoop == null && loops.MaxVerticesLoopIndex >= 0)
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_8 = V_0;
		if (L_8)
		{
			goto IL_0059;
		}
	}
	{
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_9 = V_4;
		NullCheck(L_9);
		int32_t L_10 = MeshBoundaryLoops_get_MaxVerticesLoopIndex_mF2E062BDD4668264BFF7708D6BD9FC4758860034(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// useLoop = loops[loops.MaxVerticesLoopIndex];
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_11 = V_4;
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_12 = V_4;
		NullCheck(L_12);
		int32_t L_13 = MeshBoundaryLoops_get_MaxVerticesLoopIndex_mF2E062BDD4668264BFF7708D6BD9FC4758860034(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_14 = MeshBoundaryLoops_get_Item_m1307EAF0DD80592FE7AA6502DDBA6D0F03A16EBB(L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// } else {
		goto IL_0059;
	}

IL_0052:
	{
		// useLoop = FillLoop;
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_15 = __this->get_FillLoop_12();
		V_0 = L_15;
	}

IL_0059:
	{
		// if (useLoop == null)
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_16 = V_0;
		if (L_16)
		{
			goto IL_005e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_005e:
	{
		// SimpleHoleFiller filler = new SimpleHoleFiller(Mesh, useLoop);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_17 = __this->get_Mesh_0();
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_18 = V_0;
		SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 * L_19 = (SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 *)il2cpp_codegen_object_new(SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412_il2cpp_TypeInfo_var);
		SimpleHoleFiller__ctor_m5168EB8709886C2730F8C8CA5A0034DA041D839C(L_19, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// if (filler.Fill() == false)
		SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 * L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = VirtFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean g3.SimpleHoleFiller::Fill(System.Int32) */, L_20, (-1));
		if (L_21)
		{
			goto IL_0076;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0076:
	{
		// if (useLoop.Vertices.Length <= 3 ) {
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_22 = V_0;
		NullCheck(L_22);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = L_22->get_Vertices_1();
		NullCheck(L_23);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))) > ((int32_t)3)))
		{
			goto IL_009b;
		}
	}
	{
		// FillTriangles = filler.NewTriangles;
		SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 * L_24 = V_1;
		NullCheck(L_24);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = L_24->get_NewTriangles_3();
		__this->set_FillTriangles_14(L_25);
		// FillVertices = new int[0];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_FillVertices_15(L_26);
		// return true;
		return (bool)1;
	}

IL_009b:
	{
		// MeshFaceSelection tris = new MeshFaceSelection(Mesh);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_27 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_28 = (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C *)il2cpp_codegen_object_new(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C_il2cpp_TypeInfo_var);
		MeshFaceSelection__ctor_m1EFAE9CDBD6185350BAF0DE77E83CE7D57D39EB1(L_28, L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		// tris.Select(filler.NewTriangles);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_29 = V_2;
		SimpleHoleFiller_t4C8840B432A07E05CD77F05AF1D25B4C7416E412 * L_30 = V_1;
		NullCheck(L_30);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_31 = L_30->get_NewTriangles_3();
		NullCheck(L_29);
		MeshFaceSelection_Select_m07FB5796C3143FEE705F4FE9E8401E123A49E3D7(L_29, L_31, /*hidden argument*/NULL);
		// if (OffsetDistance > 0) {
		double L_32 = __this->get_OffsetDistance_2();
		if ((!(((double)L_32) > ((double)(0.0)))))
		{
			goto IL_00fd;
		}
	}
	{
		// MeshExtrudeFaces extrude = new MeshExtrudeFaces(Mesh, tris);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_33 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_34 = V_2;
		MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9 * L_35 = (MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9 *)il2cpp_codegen_object_new(MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9_il2cpp_TypeInfo_var);
		MeshExtrudeFaces__ctor_m2A785E4EF05F8AD2AF2754FBD4E0204D4B4A20B8(L_35, L_33, L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		// extrude.ExtrudedPositionF = (v, n, vid) => {
		//     return v + OffsetDistance * OffsetDirection;
		// };
		MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9 * L_36 = V_5;
		Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC * L_37 = (Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC *)il2cpp_codegen_object_new(Func_4_tDAF0D5D73C12C1FB296A538A77114B7630DF98DC_il2cpp_TypeInfo_var);
		Func_4__ctor_m72CBD8C19269B9A8CC98AF706770E4A73298676D(L_37, __this, (intptr_t)((intptr_t)SmoothedHoleFill_U3CApplyU3Eb__17_0_m34B8F07EE91E9ABAB45F882F9863457BF499B7E7_RuntimeMethod_var), /*hidden argument*/Func_4__ctor_m72CBD8C19269B9A8CC98AF706770E4A73298676D_RuntimeMethod_var);
		NullCheck(L_36);
		L_36->set_ExtrudedPositionF_3(L_37);
		// if (!extrude.Extrude())
		MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9 * L_38 = V_5;
		NullCheck(L_38);
		bool L_39 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean g3.MeshExtrudeFaces::Extrude() */, L_38);
		if (L_39)
		{
			goto IL_00f0;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00f0:
	{
		// tris.Select(extrude.JoinTriangles);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_40 = V_2;
		MeshExtrudeFaces_t111F12E49E0CD1B951B6256B4D646701F35F7DF9 * L_41 = V_5;
		NullCheck(L_41);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_42 = L_41->get_JoinTriangles_6();
		NullCheck(L_40);
		MeshFaceSelection_Select_m07FB5796C3143FEE705F4FE9E8401E123A49E3D7(L_40, L_42, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		// if (ConstrainToHoleInterior == false) {
		bool L_43 = __this->get_ConstrainToHoleInterior_11();
		if (L_43)
		{
			goto IL_0119;
		}
	}
	{
		// tris.ExpandToOneRingNeighbours(2);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_44 = V_2;
		NullCheck(L_44);
		MeshFaceSelection_ExpandToOneRingNeighbours_m0C35EB47E16A99048A1A438F7697741B24352377(L_44, 2, (Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 *)NULL, /*hidden argument*/NULL);
		// tris.LocalOptimize(true, true);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_45 = V_2;
		NullCheck(L_45);
		MeshFaceSelection_LocalOptimize_mD5BA0705B6DE7D1B916C47D410E90814532001B0(L_45, (bool)1, (bool)1, (bool)1, (bool)1, (bool)0, /*hidden argument*/NULL);
	}

IL_0119:
	{
		// if (RemeshBeforeSmooth) {
		bool L_46 = __this->get_RemeshBeforeSmooth_6();
		if (!L_46)
		{
			goto IL_01cc;
		}
	}
	{
		// RegionRemesher remesh = new RegionRemesher(Mesh, tris);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_47 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_48 = V_2;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_49 = (RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 *)il2cpp_codegen_object_new(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67_il2cpp_TypeInfo_var);
		RegionRemesher__ctor_mEE289F89207AA5A2DC6553AA335E942CFB80B226(L_49, L_47, L_48, /*hidden argument*/NULL);
		V_6 = L_49;
		// remesh.SetTargetEdgeLength(TargetEdgeLength);
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_50 = V_6;
		double L_51 = __this->get_TargetEdgeLength_3();
		NullCheck(L_50);
		Remesher_SetTargetEdgeLength_mEC01CF9C764FD63EBD90BD50926F879BB24961E3(L_50, L_51, /*hidden argument*/NULL);
		// remesh.EnableSmoothing = (SmoothAlpha > 0);
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_52 = V_6;
		double L_53 = __this->get_SmoothAlpha_4();
		NullCheck(L_52);
		((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_52)->set_EnableSmoothing_9((bool)((((double)L_53) > ((double)(0.0)))? 1 : 0));
		// remesh.SmoothSpeedT = SmoothAlpha;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_54 = V_6;
		double L_55 = __this->get_SmoothAlpha_4();
		NullCheck(L_54);
		((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_54)->set_SmoothSpeedT_13(L_55);
		// if (ConfigureRemesherF != null)
		Action_2_tA04000E22AE4BB80358647073628729031416298 * L_56 = __this->get_ConfigureRemesherF_8();
		if (!L_56)
		{
			goto IL_017a;
		}
	}
	{
		// ConfigureRemesherF(remesh, true);
		Action_2_tA04000E22AE4BB80358647073628729031416298 * L_57 = __this->get_ConfigureRemesherF_8();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_58 = V_6;
		NullCheck(L_57);
		Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7(L_57, L_58, (bool)1, /*hidden argument*/Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7_RuntimeMethod_var);
	}

IL_017a:
	{
		// for (int k = 0; k < InitialRemeshPasses; ++k)
		V_7 = 0;
		goto IL_018c;
	}

IL_017f:
	{
		// remesh.BasicRemeshPass();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_59 = V_6;
		NullCheck(L_59);
		VirtActionInvoker0::Invoke(6 /* System.Void g3.Remesher::BasicRemeshPass() */, L_59);
		// for (int k = 0; k < InitialRemeshPasses; ++k)
		int32_t L_60 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_018c:
	{
		// for (int k = 0; k < InitialRemeshPasses; ++k)
		int32_t L_61 = V_7;
		int32_t L_62 = __this->get_InitialRemeshPasses_5();
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_017f;
		}
	}
	{
		// remesh.BackPropropagate();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_63 = V_6;
		NullCheck(L_63);
		RegionRemesher_BackPropropagate_m69D6C290D6CF96E8DDC97FE41B401A2DFE21B10A(L_63, (bool)1, /*hidden argument*/NULL);
		// tris = new MeshFaceSelection(Mesh);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_64 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_65 = (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C *)il2cpp_codegen_object_new(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C_il2cpp_TypeInfo_var);
		MeshFaceSelection__ctor_m1EFAE9CDBD6185350BAF0DE77E83CE7D57D39EB1(L_65, L_64, /*hidden argument*/NULL);
		V_2 = L_65;
		// tris.Select(remesh.CurrentBaseTriangles);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_66 = V_2;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_67 = V_6;
		NullCheck(L_67);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_68 = RegionRemesher_get_CurrentBaseTriangles_m36B4D59C3EE131D0047A81E140617B416395E9ED_inline(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		MeshFaceSelection_Select_m07FB5796C3143FEE705F4FE9E8401E123A49E3D7(L_66, L_68, /*hidden argument*/NULL);
		// if (ConstrainToHoleInterior == false)
		bool L_69 = __this->get_ConstrainToHoleInterior_11();
		if (L_69)
		{
			goto IL_01cc;
		}
	}
	{
		// tris.LocalOptimize(true, true);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_70 = V_2;
		NullCheck(L_70);
		MeshFaceSelection_LocalOptimize_mD5BA0705B6DE7D1B916C47D410E90814532001B0(L_70, (bool)1, (bool)1, (bool)1, (bool)1, (bool)0, /*hidden argument*/NULL);
	}

IL_01cc:
	{
		// if (ConstrainToHoleInterior) {
		bool L_71 = __this->get_ConstrainToHoleInterior_11();
		if (!L_71)
		{
			goto IL_0216;
		}
	}
	{
		// for (int k = 0; k < SmoothSolveIterations; ++k ) {
		V_8 = 0;
		goto IL_020a;
	}

IL_01d9:
	{
		// smooth_and_remesh_preserve(tris, k == SmoothSolveIterations-1);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_72 = V_2;
		int32_t L_73 = V_8;
		int32_t L_74 = __this->get_SmoothSolveIterations_10();
		SmoothedHoleFill_smooth_and_remesh_preserve_m9CD724D95A6FAD2F4BBFBB71ED412A6A8C1B428D(__this, L_72, (bool)((((int32_t)L_73) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1))))? 1 : 0), /*hidden argument*/NULL);
		// tris = new MeshFaceSelection(Mesh); tris.Select(FillTriangles);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_75 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_76 = (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C *)il2cpp_codegen_object_new(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C_il2cpp_TypeInfo_var);
		MeshFaceSelection__ctor_m1EFAE9CDBD6185350BAF0DE77E83CE7D57D39EB1(L_76, L_75, /*hidden argument*/NULL);
		V_2 = L_76;
		// tris = new MeshFaceSelection(Mesh); tris.Select(FillTriangles);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_77 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_78 = __this->get_FillTriangles_14();
		NullCheck(L_77);
		MeshFaceSelection_Select_m07FB5796C3143FEE705F4FE9E8401E123A49E3D7(L_77, L_78, /*hidden argument*/NULL);
		// for (int k = 0; k < SmoothSolveIterations; ++k ) {
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_020a:
	{
		// for (int k = 0; k < SmoothSolveIterations; ++k ) {
		int32_t L_80 = V_8;
		int32_t L_81 = __this->get_SmoothSolveIterations_10();
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_01d9;
		}
	}
	{
		// } else {
		goto IL_0235;
	}

IL_0216:
	{
		// smooth_and_remesh(tris);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_82 = V_2;
		SmoothedHoleFill_smooth_and_remesh_m1C62C0854DECE31BAAEC14FD35B7400B922665FA(__this, L_82, /*hidden argument*/NULL);
		// tris = new MeshFaceSelection(Mesh); tris.Select(FillTriangles);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_83 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_84 = (MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C *)il2cpp_codegen_object_new(MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C_il2cpp_TypeInfo_var);
		MeshFaceSelection__ctor_m1EFAE9CDBD6185350BAF0DE77E83CE7D57D39EB1(L_84, L_83, /*hidden argument*/NULL);
		V_2 = L_84;
		// tris = new MeshFaceSelection(Mesh); tris.Select(FillTriangles);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_85 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_86 = __this->get_FillTriangles_14();
		NullCheck(L_85);
		MeshFaceSelection_Select_m07FB5796C3143FEE705F4FE9E8401E123A49E3D7(L_85, L_86, /*hidden argument*/NULL);
	}

IL_0235:
	{
		// MeshVertexSelection fill_verts = new MeshVertexSelection(Mesh);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_87 = __this->get_Mesh_0();
		MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * L_88 = (MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 *)il2cpp_codegen_object_new(MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770_il2cpp_TypeInfo_var);
		MeshVertexSelection__ctor_mC60BAEDDA2A8C25C7EB12B37F5E01AD0139C1E3B(L_88, L_87, /*hidden argument*/NULL);
		V_3 = L_88;
		// fill_verts.SelectInteriorVertices(tris);
		MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * L_89 = V_3;
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_90 = V_2;
		NullCheck(L_89);
		MeshVertexSelection_SelectInteriorVertices_m32FE2C62A14FA487D11D1FFEB12473DB942C9205(L_89, L_90, /*hidden argument*/NULL);
		// FillVertices = fill_verts.ToArray();
		MeshVertexSelection_tB36FAED832E66ACB35FB7D099BFB99D5AA43F770 * L_91 = V_3;
		NullCheck(L_91);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_92 = MeshVertexSelection_ToArray_m047929E7A06CDF621F679AD468B7B0B74F205AD9(L_91, /*hidden argument*/NULL);
		__this->set_FillVertices_15(L_92);
		// return true;
		return (bool)1;
	}
}
// System.Void gs.SmoothedHoleFill::smooth_and_remesh_preserve(g3.MeshFaceSelection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothedHoleFill_smooth_and_remesh_preserve_m9CD724D95A6FAD2F4BBFBB71ED412A6A8C1B428D (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * ___tris0, bool ___bFinal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothedHoleFill_smooth_and_remesh_preserve_m9CD724D95A6FAD2F4BBFBB71ED412A6A8C1B428D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * V_0 = NULL;
	RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * V_1 = NULL;
	int32_t V_2 = 0;
	MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * G_B6_0 = NULL;
	{
		// if (EnableLaplacianSmooth) {
		bool L_0 = __this->get_EnableLaplacianSmooth_9();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// LaplacianMeshSmoother.RegionSmooth(Mesh, tris, 2, 2, true);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_1 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_2 = ___tris0;
		LaplacianMeshSmoother_RegionSmooth_m2214FB4F51DEF33A5A1C7EB3BF9C9F8D51DF0126(L_1, L_2, 2, 2, (bool)1, (10.0), (0.0), /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (RemeshAfterSmooth) {
		bool L_3 = __this->get_RemeshAfterSmooth_7();
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		// MeshProjectionTarget target = (bFinal) ? MeshProjectionTarget.Auto(Mesh, tris, 5) : null;
		bool L_4 = ___bFinal1;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		G_B6_0 = ((MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A *)(NULL));
		goto IL_0047;
	}

IL_003a:
	{
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_5 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_6 = ___tris0;
		MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * L_7 = MeshProjectionTarget_Auto_mA28FF3889E732D9B17891CB986CBF04A35FD29BE(L_5, L_6, 5, /*hidden argument*/NULL);
		G_B6_0 = L_7;
	}

IL_0047:
	{
		V_0 = G_B6_0;
		// RegionRemesher remesh2 = new RegionRemesher(Mesh, tris);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_8 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_9 = ___tris0;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_10 = (RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 *)il2cpp_codegen_object_new(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67_il2cpp_TypeInfo_var);
		RegionRemesher__ctor_mEE289F89207AA5A2DC6553AA335E942CFB80B226(L_10, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// remesh2.SetTargetEdgeLength(TargetEdgeLength);
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_11 = V_1;
		double L_12 = __this->get_TargetEdgeLength_3();
		NullCheck(L_11);
		Remesher_SetTargetEdgeLength_mEC01CF9C764FD63EBD90BD50926F879BB24961E3(L_11, L_12, /*hidden argument*/NULL);
		// remesh2.SmoothSpeedT = 1.0;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_13 = V_1;
		NullCheck(L_13);
		((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_13)->set_SmoothSpeedT_13((1.0));
		// remesh2.SetProjectionTarget(target);
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_14 = V_1;
		MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * L_15 = V_0;
		NullCheck(L_14);
		Remesher_SetProjectionTarget_m52713B2B349592183AD1D236BE183DB7E274C5DF_inline(L_14, L_15, /*hidden argument*/NULL);
		// if (ConfigureRemesherF != null)
		Action_2_tA04000E22AE4BB80358647073628729031416298 * L_16 = __this->get_ConfigureRemesherF_8();
		if (!L_16)
		{
			goto IL_008c;
		}
	}
	{
		// ConfigureRemesherF(remesh2, false);
		Action_2_tA04000E22AE4BB80358647073628729031416298 * L_17 = __this->get_ConfigureRemesherF_8();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_18 = V_1;
		NullCheck(L_17);
		Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7(L_17, L_18, (bool)0, /*hidden argument*/Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7_RuntimeMethod_var);
	}

IL_008c:
	{
		// for (int k = 0; k < 10; ++k)
		V_2 = 0;
		goto IL_009a;
	}

IL_0090:
	{
		// remesh2.BasicRemeshPass();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_19 = V_1;
		NullCheck(L_19);
		VirtActionInvoker0::Invoke(6 /* System.Void g3.Remesher::BasicRemeshPass() */, L_19);
		// for (int k = 0; k < 10; ++k)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_009a:
	{
		// for (int k = 0; k < 10; ++k)
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)10))))
		{
			goto IL_0090;
		}
	}
	{
		// remesh2.BackPropropagate();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_22 = V_1;
		NullCheck(L_22);
		RegionRemesher_BackPropropagate_m69D6C290D6CF96E8DDC97FE41B401A2DFE21B10A(L_22, (bool)1, /*hidden argument*/NULL);
		// FillTriangles = remesh2.CurrentBaseTriangles;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_23 = V_1;
		NullCheck(L_23);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = RegionRemesher_get_CurrentBaseTriangles_m36B4D59C3EE131D0047A81E140617B416395E9ED_inline(L_23, /*hidden argument*/NULL);
		__this->set_FillTriangles_14(L_24);
		// } else {
		return;
	}

IL_00b4:
	{
		// FillTriangles = tris.ToArray();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_25 = ___tris0;
		NullCheck(L_25);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = MeshFaceSelection_ToArray_mC9B5F4B6AA45AB08DBE8A6E3162E9A74B77FAA36(L_25, /*hidden argument*/NULL);
		__this->set_FillTriangles_14(L_26);
		// }
		return;
	}
}
// System.Void gs.SmoothedHoleFill::smooth_and_remesh(g3.MeshFaceSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothedHoleFill_smooth_and_remesh_m1C62C0854DECE31BAAEC14FD35B7400B922665FA (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * ___tris0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothedHoleFill_smooth_and_remesh_m1C62C0854DECE31BAAEC14FD35B7400B922665FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * V_0 = NULL;
	RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (EnableLaplacianSmooth) {
		bool L_0 = __this->get_EnableLaplacianSmooth_9();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// LaplacianMeshSmoother.RegionSmooth(Mesh, tris, 2, 2, false);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_1 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_2 = ___tris0;
		LaplacianMeshSmoother_RegionSmooth_m2214FB4F51DEF33A5A1C7EB3BF9C9F8D51DF0126(L_1, L_2, 2, 2, (bool)0, (10.0), (0.0), /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (RemeshAfterSmooth) {
		bool L_3 = __this->get_RemeshAfterSmooth_7();
		if (!L_3)
		{
			goto IL_00c2;
		}
	}
	{
		// tris.ExpandToOneRingNeighbours(2);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_4 = ___tris0;
		NullCheck(L_4);
		MeshFaceSelection_ExpandToOneRingNeighbours_m0C35EB47E16A99048A1A438F7697741B24352377(L_4, 2, (Func_2_tBDCFE8F1E0DCA72AE19FB7DDE58C36642F886513 *)NULL, /*hidden argument*/NULL);
		// tris.LocalOptimize(true, true);
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_5 = ___tris0;
		NullCheck(L_5);
		MeshFaceSelection_LocalOptimize_mD5BA0705B6DE7D1B916C47D410E90814532001B0(L_5, (bool)1, (bool)1, (bool)1, (bool)1, (bool)0, /*hidden argument*/NULL);
		// MeshProjectionTarget target = MeshProjectionTarget.Auto(Mesh, tris, 5);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_6 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_7 = ___tris0;
		MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * L_8 = MeshProjectionTarget_Auto_mA28FF3889E732D9B17891CB986CBF04A35FD29BE(L_6, L_7, 5, /*hidden argument*/NULL);
		V_0 = L_8;
		// RegionRemesher remesh2 = new RegionRemesher(Mesh, tris);
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_9 = __this->get_Mesh_0();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_10 = ___tris0;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_11 = (RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 *)il2cpp_codegen_object_new(RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67_il2cpp_TypeInfo_var);
		RegionRemesher__ctor_mEE289F89207AA5A2DC6553AA335E942CFB80B226(L_11, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// remesh2.SetTargetEdgeLength(TargetEdgeLength);
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_12 = V_1;
		double L_13 = __this->get_TargetEdgeLength_3();
		NullCheck(L_12);
		Remesher_SetTargetEdgeLength_mEC01CF9C764FD63EBD90BD50926F879BB24961E3(L_12, L_13, /*hidden argument*/NULL);
		// remesh2.SmoothSpeedT = 1.0;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_14 = V_1;
		NullCheck(L_14);
		((Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B *)L_14)->set_SmoothSpeedT_13((1.0));
		// remesh2.SetProjectionTarget(target);
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_15 = V_1;
		MeshProjectionTarget_tBF0ABB9BA5B1952F682C1509AEF5BD0994F0A52A * L_16 = V_0;
		NullCheck(L_15);
		Remesher_SetProjectionTarget_m52713B2B349592183AD1D236BE183DB7E274C5DF_inline(L_15, L_16, /*hidden argument*/NULL);
		// if (ConfigureRemesherF != null)
		Action_2_tA04000E22AE4BB80358647073628729031416298 * L_17 = __this->get_ConfigureRemesherF_8();
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		// ConfigureRemesherF(remesh2, false);
		Action_2_tA04000E22AE4BB80358647073628729031416298 * L_18 = __this->get_ConfigureRemesherF_8();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_19 = V_1;
		NullCheck(L_18);
		Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7(L_18, L_19, (bool)0, /*hidden argument*/Action_2_Invoke_mBC15ACCB4E31FBC6C2D36C83CA1E9D56352429B7_RuntimeMethod_var);
	}

IL_009a:
	{
		// for (int k = 0; k < 10; ++k)
		V_2 = 0;
		goto IL_00a8;
	}

IL_009e:
	{
		// remesh2.BasicRemeshPass();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_20 = V_1;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(6 /* System.Void g3.Remesher::BasicRemeshPass() */, L_20);
		// for (int k = 0; k < 10; ++k)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00a8:
	{
		// for (int k = 0; k < 10; ++k)
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_009e;
		}
	}
	{
		// remesh2.BackPropropagate();
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_23 = V_1;
		NullCheck(L_23);
		RegionRemesher_BackPropropagate_m69D6C290D6CF96E8DDC97FE41B401A2DFE21B10A(L_23, (bool)1, /*hidden argument*/NULL);
		// FillTriangles = remesh2.CurrentBaseTriangles;
		RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * L_24 = V_1;
		NullCheck(L_24);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = RegionRemesher_get_CurrentBaseTriangles_m36B4D59C3EE131D0047A81E140617B416395E9ED_inline(L_24, /*hidden argument*/NULL);
		__this->set_FillTriangles_14(L_25);
		// } else {
		return;
	}

IL_00c2:
	{
		// FillTriangles = tris.ToArray();
		MeshFaceSelection_t12EF9993F8AF5E18D7584C584A224CACBBA4D70C * L_26 = ___tris0;
		NullCheck(L_26);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_27 = MeshFaceSelection_ToArray_mC9B5F4B6AA45AB08DBE8A6E3162E9A74B77FAA36(L_26, /*hidden argument*/NULL);
		__this->set_FillTriangles_14(L_27);
		// }
		return;
	}
}
// g3.EdgeLoop gs.SmoothedHoleFill::select_loop_tris_hint(g3.MeshBoundaryLoops)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * SmoothedHoleFill_select_loop_tris_hint_m8C92AE0C9A616E40B1C43EB84970A40B095C1F15 (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * ___loops0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothedHoleFill_select_loop_tris_hint_m8C92AE0C9A616E40B1C43EB84970A40B095C1F15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// HashSet<int> hint_edges = new HashSet<int>();
		HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * L_0 = (HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD *)il2cpp_codegen_object_new(HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mF14D47C26E1EF9BF8920827E27A32B9E8E20D131(L_0, /*hidden argument*/HashSet_1__ctor_mF14D47C26E1EF9BF8920827E27A32B9E8E20D131_RuntimeMethod_var);
		V_0 = L_0;
		// foreach ( int tid in BorderHintTris ) {
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = __this->get_BorderHintTris_13();
		NullCheck(L_1);
		Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2  L_2 = List_1_GetEnumerator_mE721B3C5E137DCDB408BE05CA472EECBAAAA418A(L_1, /*hidden argument*/List_1_GetEnumerator_mE721B3C5E137DCDB408BE05CA472EECBAAAA418A_RuntimeMethod_var);
		V_4 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0015:
		{
			// foreach ( int tid in BorderHintTris ) {
			int32_t L_3 = Enumerator_get_Current_m219EC3BCCD8CF3A474AD0C4DBA55EB9B74C9F89C_inline((Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m219EC3BCCD8CF3A474AD0C4DBA55EB9B74C9F89C_RuntimeMethod_var);
			V_5 = L_3;
			// if (Mesh.IsTriangle(tid) == false)
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_4 = __this->get_Mesh_0();
			int32_t L_5 = V_5;
			NullCheck(L_4);
			bool L_6 = DMesh3_IsTriangle_m56AE4DB3A080B0A087D02BD9347ECD6F1D7FDEC2(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0072;
			}
		}

IL_002d:
		{
			// Index3i et = Mesh.GetTriEdges(tid);
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_7 = __this->get_Mesh_0();
			int32_t L_8 = V_5;
			NullCheck(L_7);
			Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687  L_9 = DMesh3_GetTriEdges_mC58DF83E17B1F69F08B2F67167623BE12F83FB79(L_7, L_8, /*hidden argument*/NULL);
			V_6 = L_9;
			// for (int j = 0; j < 3; ++j) {
			V_7 = 0;
			goto IL_006d;
		}

IL_0041:
		{
			// if (Mesh.IsBoundaryEdge(et[j]))
			DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_10 = __this->get_Mesh_0();
			int32_t L_11 = V_7;
			int32_t L_12 = Index3i_get_Item_m0B94C28E8347CAC03785874EE3773BB399724311((Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 *)(&V_6), L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			bool L_13 = DMesh3_IsBoundaryEdge_m7F7B2248A794ECCFBD82BDFE3FA978AF6677E635(L_10, L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0067;
			}
		}

IL_0057:
		{
			// hint_edges.Add(et[j]);
			HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * L_14 = V_0;
			int32_t L_15 = V_7;
			int32_t L_16 = Index3i_get_Item_m0B94C28E8347CAC03785874EE3773BB399724311((Index3i_t6BE225A279A20B2041F619145C181B5F09CA4687 *)(&V_6), L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			HashSet_1_Add_m74CC97C62D3F061D26A7DDB7A61DF7DFD7806154(L_14, L_16, /*hidden argument*/HashSet_1_Add_m74CC97C62D3F061D26A7DDB7A61DF7DFD7806154_RuntimeMethod_var);
		}

IL_0067:
		{
			// for (int j = 0; j < 3; ++j) {
			int32_t L_17 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_006d:
		{
			// for (int j = 0; j < 3; ++j) {
			int32_t L_18 = V_7;
			if ((((int32_t)L_18) < ((int32_t)3)))
			{
				goto IL_0041;
			}
		}

IL_0072:
		{
			// foreach ( int tid in BorderHintTris ) {
			bool L_19 = Enumerator_MoveNext_m42C746E84C832B62E93536A47B4086F3A3AC6609((Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m42C746E84C832B62E93536A47B4086F3A3AC6609_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0015;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m902D0B2B4B4B589E6F3653D9CDB38E0AA97EBCF9((Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m902D0B2B4B4B589E6F3653D9CDB38E0AA97EBCF9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		// int N = loops.Count;
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_20 = ___loops0;
		NullCheck(L_20);
		int32_t L_21 = MeshBoundaryLoops_get_Count_m7851220861D3C582DDEC6DBD3285CE421CFB6079(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// int best_loop = -1;
		V_2 = (-1);
		// int max_votes = 0;
		V_3 = 0;
		// for ( int li = 0; li < N; ++li ) {
		V_8 = 0;
		goto IL_00e8;
	}

IL_009b:
	{
		// int votes = 0;
		V_9 = 0;
		// EdgeLoop l = loops[li];
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_22 = ___loops0;
		int32_t L_23 = V_8;
		NullCheck(L_22);
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_24 = MeshBoundaryLoops_get_Item_m1307EAF0DD80592FE7AA6502DDBA6D0F03A16EBB(L_22, L_23, /*hidden argument*/NULL);
		// foreach (int eid in l.Edges) {
		NullCheck(L_24);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = L_24->get_Edges_2();
		V_10 = L_25;
		V_11 = 0;
		goto IL_00cf;
	}

IL_00b2:
	{
		// foreach (int eid in l.Edges) {
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = V_10;
		int32_t L_27 = V_11;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_12 = L_29;
		// if (hint_edges.Contains(eid))
		HashSet_1_t3583B715A1E1587E80CB1981DC50A85C78656BFD * L_30 = V_0;
		int32_t L_31 = V_12;
		NullCheck(L_30);
		bool L_32 = HashSet_1_Contains_m314324CDEF8004C81A770D4629D221AF10B75B9E(L_30, L_31, /*hidden argument*/HashSet_1_Contains_m314324CDEF8004C81A770D4629D221AF10B75B9E_RuntimeMethod_var);
		if (!L_32)
		{
			goto IL_00c9;
		}
	}
	{
		// votes++;
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_34 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00cf:
	{
		// foreach (int eid in l.Edges) {
		int32_t L_35 = V_11;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_36 = V_10;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_00b2;
		}
	}
	{
		// if ( votes > max_votes ) {
		int32_t L_37 = V_9;
		int32_t L_38 = V_3;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_00e2;
		}
	}
	{
		// best_loop = li;
		int32_t L_39 = V_8;
		V_2 = L_39;
		// max_votes = votes;
		int32_t L_40 = V_9;
		V_3 = L_40;
	}

IL_00e2:
	{
		// for ( int li = 0; li < N; ++li ) {
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00e8:
	{
		// for ( int li = 0; li < N; ++li ) {
		int32_t L_42 = V_8;
		int32_t L_43 = V_1;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009b;
		}
	}
	{
		// if (best_loop == -1)
		int32_t L_44 = V_2;
		if ((!(((uint32_t)L_44) == ((uint32_t)(-1)))))
		{
			goto IL_00f3;
		}
	}
	{
		// return null;
		return (EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 *)NULL;
	}

IL_00f3:
	{
		// return loops[best_loop];
		MeshBoundaryLoops_t343935EEA38362F9109635C8CCAD6EE550D2A965 * L_45 = ___loops0;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		EdgeLoop_t0A21EFEE5ED954E922918A08F1AD6016B2BB1C78 * L_47 = MeshBoundaryLoops_get_Item_m1307EAF0DD80592FE7AA6502DDBA6D0F03A16EBB(L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// g3.Vector3d gs.SmoothedHoleFill::<Apply>b__17_0(g3.Vector3d,g3.Vector3f,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  SmoothedHoleFill_U3CApplyU3Eb__17_0_m34B8F07EE91E9ABAB45F882F9863457BF499B7E7 (SmoothedHoleFill_t763B121F9485058FBA493D0C3D91AA0EA36619DC * __this, Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  ___v0, Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___n1, int32_t ___vid2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothedHoleFill_U3CApplyU3Eb__17_0_m34B8F07EE91E9ABAB45F882F9863457BF499B7E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return v + OffsetDistance * OffsetDirection;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_0 = ___v0;
		double L_1 = __this->get_OffsetDistance_2();
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_2 = __this->get_OffsetDirection_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B_il2cpp_TypeInfo_var);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_3 = Vector3d_op_Multiply_m4A7B9A9BA25B443696049F1DA44448B72E30C0AE(L_1, L_2, /*hidden argument*/NULL);
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_4 = Vector3d_op_Addition_m9F4F9B4A361E3A869F9B126073A5DCE91E2BEAD9(L_0, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Double gs.WyvillFalloff::FalloffT(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WyvillFalloff_FalloffT_mFF0D0AD416EB601AA65A422A1436C796D41872C9 (WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC * __this, double ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WyvillFalloff_FalloffT_mFF0D0AD416EB601AA65A422A1436C796D41872C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// t = MathUtil.Clamp(t, 0.0, 1.0);
		double L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtil_t3BDAEBEE154E83DA161BFF225648454779924181_il2cpp_TypeInfo_var);
		double L_1 = MathUtil_Clamp_mD17F435EDB33DF30487DBA51AB82ACFF37CC2B7C(L_0, (0.0), (1.0), /*hidden argument*/NULL);
		___t0 = L_1;
		// if (ConstantRange <= 0)
		double L_2 = __this->get_ConstantRange_0();
		if ((!(((double)L_2) <= ((double)(0.0)))))
		{
			goto IL_0032;
		}
	}
	{
		// return MathUtil.WyvillFalloff01(t);
		double L_3 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtil_t3BDAEBEE154E83DA161BFF225648454779924181_il2cpp_TypeInfo_var);
		double L_4 = MathUtil_WyvillFalloff01_mBD8552BBD9EACBB74754F49F2F492A3568F2F804(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0032:
	{
		// return MathUtil.WyvillFalloff(t, ConstantRange, 1.0);
		double L_5 = ___t0;
		double L_6 = __this->get_ConstantRange_0();
		IL2CPP_RUNTIME_CLASS_INIT(MathUtil_t3BDAEBEE154E83DA161BFF225648454779924181_il2cpp_TypeInfo_var);
		double L_7 = MathUtil_WyvillFalloff_mE3C74A9AB6354157A58A2E71B616C71251773083(L_5, L_6, (1.0), /*hidden argument*/NULL);
		return L_7;
	}
}
// gs.IFalloffFunction gs.WyvillFalloff::Duplicate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WyvillFalloff_Duplicate_m83237739941B531CFFD569B552B78976895D9822 (WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WyvillFalloff_Duplicate_m83237739941B531CFFD569B552B78976895D9822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WyvillFalloff() {
		//     ConstantRange = this.ConstantRange
		// };
		WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC * L_0 = (WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC *)il2cpp_codegen_object_new(WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC_il2cpp_TypeInfo_var);
		WyvillFalloff__ctor_m374372C97948DE49DB386BAE3AACB7AE12C9EF19(L_0, /*hidden argument*/NULL);
		WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC * L_1 = L_0;
		double L_2 = __this->get_ConstantRange_0();
		NullCheck(L_1);
		L_1->set_ConstantRange_0(L_2);
		return L_1;
	}
}
// System.Void gs.WyvillFalloff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WyvillFalloff__ctor_m374372C97948DE49DB386BAE3AACB7AE12C9EF19 (WyvillFalloff_tC5EFD2377FEB5EF1D3C7C02D83AD6D4F502035FC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * MeshRefinerBase_get_Mesh_m7492C17E5784161EACCC8ABD74C7973CBB67A868_inline (MeshRefinerBase_t2B405CE1D2094503EF2ED5A3D19BCB966CDCC810 * __this, const RuntimeMethod* method)
{
	{
		// get { return mesh; }
		DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * L_0 = __this->get_mesh_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Frame3f_set_Origin_m79A9D57D64B52EE30948B26B53B9A4AD26F593C0_inline (Frame3f_t5107A31B916D42FD52FA96421F742750D3334F87 * __this, Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  ___value0, const RuntimeMethod* method)
{
	{
		// set { origin = value; }
		Vector3f_tFFB650A1D89D7E153C5B99456D56317428CD7017  L_0 = ___value0;
		__this->set_origin_1(L_0);
		// set { origin = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t DMesh3_get_Timestamp_m97E466421467DEA22BC83C368A3B440438775FA2_inline (DMesh3_t0E51738251CF7B1DA2978BA35BA22653ADAADFAF * __this, const RuntimeMethod* method)
{
	{
		// get { return timestamp; }
		int32_t L_0 = __this->get_timestamp_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* RegionRemesher_get_CurrentBaseTriangles_m36B4D59C3EE131D0047A81E140617B416395E9ED_inline (RegionRemesher_t352993908006C03D80A968A0FC21D9E7D7C33A67 * __this, const RuntimeMethod* method)
{
	{
		// get { return cur_base_tris; }
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_cur_base_tris_44();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Remesher_SetProjectionTarget_m52713B2B349592183AD1D236BE183DB7E274C5DF_inline (Remesher_t87BD9A239FC767B91A892A0C637CCA81B6CD969B * __this, RuntimeObject* ___target0, const RuntimeMethod* method)
{
	{
		// this.target = target;
		RuntimeObject* L_0 = ___target0;
		__this->set_target_5(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m705801E33957190A1590511EEFC8A454771A120A_gshared_inline (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  List_1_get_Item_m1974BD117BED7D513FA718522E8D9A7621D91628_gshared_inline (List_1_tFE7A479BD50ACFD71FEB3656A439ADAAC2BBA2B6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F* L_2 = (Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3d_tD18FF22AE694C7BCF2A641F52DD0F812AF094D5B  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3dU5BU5D_tD2501C0817E8EC7C86337C34A4290EE2E781256F*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m219EC3BCCD8CF3A474AD0C4DBA55EB9B74C9F89C_gshared_inline (Enumerator_t52B74DE77FB2834C7A6E4DEFC01F9E5818235AB2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return L_0;
	}
}
