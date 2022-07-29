#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Windows.Globalization.Calendar
struct Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Windows.Storage.Streams.DataReader
struct DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F;
// Windows.Storage.Streams.DataWriter
struct DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A;
// Windows.Storage.Streams.DataWriterStoreOperation
struct DataWriterStoreOperation_tEBE362EEFE5F03DC2935B78D07284FCF6CEB2F4B;
// ElemRenderer
struct ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HL2UnityPlugin.HL2ResearchMode
struct HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2;
// Windows.Networking.HostName
struct HostName_t9B21F93266217EFD683343029B8012BBD792F7EE;
// IActivationFactory
struct Il2CppIActivationFactory;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Windows.Globalization.ICalendarFactory
struct ICalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48;
// Windows.Globalization.ICalendarFactory2
struct ICalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5;
// Windows.Storage.Streams.IInputStream
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9;
// ImuVisualize
struct ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569;
// KeyboardCommand
struct KeyboardCommand_t776D3BFC0E58856C703049D89C56B78BAE28449F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9;
// PointCloudRenderer
struct PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ResearchModeImuStream
struct ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F;
// ResearchModeVideoStream
struct ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52;
// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TCPClient
struct TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostName_t9B21F93266217EFD683343029B8012BBD792F7EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PerceptionInterop_t87D26486C470C4C44D51B2ABE7F7681BBB7FEF67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral532FF1C861F302082D08AD0D47C6BA67097233F2;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral64347237DF3B2CBE3D2A3F9A5AE03CBF535155F0;
IL2CPP_EXTERN_C String_t* _stringLiteral897E99878241CEA666C2E6C624EDC175A0AFAA48;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C9BC10C5D6E15A1EBBD36C418450F51CD29979;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D4FB11EE66BA89C04BA660D1EE4049AC6FD1AF;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D2EE20F986F9803A394E7FDB72DA1231238458;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8D391AD5DD08259AF01F6D6F32CFAA4961B182;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F3C1D0E9C35231869D0C91F3F6BEEA21010548;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_mE4C0FDF96FFE49F8CC2E61D96BAFBEDF7D95EFCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m9241D55652F3ACF8232A71D0B4C90714AB6ADE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_m9400F529680693CEE71A22B9706DE2284FDC342A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_mEF3178BF0521A377DEF99444E440FFB203EB3D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m7217657F3D813144D6DCBC914083E1756D2A95F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m24CDDA0E8A701833564B1008181C7BE3D38868DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mB52CC9D012D5F70EED6EBEB489961A53CECAC704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m4248DBD8776800ECF242349118E5E24B3368BB3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_m554F5F8213634A1F61FA71DFA02F7CBC4216DDD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m26B39EF210FB5F70645A867D03487C6EB911E3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m2819D7D23BDB35493DECB397E54B8D0102CD2F58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mFEE8ED106FC17F4B248CB014008D7147E71A2E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m7D82BB6F3063539E4CBEDF6A33C93E8473F08639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_mCA443721D9AFEFDFE2E2E5C546CE2010C819C080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6_mB5C63BEC2685423B5CB6B6833D03933B6C57EF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3_m532FED06CE3AA7CB730143DDD965F950264A1843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC7A478EB76C35C2E7353FCDAFBF011F7202003A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC0B9C049439C8EA85A0B2E0967A60EAD556CBD78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1721B059180EB47DA4C15C07E941CCFE8EEA4E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816_mC785E0DE0E9A797DF536786AA2F986CF10C25A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5_m8A95C9B790B29A82610148B23AE9E1DA94DB969B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740;
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct ICalendar_tDD800AC7AC5E398D504A80EE932515DEB53BE593;
struct IDataReader_tFFE364F447376ECAC6224EC91C898E53BDBCD6F7;
struct IDataWriter_t545C42CAFF9C9019505A71AE31CC684B42604865;
struct IHL2ResearchMode_t36361ED83537EA4138D033BD29CCC491C4A7FD69;
struct IHostName_tA0C320538E71B4AD5B568EB826C059B947007C79;
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
struct IPerceptionTimestamp_tB0128B44FA321063E14619076C95B2D0B6E478BC;
struct ISpatialCoordinateSystem_tA613C62238FCE4017258AA4516D69DABCAFF96D8;
struct IStreamSocket_t32E16FBF415D2F30FF1AD06868CF84A72BD77F2B;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mDD0472C84642F258A529BC1A8BE797ABFB7291AA(IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mCF303DD089A08C51654DF53BE4DF4C749F275360(IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mCF1E416F95C041681356B05DA780D849FF361759(uint32_t* comReturnValue) = 0;
};

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m0E81E3334963F4FCCEA16CF79F1BB12229F2476E(IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_m5827DB95142ABF764B16B370D2E7D4F757522830(IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mB7401D9975EB9B981781DEFDC4FDF586F4DFCC8E() = 0;
};
// Windows.Globalization.ICalendarFactory
struct NOVTABLE ICalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICalendarFactory_U24__Stripped0_CreateCalendarDefaultCalendarAndClock_m352DFDA711A796AB11740B8EC8C5EC4BE4902BFD() = 0;
	virtual il2cpp_hresult_t STDCALL ICalendarFactory_U24__Stripped1_CreateCalendar_m31EDFACF16CA32F66E41D6D5178FE6166D22C3BE() = 0;
};
// Windows.Globalization.ICalendarFactory2
struct NOVTABLE ICalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICalendarFactory2_U24__Stripped0_CreateCalendarWithTimeZone_m793008488AF1919255D7C6639FB5185FD028D972() = 0;
};
// Windows.Storage.Streams.IDataReaderFactory
struct NOVTABLE IDataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderFactory_CreateDataReader_mA082B641678E0653728671CA46577759A0C4244E(IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71* ___inputStream0, IDataReader_tFFE364F447376ECAC6224EC91C898E53BDBCD6F7** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderStatics
struct NOVTABLE IDataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderStatics_FromBuffer_mF4372C18237C77DC8D4A3A308E3AE23079F989F4(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IDataReader_tFFE364F447376ECAC6224EC91C898E53BDBCD6F7** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataWriterFactory
struct NOVTABLE IDataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriterFactory_CreateDataWriter_mC2D5C06CE56ACA200FF338FC4293B4186F5D1F4E(IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284* ___outputStream0, IDataWriter_t545C42CAFF9C9019505A71AE31CC684B42604865** comReturnValue) = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_mC817C9C6E96AC065E8898D59CD2749B45835AE89(Il2CppHString ___hostName0, IHostName_tA0C320538E71B4AD5B568EB826C059B947007C79** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_mAE687B3FA3F23F2D1A8A4451197BC463F5BE3690() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___buffer0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_mF42837A03DA5D153845858F2F1D57D6CDBA981CA() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_mC8B7944EBE4402484972BBA721C2823FD1F40C4D() = 0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>
struct TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* ___m_task_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Windows.Globalization.Calendar
struct Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77  : public Il2CppComObject
{
};

struct Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Globalization.ICalendarFactory2
	ICalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9* ____icalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9;
	// Cached pointer to Windows.Globalization.ICalendarFactory
	ICalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48* ____icalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Globalization.Calendar"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ICalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9* get_____icalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9()
	{
		ICalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9* returnValue = ____icalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____icalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icalendarFactory2_t1D19F2B92B68DFB047C7B3ED42044B4539F534E9;
			}
		}
		return returnValue;
	}

	inline ICalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48* get_____icalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48()
	{
		ICalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48* returnValue = ____icalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____icalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icalendarFactory_tB13AB2F0DB8D7DCD003E523F93387FBAEE9F1D48;
			}
		}
		return returnValue;
	}
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Windows.Storage.Streams.DataReader
struct DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F  : public Il2CppComObject
{
};

struct DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataReaderFactory
	IDataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E* ____idataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E;
	// Cached pointer to Windows.Storage.Streams.IDataReaderStatics
	IDataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78* ____idataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataReader"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E* get_____idataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E()
	{
		IDataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E* returnValue = ____idataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderFactory_t2229BE3D74B49339E0641FC14CA7743F350FD52E;
			}
		}
		return returnValue;
	}

	inline IDataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78* get_____idataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78()
	{
		IDataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78* returnValue = ____idataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderStatics_t2AABDE3A258580C72963F18CF308ED4177031E78;
			}
		}
		return returnValue;
	}
};

// Windows.Storage.Streams.DataWriter
struct DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A  : public Il2CppComObject
{
};

struct DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataWriterFactory
	IDataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1* ____idataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataWriter"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1* get_____idataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1()
	{
		IDataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1* returnValue = ____idataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriterFactory_t2F6BFBDDB8FCDB4635F1E88E681A441D42AFC2F1;
			}
		}
		return returnValue;
	}
};

// Windows.Storage.Streams.DataWriterStoreOperation
struct DataWriterStoreOperation_tEBE362EEFE5F03DC2935B78D07284FCF6CEB2F4B  : public Il2CppComObject
{
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// HL2UnityPlugin.HL2ResearchMode
struct HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2  : public Il2CppComObject
{
};

struct HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HL2UnityPlugin.HL2ResearchMode"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

// Windows.Networking.HostName
struct HostName_t9B21F93266217EFD683343029B8012BBD792F7EE  : public Il2CppComObject
{
};

struct HostName_t9B21F93266217EFD683343029B8012BBD792F7EE_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635* ____ihostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5* ____ihostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635* get_____ihostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635()
	{
		IHostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635* returnValue = ____ihostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t4CD10656E1CF300C61F984CCBF19888550DE6635;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5* get_____ihostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5()
	{
		IHostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5* returnValue = ____ihostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_t09730BE84311FDA17C3B771A3263E54D0CC1C3A5;
			}
		}
		return returnValue;
	}
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9  : public Il2CppComObject
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52  : public Il2CppComObject
{
};

// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9  : public Il2CppComObject
{
};

struct StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9* ____istreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9* get_____istreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9()
	{
		IStreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9* returnValue = ____istreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_t1F01F26B19F15CCAE879AE1BF1151261858167A9;
			}
		}
		return returnValue;
	}
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// TCPClient/<SendSpatialImageAsync>d__16
struct U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516 
{
	// System.Int32 TCPClient/<SendSpatialImageAsync>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendSpatialImageAsync>d__16::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendSpatialImageAsync>d__16::<>4__this
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* ___U3CU3E4__this_2;
	// System.Byte[] TCPClient/<SendSpatialImageAsync>d__16::LFImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LFImage_3;
	// System.Byte[] TCPClient/<SendSpatialImageAsync>d__16::RFImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RFImage_4;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__16::ts_left
	int64_t ___ts_left_5;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__16::ts_right
	int64_t ___ts_right_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendSpatialImageAsync>d__16::<>u__1
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 ___U3CU3Eu__1_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendSpatialImageAsync>d__16::<>u__2
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__2_8;
};

// TCPClient/<SendSpatialImageAsync>d__17
struct U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89 
{
	// System.Int32 TCPClient/<SendSpatialImageAsync>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendSpatialImageAsync>d__17::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendSpatialImageAsync>d__17::<>4__this
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* ___U3CU3E4__this_2;
	// System.Byte[] TCPClient/<SendSpatialImageAsync>d__17::LRFImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LRFImage_3;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__17::ts_left
	int64_t ___ts_left_4;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__17::ts_right
	int64_t ___ts_right_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendSpatialImageAsync>d__17::<>u__1
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendSpatialImageAsync>d__17::<>u__2
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__2_7;
};

// TCPClient/<SendUINT16Async>d__14
struct U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B 
{
	// System.Int32 TCPClient/<SendUINT16Async>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendUINT16Async>d__14::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendUINT16Async>d__14::<>4__this
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* ___U3CU3E4__this_2;
	// System.UInt16[] TCPClient/<SendUINT16Async>d__14::data
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendUINT16Async>d__14::<>u__1
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendUINT16Async>d__14::<>u__2
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__2_5;
};

// TCPClient/<SendUINT16Async>d__15
struct U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260 
{
	// System.Int32 TCPClient/<SendUINT16Async>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendUINT16Async>d__15::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendUINT16Async>d__15::<>4__this
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* ___U3CU3E4__this_2;
	// System.UInt16[] TCPClient/<SendUINT16Async>d__15::data1
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data1_3;
	// System.UInt16[] TCPClient/<SendUINT16Async>d__15::data2
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendUINT16Async>d__15::<>u__1
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendUINT16Async>d__15::<>u__2
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__2_6;
};

// TCPClient/<StartCoonection>d__11
struct U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244 
{
	// System.Int32 TCPClient/<StartCoonection>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<StartCoonection>d__11::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<StartCoonection>d__11::<>4__this
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter TCPClient/<StartCoonection>d__11::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ElemRenderer
struct ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh ElemRenderer::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
};

// ImuVisualize
struct ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ImuVisualize::AccelXBar
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___AccelXBar_4;
	// UnityEngine.Transform ImuVisualize::AccelYBar
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___AccelYBar_5;
	// UnityEngine.Transform ImuVisualize::AccelZBar
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___AccelZBar_6;
	// UnityEngine.Transform ImuVisualize::GyroAxisModel
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GyroAxisModel_7;
	// UnityEngine.Vector3 ImuVisualize::AccelVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AccelVector_8;
	// UnityEngine.Vector3 ImuVisualize::GyroEulorAngle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___GyroEulorAngle_9;
};

// KeyboardCommand
struct KeyboardCommand_t776D3BFC0E58856C703049D89C56B78BAE28449F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ResearchModeVideoStream KeyboardCommand::rm
	ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* ___rm_4;
};

// PointCloudRenderer
struct PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PointCloudRenderer::maxChunkSize
	int32_t ___maxChunkSize_4;
	// System.Single PointCloudRenderer::pointSize
	float ___pointSize_5;
	// UnityEngine.GameObject PointCloudRenderer::pointCloudElem
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointCloudElem_6;
	// UnityEngine.Material PointCloudRenderer::pointCloudMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___pointCloudMaterial_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PointCloudRenderer::elems
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___elems_8;
};

// ResearchModeImuStream
struct ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HL2UnityPlugin.HL2ResearchMode ResearchModeImuStream::researchMode
	HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* ___researchMode_4;
	// System.Single[] ResearchModeImuStream::accelSampleData
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___accelSampleData_5;
	// UnityEngine.Vector3 ResearchModeImuStream::accelVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___accelVector_6;
	// System.Single[] ResearchModeImuStream::gyroSampleData
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___gyroSampleData_7;
	// UnityEngine.Vector3 ResearchModeImuStream::gyroEulerAngle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gyroEulerAngle_8;
	// System.Single[] ResearchModeImuStream::magSampleData
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___magSampleData_9;
	// UnityEngine.UI.Text ResearchModeImuStream::AccelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___AccelText_10;
	// UnityEngine.UI.Text ResearchModeImuStream::GyroText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___GyroText_11;
	// UnityEngine.UI.Text ResearchModeImuStream::MagText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MagText_12;
	// ImuVisualize ResearchModeImuStream::RefImuVisualize
	ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569* ___RefImuVisualize_13;
};

// ResearchModeVideoStream
struct ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HL2UnityPlugin.HL2ResearchMode ResearchModeVideoStream::researchMode
	HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* ___researchMode_4;
	// ResearchModeVideoStream/DepthSensorMode ResearchModeVideoStream::depthSensorMode
	int32_t ___depthSensorMode_5;
	// System.Boolean ResearchModeVideoStream::enablePointCloud
	bool ___enablePointCloud_6;
	// TCPClient ResearchModeVideoStream::tcpClient
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* ___tcpClient_7;
	// UnityEngine.GameObject ResearchModeVideoStream::depthPreviewPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___depthPreviewPlane_8;
	// UnityEngine.Material ResearchModeVideoStream::depthMediaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___depthMediaMaterial_9;
	// UnityEngine.Texture2D ResearchModeVideoStream::depthMediaTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___depthMediaTexture_10;
	// System.Byte[] ResearchModeVideoStream::depthFrameData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___depthFrameData_11;
	// UnityEngine.GameObject ResearchModeVideoStream::shortAbImagePreviewPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shortAbImagePreviewPlane_12;
	// UnityEngine.Material ResearchModeVideoStream::shortAbImageMediaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___shortAbImageMediaMaterial_13;
	// UnityEngine.Texture2D ResearchModeVideoStream::shortAbImageMediaTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___shortAbImageMediaTexture_14;
	// System.Byte[] ResearchModeVideoStream::shortAbImageFrameData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shortAbImageFrameData_15;
	// UnityEngine.GameObject ResearchModeVideoStream::longDepthPreviewPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___longDepthPreviewPlane_16;
	// UnityEngine.Material ResearchModeVideoStream::longDepthMediaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___longDepthMediaMaterial_17;
	// UnityEngine.Texture2D ResearchModeVideoStream::longDepthMediaTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___longDepthMediaTexture_18;
	// System.Byte[] ResearchModeVideoStream::longDepthFrameData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___longDepthFrameData_19;
	// UnityEngine.GameObject ResearchModeVideoStream::longAbImagePreviewPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___longAbImagePreviewPlane_20;
	// UnityEngine.Material ResearchModeVideoStream::longAbImageMediaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___longAbImageMediaMaterial_21;
	// UnityEngine.Texture2D ResearchModeVideoStream::longAbImageMediaTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___longAbImageMediaTexture_22;
	// System.Byte[] ResearchModeVideoStream::longAbImageFrameData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___longAbImageFrameData_23;
	// UnityEngine.GameObject ResearchModeVideoStream::LFPreviewPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LFPreviewPlane_24;
	// UnityEngine.Material ResearchModeVideoStream::LFMediaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___LFMediaMaterial_25;
	// UnityEngine.Texture2D ResearchModeVideoStream::LFMediaTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___LFMediaTexture_26;
	// System.Byte[] ResearchModeVideoStream::LFFrameData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LFFrameData_27;
	// UnityEngine.GameObject ResearchModeVideoStream::RFPreviewPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RFPreviewPlane_28;
	// UnityEngine.Material ResearchModeVideoStream::RFMediaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___RFMediaMaterial_29;
	// UnityEngine.Texture2D ResearchModeVideoStream::RFMediaTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___RFMediaTexture_30;
	// System.Byte[] ResearchModeVideoStream::RFFrameData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RFFrameData_31;
	// UnityEngine.UI.Text ResearchModeVideoStream::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_32;
	// UnityEngine.GameObject ResearchModeVideoStream::pointCloudRendererGo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointCloudRendererGo_33;
	// UnityEngine.Color ResearchModeVideoStream::pointColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___pointColor_34;
	// PointCloudRenderer ResearchModeVideoStream::pointCloudRenderer
	PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* ___pointCloudRenderer_35;
	// Windows.Perception.Spatial.SpatialCoordinateSystem ResearchModeVideoStream::unityWorldOrigin
	SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52* ___unityWorldOrigin_36;
	// System.Boolean ResearchModeVideoStream::startRealtimePreview
	bool ___startRealtimePreview_37;
	// System.Boolean ResearchModeVideoStream::renderPointCloud
	bool ___renderPointCloud_38;
};

// TCPClient
struct TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TCPClient::hostIPAddress
	String_t* ___hostIPAddress_4;
	// System.String TCPClient::port
	String_t* ___port_5;
	// UnityEngine.Renderer TCPClient::ConnectionStatusLED
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___ConnectionStatusLED_6;
	// System.Boolean TCPClient::connected
	bool ___connected_7;
	// Windows.Networking.Sockets.StreamSocket TCPClient::socket
	StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* ___socket_8;
	// Windows.Storage.Streams.DataWriter TCPClient::dw
	DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* ___dw_9;
	// Windows.Storage.Streams.DataReader TCPClient::dr
	DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* ___dr_10;
	// System.Boolean TCPClient::lastMessageSent
	bool ___lastMessageSent_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC7A478EB76C35C2E7353FCDAFBF011F7202003A8_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC0B9C049439C8EA85A0B2E0967A60EAD556CBD78_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1721B059180EB47DA4C15C07E941CCFE8EEA4E75_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<StartCoonection>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_mCA443721D9AFEFDFE2E2E5C546CE2010C819C080_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendUINT16Async>d__14>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mFEE8ED106FC17F4B248CB014008D7147E71A2E56_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendUINT16Async>d__15>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m7D82BB6F3063539E4CBEDF6A33C93E8473F08639_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendSpatialImageAsync>d__16>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m26B39EF210FB5F70645A867D03487C6EB911E3DB_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendSpatialImageAsync>d__17>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m2819D7D23BDB35493DECB397E54B8D0102CD2F58_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TCPClient/<StartCoonection>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_m554F5F8213634A1F61FA71DFA02F7CBC4216DDD2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_gshared (TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__14>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mB52CC9D012D5F70EED6EBEB489961A53CECAC704_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_gshared (TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__14>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_m9400F529680693CEE71A22B9706DE2284FDC342A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m4248DBD8776800ECF242349118E5E24B3368BB3A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_mEF3178BF0521A377DEF99444E440FFB203EB3D2F_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__16>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m7217657F3D813144D6DCBC914083E1756D2A95F5_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__16>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_mE4C0FDF96FFE49F8CC2E61D96BAFBEDF7D95EFCB_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__17>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m24CDDA0E8A701833564B1008181C7BE3D38868DF_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__17>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m9241D55652F3ACF8232A71D0B4C90714AB6ADE94_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* ___stateMachine1, const RuntimeMethod* method) ;

// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC7A478EB76C35C2E7353FCDAFBF011F7202003A8 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC7A478EB76C35C2E7353FCDAFBF011F7202003A8_gshared)(___source0, ___count1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC0B9C049439C8EA85A0B2E0967A60EAD556CBD78 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC0B9C049439C8EA85A0B2E0967A60EAD556CBD78_gshared)(___source0, ___count1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1721B059180EB47DA4C15C07E941CCFE8EEA4E75 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1721B059180EB47DA4C15C07E941CCFE8EEA4E75_gshared)(___source0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors_m5558BAAA60676427B7954F1694A1765B000EB0FE (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ResearchModeVideoStream>()
inline ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* Component_GetComponent_TisResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6_mB5C63BEC2685423B5CB6B6833D03933B6C57EF63 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void ResearchModeVideoStream::SaveAHATSensorDataEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_SaveAHATSensorDataEvent_m709447C9C00075E0DEFC07920C6FC228F4327A17 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void PointCloudRenderer::UpdatePointSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_UpdatePointSize_mBDE3CDC44F35511F8D2ABCF446E759C4AAEA674E (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void PointCloudRenderer::AddElems(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_AddElems_m6152AE5F6723A7972CA6AD88A65799273EAFE88C (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, int32_t ___nElems0, const RuntimeMethod* method) ;
// System.Void PointCloudRenderer::RemoveElems(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_RemoveElems_m983EDDE6FC3C9BAF05E4B2D54B9B6CA661A1BD6C (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, int32_t ___nElems0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<ElemRenderer>()
inline ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* GameObject_GetComponent_TisElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816_mC785E0DE0E9A797DF536786AA2F986CF10C25A18 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ElemRenderer::UpdateMesh(UnityEngine.Vector3[],System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemRenderer_UpdateMesh_m40705AA84344805646CBEAB3EDA6E1CBAD6E3018 (ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___arrVertices0, int32_t ___nPointsToRender1, int32_t ___nPointsRendered2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___pointColor3, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void HL2UnityPlugin.HL2ResearchMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode__ctor_mBD7A89DAFAF9D6C0BBFD264049EF81DC1EF7D8B3 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::InitializeAccelSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_InitializeAccelSensor_m7AFB67FCA7E5635F9D0EE71E3845BE72C2C836E2 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::InitializeGyroSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_InitializeGyroSensor_mCE5F5CD2016F09C152583105B6B5A2F52DE933DA (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::InitializeMagSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_InitializeMagSensor_m2ED36ECC0D17A553CBC1DFB56D0F4F1BA2513F30 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::StartAccelSensorLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_StartAccelSensorLoop_mD0A6CD591A279872EAED0399E57510BEFA5C51AF (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::StartGyroSensorLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_StartGyroSensorLoop_m3B5E2ECDA76CC28F692A7260305738176DEE9114 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::StartMagSensorLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_StartMagSensorLoop_m8E947EFB3A7BB192C52ECC0234AABB4AF8B3CA80 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::AccelSampleUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_AccelSampleUpdated_m6444CFA40DE97E9E3E43CF8964C505FB62FD2694 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Single[] HL2UnityPlugin.HL2ResearchMode::GetAccelSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* HL2ResearchMode_GetAccelSample_mD80EBB8E2389926FFFA2775C5313627639E2B2EA (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::GyroSampleUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_GyroSampleUpdated_mB38CF1ACDF725D3191D8714E8D43A94CB53C24A7 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Single[] HL2UnityPlugin.HL2ResearchMode::GetGyroSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* HL2ResearchMode_GetGyroSample_mA96AAED617575BD6F5EC9E0D447F272BDE145FB5 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::MagSampleUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_MagSampleUpdated_m671DEA6FB746F40907289EBB8DEE8A1A3B47DBA9 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Single[] HL2UnityPlugin.HL2ResearchMode::GetMagSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* HL2ResearchMode_GetMagSample_m84FEEA7D24FB57A5C80946244A5BF13AB6D83B81 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ResearchModeImuStream::CreateAccelVector(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ResearchModeImuStream_CreateAccelVector_mFA4D6B9DFF4247883E27E7A7821542FFC0674660 (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___accelSample0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ResearchModeImuStream::CreateGyroEulerAngle(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ResearchModeImuStream_CreateGyroEulerAngle_m78FA08F7A2DC923D9105D451A11E908803512EA5 (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___gyroSample0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::StopAllSensorDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_StopAllSensorDevice_m4A6EDEB1FE2431B0A7923573438E7AAC927F63B3 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void ResearchModeImuStream::StopSensorsEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeImuStream_StopSensorsEvent_m9E96CB2D7FFE4B09E0FF23561A435207C63B2177 (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// System.Object Microsoft.MixedReality.OpenXR.PerceptionInterop::GetSceneCoordinateSystem(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PerceptionInterop_GetSceneCoordinateSystem_m9EF29737B61FC28117BE16FFE0D8C272071AE0F8 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___poseInScene0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PointCloudRenderer>()
inline PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* GameObject_GetComponent_TisPointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5_m8A95C9B790B29A82610148B23AE9E1DA94DB969B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TCPClient>()
inline TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* Component_GetComponent_TisTCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3_m532FED06CE3AA7CB730143DDD965F950264A1843 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HL2UnityPlugin.HL2ResearchMode::InitializeLongDepthSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_InitializeLongDepthSensor_mE597030F3F83BD1132804946EF234C3604E72D7D (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::InitializeDepthSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_InitializeDepthSensor_m3F028C1EF08DA4066712C5226D286243B7CFB390 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::InitializeSpatialCamerasFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_InitializeSpatialCamerasFront_mA36D3EEBAFC4416C6FFEACE6160B2EEB32E39132 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::SetReferenceCoordinateSystem(Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_SetReferenceCoordinateSystem_mB2219742FACE8F971CB3B2312CF66151DD9127ED (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52* ___refCoord0, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::SetPointCloudDepthOffset(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_SetPointCloudDepthOffset_mD04DCE2C3F80E53B5DFDDA2CCFE71C8BA6802C41 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, uint16_t ___offset0, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::StartLongDepthSensorLoop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_StartLongDepthSensorLoop_m806560B702C9839A6339C490C2D312B88E810C47 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, bool ___reconstructPointCloud0, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::StartDepthSensorLoop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_StartDepthSensorLoop_m9379A09AFDB136DECB9670FE502FB934F100444D (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, bool ___reconstructPointCloud0, const RuntimeMethod* method) ;
// System.Void HL2UnityPlugin.HL2ResearchMode::StartSpatialCamerasFrontLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HL2ResearchMode_StartSpatialCamerasFrontLoop_m2063DE53752377FD55C84BC3BEFCF8E46DBF309D (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::DepthMapTextureUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_DepthMapTextureUpdated_mF628CFF98DAC9EB0198BB58E105F608821A0240C (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Byte[] HL2UnityPlugin.HL2ResearchMode::GetDepthMapTextureBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HL2ResearchMode_GetDepthMapTextureBuffer_m166A357CBB9DC7C98E14C7602E3B10844760BC29 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::ShortAbImageTextureUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_ShortAbImageTextureUpdated_mF6D9AEDA4D74F802CFE2C84F5A0C5D4DED6AFEE1 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Byte[] HL2UnityPlugin.HL2ResearchMode::GetShortAbImageTextureBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HL2ResearchMode_GetShortAbImageTextureBuffer_m3B62EE823042E40F0021C328F3F5A0205E79A690 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::LongDepthMapTextureUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_LongDepthMapTextureUpdated_m8EAB7032526752C97028BB7AC23376DEC5A8AD1F (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Byte[] HL2UnityPlugin.HL2ResearchMode::GetLongDepthMapTextureBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HL2ResearchMode_GetLongDepthMapTextureBuffer_mC05BFA6303A489D096063F5834D7E82E4A803718 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::LongAbImageTextureUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_LongAbImageTextureUpdated_m9C155F44079C1A036D3C2E084316261ADFDC029B (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Byte[] HL2UnityPlugin.HL2ResearchMode::GetLongAbImageTextureBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HL2ResearchMode_GetLongAbImageTextureBuffer_m1B4F7FF93C8CADC619C8A3F3CAF153A06019A1E4 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::LFImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_LFImageUpdated_m6C2119A980E1D52118CE7E2A9B999465FF1AFA3A (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Byte[] HL2UnityPlugin.HL2ResearchMode::GetLFCameraBuffer(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HL2ResearchMode_GetLFCameraBuffer_m9AFFE751C7AD9EEE7232223D0B36BCB9E1C99148 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, int64_t* ___ts0, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::RFImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_RFImageUpdated_mFFC3B4E07A64D6777BDD96186B8799DA9F643604 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Byte[] HL2UnityPlugin.HL2ResearchMode::GetRFCameraBuffer(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HL2ResearchMode_GetRFCameraBuffer_m15D9B4CCB3B7689252C7225F91B6A88ED0490E5F (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, int64_t* ___ts0, const RuntimeMethod* method) ;
// System.Void ResearchModeVideoStream::UpdatePointCloud()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_UpdatePointCloud_m2FC0DFF7BB905092F156D151D24EA88EC4A5E5E4 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::LongThrowPointCloudUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_LongThrowPointCloudUpdated_m46408A15A25D5005385822C30BD08789CF93C8A2 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Boolean HL2UnityPlugin.HL2ResearchMode::PointCloudUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HL2ResearchMode_PointCloudUpdated_m1DF8B630D90C71B2388554448DB8996A5AB4F5B2 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Single[] HL2UnityPlugin.HL2ResearchMode::GetLongThrowPointCloudBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* HL2ResearchMode_GetLongThrowPointCloudBuffer_mE5D6194C411794B386DB9A9FB7D3ED5C305CA601 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Single[] HL2UnityPlugin.HL2ResearchMode::GetPointCloudBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* HL2ResearchMode_GetPointCloudBuffer_mEFAF1B32373EE92A882C9CB70DDC49C0AB89BEDC (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void PointCloudRenderer::Render(UnityEngine.Vector3[],UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_Render_mCB3C8C498B84576E5A9A97C09DB2D092AA2AE9FB (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___arrVertices0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___pointColor1, const RuntimeMethod* method) ;
// System.UInt16[] HL2UnityPlugin.HL2ResearchMode::GetDepthMapBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HL2ResearchMode_GetDepthMapBuffer_mCDBA6EFCBE97C5E6D8FA02205DE0F888D67BEFD9 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.UInt16[] HL2UnityPlugin.HL2ResearchMode::GetShortAbImageBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HL2ResearchMode_GetShortAbImageBuffer_m3E4668D4240991B1D9891929FFFB00E27A77D630 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, const RuntimeMethod* method) ;
// System.Void TCPClient::SendUINT16Async(System.UInt16[],System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_SendUINT16Async_m540DCEA59E50BBC57A91AFC1798CCA19E7B21517 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data10, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data21, const RuntimeMethod* method) ;
// System.Byte[] HL2UnityPlugin.HL2ResearchMode::GetLRFCameraBuffer(System.Int64&,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HL2ResearchMode_GetLRFCameraBuffer_m5A81F6687AE009623A319041DDB4A6D137CD35C4 (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* __this, int64_t* ___ts_left0, int64_t* ___ts_right1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::FromFileTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_FromFileTime_mCE5184040AA145C99C6272186B9A4FF1F0B87FF1 (int64_t ___fileTime0, const RuntimeMethod* method) ;
// System.DateTimeOffset System.DateTimeOffset::op_Implicit(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 DateTimeOffset_op_Implicit_m54F09DA78E92FAF940CA62C888F12553ABD9968F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, const RuntimeMethod* method) ;
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* PerceptionTimestampHelper_FromHistoricalTargetTime_mE589185EEB39D910A304813A9D14AB6F6DC5F93D (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___targetTime0, const RuntimeMethod* method) ;
// System.DateTimeOffset Windows.Perception.PerceptionTimestamp::get_TargetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 PerceptionTimestamp_get_TargetTime_m5664780425192E12BE2E00B72D78106AA86E697A (PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* __this, const RuntimeMethod* method) ;
// System.Int64 System.DateTimeOffset::ToUnixTimeMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeOffset_ToUnixTimeMilliseconds_mDC0FF57434DBFAFC47B63F1119CAABE402F8CDEC (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Int64 ResearchModeVideoStream::GetCurrentTimestampUnix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResearchModeVideoStream_GetCurrentTimestampUnix_m172D4960150B8B9DCA33EB61529D8043E603446D (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void TCPClient::SendSpatialImageAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_SendSpatialImageAsync_m72A14E770CBB35A1BE72AF4FC916CD7467C3397C (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LRFImage0, int64_t ___ts_left1, int64_t ___ts_right2, const RuntimeMethod* method) ;
// System.Void ResearchModeVideoStream::StopSensorsEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_StopSensorsEvent_m42F741D7A4789163E6E55C2B535946F8E7D655CB (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) ;
// System.Void Windows.Globalization.Calendar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calendar__ctor_m06D31F7E5253C59FCB540EBC77B93D73CE45495C (Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77* __this, const RuntimeMethod* method) ;
// System.DateTimeOffset Windows.Globalization.Calendar::GetDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 Calendar_GetDateTime_mC404936B04443C8ADD4D5585FCF99183D05B46E8 (Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void TCPClient::StopCoonection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_StopCoonection_mD20B87311C3153F5EAA33BC71B204BE18410D838 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<StartCoonection>d__11>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_mCA443721D9AFEFDFE2E2E5C546CE2010C819C080 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_mCA443721D9AFEFDFE2E2E5C546CE2010C819C080_gshared)(__this, ___stateMachine0, method);
}
// Windows.Storage.Streams.IOutputStream Windows.Storage.Streams.DataWriter::DetachStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataWriter_DetachStream_m4B4411D56D8813D39E88732A181525E896B640FC (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_Dispose_mE7A1FCB1FA70764D27F69C717102719605702DB1 (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IInputStream Windows.Storage.Streams.DataReader::DetachStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataReader_DetachStream_m3FB692E03BC8F547B8F652D96D3756D677591B5E (DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* __this, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader_Dispose_m97CD870CC867DF97F091E10CCB76157F34B265E8 (DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* __this, const RuntimeMethod* method) ;
// System.Void Windows.Networking.Sockets.StreamSocket::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSocket_Dispose_mFAA36F0523377F725DF61FDED68566C30A60B6B5 (StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendUINT16Async>d__14>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mFEE8ED106FC17F4B248CB014008D7147E71A2E56 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mFEE8ED106FC17F4B248CB014008D7147E71A2E56_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendUINT16Async>d__15>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m7D82BB6F3063539E4CBEDF6A33C93E8473F08639 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m7D82BB6F3063539E4CBEDF6A33C93E8473F08639_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendSpatialImageAsync>d__16>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m26B39EF210FB5F70645A867D03487C6EB911E3DB (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m26B39EF210FB5F70645A867D03487C6EB911E3DB_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPClient/<SendSpatialImageAsync>d__17>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m2819D7D23BDB35493DECB397E54B8D0102CD2F58 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m2819D7D23BDB35493DECB397E54B8D0102CD2F58_gshared)(__this, ___stateMachine0, method);
}
// System.Void TCPClient::StartCoonection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_StartCoonection_m6A7A9DE186CB2CD921E088C535B2EBD5385D21C4 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) ;
// System.Void Windows.Networking.Sockets.StreamSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSocket__ctor_m693202D022D1D2489F7C2ED7A5A4121B3A3007B0 (StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* __this, const RuntimeMethod* method) ;
// System.Void Windows.Networking.HostName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostName__ctor_m70AE7767D4F01CC771A0F15E4958E47DD1176DBA (HostName_t9B21F93266217EFD683343029B8012BBD792F7EE* __this, String_t* ___hostName0, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncAction Windows.Networking.Sockets.StreamSocket::ConnectAsync(Windows.Networking.HostName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_ConnectAsync_m5DB71C0A389E4CEBA63527D8E81E126C64289C25 (StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* __this, HostName_t9B21F93266217EFD683343029B8012BBD792F7EE* ___remoteHostName0, String_t* ___remoteServiceName1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 WindowsRuntimeSystemExtensions_GetAwaiter_mD759A0659F6EBDFD2FA45FB61A9169721A9745BA (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TCPClient/<StartCoonection>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_m554F5F8213634A1F61FA71DFA02F7CBC4216DDD2 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_m554F5F8213634A1F61FA71DFA02F7CBC4216DDD2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IOutputStream Windows.Networking.Sockets.StreamSocket::get_OutputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_OutputStream_m387CB2D2AD7D6C437F7D3FFC5D52003A6657A900 (StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* __this, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataWriter::.ctor(Windows.Storage.Streams.IOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter__ctor_mA09C8277FFC1D3DDBA172A91B25F7EA3BFDAC6DC (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, RuntimeObject* ___outputStream0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IInputStream Windows.Networking.Sockets.StreamSocket::get_InputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_InputStream_mC1C86642C0D5843AD3AE4E3FC06C549B723775D6 (StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* __this, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataReader::.ctor(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader__ctor_m537F0F0E4DBBA0085AB1A03B0021C075CFCCA8BD (DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* __this, RuntimeObject* ___inputStream0, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataReader::put_InputStreamOptions(Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader_put_InputStreamOptions_mF233A877CDB6B2EA1440B132830F25F8275EC334 (DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Exception::get_HResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline (Exception_t* __this, const RuntimeMethod* method) ;
// Windows.Networking.Sockets.SocketErrorStatus Windows.Networking.Sockets.SocketError::GetStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketError_GetStatus_m76B8625794E552C9D0EBAD597E7A54317AE10BBC (int32_t ___hresult0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void TCPClient/<StartCoonection>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_MoveNext_m92FC9ED3BF570DCFFE31C80BA1B64873DA165F44 (U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void TCPClient/<StartCoonection>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_SetStateMachine_mEA667EFE8DA6107A7F1F362E7E126AA283A0B854 (U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.UInt32 Windows.Storage.Streams.DataWriter::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DataWriter_WriteString_m427BF7FAD0525F4B8E6F5E4D37354AC88B746E9E (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataWriter::WriteInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_WriteInt32_m4CA8695EA357348EB511B4FB78EB1B783AC9A131 (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] TCPClient::UINT16ToBytes(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TCPClient_UINT16ToBytes_mEC18FAFDC4CF978C26BA8D474094B08F2DC8415A (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data0, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataWriter::WriteBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_WriteBytes_mEE81CFAF9A389302087F55AFA7685F60BBC59920 (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// Windows.Storage.Streams.DataWriterStoreOperation Windows.Storage.Streams.DataWriter::StoreAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataWriterStoreOperation_tEBE362EEFE5F03DC2935B78D07284FCF6CEB2F4B* DataWriter_StoreAsync_m54049684BFFB7EA71D1B380B838540A794435F18 (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<TResult>)
inline TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6 (TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__14>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mB52CC9D012D5F70EED6EBEB489961A53CECAC704 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595*, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mB52CC9D012D5F70EED6EBEB489961A53CECAC704_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
inline uint32_t TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689 (TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_gshared)(__this, method);
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.DataWriter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataWriter_FlushAsync_m35883C130C51685D0754BB6494B0256B0B685584 (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>)
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__14>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_m9400F529680693CEE71A22B9706DE2284FDC342A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_m9400F529680693CEE71A22B9706DE2284FDC342A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void TCPClient/<SendUINT16Async>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_MoveNext_m00426BA09FB25526F17EFE181D138807885E937F (U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* __this, const RuntimeMethod* method) ;
// System.Void TCPClient/<SendUINT16Async>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mDEBEC9B6CEE068D5C2D24CF231C17127CBFCB5C2 (U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m4248DBD8776800ECF242349118E5E24B3368BB3A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595*, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m4248DBD8776800ECF242349118E5E24B3368BB3A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_mEF3178BF0521A377DEF99444E440FFB203EB3D2F (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_mEF3178BF0521A377DEF99444E440FFB203EB3D2F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void TCPClient/<SendUINT16Async>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_MoveNext_m79D3636BE8BADCE25DF730BE34A601A54DBFC464 (U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* __this, const RuntimeMethod* method) ;
// System.Void TCPClient/<SendUINT16Async>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m25DCBC69E6704C730BB29A5D5DF5B14335E2E3B5 (U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Windows.Storage.Streams.DataWriter::WriteInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_WriteInt64_mA62456385D0BC49492C553F6FAA4787BAB239A54 (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__16>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m7217657F3D813144D6DCBC914083E1756D2A95F5 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595*, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m7217657F3D813144D6DCBC914083E1756D2A95F5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__16>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_mE4C0FDF96FFE49F8CC2E61D96BAFBEDF7D95EFCB (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_mE4C0FDF96FFE49F8CC2E61D96BAFBEDF7D95EFCB_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void TCPClient/<SendSpatialImageAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m8423BD5138414FD2A6D9693E80B755484D6191DA (U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* __this, const RuntimeMethod* method) ;
// System.Void TCPClient/<SendSpatialImageAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m52859B78734DCEEAD2335C35F2EB59BA47EA61AC (U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__17>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m24CDDA0E8A701833564B1008181C7BE3D38868DF (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595*, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m24CDDA0E8A701833564B1008181C7BE3D38868DF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__17>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m9241D55652F3ACF8232A71D0B4C90714AB6ADE94 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m9241D55652F3ACF8232A71D0B4C90714AB6ADE94_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void TCPClient/<SendSpatialImageAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mD35A3B0D00888BA1EB5D1E4DA416667E9F1AB8AC (U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* __this, const RuntimeMethod* method) ;
// System.Void TCPClient/<SendSpatialImageAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m8DDA681350E47AB2EB15FA89E9F4908054FF2844 (U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void ElemRenderer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemRenderer_Awake_mB84004A8F41EED6A8B95DCD8D93979D5E470718E (ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ElemRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemRenderer_Start_m4B72D23DF84411B10E7B98F61A5B6CDB9FA6A614 (ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ElemRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemRenderer_Update_mD0A1E43CE78C2E62538FA3AA43D8872DB49C5F6F (ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ElemRenderer::UpdateMesh(UnityEngine.Vector3[],System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemRenderer_UpdateMesh_m40705AA84344805646CBEAB3EDA6E1CBAD6E3018 (ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___arrVertices0, int32_t ___nPointsToRender1, int32_t ___nPointsRendered2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___pointColor3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC7A478EB76C35C2E7353FCDAFBF011F7202003A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC0B9C049439C8EA85A0B2E0967A60EAD556CBD78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1721B059180EB47DA4C15C07E941CCFE8EEA4E75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// if (arrVertices == null)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___arrVertices0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		// nPoints = 0;
		V_0 = 0;
		goto IL_0013;
	}

IL_0007:
	{
		// nPoints = System.Math.Min(nPointsToRender, arrVertices.Length - nPointsRendered);
		int32_t L_1 = ___nPointsToRender1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___arrVertices0;
		NullCheck(L_2);
		int32_t L_3 = ___nPointsRendered2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3)), NULL);
		V_0 = L_4;
	}

IL_0013:
	{
		// nPoints = System.Math.Min(nPoints, 65535);
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_5, ((int32_t)65535), NULL);
		V_0 = L_6;
		// Vector3[] points = arrVertices.Skip(nPointsRendered).Take(nPoints).ToArray();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ___arrVertices0;
		int32_t L_8 = ___nPointsRendered2;
		RuntimeObject* L_9;
		L_9 = Enumerable_Skip_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC7A478EB76C35C2E7353FCDAFBF011F7202003A8((RuntimeObject*)L_7, L_8, Enumerable_Skip_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC7A478EB76C35C2E7353FCDAFBF011F7202003A8_RuntimeMethod_var);
		int32_t L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = Enumerable_Take_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC0B9C049439C8EA85A0B2E0967A60EAD556CBD78(L_9, L_10, Enumerable_Take_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC0B9C049439C8EA85A0B2E0967A60EAD556CBD78_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12;
		L_12 = Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1721B059180EB47DA4C15C07E941CCFE8EEA4E75(L_11, Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1721B059180EB47DA4C15C07E941CCFE8EEA4E75_RuntimeMethod_var);
		V_1 = L_12;
		// int[] indices = new int[nPoints];
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_2 = L_14;
		// Color[] colors = new Color[nPoints];
		int32_t L_15 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_3 = L_16;
		// for (int i = 0; i < nPoints; i++)
		V_4 = 0;
		goto IL_005b;
	}

IL_0045:
	{
		// indices[i] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_2;
		int32_t L_18 = V_4;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_19);
		// colors[i] = pointColor;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_20 = V_3;
		int32_t L_21 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___pointColor3;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_22);
		// for (int i = 0; i < nPoints; i++)
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < nPoints; i++)
		int32_t L_24 = V_4;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0045;
		}
	}
	{
		// if (mesh != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = __this->___mesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0079;
		}
	}
	{
		// Destroy(mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = __this->___mesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_28, NULL);
	}

IL_0079:
	{
		// mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_29, NULL);
		__this->___mesh_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_4), (void*)L_29);
		// mesh.vertices = points;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = __this->___mesh_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = V_1;
		NullCheck(L_30);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_30, L_31, NULL);
		// mesh.colors = colors;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_32 = __this->___mesh_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_33 = V_3;
		NullCheck(L_32);
		Mesh_set_colors_m5558BAAA60676427B7954F1694A1765B000EB0FE(L_32, L_33, NULL);
		// mesh.SetIndices(indices, MeshTopology.Points, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_34 = __this->___mesh_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_2;
		NullCheck(L_34);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_34, L_35, 5, 0, NULL);
		// GetComponent<MeshFilter>().mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_36;
		L_36 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = __this->___mesh_4;
		NullCheck(L_36);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_36, L_37, NULL);
		// }
		return;
	}
}
// System.Void ElemRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElemRenderer__ctor_m6A8AEF24BBC109AFB038FA7C4D352A730F0F1FAD (ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ImuVisualize::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImuVisualize_Start_m19140886F9B77DB7EEE94C6C55DFCFC0F4778B3C (ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (AccelXBar && AccelYBar && AccelZBar)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___AccelXBar_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___AccelYBar_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0084;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___AccelZBar_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_0084;
		}
	}
	{
		// AccelXBar.GetComponent<MeshRenderer>().material.SetColor("_EmissionColor", Color.red);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___AccelXBar_4;
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_6, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_8);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_8, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_9, NULL);
		// AccelYBar.GetComponent<MeshRenderer>().material.SetColor("_EmissionColor", Color.green);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___AccelYBar_5;
		NullCheck(L_10);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11;
		L_11 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_10, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		NullCheck(L_12);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_12, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_13, NULL);
		// AccelZBar.GetComponent<MeshRenderer>().material.SetColor("_EmissionColor", Color.blue);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___AccelZBar_6;
		NullCheck(L_14);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_15;
		L_15 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_14, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16;
		L_16 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_15, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		NullCheck(L_16);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_16, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_17, NULL);
	}

IL_0084:
	{
		// if (GyroAxisModel)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___GyroAxisModel_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_18, NULL);
		if (!L_19)
		{
			goto IL_00e3;
		}
	}
	{
		// foreach (Transform child in GyroAxisModel.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___GyroAxisModel_7;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_21, NULL);
		V_0 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_1;
					if (!L_24)
					{
						goto IL_00e2;
					}
				}
				{
					RuntimeObject* L_25 = V_1;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00e2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c8_1;
			}

IL_00a4_1:
			{
				// foreach (Transform child in GyroAxisModel.transform)
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				// child.GetComponent<MeshRenderer>().material.SetColor("_EmissionColor", Color.white);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_27, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_28;
				L_28 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_27, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
				NullCheck(L_28);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29;
				L_29 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_28, NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
				L_30 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				NullCheck(L_29);
				Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_29, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_30, NULL);
			}

IL_00c8_1:
			{
				// foreach (Transform child in GyroAxisModel.transform)
				RuntimeObject* L_31 = V_0;
				NullCheck(L_31);
				bool L_32;
				L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_00a4_1;
				}
			}
			{
				goto IL_00e3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void ImuVisualize::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImuVisualize_Update_m5A40E77786350352CF4EB35EE5E2A9BFC26D6029 (ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AccelXBar && AccelYBar && AccelZBar)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___AccelXBar_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_012f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___AccelYBar_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_012f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___AccelZBar_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_012f;
		}
	}
	{
		// AccelXBar.localScale = new Vector3(Mathf.Abs(AccelVector.x), 0.1f, 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___AccelXBar_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___AccelVector_8);
		float L_8 = L_7->___x_2;
		float L_9;
		L_9 = fabsf(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_9, (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_10, NULL);
		// AccelXBar.localPosition = new Vector3(AccelVector.x * 0.5f, 0.0f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___AccelXBar_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___AccelVector_8);
		float L_13 = L_12->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((float)il2cpp_codegen_multiply(L_13, (0.5f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_14, NULL);
		// AccelYBar.localScale = new Vector3(0.1f, Mathf.Abs(AccelVector.y), 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___AccelYBar_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___AccelVector_8);
		float L_17 = L_16->___y_3;
		float L_18;
		L_18 = fabsf(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.100000001f), L_18, (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_19, NULL);
		// AccelYBar.localPosition = new Vector3(0.0f, AccelVector.y * 0.5f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___AccelYBar_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___AccelVector_8);
		float L_22 = L_21->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0f), ((float)il2cpp_codegen_multiply(L_22, (0.5f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_23, NULL);
		// AccelZBar.localScale = new Vector3(0.1f, 0.1f, Mathf.Abs(AccelVector.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___AccelZBar_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___AccelVector_8);
		float L_26 = L_25->___z_4;
		float L_27;
		L_27 = fabsf(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (0.100000001f), (0.100000001f), L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_28, NULL);
		// AccelZBar.localPosition = new Vector3(0.0f, 0.0f, AccelVector.z * 0.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___AccelZBar_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___AccelVector_8);
		float L_31 = L_30->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_31, (0.5f))), /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_29, L_32, NULL);
	}

IL_012f:
	{
		// if (GyroAxisModel)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___GyroAxisModel_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_33, NULL);
		if (!L_34)
		{
			goto IL_016d;
		}
	}
	{
		// GyroAxisModel.localEulerAngles = new Vector3(GyroEulorAngle.x, GyroEulorAngle.y, GyroEulorAngle.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___GyroAxisModel_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___GyroEulorAngle_9);
		float L_37 = L_36->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___GyroEulorAngle_9);
		float L_39 = L_38->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&__this->___GyroEulorAngle_9);
		float L_41 = L_40->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), L_37, L_39, L_41, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_35, L_42, NULL);
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void ImuVisualize::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImuVisualize__ctor_m597502B8AE403522F8141B8EEBDDBB755710CDC2 (ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 AccelVector = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		__this->___AccelVector_8 = L_0;
		// public Vector3 GyroEulorAngle = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___GyroEulorAngle_9 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void KeyboardCommand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardCommand_Start_m691473777B64BCC07A72A6159F3561F15F004CB0 (KeyboardCommand_t776D3BFC0E58856C703049D89C56B78BAE28449F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6_mB5C63BEC2685423B5CB6B6833D03933B6C57EF63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rm = GetComponent<ResearchModeVideoStream>();
		ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* L_0;
		L_0 = Component_GetComponent_TisResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6_mB5C63BEC2685423B5CB6B6833D03933B6C57EF63(__this, Component_GetComponent_TisResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6_mB5C63BEC2685423B5CB6B6833D03933B6C57EF63_RuntimeMethod_var);
		__this->___rm_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rm_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void KeyboardCommand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardCommand_Update_mB9B9AF9FA0D9F6A3C63BDE600EF804D89D925E3C (KeyboardCommand_t776D3BFC0E58856C703049D89C56B78BAE28449F* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// rm.SaveAHATSensorDataEvent();
		ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* L_1 = __this->___rm_4;
		NullCheck(L_1);
		ResearchModeVideoStream_SaveAHATSensorDataEvent_m709447C9C00075E0DEFC07920C6FC228F4327A17(L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void KeyboardCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardCommand__ctor_mF99C032AF2257B23CAC08FAC136AC216CF66E904 (KeyboardCommand_t776D3BFC0E58856C703049D89C56B78BAE28449F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PointCloudRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_Start_mC5F83CD06B5B4977A8316C88DCCD793B605D20C5 (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// elems = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___elems_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elems_8), (void*)L_0);
		// UpdatePointSize();
		PointCloudRenderer_UpdatePointSize_mBDE3CDC44F35511F8D2ABCF446E759C4AAEA674E(__this, NULL);
		// }
		return;
	}
}
// System.Void PointCloudRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_Update_m7F51D18FC5CB495F70D3C78612A238647A803114 (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.hasChanged)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// UpdatePointSize();
		PointCloudRenderer_UpdatePointSize_mBDE3CDC44F35511F8D2ABCF446E759C4AAEA674E(__this, NULL);
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_2, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void PointCloudRenderer::UpdatePointSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_UpdatePointSize_mBDE3CDC44F35511F8D2ABCF446E759C4AAEA674E (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64347237DF3B2CBE3D2A3F9A5AE03CBF535155F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointCloudMaterial.SetFloat("_PointSize", pointSize * transform.localScale.x);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___pointCloudMaterial_7;
		float L_1 = __this->___pointSize_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___x_2;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral64347237DF3B2CBE3D2A3F9A5AE03CBF535155F0, ((float)il2cpp_codegen_multiply(L_1, L_4)), NULL);
		// }
		return;
	}
}
// System.Void PointCloudRenderer::Render(UnityEngine.Vector3[],UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_Render_mCB3C8C498B84576E5A9A97C09DB2D092AA2AE9FB (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___arrVertices0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___pointColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816_mC785E0DE0E9A797DF536786AA2F986CF10C25A18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (arrVertices == null)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___arrVertices0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// nPoints = 0;
		V_0 = 0;
		// nChunks = 0;
		V_1 = 0;
		goto IL_0018;
	}

IL_0009:
	{
		// nPoints = arrVertices.Length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___arrVertices0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// nChunks = 1 + nPoints / maxChunkSize;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___maxChunkSize_4;
		V_1 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_2/L_3))));
	}

IL_0018:
	{
		// if (elems.Count < nChunks)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___elems_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_4, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0039;
		}
	}
	{
		// AddElems(nChunks - elems.Count);
		int32_t L_7 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___elems_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_8, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		PointCloudRenderer_AddElems_m6152AE5F6723A7972CA6AD88A65799273EAFE88C(__this, ((int32_t)il2cpp_codegen_subtract(L_7, L_9)), NULL);
	}

IL_0039:
	{
		// if (elems.Count > nChunks)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___elems_8;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_10, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		// RemoveElems(elems.Count - nChunks);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = __this->___elems_8;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_13, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_15 = V_1;
		PointCloudRenderer_RemoveElems_m983EDDE6FC3C9BAF05E4B2D54B9B6CA661A1BD6C(__this, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
	}

IL_005a:
	{
		// int offset = 0;
		V_2 = 0;
		// for (int i = 0; i < nChunks; i++)
		V_3 = 0;
		goto IL_0094;
	}

IL_0060:
	{
		// int nPointsToRender = System.Math.Min(maxChunkSize, nPoints - offset);
		int32_t L_16 = __this->___maxChunkSize_4;
		int32_t L_17 = V_0;
		int32_t L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		V_4 = L_19;
		// ElemRenderer renderer = elems[i].GetComponent<ElemRenderer>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->___elems_8;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_20, L_21, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_22);
		ElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816* L_23;
		L_23 = GameObject_GetComponent_TisElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816_mC785E0DE0E9A797DF536786AA2F986CF10C25A18(L_22, GameObject_GetComponent_TisElemRenderer_t7F9BFD821B253E65611F8EC6180C6C6219BCF816_mC785E0DE0E9A797DF536786AA2F986CF10C25A18_RuntimeMethod_var);
		// renderer.UpdateMesh(arrVertices, nPointsToRender, offset, pointColor);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = ___arrVertices0;
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___pointColor1;
		NullCheck(L_23);
		ElemRenderer_UpdateMesh_m40705AA84344805646CBEAB3EDA6E1CBAD6E3018(L_23, L_24, L_25, L_26, L_27, NULL);
		// offset += nPointsToRender;
		int32_t L_28 = V_2;
		int32_t L_29 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		// for (int i = 0; i < nChunks; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0094:
	{
		// for (int i = 0; i < nChunks; i++)
		int32_t L_31 = V_3;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0060;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PointCloudRenderer::AddElems(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_AddElems_m6152AE5F6723A7972CA6AD88A65799273EAFE88C (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, int32_t ___nElems0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// for (int i = 0; i < nElems; i++)
		V_0 = 0;
		goto IL_007f;
	}

IL_0004:
	{
		// GameObject newElem = GameObject.Instantiate(pointCloudElem);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pointCloudElem_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_1 = L_1;
		// newElem.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, L_4, NULL);
		// newElem.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// newElem.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_9);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_9, L_10, NULL);
		// newElem.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// elems.Add(newElem);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___elems_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_14);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < nElems; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_007f:
	{
		// for (int i = 0; i < nElems; i++)
		int32_t L_17 = V_0;
		int32_t L_18 = ___nElems0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PointCloudRenderer::RemoveElems(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer_RemoveElems_m983EDDE6FC3C9BAF05E4B2D54B9B6CA661A1BD6C (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, int32_t ___nElems0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < nElems; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// Destroy(elems[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___elems_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		// elems.Remove(elems[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___elems_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___elems_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_5;
		L_5 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_2, L_4, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for (int i = 0; i < nElems; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < nElems; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = ___nElems0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PointCloudRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudRenderer__ctor_m9FA252CA3EEACC439C69BDCB3B99BA3C99EB7DF5 (PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* __this, const RuntimeMethod* method) 
{
	{
		// public int maxChunkSize = 65535;
		__this->___maxChunkSize_4 = ((int32_t)65535);
		// public float pointSize = 0.005f;
		__this->___pointSize_5 = (0.00499999989f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ResearchModeImuStream::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeImuStream_Start_mFE3820C4BFA2C8DAF423B630EE05198F688E9ACA (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// researchMode = new HL2ResearchMode();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_0 = (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2*)il2cpp_codegen_object_new(HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HL2ResearchMode__ctor_mBD7A89DAFAF9D6C0BBFD264049EF81DC1EF7D8B3(L_0, NULL);
		__this->___researchMode_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___researchMode_4), (void*)L_0);
		// researchMode.InitializeAccelSensor();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_1 = __this->___researchMode_4;
		NullCheck(L_1);
		HL2ResearchMode_InitializeAccelSensor_m7AFB67FCA7E5635F9D0EE71E3845BE72C2C836E2(L_1, NULL);
		// researchMode.InitializeGyroSensor();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_2 = __this->___researchMode_4;
		NullCheck(L_2);
		HL2ResearchMode_InitializeGyroSensor_mCE5F5CD2016F09C152583105B6B5A2F52DE933DA(L_2, NULL);
		// researchMode.InitializeMagSensor();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_3 = __this->___researchMode_4;
		NullCheck(L_3);
		HL2ResearchMode_InitializeMagSensor_m2ED36ECC0D17A553CBC1DFB56D0F4F1BA2513F30(L_3, NULL);
		// researchMode.StartAccelSensorLoop();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_4 = __this->___researchMode_4;
		NullCheck(L_4);
		HL2ResearchMode_StartAccelSensorLoop_mD0A6CD591A279872EAED0399E57510BEFA5C51AF(L_4, NULL);
		// researchMode.StartGyroSensorLoop();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_5 = __this->___researchMode_4;
		NullCheck(L_5);
		HL2ResearchMode_StartGyroSensorLoop_m3B5E2ECDA76CC28F692A7260305738176DEE9114(L_5, NULL);
		// researchMode.StartMagSensorLoop();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_6 = __this->___researchMode_4;
		NullCheck(L_6);
		HL2ResearchMode_StartMagSensorLoop_m8E947EFB3A7BB192C52ECC0234AABB4AF8B3CA80(L_6, NULL);
		// }
		return;
	}
}
// System.Void ResearchModeImuStream::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeImuStream_LateUpdate_m76768C4C24E31B4C78A2981662AB61D74FCBFFBE (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral532FF1C861F302082D08AD0D47C6BA67097233F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral897E99878241CEA666C2E6C624EDC175A0AFAA48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D2EE20F986F9803A394E7FDB72DA1231238458);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (researchMode.AccelSampleUpdated())
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_0 = __this->___researchMode_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = HL2ResearchMode_AccelSampleUpdated_m6444CFA40DE97E9E3E43CF8964C505FB62FD2694(L_0, NULL);
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		// accelSampleData = researchMode.GetAccelSample();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_2 = __this->___researchMode_4;
		NullCheck(L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3;
		L_3 = HL2ResearchMode_GetAccelSample_mD80EBB8E2389926FFFA2775C5313627639E2B2EA(L_2, NULL);
		__this->___accelSampleData_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accelSampleData_5), (void*)L_3);
		// if (accelSampleData.Length == 3)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___accelSampleData_5;
		NullCheck(L_4);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((uint32_t)3))))
		{
			goto IL_0065;
		}
	}
	{
		// AccelText.text = $"Accel : {accelSampleData[0]:F3}, {accelSampleData[1]:F3}, {accelSampleData[2]:F3}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___AccelText_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___accelSampleData_5;
		NullCheck(L_6);
		int32_t L_7 = 0;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___accelSampleData_5;
		NullCheck(L_11);
		int32_t L_12 = 1;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___accelSampleData_5;
		NullCheck(L_16);
		int32_t L_17 = 2;
		float L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralB5D2EE20F986F9803A394E7FDB72DA1231238458, L_10, L_15, L_20, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_21);
	}

IL_0065:
	{
		// if (researchMode.GyroSampleUpdated())
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_22 = __this->___researchMode_4;
		NullCheck(L_22);
		bool L_23;
		L_23 = HL2ResearchMode_GyroSampleUpdated_mB38CF1ACDF725D3191D8714E8D43A94CB53C24A7(L_22, NULL);
		if (!L_23)
		{
			goto IL_00ca;
		}
	}
	{
		// gyroSampleData = researchMode.GetGyroSample();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_24 = __this->___researchMode_4;
		NullCheck(L_24);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25;
		L_25 = HL2ResearchMode_GetGyroSample_mA96AAED617575BD6F5EC9E0D447F272BDE145FB5(L_24, NULL);
		__this->___gyroSampleData_7 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gyroSampleData_7), (void*)L_25);
		// if (gyroSampleData.Length == 3)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = __this->___gyroSampleData_7;
		NullCheck(L_26);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))) == ((uint32_t)3))))
		{
			goto IL_00ca;
		}
	}
	{
		// GyroText.text = $"Gyro  : {gyroSampleData[0]:F3}, {gyroSampleData[1]:F3}, {gyroSampleData[2]:F3}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___GyroText_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = __this->___gyroSampleData_7;
		NullCheck(L_28);
		int32_t L_29 = 0;
		float L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = L_30;
		RuntimeObject* L_32 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = __this->___gyroSampleData_7;
		NullCheck(L_33);
		int32_t L_34 = 1;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36 = L_35;
		RuntimeObject* L_37 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_36);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = __this->___gyroSampleData_7;
		NullCheck(L_38);
		int32_t L_39 = 2;
		float L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		float L_41 = L_40;
		RuntimeObject* L_42 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_41);
		String_t* L_43;
		L_43 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral532FF1C861F302082D08AD0D47C6BA67097233F2, L_32, L_37, L_42, NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_43);
	}

IL_00ca:
	{
		// if (researchMode.MagSampleUpdated())
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_44 = __this->___researchMode_4;
		NullCheck(L_44);
		bool L_45;
		L_45 = HL2ResearchMode_MagSampleUpdated_m671DEA6FB746F40907289EBB8DEE8A1A3B47DBA9(L_44, NULL);
		if (!L_45)
		{
			goto IL_012f;
		}
	}
	{
		// magSampleData = researchMode.GetMagSample();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_46 = __this->___researchMode_4;
		NullCheck(L_46);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = HL2ResearchMode_GetMagSample_m84FEEA7D24FB57A5C80946244A5BF13AB6D83B81(L_46, NULL);
		__this->___magSampleData_9 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magSampleData_9), (void*)L_47);
		// if (magSampleData.Length == 3)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = __this->___magSampleData_9;
		NullCheck(L_48);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))) == ((uint32_t)3))))
		{
			goto IL_012f;
		}
	}
	{
		// MagText.text = $"Mag   : {magSampleData[0]:F3}, {magSampleData[1]:F3}, {magSampleData[2]:F3}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = __this->___MagText_12;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = __this->___magSampleData_9;
		NullCheck(L_50);
		int32_t L_51 = 0;
		float L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_53);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___magSampleData_9;
		NullCheck(L_55);
		int32_t L_56 = 1;
		float L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		float L_58 = L_57;
		RuntimeObject* L_59 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_58);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = __this->___magSampleData_9;
		NullCheck(L_60);
		int32_t L_61 = 2;
		float L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		float L_63 = L_62;
		RuntimeObject* L_64 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_63);
		String_t* L_65;
		L_65 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral897E99878241CEA666C2E6C624EDC175A0AFAA48, L_54, L_59, L_64, NULL);
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_65);
	}

IL_012f:
	{
		// accelVector = CreateAccelVector(accelSampleData);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_66 = __this->___accelSampleData_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = ResearchModeImuStream_CreateAccelVector_mFA4D6B9DFF4247883E27E7A7821542FFC0674660(__this, L_66, NULL);
		__this->___accelVector_6 = L_67;
		// gyroEulerAngle = CreateGyroEulerAngle(gyroSampleData);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_68 = __this->___gyroSampleData_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = ResearchModeImuStream_CreateGyroEulerAngle_m78FA08F7A2DC923D9105D451A11E908803512EA5(__this, L_68, NULL);
		__this->___gyroEulerAngle_8 = L_69;
		// RefImuVisualize.AccelVector = accelVector * 0.1f;
		ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569* L_70 = __this->___RefImuVisualize_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = __this->___accelVector_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_71, (0.100000001f), NULL);
		NullCheck(L_70);
		L_70->___AccelVector_8 = L_72;
		// RefImuVisualize.GyroEulorAngle = gyroEulerAngle * 30.0f;
		ImuVisualize_tF636AAACC29BD586F6AAA3F4AB2F1F35D65C2569* L_73 = __this->___RefImuVisualize_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = __this->___gyroEulerAngle_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_74, (30.0f), NULL);
		NullCheck(L_73);
		L_73->___GyroEulorAngle_9 = L_75;
		// }
		return;
	}
}
// UnityEngine.Vector3 ResearchModeImuStream::CreateAccelVector(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ResearchModeImuStream_CreateAccelVector_mFA4D6B9DFF4247883E27E7A7821542FFC0674660 (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___accelSample0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// Vector3 vector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_0;
		// if ((accelSample?.Length ?? 0) == 3)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___accelSample0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000f;
	}

IL_000c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___accelSample0;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
	}

IL_000f:
	{
		if ((!(((uint32_t)G_B3_0) == ((uint32_t)3))))
		{
			goto IL_002e;
		}
	}
	{
		// vector = new Vector3(
		//     accelSample[2],
		//     -1.0f * accelSample[0],
		//     -1.0f * accelSample[1]
		//     );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___accelSample0;
		NullCheck(L_3);
		int32_t L_4 = 2;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___accelSample0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___accelSample0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_5, ((float)il2cpp_codegen_multiply((-1.0f), L_8)), ((float)il2cpp_codegen_multiply((-1.0f), L_11)), NULL);
	}

IL_002e:
	{
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Vector3 ResearchModeImuStream::CreateGyroEulerAngle(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ResearchModeImuStream_CreateGyroEulerAngle_m78FA08F7A2DC923D9105D451A11E908803512EA5 (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___gyroSample0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// Vector3 vector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_0;
		// if ((gyroSample?.Length ?? 0) == 3)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___gyroSample0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000f;
	}

IL_000c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___gyroSample0;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
	}

IL_000f:
	{
		if ((!(((uint32_t)G_B3_0) == ((uint32_t)3))))
		{
			goto IL_0022;
		}
	}
	{
		// vector = new Vector3(
		//     gyroSample[2],
		//     gyroSample[0],
		//     gyroSample[1]
		//     );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___gyroSample0;
		NullCheck(L_3);
		int32_t L_4 = 2;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___gyroSample0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___gyroSample0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_5, L_8, L_11, NULL);
	}

IL_0022:
	{
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// System.Void ResearchModeImuStream::StopSensorsEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeImuStream_StopSensorsEvent_m9E96CB2D7FFE4B09E0FF23561A435207C63B2177 (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, const RuntimeMethod* method) 
{
	{
		// researchMode.StopAllSensorDevice();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_0 = __this->___researchMode_4;
		NullCheck(L_0);
		HL2ResearchMode_StopAllSensorDevice_m4A6EDEB1FE2431B0A7923573438E7AAC927F63B3(L_0, NULL);
		// }
		return;
	}
}
// System.Void ResearchModeImuStream::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeImuStream_OnApplicationFocus_m0E052559228A1DBD6FB4062E4019198F8A0C71E0 (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, bool ___focus0, const RuntimeMethod* method) 
{
	{
		// if (!focus) StopSensorsEvent();
		bool L_0 = ___focus0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!focus) StopSensorsEvent();
		ResearchModeImuStream_StopSensorsEvent_m9E96CB2D7FFE4B09E0FF23561A435207C63B2177(__this, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Void ResearchModeImuStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeImuStream__ctor_mAA5D6ECF3D191F4C4ACADB1315025156A8183DEC (ResearchModeImuStream_t1382FA8928293A274BD0A6999F86ACD78973603F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ResearchModeVideoStream::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_Awake_m72EF2659F33C7DF6BB96B45008D89A98E95250CE (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerceptionInterop_t87D26486C470C4C44D51B2ABE7F7681BBB7FEF67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityWorldOrigin = PerceptionInterop.GetSceneCoordinateSystem(UnityEngine.Pose.identity) as Windows.Perception.Spatial.SpatialCoordinateSystem;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		il2cpp_codegen_runtime_class_init_inline(PerceptionInterop_t87D26486C470C4C44D51B2ABE7F7681BBB7FEF67_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = PerceptionInterop_GetSceneCoordinateSystem_m9EF29737B61FC28117BE16FFE0D8C272071AE0F8(L_0, NULL);
		__this->___unityWorldOrigin_36 = ((SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52*)IsInstSealed((RuntimeObject*)L_1, SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unityWorldOrigin_36), (void*)((SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52*)IsInstSealed((RuntimeObject*)L_1, SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_Start_m28927E961159424BD37475842E876849818BF857 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3_m532FED06CE3AA7CB730143DDD965F950264A1843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5_m8A95C9B790B29A82610148B23AE9E1DA94DB969B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (depthSensorMode == DepthSensorMode.ShortThrow)
		int32_t L_0 = __this->___depthSensorMode_5;
		if (L_0)
		{
			goto IL_00bb;
		}
	}
	{
		// if (depthPreviewPlane != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___depthPreviewPlane_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// depthMediaMaterial = depthPreviewPlane.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___depthPreviewPlane_8;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		__this->___depthMediaMaterial_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthMediaMaterial_9), (void*)L_5);
		// depthMediaTexture = new Texture2D(512, 512, TextureFormat.Alpha8, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_6, ((int32_t)512), ((int32_t)512), 1, (bool)0, NULL);
		__this->___depthMediaTexture_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthMediaTexture_10), (void*)L_6);
		// depthMediaMaterial.mainTexture = depthMediaTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___depthMediaMaterial_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___depthMediaTexture_10;
		NullCheck(L_7);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_7, L_8, NULL);
	}

IL_0057:
	{
		// if (shortAbImagePreviewPlane != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___shortAbImagePreviewPlane_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00a3;
		}
	}
	{
		// shortAbImageMediaMaterial = shortAbImagePreviewPlane.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___shortAbImagePreviewPlane_12;
		NullCheck(L_11);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_12;
		L_12 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_11, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_12, NULL);
		__this->___shortAbImageMediaMaterial_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shortAbImageMediaMaterial_13), (void*)L_13);
		// shortAbImageMediaTexture = new Texture2D(512, 512, TextureFormat.Alpha8, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_14, ((int32_t)512), ((int32_t)512), 1, (bool)0, NULL);
		__this->___shortAbImageMediaTexture_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shortAbImageMediaTexture_14), (void*)L_14);
		// shortAbImageMediaMaterial.mainTexture = shortAbImageMediaTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___shortAbImageMediaMaterial_13;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___shortAbImageMediaTexture_14;
		NullCheck(L_15);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_15, L_16, NULL);
	}

IL_00a3:
	{
		// longDepthPreviewPlane.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___longDepthPreviewPlane_16;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// longAbImagePreviewPlane.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___longAbImagePreviewPlane_20;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
	}

IL_00bb:
	{
		// if (depthSensorMode == DepthSensorMode.LongThrow)
		int32_t L_19 = __this->___depthSensorMode_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_0177;
		}
	}
	{
		// if (longDepthPreviewPlane != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___longDepthPreviewPlane_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_0113;
		}
	}
	{
		// longDepthMediaMaterial = longDepthPreviewPlane.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___longDepthPreviewPlane_16;
		NullCheck(L_22);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_23;
		L_23 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_22, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_23);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24;
		L_24 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_23, NULL);
		__this->___longDepthMediaMaterial_17 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longDepthMediaMaterial_17), (void*)L_24);
		// longDepthMediaTexture = new Texture2D(320, 288, TextureFormat.Alpha8, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_25, ((int32_t)320), ((int32_t)288), 1, (bool)0, NULL);
		__this->___longDepthMediaTexture_18 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longDepthMediaTexture_18), (void*)L_25);
		// longDepthMediaMaterial.mainTexture = longDepthMediaTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___longDepthMediaMaterial_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = __this->___longDepthMediaTexture_18;
		NullCheck(L_26);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_26, L_27, NULL);
	}

IL_0113:
	{
		// if (longAbImagePreviewPlane != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___longAbImagePreviewPlane_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_015f;
		}
	}
	{
		// longAbImageMediaMaterial = longAbImagePreviewPlane.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___longAbImagePreviewPlane_20;
		NullCheck(L_30);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_31;
		L_31 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_30, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_31);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32;
		L_32 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_31, NULL);
		__this->___longAbImageMediaMaterial_21 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longAbImageMediaMaterial_21), (void*)L_32);
		// longAbImageMediaTexture = new Texture2D(320, 288, TextureFormat.Alpha8, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_33, ((int32_t)320), ((int32_t)288), 1, (bool)0, NULL);
		__this->___longAbImageMediaTexture_22 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longAbImageMediaTexture_22), (void*)L_33);
		// longAbImageMediaMaterial.mainTexture = longAbImageMediaTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___longAbImageMediaMaterial_21;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = __this->___longAbImageMediaTexture_22;
		NullCheck(L_34);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_34, L_35, NULL);
	}

IL_015f:
	{
		// depthPreviewPlane.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___depthPreviewPlane_8;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// shortAbImagePreviewPlane.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___shortAbImagePreviewPlane_12;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
	}

IL_0177:
	{
		// if (LFPreviewPlane != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___LFPreviewPlane_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_01c3;
		}
	}
	{
		// LFMediaMaterial = LFPreviewPlane.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___LFPreviewPlane_24;
		NullCheck(L_40);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_41;
		L_41 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_40, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_41);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42;
		L_42 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_41, NULL);
		__this->___LFMediaMaterial_25 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LFMediaMaterial_25), (void*)L_42);
		// LFMediaTexture = new Texture2D(640, 480, TextureFormat.Alpha8, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_43, ((int32_t)640), ((int32_t)480), 1, (bool)0, NULL);
		__this->___LFMediaTexture_26 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LFMediaTexture_26), (void*)L_43);
		// LFMediaMaterial.mainTexture = LFMediaTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = __this->___LFMediaMaterial_25;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = __this->___LFMediaTexture_26;
		NullCheck(L_44);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_44, L_45, NULL);
	}

IL_01c3:
	{
		// if (RFPreviewPlane != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___RFPreviewPlane_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_020f;
		}
	}
	{
		// RFMediaMaterial = RFPreviewPlane.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___RFPreviewPlane_28;
		NullCheck(L_48);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_49;
		L_49 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_48, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_49);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50;
		L_50 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_49, NULL);
		__this->___RFMediaMaterial_29 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RFMediaMaterial_29), (void*)L_50);
		// RFMediaTexture = new Texture2D(640, 480, TextureFormat.Alpha8, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_51 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_51, ((int32_t)640), ((int32_t)480), 1, (bool)0, NULL);
		__this->___RFMediaTexture_30 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RFMediaTexture_30), (void*)L_51);
		// RFMediaMaterial.mainTexture = RFMediaTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___RFMediaMaterial_29;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53 = __this->___RFMediaTexture_30;
		NullCheck(L_52);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_52, L_53, NULL);
	}

IL_020f:
	{
		// if (pointCloudRendererGo != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___pointCloudRendererGo_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_022e;
		}
	}
	{
		// pointCloudRenderer = pointCloudRendererGo.GetComponent<PointCloudRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___pointCloudRendererGo_33;
		NullCheck(L_56);
		PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* L_57;
		L_57 = GameObject_GetComponent_TisPointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5_m8A95C9B790B29A82610148B23AE9E1DA94DB969B(L_56, GameObject_GetComponent_TisPointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5_m8A95C9B790B29A82610148B23AE9E1DA94DB969B_RuntimeMethod_var);
		__this->___pointCloudRenderer_35 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointCloudRenderer_35), (void*)L_57);
	}

IL_022e:
	{
		// tcpClient = GetComponent<TCPClient>();
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_58;
		L_58 = Component_GetComponent_TisTCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3_m532FED06CE3AA7CB730143DDD965F950264A1843(__this, Component_GetComponent_TisTCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3_m532FED06CE3AA7CB730143DDD965F950264A1843_RuntimeMethod_var);
		__this->___tcpClient_7 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tcpClient_7), (void*)L_58);
		// researchMode = new HL2ResearchMode();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_59 = (HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2*)il2cpp_codegen_object_new(HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		HL2ResearchMode__ctor_mBD7A89DAFAF9D6C0BBFD264049EF81DC1EF7D8B3(L_59, NULL);
		__this->___researchMode_4 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___researchMode_4), (void*)L_59);
		// if (depthSensorMode == DepthSensorMode.LongThrow) researchMode.InitializeLongDepthSensor();
		int32_t L_60 = __this->___depthSensorMode_5;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_025b;
		}
	}
	{
		// if (depthSensorMode == DepthSensorMode.LongThrow) researchMode.InitializeLongDepthSensor();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_61 = __this->___researchMode_4;
		NullCheck(L_61);
		HL2ResearchMode_InitializeLongDepthSensor_mE597030F3F83BD1132804946EF234C3604E72D7D(L_61, NULL);
		goto IL_026e;
	}

IL_025b:
	{
		// else if (depthSensorMode == DepthSensorMode.ShortThrow) researchMode.InitializeDepthSensor();
		int32_t L_62 = __this->___depthSensorMode_5;
		if (L_62)
		{
			goto IL_026e;
		}
	}
	{
		// else if (depthSensorMode == DepthSensorMode.ShortThrow) researchMode.InitializeDepthSensor();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_63 = __this->___researchMode_4;
		NullCheck(L_63);
		HL2ResearchMode_InitializeDepthSensor_m3F028C1EF08DA4066712C5226D286243B7CFB390(L_63, NULL);
	}

IL_026e:
	{
		// researchMode.InitializeSpatialCamerasFront();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_64 = __this->___researchMode_4;
		NullCheck(L_64);
		HL2ResearchMode_InitializeSpatialCamerasFront_mA36D3EEBAFC4416C6FFEACE6160B2EEB32E39132(L_64, NULL);
		// researchMode.SetReferenceCoordinateSystem(unityWorldOrigin);
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_65 = __this->___researchMode_4;
		SpatialCoordinateSystem_t812A07CF565B770A09B2D4F9965D7C0336F81A52* L_66 = __this->___unityWorldOrigin_36;
		NullCheck(L_65);
		HL2ResearchMode_SetReferenceCoordinateSystem_mB2219742FACE8F971CB3B2312CF66151DD9127ED(L_65, L_66, NULL);
		// researchMode.SetPointCloudDepthOffset(0);
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_67 = __this->___researchMode_4;
		NullCheck(L_67);
		HL2ResearchMode_SetPointCloudDepthOffset_mD04DCE2C3F80E53B5DFDDA2CCFE71C8BA6802C41(L_67, (uint16_t)0, NULL);
		// if (depthSensorMode == DepthSensorMode.LongThrow) researchMode.StartLongDepthSensorLoop(enablePointCloud);
		int32_t L_68 = __this->___depthSensorMode_5;
		if ((!(((uint32_t)L_68) == ((uint32_t)1))))
		{
			goto IL_02b2;
		}
	}
	{
		// if (depthSensorMode == DepthSensorMode.LongThrow) researchMode.StartLongDepthSensorLoop(enablePointCloud);
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_69 = __this->___researchMode_4;
		bool L_70 = __this->___enablePointCloud_6;
		NullCheck(L_69);
		HL2ResearchMode_StartLongDepthSensorLoop_m806560B702C9839A6339C490C2D312B88E810C47(L_69, L_70, NULL);
		goto IL_02cb;
	}

IL_02b2:
	{
		// else if (depthSensorMode == DepthSensorMode.ShortThrow) researchMode.StartDepthSensorLoop(enablePointCloud);
		int32_t L_71 = __this->___depthSensorMode_5;
		if (L_71)
		{
			goto IL_02cb;
		}
	}
	{
		// else if (depthSensorMode == DepthSensorMode.ShortThrow) researchMode.StartDepthSensorLoop(enablePointCloud);
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_72 = __this->___researchMode_4;
		bool L_73 = __this->___enablePointCloud_6;
		NullCheck(L_72);
		HL2ResearchMode_StartDepthSensorLoop_m9379A09AFDB136DECB9670FE502FB934F100444D(L_72, L_73, NULL);
	}

IL_02cb:
	{
		// researchMode.StartSpatialCamerasFrontLoop();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_74 = __this->___researchMode_4;
		NullCheck(L_74);
		HL2ResearchMode_StartSpatialCamerasFrontLoop_m2063DE53752377FD55C84BC3BEFCF8E46DBF309D(L_74, NULL);
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_LateUpdate_m1044C1D993EAAADBF7F9904BDCAE5D960FAEA241 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int64_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int64_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	{
		// if (depthSensorMode == DepthSensorMode.ShortThrow && startRealtimePreview &&
		//     depthPreviewPlane != null && researchMode.DepthMapTextureUpdated())
		int32_t L_0 = __this->___depthSensorMode_5;
		if (L_0)
		{
			goto IL_007e;
		}
	}
	{
		bool L_1 = __this->___startRealtimePreview_37;
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___depthPreviewPlane_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_4 = __this->___researchMode_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = HL2ResearchMode_DepthMapTextureUpdated_mF628CFF98DAC9EB0198BB58E105F608821A0240C(L_4, NULL);
		if (!L_5)
		{
			goto IL_007e;
		}
	}
	{
		// byte[] frameTexture = researchMode.GetDepthMapTextureBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_6 = __this->___researchMode_4;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HL2ResearchMode_GetDepthMapTextureBuffer_m166A357CBB9DC7C98E14C7602E3B10844760BC29(L_6, NULL);
		V_0 = L_7;
		// if (frameTexture.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		if (!(((RuntimeArray*)L_8)->max_length))
		{
			goto IL_007e;
		}
	}
	{
		// if (depthFrameData == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___depthFrameData_11;
		if (L_9)
		{
			goto IL_004c;
		}
	}
	{
		// depthFrameData = frameTexture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		__this->___depthFrameData_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthFrameData_11), (void*)L_10);
		goto IL_0062;
	}

IL_004c:
	{
		// System.Buffer.BlockCopy(frameTexture, 0, depthFrameData, 0, depthFrameData.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___depthFrameData_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___depthFrameData_11;
		NullCheck(L_13);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
	}

IL_0062:
	{
		// depthMediaTexture.LoadRawTextureData(depthFrameData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->___depthMediaTexture_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___depthFrameData_11;
		NullCheck(L_14);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_14, L_15, NULL);
		// depthMediaTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___depthMediaTexture_10;
		NullCheck(L_16);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_16, NULL);
	}

IL_007e:
	{
		// if (depthSensorMode == DepthSensorMode.ShortThrow && startRealtimePreview &&
		//     shortAbImagePreviewPlane != null && researchMode.ShortAbImageTextureUpdated())
		int32_t L_17 = __this->___depthSensorMode_5;
		if (L_17)
		{
			goto IL_00fc;
		}
	}
	{
		bool L_18 = __this->___startRealtimePreview_37;
		if (!L_18)
		{
			goto IL_00fc;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___shortAbImagePreviewPlane_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00fc;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_21 = __this->___researchMode_4;
		NullCheck(L_21);
		bool L_22;
		L_22 = HL2ResearchMode_ShortAbImageTextureUpdated_mF6D9AEDA4D74F802CFE2C84F5A0C5D4DED6AFEE1(L_21, NULL);
		if (!L_22)
		{
			goto IL_00fc;
		}
	}
	{
		// byte[] frameTexture = researchMode.GetShortAbImageTextureBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_23 = __this->___researchMode_4;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = HL2ResearchMode_GetShortAbImageTextureBuffer_m3B62EE823042E40F0021C328F3F5A0205E79A690(L_23, NULL);
		V_1 = L_24;
		// if (frameTexture.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		NullCheck(L_25);
		if (!(((RuntimeArray*)L_25)->max_length))
		{
			goto IL_00fc;
		}
	}
	{
		// if (shortAbImageFrameData == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___shortAbImageFrameData_15;
		if (L_26)
		{
			goto IL_00ca;
		}
	}
	{
		// shortAbImageFrameData = frameTexture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_1;
		__this->___shortAbImageFrameData_15 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shortAbImageFrameData_15), (void*)L_27);
		goto IL_00e0;
	}

IL_00ca:
	{
		// System.Buffer.BlockCopy(frameTexture, 0, shortAbImageFrameData, 0, shortAbImageFrameData.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___shortAbImageFrameData_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___shortAbImageFrameData_15;
		NullCheck(L_30);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)), NULL);
	}

IL_00e0:
	{
		// shortAbImageMediaTexture.LoadRawTextureData(shortAbImageFrameData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___shortAbImageMediaTexture_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___shortAbImageFrameData_15;
		NullCheck(L_31);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_31, L_32, NULL);
		// shortAbImageMediaTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = __this->___shortAbImageMediaTexture_14;
		NullCheck(L_33);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_33, NULL);
	}

IL_00fc:
	{
		// if (depthSensorMode == DepthSensorMode.LongThrow && startRealtimePreview &&
		//     longDepthPreviewPlane != null && researchMode.LongDepthMapTextureUpdated())
		int32_t L_34 = __this->___depthSensorMode_5;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_017b;
		}
	}
	{
		bool L_35 = __this->___startRealtimePreview_37;
		if (!L_35)
		{
			goto IL_017b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___longDepthPreviewPlane_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_017b;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_38 = __this->___researchMode_4;
		NullCheck(L_38);
		bool L_39;
		L_39 = HL2ResearchMode_LongDepthMapTextureUpdated_m8EAB7032526752C97028BB7AC23376DEC5A8AD1F(L_38, NULL);
		if (!L_39)
		{
			goto IL_017b;
		}
	}
	{
		// byte[] frameTexture = researchMode.GetLongDepthMapTextureBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_40 = __this->___researchMode_4;
		NullCheck(L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = HL2ResearchMode_GetLongDepthMapTextureBuffer_mC05BFA6303A489D096063F5834D7E82E4A803718(L_40, NULL);
		V_2 = L_41;
		// if (frameTexture.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_2;
		NullCheck(L_42);
		if (!(((RuntimeArray*)L_42)->max_length))
		{
			goto IL_017b;
		}
	}
	{
		// if (longDepthFrameData == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___longDepthFrameData_19;
		if (L_43)
		{
			goto IL_0149;
		}
	}
	{
		// longDepthFrameData = frameTexture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_2;
		__this->___longDepthFrameData_19 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longDepthFrameData_19), (void*)L_44);
		goto IL_015f;
	}

IL_0149:
	{
		// System.Buffer.BlockCopy(frameTexture, 0, longDepthFrameData, 0, longDepthFrameData.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___longDepthFrameData_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___longDepthFrameData_19;
		NullCheck(L_47);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, 0, ((int32_t)(((RuntimeArray*)L_47)->max_length)), NULL);
	}

IL_015f:
	{
		// longDepthMediaTexture.LoadRawTextureData(longDepthFrameData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = __this->___longDepthMediaTexture_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___longDepthFrameData_19;
		NullCheck(L_48);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_48, L_49, NULL);
		// longDepthMediaTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = __this->___longDepthMediaTexture_18;
		NullCheck(L_50);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_50, NULL);
	}

IL_017b:
	{
		// if (depthSensorMode == DepthSensorMode.LongThrow && startRealtimePreview &&
		//     longAbImagePreviewPlane != null && researchMode.LongAbImageTextureUpdated())
		int32_t L_51 = __this->___depthSensorMode_5;
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_01fa;
		}
	}
	{
		bool L_52 = __this->___startRealtimePreview_37;
		if (!L_52)
		{
			goto IL_01fa;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___longAbImagePreviewPlane_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_54)
		{
			goto IL_01fa;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_55 = __this->___researchMode_4;
		NullCheck(L_55);
		bool L_56;
		L_56 = HL2ResearchMode_LongAbImageTextureUpdated_m9C155F44079C1A036D3C2E084316261ADFDC029B(L_55, NULL);
		if (!L_56)
		{
			goto IL_01fa;
		}
	}
	{
		// byte[] frameTexture = researchMode.GetLongAbImageTextureBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_57 = __this->___researchMode_4;
		NullCheck(L_57);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58;
		L_58 = HL2ResearchMode_GetLongAbImageTextureBuffer_m1B4F7FF93C8CADC619C8A3F3CAF153A06019A1E4(L_57, NULL);
		V_3 = L_58;
		// if (frameTexture.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_3;
		NullCheck(L_59);
		if (!(((RuntimeArray*)L_59)->max_length))
		{
			goto IL_01fa;
		}
	}
	{
		// if (longAbImageFrameData == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___longAbImageFrameData_23;
		if (L_60)
		{
			goto IL_01c8;
		}
	}
	{
		// longAbImageFrameData = frameTexture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_3;
		__this->___longAbImageFrameData_23 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longAbImageFrameData_23), (void*)L_61);
		goto IL_01de;
	}

IL_01c8:
	{
		// System.Buffer.BlockCopy(frameTexture, 0, longAbImageFrameData, 0, longAbImageFrameData.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___longAbImageFrameData_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___longAbImageFrameData_23;
		NullCheck(L_64);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_62, 0, (RuntimeArray*)L_63, 0, ((int32_t)(((RuntimeArray*)L_64)->max_length)), NULL);
	}

IL_01de:
	{
		// longAbImageMediaTexture.LoadRawTextureData(longAbImageFrameData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_65 = __this->___longAbImageMediaTexture_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = __this->___longAbImageFrameData_23;
		NullCheck(L_65);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_65, L_66, NULL);
		// longAbImageMediaTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_67 = __this->___longAbImageMediaTexture_22;
		NullCheck(L_67);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_67, NULL);
	}

IL_01fa:
	{
		// if (startRealtimePreview && LFPreviewPlane != null && researchMode.LFImageUpdated())
		bool L_68 = __this->___startRealtimePreview_37;
		if (!L_68)
		{
			goto IL_0276;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___LFPreviewPlane_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_69, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_70)
		{
			goto IL_0276;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_71 = __this->___researchMode_4;
		NullCheck(L_71);
		bool L_72;
		L_72 = HL2ResearchMode_LFImageUpdated_m6C2119A980E1D52118CE7E2A9B999465FF1AFA3A(L_71, NULL);
		if (!L_72)
		{
			goto IL_0276;
		}
	}
	{
		// byte[] frameTexture = researchMode.GetLFCameraBuffer(out ts);
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_73 = __this->___researchMode_4;
		NullCheck(L_73);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74;
		L_74 = HL2ResearchMode_GetLFCameraBuffer_m9AFFE751C7AD9EEE7232223D0B36BCB9E1C99148(L_73, (&V_4), NULL);
		V_5 = L_74;
		// if (frameTexture.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_5;
		NullCheck(L_75);
		if (!(((RuntimeArray*)L_75)->max_length))
		{
			goto IL_0276;
		}
	}
	{
		// if (LFFrameData == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = __this->___LFFrameData_27;
		if (L_76)
		{
			goto IL_0243;
		}
	}
	{
		// LFFrameData = frameTexture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_5;
		__this->___LFFrameData_27 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LFFrameData_27), (void*)L_77);
		goto IL_025a;
	}

IL_0243:
	{
		// System.Buffer.BlockCopy(frameTexture, 0, LFFrameData, 0, LFFrameData.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___LFFrameData_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = __this->___LFFrameData_27;
		NullCheck(L_80);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_78, 0, (RuntimeArray*)L_79, 0, ((int32_t)(((RuntimeArray*)L_80)->max_length)), NULL);
	}

IL_025a:
	{
		// LFMediaTexture.LoadRawTextureData(LFFrameData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_81 = __this->___LFMediaTexture_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = __this->___LFFrameData_27;
		NullCheck(L_81);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_81, L_82, NULL);
		// LFMediaTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_83 = __this->___LFMediaTexture_26;
		NullCheck(L_83);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_83, NULL);
	}

IL_0276:
	{
		// if (startRealtimePreview && RFPreviewPlane != null && researchMode.RFImageUpdated())
		bool L_84 = __this->___startRealtimePreview_37;
		if (!L_84)
		{
			goto IL_02f2;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = __this->___RFPreviewPlane_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_85, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_86)
		{
			goto IL_02f2;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_87 = __this->___researchMode_4;
		NullCheck(L_87);
		bool L_88;
		L_88 = HL2ResearchMode_RFImageUpdated_mFFC3B4E07A64D6777BDD96186B8799DA9F643604(L_87, NULL);
		if (!L_88)
		{
			goto IL_02f2;
		}
	}
	{
		// byte[] frameTexture = researchMode.GetRFCameraBuffer(out ts);
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_89 = __this->___researchMode_4;
		NullCheck(L_89);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90;
		L_90 = HL2ResearchMode_GetRFCameraBuffer_m15D9B4CCB3B7689252C7225F91B6A88ED0490E5F(L_89, (&V_6), NULL);
		V_7 = L_90;
		// if (frameTexture.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_7;
		NullCheck(L_91);
		if (!(((RuntimeArray*)L_91)->max_length))
		{
			goto IL_02f2;
		}
	}
	{
		// if (RFFrameData == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->___RFFrameData_31;
		if (L_92)
		{
			goto IL_02bf;
		}
	}
	{
		// RFFrameData = frameTexture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_7;
		__this->___RFFrameData_31 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RFFrameData_31), (void*)L_93);
		goto IL_02d6;
	}

IL_02bf:
	{
		// System.Buffer.BlockCopy(frameTexture, 0, RFFrameData, 0, RFFrameData.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = __this->___RFFrameData_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = __this->___RFFrameData_31;
		NullCheck(L_96);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_94, 0, (RuntimeArray*)L_95, 0, ((int32_t)(((RuntimeArray*)L_96)->max_length)), NULL);
	}

IL_02d6:
	{
		// RFMediaTexture.LoadRawTextureData(RFFrameData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_97 = __this->___RFMediaTexture_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = __this->___RFFrameData_31;
		NullCheck(L_97);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_97, L_98, NULL);
		// RFMediaTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_99 = __this->___RFMediaTexture_30;
		NullCheck(L_99);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_99, NULL);
	}

IL_02f2:
	{
		// UpdatePointCloud();
		ResearchModeVideoStream_UpdatePointCloud_m2FC0DFF7BB905092F156D151D24EA88EC4A5E5E4(__this, NULL);
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::UpdatePointCloud()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_UpdatePointCloud_m2FC0DFF7BB905092F156D151D24EA88EC4A5E5E4 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9C9BC10C5D6E15A1EBBD36C418450F51CD29979);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (enablePointCloud && renderPointCloud && pointCloudRendererGo != null)
		bool L_0 = __this->___enablePointCloud_6;
		if (!L_0)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_1 = __this->___renderPointCloud_38;
		if (!L_1)
		{
			goto IL_00f4;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pointCloudRendererGo_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00f4;
		}
	}
	{
		// if ((depthSensorMode == DepthSensorMode.LongThrow && !researchMode.LongThrowPointCloudUpdated()) ||
		//     (depthSensorMode == DepthSensorMode.ShortThrow && !researchMode.PointCloudUpdated())) return;
		int32_t L_4 = __this->___depthSensorMode_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_5 = __this->___researchMode_4;
		NullCheck(L_5);
		bool L_6;
		L_6 = HL2ResearchMode_LongThrowPointCloudUpdated_m46408A15A25D5005385822C30BD08789CF93C8A2(L_5, NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}

IL_003d:
	{
		int32_t L_7 = __this->___depthSensorMode_5;
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_8 = __this->___researchMode_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = HL2ResearchMode_PointCloudUpdated_m1DF8B630D90C71B2388554448DB8996A5AB4F5B2(L_8, NULL);
		if (L_9)
		{
			goto IL_0053;
		}
	}

IL_0052:
	{
		// (depthSensorMode == DepthSensorMode.ShortThrow && !researchMode.PointCloudUpdated())) return;
		return;
	}

IL_0053:
	{
		// float[] pointCloud = new float[] { };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_10;
		// if (depthSensorMode == DepthSensorMode.LongThrow) pointCloud = researchMode.GetLongThrowPointCloudBuffer();
		int32_t L_11 = __this->___depthSensorMode_5;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		// if (depthSensorMode == DepthSensorMode.LongThrow) pointCloud = researchMode.GetLongThrowPointCloudBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_12 = __this->___researchMode_4;
		NullCheck(L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13;
		L_13 = HL2ResearchMode_GetLongThrowPointCloudBuffer_mE5D6194C411794B386DB9A9FB7D3ED5C305CA601(L_12, NULL);
		V_0 = L_13;
		goto IL_0085;
	}

IL_0071:
	{
		// else if (depthSensorMode == DepthSensorMode.ShortThrow) pointCloud = researchMode.GetPointCloudBuffer();
		int32_t L_14 = __this->___depthSensorMode_5;
		if (L_14)
		{
			goto IL_0085;
		}
	}
	{
		// else if (depthSensorMode == DepthSensorMode.ShortThrow) pointCloud = researchMode.GetPointCloudBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_15 = __this->___researchMode_4;
		NullCheck(L_15);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16;
		L_16 = HL2ResearchMode_GetPointCloudBuffer_mEFAF1B32373EE92A882C9CB70DDC49C0AB89BEDC(L_15, NULL);
		V_0 = L_16;
	}

IL_0085:
	{
		// if (pointCloud.Length > 0)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = V_0;
		NullCheck(L_17);
		if (!(((RuntimeArray*)L_17)->max_length))
		{
			goto IL_00f4;
		}
	}
	{
		// int pointCloudLength = pointCloud.Length / 3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_0;
		NullCheck(L_18);
		V_1 = ((int32_t)(((int32_t)(((RuntimeArray*)L_18)->max_length))/3));
		// Vector3[] pointCloudVector3 = new Vector3[pointCloudLength];
		int32_t L_19 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_2 = L_20;
		// for (int i = 0; i < pointCloudLength; i++)
		V_3 = 0;
		goto IL_00bd;
	}

IL_009a:
	{
		// pointCloudVector3[i] = new Vector3(pointCloud[3 * i], pointCloud[3 * i + 1], pointCloud[3 * i + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = V_2;
		int32_t L_22 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = V_0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_multiply(3, L_24));
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = V_0;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_28)), 1));
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = V_0;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_32)), 2));
		float L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_26, L_30, L_34, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_35);
		// for (int i = 0; i < pointCloudLength; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00bd:
	{
		// for (int i = 0; i < pointCloudLength; i++)
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_009a;
		}
	}
	{
		// text.text = "Point Cloud Length: " + pointCloudVector3.Length.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___text_32;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = V_2;
		NullCheck(L_40);
		V_4 = ((int32_t)(((RuntimeArray*)L_40)->max_length));
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_42;
		L_42 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA9C9BC10C5D6E15A1EBBD36C418450F51CD29979, L_41, NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_42);
		// pointCloudRenderer.Render(pointCloudVector3, pointColor);
		PointCloudRenderer_tC5385F77A9ADF80FC5564F5CA8C430E90403EEE5* L_43 = __this->___pointCloudRenderer_35;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = __this->___pointColor_34;
		NullCheck(L_43);
		PointCloudRenderer_Render_mCB3C8C498B84576E5A9A97C09DB2D092AA2AE9FB(L_43, L_44, L_45, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::TogglePreviewEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_TogglePreviewEvent_mA73B4184A7EFEC85F65D195975D01E8735BEEA59 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	{
		// startRealtimePreview = !startRealtimePreview;
		bool L_0 = __this->___startRealtimePreview_37;
		__this->___startRealtimePreview_37 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::TogglePointCloudEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_TogglePointCloudEvent_m7A512741DBD70260789D3841286D4D8BFDF22DBA (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	{
		// renderPointCloud = !renderPointCloud;
		bool L_0 = __this->___renderPointCloud_38;
		__this->___renderPointCloud_38 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (renderPointCloud)
		bool L_1 = __this->___renderPointCloud_38;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// pointCloudRendererGo.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pointCloudRendererGo_33;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		return;
	}

IL_0024:
	{
		// pointCloudRendererGo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pointCloudRendererGo_33;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::StopSensorsEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_StopSensorsEvent_m42F741D7A4789163E6E55C2B535946F8E7D655CB (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	{
		// researchMode.StopAllSensorDevice();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_0 = __this->___researchMode_4;
		NullCheck(L_0);
		HL2ResearchMode_StopAllSensorDevice_m4A6EDEB1FE2431B0A7923573438E7AAC927F63B3(L_0, NULL);
		// startRealtimePreview = false;
		__this->___startRealtimePreview_37 = (bool)0;
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::SaveAHATSensorDataEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_SaveAHATSensorDataEvent_m709447C9C00075E0DEFC07920C6FC228F4327A17 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	{
		// var depthMap = researchMode.GetDepthMapBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_0 = __this->___researchMode_4;
		NullCheck(L_0);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1;
		L_1 = HL2ResearchMode_GetDepthMapBuffer_mCDBA6EFCBE97C5E6D8FA02205DE0F888D67BEFD9(L_0, NULL);
		V_0 = L_1;
		// var AbImage = researchMode.GetShortAbImageBuffer();
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_2 = __this->___researchMode_4;
		NullCheck(L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3;
		L_3 = HL2ResearchMode_GetShortAbImageBuffer_m3E4668D4240991B1D9891929FFFB00E27A77D630(L_2, NULL);
		V_1 = L_3;
		// if (tcpClient != null)
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_4 = __this->___tcpClient_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// tcpClient.SendUINT16Async(depthMap, AbImage);
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_6 = __this->___tcpClient_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_1;
		NullCheck(L_6);
		TCPClient_SendUINT16Async_m540DCEA59E50BBC57A91AFC1798CCA19E7B21517(L_6, L_7, L_8, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::SaveSpatialImageEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_SaveSpatialImageEvent_mDED04C28B5AA9C9899A96D247FF9D22B70EA3C02 (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D4FB11EE66BA89C04BA660D1EE4049AC6FD1AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8D391AD5DD08259AF01F6D6F32CFAA4961B182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F3C1D0E9C35231869D0C91F3F6BEEA21010548);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* V_3 = NULL;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// var LRFImage = researchMode.GetLRFCameraBuffer(out ts_ft_left, out ts_ft_right);
		HL2ResearchMode_tB24B98BE313B9C88DA216B5BB01D58184DFAC2C2* L_0 = __this->___researchMode_4;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HL2ResearchMode_GetLRFCameraBuffer_m5A81F6687AE009623A319041DDB4A6D137CD35C4(L_0, (&V_0), (&V_1), NULL);
		V_2 = L_1;
		// Windows.Perception.PerceptionTimestamp ts_left = Windows.Perception.PerceptionTimestampHelper.FromHistoricalTargetTime(DateTime.FromFileTime(ts_ft_left));
		int64_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_FromFileTime_mCE5184040AA145C99C6272186B9A4FF1F0B87FF1(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_4;
		L_4 = DateTimeOffset_op_Implicit_m54F09DA78E92FAF940CA62C888F12553ABD9968F(L_3, NULL);
		PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* L_5;
		L_5 = PerceptionTimestampHelper_FromHistoricalTargetTime_mE589185EEB39D910A304813A9D14AB6F6DC5F93D(L_4, NULL);
		V_3 = L_5;
		// Windows.Perception.PerceptionTimestamp ts_right = Windows.Perception.PerceptionTimestampHelper.FromHistoricalTargetTime(DateTime.FromFileTime(ts_ft_right));
		int64_t L_6 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_FromFileTime_mCE5184040AA145C99C6272186B9A4FF1F0B87FF1(L_6, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_8;
		L_8 = DateTimeOffset_op_Implicit_m54F09DA78E92FAF940CA62C888F12553ABD9968F(L_7, NULL);
		PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* L_9;
		L_9 = PerceptionTimestampHelper_FromHistoricalTargetTime_mE589185EEB39D910A304813A9D14AB6F6DC5F93D(L_8, NULL);
		// long ts_unix_left = ts_left.TargetTime.ToUnixTimeMilliseconds();
		PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* L_10 = V_3;
		NullCheck(L_10);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_11;
		L_11 = PerceptionTimestamp_get_TargetTime_m5664780425192E12BE2E00B72D78106AA86E697A(L_10, NULL);
		V_7 = L_11;
		int64_t L_12;
		L_12 = DateTimeOffset_ToUnixTimeMilliseconds_mDC0FF57434DBFAFC47B63F1119CAABE402F8CDEC((&V_7), NULL);
		V_4 = L_12;
		// long ts_unix_right = ts_right.TargetTime.ToUnixTimeMilliseconds();
		NullCheck(L_9);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_13;
		L_13 = PerceptionTimestamp_get_TargetTime_m5664780425192E12BE2E00B72D78106AA86E697A(L_9, NULL);
		V_7 = L_13;
		int64_t L_14;
		L_14 = DateTimeOffset_ToUnixTimeMilliseconds_mDC0FF57434DBFAFC47B63F1119CAABE402F8CDEC((&V_7), NULL);
		V_5 = L_14;
		// long ts_unix_current = GetCurrentTimestampUnix();
		int64_t L_15;
		L_15 = ResearchModeVideoStream_GetCurrentTimestampUnix_m172D4960150B8B9DCA33EB61529D8043E603446D(__this, NULL);
		V_6 = L_15;
		// text.text = "Left: " + ts_unix_left.ToString() + "\n" +
		//     "Right: " + ts_unix_right.ToString() + "\n" +
		//     "Current: " + ts_unix_current.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___text_32;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralA9D4FB11EE66BA89C04BA660D1EE4049AC6FD1AF);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA9D4FB11EE66BA89C04BA660D1EE4049AC6FD1AF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		String_t* L_20;
		L_20 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_4), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralEF8D391AD5DD08259AF01F6D6F32CFAA4961B182);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEF8D391AD5DD08259AF01F6D6F32CFAA4961B182);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		String_t* L_23;
		L_23 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_5), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_22;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralF8F3C1D0E9C35231869D0C91F3F6BEEA21010548);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF8F3C1D0E9C35231869D0C91F3F6BEEA21010548);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		String_t* L_26;
		L_26 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_6), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_26);
		String_t* L_27;
		L_27 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_25, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_27);
		// if (tcpClient != null)
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_28 = __this->___tcpClient_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// tcpClient.SendSpatialImageAsync(LRFImage, ts_unix_left, ts_unix_right);
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_30 = __this->___tcpClient_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_2;
		int64_t L_32 = V_4;
		int64_t L_33 = V_5;
		NullCheck(L_30);
		TCPClient_SendSpatialImageAsync_m72A14E770CBB35A1BE72AF4FC916CD7467C3397C(L_30, L_31, L_32, L_33, NULL);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void ResearchModeVideoStream::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream_OnApplicationFocus_m44E8C56D62759E500707014B34D7435C9D42009C (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, bool ___focus0, const RuntimeMethod* method) 
{
	{
		// if (!focus) StopSensorsEvent();
		bool L_0 = ___focus0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!focus) StopSensorsEvent();
		ResearchModeVideoStream_StopSensorsEvent_m42F741D7A4789163E6E55C2B535946F8E7D655CB(__this, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Int64 ResearchModeVideoStream::GetCurrentTimestampUnix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResearchModeVideoStream_GetCurrentTimestampUnix_m172D4960150B8B9DCA33EB61529D8043E603446D (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Windows.Globalization.Calendar c = new Windows.Globalization.Calendar();
		Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77* L_0 = (Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77*)il2cpp_codegen_object_new(Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Calendar__ctor_m06D31F7E5253C59FCB540EBC77B93D73CE45495C(L_0, NULL);
		// Windows.Perception.PerceptionTimestamp ts = Windows.Perception.PerceptionTimestampHelper.FromHistoricalTargetTime(c.GetDateTime());
		NullCheck(L_0);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1;
		L_1 = Calendar_GetDateTime_mC404936B04443C8ADD4D5585FCF99183D05B46E8(L_0, NULL);
		PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* L_2;
		L_2 = PerceptionTimestampHelper_FromHistoricalTargetTime_mE589185EEB39D910A304813A9D14AB6F6DC5F93D(L_1, NULL);
		// return ts.TargetTime.ToUnixTimeMilliseconds();
		NullCheck(L_2);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_3;
		L_3 = PerceptionTimestamp_get_TargetTime_m5664780425192E12BE2E00B72D78106AA86E697A(L_2, NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = DateTimeOffset_ToUnixTimeMilliseconds_mDC0FF57434DBFAFC47B63F1119CAABE402F8CDEC((&V_0), NULL);
		return L_4;
	}
}
// Windows.Perception.PerceptionTimestamp ResearchModeVideoStream::GetCurrentTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* ResearchModeVideoStream_GetCurrentTimestamp_m3332651A89ED37D21209B7C171B858E13EA2BB1E (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Windows.Globalization.Calendar c = new Windows.Globalization.Calendar();
		Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77* L_0 = (Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77*)il2cpp_codegen_object_new(Calendar_tB2D754F349C654B365E88ABBA9B64A3BA9252F77_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Calendar__ctor_m06D31F7E5253C59FCB540EBC77B93D73CE45495C(L_0, NULL);
		// return Windows.Perception.PerceptionTimestampHelper.FromHistoricalTargetTime(c.GetDateTime());
		NullCheck(L_0);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1;
		L_1 = Calendar_GetDateTime_mC404936B04443C8ADD4D5585FCF99183D05B46E8(L_0, NULL);
		PerceptionTimestamp_tB6F4FC74F93B7123E6E3D53564F7D4E086F62FA9* L_2;
		L_2 = PerceptionTimestampHelper_FromHistoricalTargetTime_mE589185EEB39D910A304813A9D14AB6F6DC5F93D(L_1, NULL);
		return L_2;
	}
}
// System.Void ResearchModeVideoStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResearchModeVideoStream__ctor_m3058039CBA02B6651F9188E8B78E22BEF2B41E5F (ResearchModeVideoStream_t2BAC0BA518738029BD35F3F2A145A5430A648DF6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] bool enablePointCloud = true;
		__this->___enablePointCloud_6 = (bool)1;
		// public Color pointColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___pointColor_34 = L_0;
		// bool startRealtimePreview = true;
		__this->___startRealtimePreview_37 = (bool)1;
		// bool renderPointCloud = true;
		__this->___renderPointCloud_38 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TCPClient::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_Awake_mC2EE22D235345E47B8453B98674175A0F394A6A8 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	{
		// ConnectionStatusLED.material.color = Color.red;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___ConnectionStatusLED_6;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TCPClient::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_OnApplicationFocus_m13F526117BBDE189792D863008FC78069F8E72C5 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, bool ___focus0, const RuntimeMethod* method) 
{
	{
		// if (!focus)
		bool L_0 = ___focus0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// StopCoonection();
		TCPClient_StopCoonection_mD20B87311C3153F5EAA33BC71B204BE18410D838(__this, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Boolean TCPClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCPClient_get_Connected_m1A3904F686973DE34981983FFF68C03736DDBA77 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	{
		// get { return connected; }
		bool L_0 = __this->___connected_7;
		return L_0;
	}
}
// System.Void TCPClient::StartCoonection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_StartCoonection_m6A7A9DE186CB2CD921E088C535B2EBD5385D21C4 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_mCA443721D9AFEFDFE2E2E5C546CE2010C819C080_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_mCA443721D9AFEFDFE2E2E5C546CE2010C819C080(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_mCA443721D9AFEFDFE2E2E5C546CE2010C819C080_RuntimeMethod_var);
		return;
	}
}
// System.Void TCPClient::StopCoonection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_StopCoonection_mD20B87311C3153F5EAA33BC71B204BE18410D838 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* G_B2_0 = NULL;
	DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* G_B1_0 = NULL;
	DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* G_B5_0 = NULL;
	DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* G_B4_0 = NULL;
	DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* G_B8_0 = NULL;
	DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* G_B7_0 = NULL;
	DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* G_B11_0 = NULL;
	DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* G_B10_0 = NULL;
	StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* G_B14_0 = NULL;
	StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* G_B13_0 = NULL;
	{
		// dw?.DetachStream();
		DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_0 = __this->___dw_9;
		DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = DataWriter_DetachStream_m4B4411D56D8813D39E88732A181525E896B640FC(G_B2_0, NULL);
	}

IL_0012:
	{
		// dw?.Dispose();
		DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_3 = __this->___dw_9;
		DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001e;
		}
	}
	{
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B5_0);
		DataWriter_Dispose_mE7A1FCB1FA70764D27F69C717102719605702DB1(G_B5_0, NULL);
	}

IL_0023:
	{
		// dw = null;
		__this->___dw_9 = (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dw_9), (void*)(DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A*)NULL);
		// dr?.DetachStream();
		DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* L_5 = __this->___dr_10;
		DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* L_6 = L_5;
		G_B7_0 = L_6;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0036;
		}
	}
	{
		goto IL_003c;
	}

IL_0036:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_7;
		L_7 = DataReader_DetachStream_m3FB692E03BC8F547B8F652D96D3756D677591B5E(G_B8_0, NULL);
	}

IL_003c:
	{
		// dr?.Dispose();
		DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* L_8 = __this->___dr_10;
		DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* L_9 = L_8;
		G_B10_0 = L_9;
		if (L_9)
		{
			G_B11_0 = L_9;
			goto IL_0048;
		}
	}
	{
		goto IL_004d;
	}

IL_0048:
	{
		NullCheck(G_B11_0);
		DataReader_Dispose_m97CD870CC867DF97F091E10CCB76157F34B265E8(G_B11_0, NULL);
	}

IL_004d:
	{
		// dr = null;
		__this->___dr_10 = (DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dr_10), (void*)(DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F*)NULL);
		// socket?.Dispose();
		StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_10 = __this->___socket_8;
		StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_11 = L_10;
		G_B13_0 = L_11;
		if (L_11)
		{
			G_B14_0 = L_11;
			goto IL_0060;
		}
	}
	{
		goto IL_0065;
	}

IL_0060:
	{
		NullCheck(G_B14_0);
		StreamSocket_Dispose_mFAA36F0523377F725DF61FDED68566C30A60B6B5(G_B14_0, NULL);
	}

IL_0065:
	{
		// connected = false;
		__this->___connected_7 = (bool)0;
		// }
		return;
	}
}
// System.Void TCPClient::SendUINT16Async(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_SendUINT16Async_mB2CBF3CA291FC6E907E9D876F1E96CFA2C4028CD (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mFEE8ED106FC17F4B248CB014008D7147E71A2E56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___data0;
		(&V_0)->___data_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mFEE8ED106FC17F4B248CB014008D7147E71A2E56(L_2, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mFEE8ED106FC17F4B248CB014008D7147E71A2E56_RuntimeMethod_var);
		return;
	}
}
// System.Void TCPClient::SendUINT16Async(System.UInt16[],System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_SendUINT16Async_m540DCEA59E50BBC57A91AFC1798CCA19E7B21517 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data10, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m7D82BB6F3063539E4CBEDF6A33C93E8473F08639_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___data10;
		(&V_0)->___data1_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data1_3), (void*)L_1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___data21;
		(&V_0)->___data2_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data2_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m7D82BB6F3063539E4CBEDF6A33C93E8473F08639(L_3, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m7D82BB6F3063539E4CBEDF6A33C93E8473F08639_RuntimeMethod_var);
		return;
	}
}
// System.Void TCPClient::SendSpatialImageAsync(System.Byte[],System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_SendSpatialImageAsync_m7EF0724187DD6A69BC414978C844DB686A77A6BF (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LFImage0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RFImage1, int64_t ___ts_left2, int64_t ___ts_right3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m26B39EF210FB5F70645A867D03487C6EB911E3DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___LFImage0;
		(&V_0)->___LFImage_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___LFImage_3), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___RFImage1;
		(&V_0)->___RFImage_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___RFImage_4), (void*)L_2);
		int64_t L_3 = ___ts_left2;
		(&V_0)->___ts_left_5 = L_3;
		int64_t L_4 = ___ts_right3;
		(&V_0)->___ts_right_6 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m26B39EF210FB5F70645A867D03487C6EB911E3DB(L_5, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m26B39EF210FB5F70645A867D03487C6EB911E3DB_RuntimeMethod_var);
		return;
	}
}
// System.Void TCPClient::SendSpatialImageAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_SendSpatialImageAsync_m72A14E770CBB35A1BE72AF4FC916CD7467C3397C (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LRFImage0, int64_t ___ts_left1, int64_t ___ts_right2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m2819D7D23BDB35493DECB397E54B8D0102CD2F58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___LRFImage0;
		(&V_0)->___LRFImage_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___LRFImage_3), (void*)L_1);
		int64_t L_2 = ___ts_left1;
		(&V_0)->___ts_left_4 = L_2;
		int64_t L_3 = ___ts_right2;
		(&V_0)->___ts_right_5 = L_3;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m2819D7D23BDB35493DECB397E54B8D0102CD2F58(L_4, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m2819D7D23BDB35493DECB397E54B8D0102CD2F58_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] TCPClient::UINT16ToBytes(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TCPClient_UINT16ToBytes_mEC18FAFDC4CF978C26BA8D474094B08F2DC8415A (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] ushortInBytes = new byte[data.Length * sizeof(ushort)];
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___data0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)));
		V_0 = L_1;
		// System.Buffer.BlockCopy(data, 0, ushortInBytes, 0, ushortInBytes.Length);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// return ushortInBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.Void TCPClient::ConnectToServerEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_ConnectToServerEvent_m52882ACF300880B2E467D4072BE750712666BA78 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	{
		// if (!connected) StartCoonection();
		bool L_0 = __this->___connected_7;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (!connected) StartCoonection();
		TCPClient_StartCoonection_m6A7A9DE186CB2CD921E088C535B2EBD5385D21C4(__this, NULL);
		return;
	}

IL_000f:
	{
		// else StopCoonection();
		TCPClient_StopCoonection_mD20B87311C3153F5EAA33BC71B204BE18410D838(__this, NULL);
		// }
		return;
	}
}
// System.Void TCPClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient__ctor_m9134901FF2D14FE1845B9016969626F00504D5D7 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	{
		// bool lastMessageSent = true;
		__this->___lastMessageSent_11 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TCPClient/<StartCoonection>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_MoveNext_m92FC9ED3BF570DCFFE31C80BA1B64873DA165F44 (U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_m554F5F8213634A1F61FA71DFA02F7CBC4216DDD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostName_t9B21F93266217EFD683343029B8012BBD792F7EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* V_1 = NULL;
	HostName_t9B21F93266217EFD683343029B8012BBD792F7EE* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	String_t* G_B13_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024_1;
			}
		}
		{
			// if (socket != null) socket.Dispose();
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_3 = V_1;
			NullCheck(L_3);
			StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_4 = L_3->___socket_8;
			if (!L_4)
			{
				goto IL_0024_1;
			}
		}
		{
			// if (socket != null) socket.Dispose();
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_5 = V_1;
			NullCheck(L_5);
			StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_6 = L_5->___socket_8;
			NullCheck(L_6);
			StreamSocket_Dispose_mFAA36F0523377F725DF61FDED68566C30A60B6B5(L_6, NULL);
		}

IL_0024_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0083_2;
				}
			}
			{
				// socket = new StreamSocket();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_8 = V_1;
				StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_9 = (StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9*)il2cpp_codegen_object_new(StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				StreamSocket__ctor_m693202D022D1D2489F7C2ED7A5A4121B3A3007B0(L_9, NULL);
				NullCheck(L_8);
				L_8->___socket_8 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&L_8->___socket_8), (void*)L_9);
				// var hostName = new Windows.Networking.HostName(hostIPAddress);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_10 = V_1;
				NullCheck(L_10);
				String_t* L_11 = L_10->___hostIPAddress_4;
				HostName_t9B21F93266217EFD683343029B8012BBD792F7EE* L_12 = (HostName_t9B21F93266217EFD683343029B8012BBD792F7EE*)il2cpp_codegen_object_new(HostName_t9B21F93266217EFD683343029B8012BBD792F7EE_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				HostName__ctor_m70AE7767D4F01CC771A0F15E4958E47DD1176DBA(L_12, L_11, NULL);
				V_2 = L_12;
				// await socket.ConnectAsync(hostName, port);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_13 = V_1;
				NullCheck(L_13);
				StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_14 = L_13->___socket_8;
				HostName_t9B21F93266217EFD683343029B8012BBD792F7EE* L_15 = V_2;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_16 = V_1;
				NullCheck(L_16);
				String_t* L_17 = L_16->___port_5;
				NullCheck(L_14);
				RuntimeObject* L_18;
				L_18 = StreamSocket_ConnectAsync_m5DB71C0A389E4CEBA63527D8E81E126C64289C25(L_14, L_15, L_17, NULL);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19;
				L_19 = WindowsRuntimeSystemExtensions_GetAwaiter_mD759A0659F6EBDFD2FA45FB61A9169721A9745BA(L_18, NULL);
				V_3 = L_19;
				bool L_20;
				L_20 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
				if (L_20)
				{
					goto IL_009f_2;
				}
			}
			{
				int32_t L_21 = 0;
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_22 = V_3;
				__this->___U3CU3Eu__1_3 = L_22;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_m554F5F8213634A1F61FA71DFA02F7CBC4216DDD2(L_23, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244_m554F5F8213634A1F61FA71DFA02F7CBC4216DDD2_RuntimeMethod_var);
				goto IL_0175;
			}

IL_0083_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_24 = __this->___U3CU3Eu__1_3;
				V_3 = L_24;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_25 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_26 = (-1);
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
			}

IL_009f_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
				// dw = new DataWriter(socket.OutputStream);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_27 = V_1;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_28 = V_1;
				NullCheck(L_28);
				StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_29 = L_28->___socket_8;
				NullCheck(L_29);
				RuntimeObject* L_30;
				L_30 = StreamSocket_get_OutputStream_m387CB2D2AD7D6C437F7D3FFC5D52003A6657A900(L_29, NULL);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_31 = (DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A*)il2cpp_codegen_object_new(DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A_il2cpp_TypeInfo_var);
				NullCheck(L_31);
				DataWriter__ctor_mA09C8277FFC1D3DDBA172A91B25F7EA3BFDAC6DC(L_31, L_30, NULL);
				NullCheck(L_27);
				L_27->___dw_9 = L_31;
				Il2CppCodeGenWriteBarrier((void**)(&L_27->___dw_9), (void*)L_31);
				// dr = new DataReader(socket.InputStream);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_32 = V_1;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_33 = V_1;
				NullCheck(L_33);
				StreamSocket_tABDF885F4154236E8CFAF14A6850872BE97A73F9* L_34 = L_33->___socket_8;
				NullCheck(L_34);
				RuntimeObject* L_35;
				L_35 = StreamSocket_get_InputStream_mC1C86642C0D5843AD3AE4E3FC06C549B723775D6(L_34, NULL);
				DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* L_36 = (DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F*)il2cpp_codegen_object_new(DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F_il2cpp_TypeInfo_var);
				NullCheck(L_36);
				DataReader__ctor_m537F0F0E4DBBA0085AB1A03B0021C075CFCCA8BD(L_36, L_35, NULL);
				NullCheck(L_32);
				L_32->___dr_10 = L_36;
				Il2CppCodeGenWriteBarrier((void**)(&L_32->___dr_10), (void*)L_36);
				// dr.InputStreamOptions = InputStreamOptions.Partial;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_37 = V_1;
				NullCheck(L_37);
				DataReader_t115F717A1AABEA3B98B0CFED256E7E8E0BBD485F* L_38 = L_37->___dr_10;
				NullCheck(L_38);
				DataReader_put_InputStreamOptions_mF233A877CDB6B2EA1440B132830F25F8275EC334(L_38, 1, NULL);
				// connected = true;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_39 = V_1;
				NullCheck(L_39);
				L_39->___connected_7 = (bool)1;
				// ConnectionStatusLED.material.color = Color.green;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_40 = V_1;
				NullCheck(L_40);
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_41 = L_40->___ConnectionStatusLED_6;
				NullCheck(L_41);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42;
				L_42 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_41, NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
				L_43 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
				NullCheck(L_42);
				Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_42, L_43, NULL);
				// }
				goto IL_0147_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00fc_1;
			}
			throw e;
		}

CATCH_00fc_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t* L_44 = V_4;
				NullCheck(L_44);
				Exception_t* L_45;
				L_45 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_44);
				NullCheck(L_45);
				int32_t L_46;
				L_46 = Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline(L_45, NULL);
				int32_t L_47;
				L_47 = SocketError_GetStatus_m76B8625794E552C9D0EBAD597E7A54317AE10BBC(L_46, NULL);
				V_5 = L_47;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				Il2CppFakeBox<int32_t> L_48(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_49;
				L_49 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_48), NULL);
				bool L_50;
				L_50 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_49, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), NULL);
				if (L_50)
				{
					goto IL_0133_1;
				}
			}
			{
				Exception_t* L_51 = V_4;
				NullCheck(L_51);
				String_t* L_52;
				L_52 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_51);
				G_B13_0 = L_52;
				goto IL_0140_1;
			}

IL_0133_1:
			{
				Il2CppFakeBox<int32_t> L_53(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_54;
				L_54 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_53), NULL);
				G_B13_0 = L_54;
			}

IL_0140_1:
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(G_B13_0, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0147_1;
			}
		}// end catch (depth: 2)

IL_0147_1:
		{
			goto IL_0162;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0149;
		}
		throw e;
	}

CATCH_0149:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_55 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_56 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_55, L_56, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0175;
	}// end catch (depth: 1)

IL_0162:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_57 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_57, NULL);
	}

IL_0175:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartCoonectionU3Ed__11_MoveNext_m92FC9ED3BF570DCFFE31C80BA1B64873DA165F44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244*>(__this + _offset);
	U3CStartCoonectionU3Ed__11_MoveNext_m92FC9ED3BF570DCFFE31C80BA1B64873DA165F44(_thisAdjusted, method);
}
// System.Void TCPClient/<StartCoonection>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_SetStateMachine_mEA667EFE8DA6107A7F1F362E7E126AA283A0B854 (U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartCoonectionU3Ed__11_SetStateMachine_mEA667EFE8DA6107A7F1F362E7E126AA283A0B854_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartCoonectionU3Ed__11_tE160B8B76963D0F28F996BF0B9404DE4CCA7B244*>(__this + _offset);
	U3CStartCoonectionU3Ed__11_SetStateMachine_mEA667EFE8DA6107A7F1F362E7E126AA283A0B854(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<SendUINT16Async>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_MoveNext_m00426BA09FB25526F17EFE181D138807885E937F (U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_m9400F529680693CEE71A22B9706DE2284FDC342A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mB52CC9D012D5F70EED6EBEB489961A53CECAC704_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* V_1 = NULL;
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->___lastMessageSent_11;
			if (L_4)
			{
				goto IL_001f_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			goto IL_019d;
		}

IL_001f_1:
		{
			// lastMessageSent = false;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_5 = V_1;
			NullCheck(L_5);
			L_5->___lastMessageSent_11 = (bool)0;
		}

IL_0026_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00a9_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_010a_2;
				}
			}
			{
				// dw.WriteString("s"); // header "s"
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_9 = L_8->___dw_9;
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m427BF7FAD0525F4B8E6F5E4D37354AC88B746E9E(L_9, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
				// dw.WriteInt32(data.Length);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_12 = L_11->___dw_9;
				UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = __this->___data_3;
				NullCheck(L_13);
				NullCheck(L_12);
				DataWriter_WriteInt32_m4CA8695EA357348EB511B4FB78EB1B783AC9A131(L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
				// dw.WriteBytes(UINT16ToBytes(data));
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_14 = V_1;
				NullCheck(L_14);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_15 = L_14->___dw_9;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_16 = V_1;
				UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_17 = __this->___data_3;
				NullCheck(L_16);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
				L_18 = TCPClient_UINT16ToBytes_mEC18FAFDC4CF978C26BA8D474094B08F2DC8415A(L_16, L_17, NULL);
				NullCheck(L_15);
				DataWriter_WriteBytes_mEE81CFAF9A389302087F55AFA7685F60BBC59920(L_15, L_18, NULL);
				// await dw.StoreAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_19 = V_1;
				NullCheck(L_19);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_20 = L_19->___dw_9;
				NullCheck(L_20);
				DataWriterStoreOperation_tEBE362EEFE5F03DC2935B78D07284FCF6CEB2F4B* L_21;
				L_21 = DataWriter_StoreAsync_m54049684BFFB7EA71D1B380B838540A794435F18(L_20, NULL);
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_22;
				L_22 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A(L_21, WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
				V_2 = L_22;
				bool L_23;
				L_23 = TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6((&V_2), TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00c5_2;
				}
			}
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_25 = V_2;
				__this->___U3CU3Eu__1_4 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_26 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mB52CC9D012D5F70EED6EBEB489961A53CECAC704(L_26, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_mB52CC9D012D5F70EED6EBEB489961A53CECAC704_RuntimeMethod_var);
				goto IL_01b0;
			}

IL_00a9_2:
			{
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_27 = __this->___U3CU3Eu__1_4;
				V_2 = L_27;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* L_28 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->___U3CU3E1__state_0 = L_29;
			}

IL_00c5_2:
			{
				uint32_t L_30;
				L_30 = TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689((&V_2), TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_31 = V_1;
				NullCheck(L_31);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_32 = L_31->___dw_9;
				NullCheck(L_32);
				RuntimeObject* L_33;
				L_33 = DataWriter_FlushAsync_m35883C130C51685D0754BB6494B0256B0B685584(L_32, NULL);
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_34;
				L_34 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2(L_33, WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
				V_3 = L_34;
				bool L_35;
				L_35 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_3), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_0126_2;
				}
			}
			{
				int32_t L_36 = 1;
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_37 = V_3;
				__this->___U3CU3Eu__2_5 = L_37;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_38 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_m9400F529680693CEE71A22B9706DE2284FDC342A(L_38, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B_m9400F529680693CEE71A22B9706DE2284FDC342A_RuntimeMethod_var);
				goto IL_01b0;
			}

IL_010a_2:
			{
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_39 = __this->___U3CU3Eu__2_5;
				V_3 = L_39;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_40 = (&__this->___U3CU3Eu__2_5);
				il2cpp_codegen_initobj(L_40, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
				int32_t L_41 = (-1);
				V_0 = L_41;
				__this->___U3CU3E1__state_0 = L_41;
			}

IL_0126_2:
			{
				bool L_42;
				L_42 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_3), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
				// }
				goto IL_017b_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0130_1;
			}
			throw e;
		}

CATCH_0130_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t* L_43 = V_4;
				NullCheck(L_43);
				Exception_t* L_44;
				L_44 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_43);
				NullCheck(L_44);
				int32_t L_45;
				L_45 = Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline(L_44, NULL);
				int32_t L_46;
				L_46 = SocketError_GetStatus_m76B8625794E552C9D0EBAD597E7A54317AE10BBC(L_45, NULL);
				V_5 = L_46;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				Il2CppFakeBox<int32_t> L_47(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_48;
				L_48 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_47), NULL);
				bool L_49;
				L_49 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), NULL);
				if (L_49)
				{
					goto IL_0167_1;
				}
			}
			{
				Exception_t* L_50 = V_4;
				NullCheck(L_50);
				String_t* L_51;
				L_51 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_50);
				G_B18_0 = L_51;
				goto IL_0174_1;
			}

IL_0167_1:
			{
				Il2CppFakeBox<int32_t> L_52(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_53;
				L_53 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_52), NULL);
				G_B18_0 = L_53;
			}

IL_0174_1:
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(G_B18_0, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_017b_1;
			}
		}// end catch (depth: 2)

IL_017b_1:
		{
			// lastMessageSent = true;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_54 = V_1;
			NullCheck(L_54);
			L_54->___lastMessageSent_11 = (bool)1;
			goto IL_019d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0184;
		}
		throw e;
	}

CATCH_0184:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_55 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_56 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_55, L_56, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b0;
	}// end catch (depth: 1)

IL_019d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_57 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_57, NULL);
	}

IL_01b0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__14_MoveNext_m00426BA09FB25526F17EFE181D138807885E937F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B*>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__14_MoveNext_m00426BA09FB25526F17EFE181D138807885E937F(_thisAdjusted, method);
}
// System.Void TCPClient/<SendUINT16Async>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mDEBEC9B6CEE068D5C2D24CF231C17127CBFCB5C2 (U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mDEBEC9B6CEE068D5C2D24CF231C17127CBFCB5C2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__14_t17DC4569247C40AB4D002E53DB415B854BFF275B*>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mDEBEC9B6CEE068D5C2D24CF231C17127CBFCB5C2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<SendUINT16Async>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_MoveNext_m79D3636BE8BADCE25DF730BE34A601A54DBFC464 (U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_mEF3178BF0521A377DEF99444E440FFB203EB3D2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m4248DBD8776800ECF242349118E5E24B3368BB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* V_1 = NULL;
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->___lastMessageSent_11;
			if (L_4)
			{
				goto IL_001f_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			goto IL_01c0;
		}

IL_001f_1:
		{
			// lastMessageSent = false;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_5 = V_1;
			NullCheck(L_5);
			L_5->___lastMessageSent_11 = (bool)0;
		}

IL_0026_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00cc_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_012d_2;
				}
			}
			{
				// dw.WriteString("s"); // header "s" stands for it is ushort array (uint16)
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_9 = L_8->___dw_9;
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m427BF7FAD0525F4B8E6F5E4D37354AC88B746E9E(L_9, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
				// dw.WriteInt32(data1.Length + data2.Length);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_12 = L_11->___dw_9;
				UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = __this->___data1_3;
				NullCheck(L_13);
				UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_14 = __this->___data2_4;
				NullCheck(L_14);
				NullCheck(L_12);
				DataWriter_WriteInt32_m4CA8695EA357348EB511B4FB78EB1B783AC9A131(L_12, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_13)->max_length)), ((int32_t)(((RuntimeArray*)L_14)->max_length)))), NULL);
				// dw.WriteBytes(UINT16ToBytes(data1));
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_15 = V_1;
				NullCheck(L_15);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_16 = L_15->___dw_9;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_17 = V_1;
				UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_18 = __this->___data1_3;
				NullCheck(L_17);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = TCPClient_UINT16ToBytes_mEC18FAFDC4CF978C26BA8D474094B08F2DC8415A(L_17, L_18, NULL);
				NullCheck(L_16);
				DataWriter_WriteBytes_mEE81CFAF9A389302087F55AFA7685F60BBC59920(L_16, L_19, NULL);
				// dw.WriteBytes(UINT16ToBytes(data2));
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_20 = V_1;
				NullCheck(L_20);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_21 = L_20->___dw_9;
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_22 = V_1;
				UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_23 = __this->___data2_4;
				NullCheck(L_22);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
				L_24 = TCPClient_UINT16ToBytes_mEC18FAFDC4CF978C26BA8D474094B08F2DC8415A(L_22, L_23, NULL);
				NullCheck(L_21);
				DataWriter_WriteBytes_mEE81CFAF9A389302087F55AFA7685F60BBC59920(L_21, L_24, NULL);
				// await dw.StoreAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_25 = V_1;
				NullCheck(L_25);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_26 = L_25->___dw_9;
				NullCheck(L_26);
				DataWriterStoreOperation_tEBE362EEFE5F03DC2935B78D07284FCF6CEB2F4B* L_27;
				L_27 = DataWriter_StoreAsync_m54049684BFFB7EA71D1B380B838540A794435F18(L_26, NULL);
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_28;
				L_28 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A(L_27, WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
				V_2 = L_28;
				bool L_29;
				L_29 = TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6((&V_2), TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00e8_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_31 = V_2;
				__this->___U3CU3Eu__1_5 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_32 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m4248DBD8776800ECF242349118E5E24B3368BB3A(L_32, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_m4248DBD8776800ECF242349118E5E24B3368BB3A_RuntimeMethod_var);
				goto IL_01d3;
			}

IL_00cc_2:
			{
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_33 = __this->___U3CU3Eu__1_5;
				V_2 = L_33;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* L_34 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_00e8_2:
			{
				uint32_t L_36;
				L_36 = TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689((&V_2), TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_37 = V_1;
				NullCheck(L_37);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_38 = L_37->___dw_9;
				NullCheck(L_38);
				RuntimeObject* L_39;
				L_39 = DataWriter_FlushAsync_m35883C130C51685D0754BB6494B0256B0B685584(L_38, NULL);
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_40;
				L_40 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2(L_39, WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
				V_3 = L_40;
				bool L_41;
				L_41 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_3), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0149_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state_0 = L_42;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_43 = V_3;
				__this->___U3CU3Eu__2_6 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_44 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_mEF3178BF0521A377DEF99444E440FFB203EB3D2F(L_44, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260_mEF3178BF0521A377DEF99444E440FFB203EB3D2F_RuntimeMethod_var);
				goto IL_01d3;
			}

IL_012d_2:
			{
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_45 = __this->___U3CU3Eu__2_6;
				V_3 = L_45;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_46 = (&__this->___U3CU3Eu__2_6);
				il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state_0 = L_47;
			}

IL_0149_2:
			{
				bool L_48;
				L_48 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_3), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
				// }
				goto IL_019e_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0153_1;
			}
			throw e;
		}

CATCH_0153_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t* L_49 = V_4;
				NullCheck(L_49);
				Exception_t* L_50;
				L_50 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_49);
				NullCheck(L_50);
				int32_t L_51;
				L_51 = Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline(L_50, NULL);
				int32_t L_52;
				L_52 = SocketError_GetStatus_m76B8625794E552C9D0EBAD597E7A54317AE10BBC(L_51, NULL);
				V_5 = L_52;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				Il2CppFakeBox<int32_t> L_53(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_54;
				L_54 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_53), NULL);
				bool L_55;
				L_55 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_54, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), NULL);
				if (L_55)
				{
					goto IL_018a_1;
				}
			}
			{
				Exception_t* L_56 = V_4;
				NullCheck(L_56);
				String_t* L_57;
				L_57 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_56);
				G_B18_0 = L_57;
				goto IL_0197_1;
			}

IL_018a_1:
			{
				Il2CppFakeBox<int32_t> L_58(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_59;
				L_59 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_58), NULL);
				G_B18_0 = L_59;
			}

IL_0197_1:
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(G_B18_0, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_019e_1;
			}
		}// end catch (depth: 2)

IL_019e_1:
		{
			// lastMessageSent = true;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_60 = V_1;
			NullCheck(L_60);
			L_60->___lastMessageSent_11 = (bool)1;
			goto IL_01c0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a7;
		}
		throw e;
	}

CATCH_01a7:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_61 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_61, L_62, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01d3;
	}// end catch (depth: 1)

IL_01c0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_63 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_63, NULL);
	}

IL_01d3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__15_MoveNext_m79D3636BE8BADCE25DF730BE34A601A54DBFC464_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260*>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__15_MoveNext_m79D3636BE8BADCE25DF730BE34A601A54DBFC464(_thisAdjusted, method);
}
// System.Void TCPClient/<SendUINT16Async>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m25DCBC69E6704C730BB29A5D5DF5B14335E2E3B5 (U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m25DCBC69E6704C730BB29A5D5DF5B14335E2E3B5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__15_t87C8536C66368C84F32D8AE41075B834D0BFC260*>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m25DCBC69E6704C730BB29A5D5DF5B14335E2E3B5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<SendSpatialImageAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m8423BD5138414FD2A6D9693E80B755484D6191DA (U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_mE4C0FDF96FFE49F8CC2E61D96BAFBEDF7D95EFCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m7217657F3D813144D6DCBC914083E1756D2A95F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* V_1 = NULL;
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->___lastMessageSent_11;
			if (L_4)
			{
				goto IL_001f_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			goto IL_01d6;
		}

IL_001f_1:
		{
			// lastMessageSent = false;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_5 = V_1;
			NullCheck(L_5);
			L_5->___lastMessageSent_11 = (bool)0;
		}

IL_0026_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00e2_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0143_2;
				}
			}
			{
				// dw.WriteString("f"); // header "f"
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_9 = L_8->___dw_9;
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m427BF7FAD0525F4B8E6F5E4D37354AC88B746E9E(L_9, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, NULL);
				// dw.WriteInt32(LFImage.Length + RFImage.Length);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_12 = L_11->___dw_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___LFImage_3;
				NullCheck(L_13);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___RFImage_4;
				NullCheck(L_14);
				NullCheck(L_12);
				DataWriter_WriteInt32_m4CA8695EA357348EB511B4FB78EB1B783AC9A131(L_12, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_13)->max_length)), ((int32_t)(((RuntimeArray*)L_14)->max_length)))), NULL);
				// dw.WriteInt64(ts_left);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_15 = V_1;
				NullCheck(L_15);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_16 = L_15->___dw_9;
				int64_t L_17 = __this->___ts_left_5;
				NullCheck(L_16);
				DataWriter_WriteInt64_mA62456385D0BC49492C553F6FAA4787BAB239A54(L_16, L_17, NULL);
				// dw.WriteInt64(ts_right);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_18 = V_1;
				NullCheck(L_18);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_19 = L_18->___dw_9;
				int64_t L_20 = __this->___ts_right_6;
				NullCheck(L_19);
				DataWriter_WriteInt64_mA62456385D0BC49492C553F6FAA4787BAB239A54(L_19, L_20, NULL);
				// dw.WriteBytes(LFImage);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_21 = V_1;
				NullCheck(L_21);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_22 = L_21->___dw_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___LFImage_3;
				NullCheck(L_22);
				DataWriter_WriteBytes_mEE81CFAF9A389302087F55AFA7685F60BBC59920(L_22, L_23, NULL);
				// dw.WriteBytes(RFImage);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_24 = V_1;
				NullCheck(L_24);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_25 = L_24->___dw_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___RFImage_4;
				NullCheck(L_25);
				DataWriter_WriteBytes_mEE81CFAF9A389302087F55AFA7685F60BBC59920(L_25, L_26, NULL);
				// await dw.StoreAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_27 = V_1;
				NullCheck(L_27);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_28 = L_27->___dw_9;
				NullCheck(L_28);
				DataWriterStoreOperation_tEBE362EEFE5F03DC2935B78D07284FCF6CEB2F4B* L_29;
				L_29 = DataWriter_StoreAsync_m54049684BFFB7EA71D1B380B838540A794435F18(L_28, NULL);
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_30;
				L_30 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A(L_29, WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
				V_2 = L_30;
				bool L_31;
				L_31 = TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6((&V_2), TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_00fe_2;
				}
			}
			{
				int32_t L_32 = 0;
				V_0 = L_32;
				__this->___U3CU3E1__state_0 = L_32;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_33 = V_2;
				__this->___U3CU3Eu__1_7 = L_33;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_34 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m7217657F3D813144D6DCBC914083E1756D2A95F5(L_34, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_m7217657F3D813144D6DCBC914083E1756D2A95F5_RuntimeMethod_var);
				goto IL_01e9;
			}

IL_00e2_2:
			{
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_35 = __this->___U3CU3Eu__1_7;
				V_2 = L_35;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* L_36 = (&__this->___U3CU3Eu__1_7);
				il2cpp_codegen_initobj(L_36, sizeof(TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595));
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->___U3CU3E1__state_0 = L_37;
			}

IL_00fe_2:
			{
				uint32_t L_38;
				L_38 = TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689((&V_2), TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_39 = V_1;
				NullCheck(L_39);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_40 = L_39->___dw_9;
				NullCheck(L_40);
				RuntimeObject* L_41;
				L_41 = DataWriter_FlushAsync_m35883C130C51685D0754BB6494B0256B0B685584(L_40, NULL);
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_42;
				L_42 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2(L_41, WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
				V_3 = L_42;
				bool L_43;
				L_43 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_3), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_015f_2;
				}
			}
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_45 = V_3;
				__this->___U3CU3Eu__2_8 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_8))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_46 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_mE4C0FDF96FFE49F8CC2E61D96BAFBEDF7D95EFCB(L_46, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516_mE4C0FDF96FFE49F8CC2E61D96BAFBEDF7D95EFCB_RuntimeMethod_var);
				goto IL_01e9;
			}

IL_0143_2:
			{
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_47 = __this->___U3CU3Eu__2_8;
				V_3 = L_47;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_48 = (&__this->___U3CU3Eu__2_8);
				il2cpp_codegen_initobj(L_48, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state_0 = L_49;
			}

IL_015f_2:
			{
				bool L_50;
				L_50 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_3), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
				// }
				goto IL_01b4_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0169_1;
			}
			throw e;
		}

CATCH_0169_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t* L_51 = V_4;
				NullCheck(L_51);
				Exception_t* L_52;
				L_52 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_51);
				NullCheck(L_52);
				int32_t L_53;
				L_53 = Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline(L_52, NULL);
				int32_t L_54;
				L_54 = SocketError_GetStatus_m76B8625794E552C9D0EBAD597E7A54317AE10BBC(L_53, NULL);
				V_5 = L_54;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				Il2CppFakeBox<int32_t> L_55(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_56;
				L_56 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_55), NULL);
				bool L_57;
				L_57 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), NULL);
				if (L_57)
				{
					goto IL_01a0_1;
				}
			}
			{
				Exception_t* L_58 = V_4;
				NullCheck(L_58);
				String_t* L_59;
				L_59 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_58);
				G_B18_0 = L_59;
				goto IL_01ad_1;
			}

IL_01a0_1:
			{
				Il2CppFakeBox<int32_t> L_60(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_61;
				L_61 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_60), NULL);
				G_B18_0 = L_61;
			}

IL_01ad_1:
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(G_B18_0, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_01b4_1;
			}
		}// end catch (depth: 2)

IL_01b4_1:
		{
			// lastMessageSent = true;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_62 = V_1;
			NullCheck(L_62);
			L_62->___lastMessageSent_11 = (bool)1;
			goto IL_01d6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01bd;
		}
		throw e;
	}

CATCH_01bd:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_63 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_64 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_63, L_64, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e9;
	}// end catch (depth: 1)

IL_01d6:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_65 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_65, NULL);
	}

IL_01e9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m8423BD5138414FD2A6D9693E80B755484D6191DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516*>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m8423BD5138414FD2A6D9693E80B755484D6191DA(_thisAdjusted, method);
}
// System.Void TCPClient/<SendSpatialImageAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m52859B78734DCEEAD2335C35F2EB59BA47EA61AC (U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m52859B78734DCEEAD2335C35F2EB59BA47EA61AC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__16_t61598E8A246B8F74E6E3BE0CE8BFFB15F073E516*>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m52859B78734DCEEAD2335C35F2EB59BA47EA61AC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<SendSpatialImageAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mD35A3B0D00888BA1EB5D1E4DA416667E9F1AB8AC (U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m9241D55652F3ACF8232A71D0B4C90714AB6ADE94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m24CDDA0E8A701833564B1008181C7BE3D38868DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* V_1 = NULL;
	TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->___lastMessageSent_11;
			if (L_4)
			{
				goto IL_001f_1;
			}
		}
		{
			// if (!lastMessageSent) return;
			goto IL_01bc;
		}

IL_001f_1:
		{
			// lastMessageSent = false;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_5 = V_1;
			NullCheck(L_5);
			L_5->___lastMessageSent_11 = (bool)0;
		}

IL_0026_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00c8_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0129_2;
				}
			}
			{
				// dw.WriteString("f"); // header "f"
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_9 = L_8->___dw_9;
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m427BF7FAD0525F4B8E6F5E4D37354AC88B746E9E(L_9, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, NULL);
				// dw.WriteInt32(LRFImage.Length);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_12 = L_11->___dw_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___LRFImage_3;
				NullCheck(L_13);
				NullCheck(L_12);
				DataWriter_WriteInt32_m4CA8695EA357348EB511B4FB78EB1B783AC9A131(L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
				// dw.WriteInt64(ts_left);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_14 = V_1;
				NullCheck(L_14);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_15 = L_14->___dw_9;
				int64_t L_16 = __this->___ts_left_4;
				NullCheck(L_15);
				DataWriter_WriteInt64_mA62456385D0BC49492C553F6FAA4787BAB239A54(L_15, L_16, NULL);
				// dw.WriteInt64(ts_right);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_17 = V_1;
				NullCheck(L_17);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_18 = L_17->___dw_9;
				int64_t L_19 = __this->___ts_right_5;
				NullCheck(L_18);
				DataWriter_WriteInt64_mA62456385D0BC49492C553F6FAA4787BAB239A54(L_18, L_19, NULL);
				// dw.WriteBytes(LRFImage);
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_20 = V_1;
				NullCheck(L_20);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_21 = L_20->___dw_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___LRFImage_3;
				NullCheck(L_21);
				DataWriter_WriteBytes_mEE81CFAF9A389302087F55AFA7685F60BBC59920(L_21, L_22, NULL);
				// await dw.StoreAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_23 = V_1;
				NullCheck(L_23);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_24 = L_23->___dw_9;
				NullCheck(L_24);
				DataWriterStoreOperation_tEBE362EEFE5F03DC2935B78D07284FCF6CEB2F4B* L_25;
				L_25 = DataWriter_StoreAsync_m54049684BFFB7EA71D1B380B838540A794435F18(L_24, NULL);
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_26;
				L_26 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A(L_25, WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9F09ECC31074330458F02D04811553D1FFF68E6A_RuntimeMethod_var);
				V_2 = L_26;
				bool L_27;
				L_27 = TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6((&V_2), TaskAwaiter_1_get_IsCompleted_mEE0702A4F49632643C95381ECBB14D34B4FFFDB6_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_28 = 0;
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_29 = V_2;
				__this->___U3CU3Eu__1_6 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m24CDDA0E8A701833564B1008181C7BE3D38868DF(L_30, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m24CDDA0E8A701833564B1008181C7BE3D38868DF_RuntimeMethod_var);
				goto IL_01cf;
			}

IL_00c8_2:
			{
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595 L_31 = __this->___U3CU3Eu__1_6;
				V_2 = L_31;
				TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595* L_32 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t809C1069019962BF095DD2CCBEDBAF8DD22DF595));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
			}

IL_00e4_2:
			{
				uint32_t L_34;
				L_34 = TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689((&V_2), TaskAwaiter_1_GetResult_m6EE8EC61E707579DBCBF31A9CD065F3AE26DD689_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_35 = V_1;
				NullCheck(L_35);
				DataWriter_t5BF62A04ECB961E8A97DF1660C5F519AA5D8D69A* L_36 = L_35->___dw_9;
				NullCheck(L_36);
				RuntimeObject* L_37;
				L_37 = DataWriter_FlushAsync_m35883C130C51685D0754BB6494B0256B0B685584(L_36, NULL);
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_38;
				L_38 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2(L_37, WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m926A1BCA99F41BF1C7A55AA2E28B8F4B15CAB1C2_RuntimeMethod_var);
				V_3 = L_38;
				bool L_39;
				L_39 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_3), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_0145_2;
				}
			}
			{
				int32_t L_40 = 1;
				V_0 = L_40;
				__this->___U3CU3E1__state_0 = L_40;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_41 = V_3;
				__this->___U3CU3Eu__2_7 = L_41;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_42 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m9241D55652F3ACF8232A71D0B4C90714AB6ADE94(L_42, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89_m9241D55652F3ACF8232A71D0B4C90714AB6ADE94_RuntimeMethod_var);
				goto IL_01cf;
			}

IL_0129_2:
			{
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_43 = __this->___U3CU3Eu__2_7;
				V_3 = L_43;
				TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_44 = (&__this->___U3CU3Eu__2_7);
				il2cpp_codegen_initobj(L_44, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
				int32_t L_45 = (-1);
				V_0 = L_45;
				__this->___U3CU3E1__state_0 = L_45;
			}

IL_0145_2:
			{
				bool L_46;
				L_46 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_3), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
				// }
				goto IL_019a_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_014f_1;
			}
			throw e;
		}

CATCH_014f_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t* L_47 = V_4;
				NullCheck(L_47);
				Exception_t* L_48;
				L_48 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_47);
				NullCheck(L_48);
				int32_t L_49;
				L_49 = Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline(L_48, NULL);
				int32_t L_50;
				L_50 = SocketError_GetStatus_m76B8625794E552C9D0EBAD597E7A54317AE10BBC(L_49, NULL);
				V_5 = L_50;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				Il2CppFakeBox<int32_t> L_51(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_52;
				L_52 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_51), NULL);
				bool L_53;
				L_53 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), NULL);
				if (L_53)
				{
					goto IL_0186_1;
				}
			}
			{
				Exception_t* L_54 = V_4;
				NullCheck(L_54);
				String_t* L_55;
				L_55 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_54);
				G_B18_0 = L_55;
				goto IL_0193_1;
			}

IL_0186_1:
			{
				Il2CppFakeBox<int32_t> L_56(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_t3F917CECFE7290BEACABEC13C81780AF7BED846E_il2cpp_TypeInfo_var)), (&V_5));
				String_t* L_57;
				L_57 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_56), NULL);
				G_B18_0 = L_57;
			}

IL_0193_1:
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(G_B18_0, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_019a_1;
			}
		}// end catch (depth: 2)

IL_019a_1:
		{
			// lastMessageSent = true;
			TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* L_58 = V_1;
			NullCheck(L_58);
			L_58->___lastMessageSent_11 = (bool)1;
			goto IL_01bc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a3;
		}
		throw e;
	}

CATCH_01a3:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_59 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_59, L_60, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01cf;
	}// end catch (depth: 1)

IL_01bc:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_61 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_61, NULL);
	}

IL_01cf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mD35A3B0D00888BA1EB5D1E4DA416667E9F1AB8AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89*>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mD35A3B0D00888BA1EB5D1E4DA416667E9F1AB8AC(_thisAdjusted, method);
}
// System.Void TCPClient/<SendSpatialImageAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m8DDA681350E47AB2EB15FA89E9F4908054FF2844 (U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m8DDA681350E47AB2EB15FA89E9F4908054FF2844_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__17_t5D23BFAC498C3615543F3CE7B0E921F0573D3A89*>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m8DDA681350E47AB2EB15FA89E9F4908054FF2844(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____HResult_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
