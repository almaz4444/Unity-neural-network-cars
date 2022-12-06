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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<System.Single[][]>
struct List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF;
// System.Collections.Generic.List`1<System.Single[]>
struct List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896;
// System.Collections.Generic.List`1<AxleInfo>
struct List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC;
// System.Collections.Generic.List`1<Bot>
struct List_1_tEFC918FE9976925239212560D1CAA350A553BEA5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<NeuralNetwork>
struct List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Single[][][]
struct SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
// AxleInfo[]
struct AxleInfoU5BU5D_tDA0EA5C26CB7AAE5E451546DAE1A2695AD151176;
// Bot[]
struct BotU5BU5D_t2449440F6442ACCEC71F1DC9AE2B78D6F17B5445;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// NeuralNetwork[]
struct NeuralNetworkU5BU5D_tC62D64322EDF37FF6AEDD51C8D71578F70DB3601;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// AddNN
struct AddNN_tB768ECEEF06F3B31D0E78CF3ECBDB03B43B77C49;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// AxleInfo
struct AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// Bot
struct Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CarController
struct CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10;
// EasySuspension
struct EasySuspension_tCE97CB54C324C3A222B4D761E2501A692505B39E;
// ErrorPanel
struct ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F;
// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// InterSceneScript
struct InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// Manager
struct Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeShare
struct NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B;
// NeuralNetwork
struct NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B;
// NeuralNetworkElement
struct NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// RearWheelDrive
struct RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneTransition
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderManager
struct SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TextManager
struct TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean
struct ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WheelCollider
struct WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MenuManager/<ShareMessage>d__24
struct U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E;
// NativeShare/ShareResultCallback
struct ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEFC918FE9976925239212560D1CAA350A553BEA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FCFDE5706F4D32F0D62CF251056F80315954921D5F969E70EFEE02344CBB2549_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000C3B7B429AFE76248F40BCECA77D092451B2F0;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral03759378C31F4B771E191F4769EAE593FB1DDBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral1A200AEE38F3AA2B9E4B60448584323A4479157D;
IL2CPP_EXTERN_C String_t* _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2479F9671485B02E74214FA4B1D52580DEAB7D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F5E3C127FDA45FC60CBF9C52DE1AAFAFC80214D;
IL2CPP_EXTERN_C String_t* _stringLiteral2FBB9A644E760E686CBDBEAB590394F27F21E609;
IL2CPP_EXTERN_C String_t* _stringLiteral3C456FCB856977ACBE4420BC0E7C91BC3FC234D7;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4B45CA1576D910692CC3B5D14C08CBCDFAD7B89E;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AA02CB44FADA734B49B912EEA10A0C0C274B00F;
IL2CPP_EXTERN_C String_t* _stringLiteral5BCA67AE45A2B468FE9690DDEAD602D30038CDF9;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral7506C7E0F2FD6A933DEBFA6ECD86A628630F5E36;
IL2CPP_EXTERN_C String_t* _stringLiteral7A699366712743B9864E5DE2F3CCD9D9AD40A60C;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA6F6D63C8CD543FF6DF8395B4DA317F4168166;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB13FF3E8BC9CEBF65E9DB8504F7CA10E62E19E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5CD885599A758737CB1BE64F03A17F96342E4B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BF74CA2AB7D5DE75DD049620726BEAA2AD27B3;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359;
IL2CPP_EXTERN_C String_t* _stringLiteral90E745986B8565BF493EC39344C15F82178FA760;
IL2CPP_EXTERN_C String_t* _stringLiteral90FB18D5D024A120560C39771C5741027E1E2963;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA45F5215BA710500368C36205BA89E195AC83FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralB04239476C79884D5EF86CD59947F9AB560C066C;
IL2CPP_EXTERN_C String_t* _stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralB2968EAB3B91257ED00BDAEA0A3B62C80597F8E9;
IL2CPP_EXTERN_C String_t* _stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC580A37DDEA4536BC6FE5DDBCACFBAD1F8A860;
IL2CPP_EXTERN_C String_t* _stringLiteralBFFEDBDB17E12B860DA2497D5A047AC22FD135B5;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralC91FA83F2375CE8B57077DA090BB22868966FDCA;
IL2CPP_EXTERN_C String_t* _stringLiteralD839814FF1C77868F0EB9A98DC10F54E565DC61E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A5237DB46DDCB7166B64B66EB26C086D4EBE5C;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF531D046A207DC84DE58B98A999E7EFD63F7AA66;
IL2CPP_EXTERN_C String_t* _stringLiteralF6C3814CB51259093F194963851023672A6135E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_mACB9D918D755F05F474CD24F5E420D532083AB9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E1873D9950267B63D106EAC5FEF25CCD3A23037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF27A0CF4C6E1A8737B101DCEB1844A53037424BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m740F89541FDA37EE530727CFFEE7BD97EF801F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6ED5F804A9F5D9764FFC9A445046EBE16A5B1545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m00773415464B87E7E16F7496F5FBC89E5F381ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m94584A0BD535F5BF106DA5F9C625DF773B3D228A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShareMessageU3Ed__24_System_Collections_IEnumerator_Reset_mF85AA7654EA44100AB5E4F1BD3FC4BDB796D6C22_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8;
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Single[][]>
struct List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single[]>
struct List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AxleInfo>
struct List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AxleInfoU5BU5D_tDA0EA5C26CB7AAE5E451546DAE1A2695AD151176* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AxleInfoU5BU5D_tDA0EA5C26CB7AAE5E451546DAE1A2695AD151176* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Bot>
struct List_1_tEFC918FE9976925239212560D1CAA350A553BEA5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BotU5BU5D_t2449440F6442ACCEC71F1DC9AE2B78D6F17B5445* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEFC918FE9976925239212560D1CAA350A553BEA5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BotU5BU5D_t2449440F6442ACCEC71F1DC9AE2B78D6F17B5445* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<NeuralNetwork>
struct List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NeuralNetworkU5BU5D_tC62D64322EDF37FF6AEDD51C8D71578F70DB3601* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NeuralNetworkU5BU5D_tC62D64322EDF37FF6AEDD51C8D71578F70DB3601* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// AxleInfo
struct AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9  : public RuntimeObject
{
	// UnityEngine.WheelCollider AxleInfo::leftWheel
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___leftWheel_0;
	// UnityEngine.WheelCollider AxleInfo::rightWheel
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* ___rightWheel_1;
	// System.Boolean AxleInfo::motor
	bool ___motor_2;
	// System.Boolean AxleInfo::steering
	bool ___steering_3;
};

// NativeShare
struct NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B  : public RuntimeObject
{
	// System.String NativeShare::subject
	String_t* ___subject_2;
	// System.String NativeShare::text
	String_t* ___text_3;
	// System.String NativeShare::title
	String_t* ___title_4;
	// System.String NativeShare::url
	String_t* ___url_5;
	// System.Collections.Generic.List`1<System.String> NativeShare::emailRecipients
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___emailRecipients_6;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetPackages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___targetPackages_7;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetClasses
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___targetClasses_8;
	// System.Collections.Generic.List`1<System.String> NativeShare::files
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___files_9;
	// System.Collections.Generic.List`1<System.String> NativeShare::mimes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___mimes_10;
	// NativeShare/ShareResultCallback NativeShare::callback
	ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* ___callback_11;
};

struct NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields
{
	// UnityEngine.AndroidJavaClass NativeShare::m_ajc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeShare::m_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_context_1;
};

// NeuralNetwork
struct NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B  : public RuntimeObject
{
	// System.Int32[] NeuralNetwork::layers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers_0;
	// System.Single[][] NeuralNetwork::neurons
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___neurons_1;
	// System.Single[][] NeuralNetwork::biases
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___biases_2;
	// System.Single[][][] NeuralNetwork::weights
	SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* ___weights_3;
	// System.Int32[] NeuralNetwork::activations
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___activations_4;
	// System.Single NeuralNetwork::fitness
	float ___fitness_5;
};

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MenuManager/<ShareMessage>d__24
struct U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E  : public RuntimeObject
{
	// System.Int32 MenuManager/<ShareMessage>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MenuManager/<ShareMessage>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MenuManager MenuManager/<ShareMessage>d__24::<>4__this
	MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<AxleInfo>
struct Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.JointSpring
struct JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 
{
	// System.Single UnityEngine.JointSpring::spring
	float ___spring_0;
	// System.Single UnityEngine.JointSpring::damper
	float ___damper_1;
	// System.Single UnityEngine.JointSpring::targetPosition
	float ___targetPosition_2;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FCFDE5706F4D32F0D62CF251056F80315954921D5F969E70EFEE02344CBB2549
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___FCFDE5706F4D32F0D62CF251056F80315954921D5F969E70EFEE02344CBB2549_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};

struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default_0;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_StaticFields
{
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kNoPoint_3;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.WheelCollider
struct WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// AddNN
struct AddNN_tB768ECEEF06F3B31D0E78CF3ECBDB03B43B77C49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MenuManager AddNN::_mm
	MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* ____mm_4;
	// ErrorPanel AddNN::errorPanel
	ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* ___errorPanel_5;
	// System.Boolean AddNN::isNewNetwork
	bool ___isNewNetwork_6;
};

// Bot
struct Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Bot::followPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followPos_4;
	// UnityEngine.Transform Bot::lookPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookPos_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Bot::detectedCheckPoints
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___detectedCheckPoints_6;
	// UnityEngine.LayerMask Bot::raycastMaskWalls
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___raycastMaskWalls_7;
	// UnityEngine.Transform[] Bot::raysTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___raysTransforms_8;
	// System.Single Bot::startProtection
	float ___startProtection_9;
	// System.Single Bot::rayDistance
	float ___rayDistance_10;
	// System.Boolean Bot::drawRays
	bool ___drawRays_11;
	// NeuralNetwork Bot::network
	NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* ___network_14;
	// System.Single Bot::fitness
	float ___fitness_15;
	// System.Boolean Bot::stop
	bool ___stop_16;
	// System.Single Bot::timeOldRotateWheels
	float ___timeOldRotateWheels_17;
	// System.Single Bot::oldRotateWheels
	float ___oldRotateWheels_18;
};

struct Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields
{
	// System.Int32[] Bot::layers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers_12;
	// System.Single[] Bot::input
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___input_13;
};

// CarController
struct CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<AxleInfo> CarController::axleInfos
	List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* ___axleInfos_4;
	// System.Single CarController::maxMotorTorque
	float ___maxMotorTorque_5;
	// System.Single CarController::maxSteeringAngle
	float ___maxSteeringAngle_6;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// EasySuspension
struct EasySuspension_tCE97CB54C324C3A222B4D761E2501A692505B39E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EasySuspension::naturalFrequency
	float ___naturalFrequency_4;
	// System.Single EasySuspension::dampingRatio
	float ___dampingRatio_5;
	// System.Single EasySuspension::forceShift
	float ___forceShift_6;
	// System.Boolean EasySuspension::setSuspensionDistance
	bool ___setSuspensionDistance_7;
};

// ErrorPanel
struct ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ErrorPanel::errorText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___errorText_4;
};

// InterSceneScript
struct InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields
{
	// System.Int32 InterSceneScript::maxNeuralNetworksCount
	int32_t ___maxNeuralNetworksCount_4;
	// System.Int32[] InterSceneScript::layers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers_5;
	// System.Single[][] InterSceneScript::neurons
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___neurons_6;
	// System.Single[][] InterSceneScript::biases
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___biases_7;
	// System.Single[][][] InterSceneScript::weights
	SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* ___weights_8;
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// Manager
struct Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Manager::timeFrame
	float ___timeFrame_5;
	// System.Int32 Manager::populationSize
	int32_t ___populationSize_6;
	// UnityEngine.GameObject[] Manager::prefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___prefabs_7;
	// UnityEngine.Transform[] Manager::spawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoints_8;
	// UnityEngine.GameObject Manager::vCam1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___vCam1_9;
	// UnityEngine.GameObject Manager::vCam2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___vCam2_10;
	// UnityEngine.GameObject Manager::vCam3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___vCam3_11;
	// UnityEngine.UI.Text Manager::numOfStepsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___numOfStepsText_12;
	// UnityEngine.UI.Text Manager::botFitnessText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___botFitnessText_13;
	// UnityEngine.GameObject[] Manager::lights
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___lights_14;
	// Joystick Manager::rotateWheelsBotJoystick
	Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* ___rotateWheelsBotJoystick_15;
	// System.Collections.Generic.List`1<NeuralNetwork> Manager::networks
	List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* ___networks_21;
	// System.Collections.Generic.List`1<Bot> Manager::bots
	List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* ___bots_22;
	// UnityEngine.GameObject Manager::myCar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___myCar_23;
	// System.Int32 Manager::followingBot
	int32_t ___followingBot_24;
	// System.Boolean Manager::isCameraFollowing
	bool ___isCameraFollowing_25;
	// System.String Manager::neuralNetworkName
	String_t* ___neuralNetworkName_26;
	// System.Single Manager::oldTimeScale
	float ___oldTimeScale_27;
};

struct Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields
{
	// System.Boolean Manager::training
	bool ___training_4;
	// System.Int32[] Manager::layers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers_16;
	// System.Single Manager::MutationChance
	float ___MutationChance_17;
	// System.Single Manager::MutationStrength
	float ___MutationStrength_18;
	// System.Boolean Manager::IsUpCamera
	bool ___IsUpCamera_19;
	// System.Boolean Manager::IsCarControl
	bool ___IsCarControl_20;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MenuManager::preTrainedNetwork
	String_t* ___preTrainedNetwork_4;
	// System.Int32 MenuManager::maxNeuralNetworksCount
	int32_t ___maxNeuralNetworksCount_5;
	// UnityEngine.GameObject MenuManager::networkElementPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___networkElementPrefab_6;
	// UnityEngine.GameObject MenuManager::loadingPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadingPanel_7;
	// UnityEngine.UI.Toggle MenuManager::traningToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___traningToggle_8;
	// UnityEngine.Transform MenuManager::scrollNetworkPanel
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___scrollNetworkPanel_9;
	// UnityEngine.Transform MenuManager::addNetworkButton
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___addNetworkButton_10;
	// ErrorPanel MenuManager::errorPanel
	ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* ___errorPanel_11;
	// UnityEngine.UI.Button[] MenuManager::buttons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___buttons_12;
	// System.Int32[] MenuManager::layers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers_13;
};

struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields
{
	// System.String MenuManager::selectedNetworkName
	String_t* ___selectedNetworkName_14;
	// System.Int32 MenuManager::networksCount
	int32_t ___networksCount_15;
	// System.Collections.Generic.List`1<System.String> MenuManager::namesNN
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___namesNN_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MenuManager::networksList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___networksList_17;
};

// NeuralNetworkElement
struct NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text NeuralNetworkElement::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// RearWheelDrive
struct RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.WheelCollider[] RearWheelDrive::wheels
	WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* ___wheels_4;
	// System.Boolean RearWheelDrive::isBot
	bool ___isBot_5;
	// System.Single RearWheelDrive::maxAngle
	float ___maxAngle_6;
	// System.Single RearWheelDrive::maxTorque
	float ___maxTorque_7;
	// UnityEngine.GameObject RearWheelDrive::wheelShape
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wheelShape_8;
	// System.Single RearWheelDrive::horizontalAxis
	float ___horizontalAxis_9;
	// System.Single RearWheelDrive::verticalAxis
	float ___verticalAxis_10;
};

// SceneTransition
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SceneTransition::loadingText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___loadingText_4;
	// UnityEngine.UI.Image SceneTransition::loadingImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___loadingImage_5;
	// System.Boolean SceneTransition::isInput
	bool ___isInput_6;
	// System.Boolean SceneTransition::isActive
	bool ___isActive_7;
	// UnityEngine.AsyncOperation SceneTransition::loadSceneAsyncOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___loadSceneAsyncOperation_9;
};

struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields
{
	// SceneTransition SceneTransition::instance
	SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* ___instance_8;
};

// SliderManager
struct SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField SliderManager::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_4;
	// UnityEngine.UI.Slider SliderManager::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// UnityEngine.UI.Toggle SliderManager::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_6;
};

// TextManager
struct TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator TextManager::isCopingTextAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___isCopingTextAnim_4;
	// UnityEngine.UI.Text TextManager::copyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___copyText_5;
	// System.Single TextManager::clickedTimeOffset
	float ___clickedTimeOffset_6;
	// System.Single TextManager::timeOfPointerDown
	float ___timeOfPointerDown_7;
};

// HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean
struct ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// System.String HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::booleanName
	String_t* ___booleanName_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt_28;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow_29;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens_30;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions_31;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_32;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::m_UserIsDragging
	bool ___m_UserIsDragging_36;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State_37;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077* ___m_ComponentPipeline_38;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ComponentOwner_39;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mCachedLookAtTarget_40;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mCachedLookAtTargetVcam_41;
};

struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_StaticFields
{
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC* ___CreatePipelineOverride_34;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842* ___DestroyPipelineOverride_35;
};

// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9  : public RuntimeArray
{
	ALIGN_FIELD (8) WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* m_Items[1];

	inline WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* m_Items[1];

	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[][][]
struct SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* m_Items[1];

	inline SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;

// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void MenuManager::SaveNewNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SaveNewNetwork_m45C65B499AC28466D90F7AF3A94AFF01FAB75B7F (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void MenuManager::SaveInputNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SaveInputNetwork_m4F025320F1365F85F18AF5206336DCEC1B4FED56 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___network0, const RuntimeMethod* method) ;
// System.Void ErrorPanel::OpenErrorPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078 (ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* __this, String_t* ___error0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<RearWheelDrive>()
inline RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single[] NeuralNetwork::FeedForward(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* NeuralNetwork_FeedForward_m45AC6764E1B9DA098BAE5BD6F24787A5335918AD (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputs0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
inline void List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<AxleInfo>::GetEnumerator()
inline Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098 (List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 (*) (List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<AxleInfo>::Dispose()
inline void Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4 (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<AxleInfo>::get_Current()
inline AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_inline (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712* __this, const RuntimeMethod* method)
{
	return ((  AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* (*) (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<AxleInfo>::MoveNext()
inline bool Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274 (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.WheelCollider>()
inline WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.JointSpring UnityEngine.WheelCollider::get_suspensionSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 WheelCollider_get_suspensionSpring_m046582E587BF5AC228C2022D25A822BC4B4B9543 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.WheelCollider::get_sprungMass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_sprungMass_m68CE93EA82BB593FEFE5E68AC4EBF4611B55336B (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WheelCollider::set_suspensionSpring(UnityEngine.JointSpring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_suspensionSpring_m2E4ACAB8BE03081A58E217DAE84819CFA51A82B7 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_centerOfMass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_centerOfMass_mA66BE4DE0469545EBCF49A66EE4FDD3A5D0ADF91 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.WheelCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_radius_m68CC3DE301E0C6226E85F99D853365DA1244CD1F (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WheelCollider::set_forceAppPointDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_forceAppPointDistance_m115F21BA7FB72B5006506B77F12DE97E4E497CDB (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WheelCollider::set_suspensionDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_suspensionDistance_mED5D19A954DD3C7030B4D336466BF0EA1BB20348 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Bot::Awake(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_Awake_mD18D277471EB3F736A927D7238F0805E0B2D5BB0 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layer0, const RuntimeMethod* method) ;
// System.Void InterSceneScript::InitNeurons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitNeurons_m7C248C5B9738D8DCD54ECE3C69A2DD540920AE12 (const RuntimeMethod* method) ;
// System.Void InterSceneScript::InitBiases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitBiases_m32434D6217E328763C9625E06B9799C0A09ADE63 (const RuntimeMethod* method) ;
// System.Void InterSceneScript::InitWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitWeights_m47C4B6F8CC53762D0CEFC4D661FCD68BFAE2C7C4 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single[]>::.ctor()
inline void List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347 (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single[]>::Add(T)
inline void List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_inline (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Single[]>::ToArray()
inline SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0 (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* (*) (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single[][]>::.ctor()
inline void List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single[][]>::Add(T)
inline void List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_inline (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* __this, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF*, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Single[][]>::ToArray()
inline SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8 (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* (*) (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.ReadOnlySpan`1<System.Char> System.String::op_Implicit(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8 (String_t* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String InterSceneScript::GetPathWithNetworkName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F (String_t* ___key0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void InterSceneScript::Save(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_Save_m15327CE35B7F1862D5460BB24EE214972265767F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Manager::InitNetworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_InitNetworks_mAC151AA8F495AC21AFF80BD8214570B4A7349AE0 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void Manager::CreateBots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_CreateBots_m4E314307B81902079274FAF71BFADC8CA1FD65FF (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Bot>::get_Item(System.Int32)
inline Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* (*) (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<Bot>()
inline Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<NeuralNetwork>::get_Item(System.Int32)
inline NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6 (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* (*) (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Bot>::set_Item(System.Int32,T)
inline void List_1_set_Item_m00773415464B87E7E16F7496F5FBC89E5F381ABE (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* __this, int32_t ___index0, Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5*, int32_t, Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// T UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineVirtualCamera>()
inline CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Bot>::get_Count()
inline int32_t List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_inline (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<RearWheelDrive>()
inline RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void NeuralNetwork::.ctor(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork__ctor_m5656B82812F0168ED97841E7D96015CE1A26356F (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers0, const RuntimeMethod* method) ;
// System.Void NeuralNetwork::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_Load_mA5B8179B397238BACD0632BDED05F87FD65FEA78 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NeuralNetwork>::Add(T)
inline void List_1_Add_mF27A0CF4C6E1A8737B101DCEB1844A53037424BB_inline (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* __this, NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5*, NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Manager::SortNetworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_SortNetworks_mD1DF87FBBAB4A9551BD85C79EB400A3E404C8FD5 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Bot>::.ctor()
inline void List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Bot>::Add(T)
inline void List_1_Add_m4E1873D9950267B63D106EAC5FEF25CCD3A23037_inline (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* __this, Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5*, Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Bot::UpdateFitness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_UpdateFitness_m3AAB8DCF9C7D5F8BBEA3DDBADB37D29B3539EBB9 (Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NeuralNetwork>::Sort()
inline void List_1_Sort_m740F89541FDA37EE530727CFFEE7BD97EF801F50 (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5*, const RuntimeMethod*))List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared)(__this, method);
}
// System.Void NeuralNetwork::Save(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_Save_m450B4C1B7F8541046A2B8DD17C47D66DB388AD52 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// NeuralNetwork NeuralNetwork::copy(NeuralNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* NeuralNetwork_copy_m268029B5908F2AAA85F3180DDA9579CF89A6DCCF (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* ___nn0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NeuralNetwork>::set_Item(System.Int32,T)
inline void List_1_set_Item_m94584A0BD535F5BF106DA5F9C625DF773B3D228A (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* __this, int32_t ___index0, NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5*, int32_t, NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void NeuralNetwork::Mutate(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_Mutate_m15A8049FD7B9CBE768EF0952E29C4CAE65D57860 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, int32_t ___chance0, float ___val1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NeuralNetwork>::.ctor()
inline void List_1__ctor_m6ED5F804A9F5D9764FFC9A445046EBE16A5B1545 (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void InterSceneScript::InitNetwork(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitNetwork_m2A9E78B2E9AD7DE7C7A17ADBD93E10FE901EA81B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void InterSceneScript::SaveToPlayerPrefs(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_SaveToPlayerPrefs_mCDA5C41843543B19F6E316FC06E52FEE268ED518 (String_t* ___path0, String_t* ___preTrainedNetwork1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<NeuralNetworkElement>()
inline NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void SceneTransition::SwitchToScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316 (String_t* ___nameScene0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
inline void List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, String_t*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void InterSceneScript::DeleteNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_DeleteNetwork_m1C6EFFDB93DB72D3D744C5BF073D73B71D9A9843 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MenuManager::ShareMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuManager_ShareMessage_m5A36B34BA570E85C9F273E91D7E601FC999B4665 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void MenuManager/<ShareMessage>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareMessageU3Ed__24__ctor_mA51E89A88BBCEB768D04A29C0E1011E3F7FD0B28 (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.String MenuManager::LoadAndReturnNeuralNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MenuManager_LoadAndReturnNeuralNetwork_m0036F427C8C1A696F6021CA3EFE1C4B731D3860E (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void NativeShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__ctor_m7808C679AB06B9BE0BFF3FA5FF0F7FD06C51BE6E (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) ;
// NativeShare NativeShare::SetSubject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_SetSubject_mB0E01F5228D5C868274067653497BFD0F1EF1D8A (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___subject0, const RuntimeMethod* method) ;
// NativeShare NativeShare::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_SetText_mEB89C82F62181F7754C20F3516754B81559DBA13 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void NativeShare::Share()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Share_m3DB5879D819C16FC4325D124E296F6C6CD9C13DD (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void NeuralNetwork::InitNeurons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_InitNeurons_mBB1E561268144871C52F73BBBC7F4E104AD0E5A6 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, const RuntimeMethod* method) ;
// System.Void NeuralNetwork::InitBiases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_InitBiases_mC9CAE1D3A88F3A9F2CD106F179F4F3EED8708A3B (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, const RuntimeMethod* method) ;
// System.Void NeuralNetwork::InitWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_InitWeights_m474E7D8DBEEC6085CF7F083855561BD43E5B3FFC (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, const RuntimeMethod* method) ;
// System.Single NeuralNetwork::activate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NeuralNetwork_activate_m563599D40860001AC719DC60B6C5229B00D62DB6 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890 (WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___quat1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<SceneTransition>()
inline SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* Component_GetComponent_TisSceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_mACB9D918D755F05F474CD24F5E420D532083AB9E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_m3C8F2ECFF3D48746F5E0F8D0376B2DEC4F7C9511 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void TextManager::CopyText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextManager_CopyText_m97381822D59BBDB732EE47960601ADBEAF994CB2 (TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___copyText0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 1, NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 2, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return handleRange; }
		float L_0 = __this->___handleRange_4;
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deadZone; }
		float L_0 = __this->___deadZone_5;
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388(__this, NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->___snapX_7;
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->___snapY_8;
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505(__this, L_0, NULL);
		// DeadZone = deadZone;
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19(__this, L_1, NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		// background.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_6, L_7, NULL);
		// handle.anchorMin = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_8, L_9, NULL);
		// handle.anchorMax = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_10, L_11, NULL);
		// handle.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_12, L_13, NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_12;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		__this->___cam_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___background_9;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_4, L_6, NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___background_9;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_9, (2.0f), NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_12;
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_15, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline(L_14, L_18, NULL);
		__this->___input_14 = L_19;
		// FormatInput();
		Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342(__this, NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___input_14);
		float L_21;
		L_21 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_27, L_28, NULL);
		float L_30 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_29, L_30, NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_31, NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->___deadZone_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		__this->___input_14 = L_3;
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_4;
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_3;
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___input_14);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->___input_14 = L_7;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->___axisOptions_6;
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_5;
		L_5 = Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)G_B10_0);
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)G_B18_0);
	}

IL_0073:
	{
		// return value;
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___screenPosition0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___baseRect_11;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_5, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___baseRect_11;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___background_9;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_11, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___baseRect_11;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_10, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_16, L_17, NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->___handleRange_4 = (1.0f);
		// private Vector2 input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->___moveThreshold_15;
		DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9(__this, L_0, NULL);
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->___moveThreshold_15;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_12, NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) 
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___fixedPosition_17;
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_3, NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_4, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->___moveThreshold_15;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void AddNN::Close(UnityEngine.UI.InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddNN_Close_m7851B1220A411358CE783D105C34C0E12F1273E3 (AddNN_tB768ECEEF06F3B31D0E78CF3ECBDB03B43B77C49* __this, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2479F9671485B02E74214FA4B1D52580DEAB7D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if(inputField.text.Replace(" ", "") != "")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = ___inputField0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		bool L_3;
		L_3 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// if(isNewNetwork)
		bool L_4 = __this->___isNewNetwork_6;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// string text = inputField.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = ___inputField0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_5, NULL);
		V_0 = L_6;
		// inputField.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = ___inputField0;
		NullCheck(L_7);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// _mm.SaveNewNetwork(text);
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_8 = __this->____mm_4;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		MenuManager_SaveNewNetwork_m45C65B499AC28466D90F7AF3A94AFF01FAB75B7F(L_8, L_9, NULL);
		return;
	}

IL_0048:
	{
		// string text = inputField.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_10 = ___inputField0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_10, NULL);
		V_1 = L_11;
		// inputField.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = ___inputField0;
		NullCheck(L_12);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// _mm.SaveInputNetwork(text + "\n");
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_13 = __this->____mm_4;
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_14, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		NullCheck(L_13);
		MenuManager_SaveInputNetwork_m4F025320F1365F85F18AF5206336DCEC1B4FED56(L_13, L_15, NULL);
		return;
	}

IL_0071:
	{
		// else errorPanel.OpenErrorPanel("???????? ????????? ?? ?????? ???? ?????? ??? ????????? ?????? ???????!");
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_16 = __this->___errorPanel_5;
		NullCheck(L_16);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_16, _stringLiteral2479F9671485B02E74214FA4B1D52580DEAB7D2C, NULL);
		// }
		return;
	}
}
// System.Void AddNN::NetworkSwitch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddNN_NetworkSwitch_mA202207217003CF86053571EE9ED6EB883EE095D (AddNN_tB768ECEEF06F3B31D0E78CF3ECBDB03B43B77C49* __this, bool ___where0, const RuntimeMethod* method) 
{
	{
		// isNewNetwork = where;
		bool L_0 = ___where0;
		__this->___isNewNetwork_6 = L_0;
		// }
		return;
	}
}
// System.Void AddNN::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddNN__ctor_m63DF8B51BA3BE048369343025D9D6A0F985369EA (AddNN_tB768ECEEF06F3B31D0E78CF3ECBDB03B43B77C49* __this, const RuntimeMethod* method) 
{
	{
		// private bool isNewNetwork = true;
		__this->___isNewNetwork_6 = (bool)1;
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
// System.Void Bot::Awake(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_Awake_mD18D277471EB3F736A927D7238F0805E0B2D5BB0 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// layers = layer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___layer0;
		((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___layers_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___layers_12), (void*)L_0);
		// input = new float[layers[0]];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___layers_12;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___input_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___input_13), (void*)L_4);
		// }
		return;
	}
}
// System.Void Bot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_Start_m005330420F2E312A085B61412606F80367D430E5 (Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* __this, const RuntimeMethod* method) 
{
	{
		// transform.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_0, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Bot::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_FixedUpdate_m84C47B888B0E8223160ED001E5BA0593C8766FF2 (Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	{
		// if(!stop && GetComponent<RearWheelDrive>().isBot)
		bool L_0 = __this->___stop_16;
		if (L_0)
		{
			goto IL_0268;
		}
	}
	{
		RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* L_1;
		L_1 = Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77(__this, Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___isBot_5;
		if (!L_2)
		{
			goto IL_0268;
		}
	}
	{
		// for (int i = 0; i < raysTransforms.Length; i++)
		V_1 = 0;
		goto IL_0164;
	}

IL_0022:
	{
		// Vector3 newVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_3;
		// if(i < 9) newVector = Quaternion.AngleAxis(i * 20 - 80, Vector3.up) * transform.forward;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		// if(i < 9) newVector = Quaternion.AngleAxis(i * 20 - 80, Vector3.up) * transform.forward;
		int32_t L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)20))), ((int32_t)80)))), L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_7, L_9, NULL);
		V_2 = L_10;
		goto IL_00c5;
	}

IL_0052:
	{
		// else if(i < 12) newVector = Quaternion.AngleAxis(180, Vector3.up) * transform.forward;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0079;
		}
	}
	{
		// else if(i < 12) newVector = Quaternion.AngleAxis(180, Vector3.up) * transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((180.0f), L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_13, L_15, NULL);
		V_2 = L_16;
		goto IL_00c5;
	}

IL_0079:
	{
		// else if(i < 15) newVector = Quaternion.AngleAxis(-90, Vector3.up) * transform.forward;
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)15))))
		{
			goto IL_00a0;
		}
	}
	{
		// else if(i < 15) newVector = Quaternion.AngleAxis(-90, Vector3.up) * transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((-90.0f), L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_19, L_21, NULL);
		V_2 = L_22;
		goto IL_00c5;
	}

IL_00a0:
	{
		// else if(i < 18) newVector = Quaternion.AngleAxis(90, Vector3.up) * transform.forward;
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)18))))
		{
			goto IL_00c5;
		}
	}
	{
		// else if(i < 18) newVector = Quaternion.AngleAxis(90, Vector3.up) * transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((90.0f), L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_25, L_27, NULL);
		V_2 = L_28;
	}

IL_00c5:
	{
		// Ray Ray = new Ray(raysTransforms[i].position, newVector);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_29 = __this->___raysTransforms_8;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_35), L_33, L_34, /*hidden argument*/NULL);
		// if(drawRays) Debug.DrawRay(raysTransforms[i].position, newVector * rayDistance, Color.green);
		bool L_36 = __this->___drawRays_11;
		G_B12_0 = L_35;
		if (!L_36)
		{
			G_B13_0 = L_35;
			goto IL_0103;
		}
	}
	{
		// if(drawRays) Debug.DrawRay(raysTransforms[i].position, newVector * rayDistance, Color.green);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_37 = __this->___raysTransforms_8;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_2;
		float L_43 = __this->___rayDistance_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_42, L_43, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		L_45 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_41, L_44, L_45, NULL);
		G_B13_0 = G_B12_0;
	}

IL_0103:
	{
		// if (Physics.Raycast(Ray, out hit, rayDistance, raycastMaskWalls))
		float L_46 = __this->___rayDistance_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_47 = __this->___raycastMaskWalls_7;
		int32_t L_48;
		L_48 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_47, NULL);
		bool L_49;
		L_49 = Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D(G_B13_0, (&V_3), L_46, L_48, NULL);
		if (!L_49)
		{
			goto IL_0154;
		}
	}
	{
		// if (hit.collider.gameObject != this.gameObject)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_50;
		L_50 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_3), NULL);
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_50, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_0160;
		}
	}
	{
		// input[i] = (rayDistance - hit.distance) / rayDistance;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = ((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___input_13;
		int32_t L_55 = V_1;
		float L_56 = __this->___rayDistance_10;
		float L_57;
		L_57 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_3), NULL);
		float L_58 = __this->___rayDistance_10;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (float)((float)(((float)il2cpp_codegen_subtract(L_56, L_57))/L_58)));
		goto IL_0160;
	}

IL_0154:
	{
		// input[i] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = ((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___input_13;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (float)(0.0f));
	}

IL_0160:
	{
		// for (int i = 0; i < raysTransforms.Length; i++)
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0164:
	{
		// for (int i = 0; i < raysTransforms.Length; i++)
		int32_t L_62 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_63 = __this->___raysTransforms_8;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		// input[raysTransforms.Length] = oldRotateWheels;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = ((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___input_13;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_65 = __this->___raysTransforms_8;
		NullCheck(L_65);
		float L_66 = __this->___oldRotateWheels_18;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((RuntimeArray*)L_65)->max_length))), (float)L_66);
		// input[raysTransforms.Length + 1] = Mathf.Abs(GetComponent<Rigidbody>().velocity.magnitude) / 100;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67 = ((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___input_13;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_68 = __this->___raysTransforms_8;
		NullCheck(L_68);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_69;
		L_69 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_69, NULL);
		V_4 = L_70;
		float L_71;
		L_71 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		float L_72;
		L_72 = fabsf(L_71);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_68)->max_length)), 1))), (float)((float)(L_72/(100.0f))));
		// if (transform.position.y <= 50)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		float L_75 = L_74.___y_3;
		if ((!(((float)L_75) <= ((float)(50.0f)))))
		{
			goto IL_01e5;
		}
	}
	{
		// fitness -= 5.0f;
		float L_76 = __this->___fitness_15;
		__this->___fitness_15 = ((float)il2cpp_codegen_subtract(L_76, (5.0f)));
		// stop = true;
		__this->___stop_16 = (bool)1;
	}

IL_01e5:
	{
		// float[] output = network.FeedForward(input);
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_77 = __this->___network_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = ((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___input_13;
		NullCheck(L_77);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79;
		L_79 = NeuralNetwork_FeedForward_m45AC6764E1B9DA098BAE5BD6F24787A5335918AD(L_77, L_78, NULL);
		V_0 = L_79;
		// GetComponent<RearWheelDrive>().horizontalAxis = output[0];
		RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* L_80;
		L_80 = Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77(__this, Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77_RuntimeMethod_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = 0;
		float L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_80);
		L_80->___horizontalAxis_9 = L_83;
		// GetComponent<RearWheelDrive>().verticalAxis = output[1];
		RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* L_84;
		L_84 = Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77(__this, Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77_RuntimeMethod_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86 = 1;
		float L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_84);
		L_84->___verticalAxis_10 = L_87;
		// if(output[0] != oldRotateWheels && Time.time - timeOldRotateWheels >= 0.2f)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_88 = V_0;
		NullCheck(L_88);
		int32_t L_89 = 0;
		float L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		float L_91 = __this->___oldRotateWheels_18;
		if ((((float)L_90) == ((float)L_91)))
		{
			goto IL_0288;
		}
	}
	{
		float L_92;
		L_92 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_93 = __this->___timeOldRotateWheels_17;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_92, L_93))) >= ((float)(0.200000003f)))))
		{
			goto IL_0288;
		}
	}
	{
		// fitness -= (0.3f * Mathf.Abs(output[0] - oldRotateWheels));
		float L_94 = __this->___fitness_15;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = 0;
		float L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		float L_98 = __this->___oldRotateWheels_18;
		float L_99;
		L_99 = fabsf(((float)il2cpp_codegen_subtract(L_97, L_98)));
		__this->___fitness_15 = ((float)il2cpp_codegen_subtract(L_94, ((float)il2cpp_codegen_multiply((0.300000012f), L_99))));
		// oldRotateWheels = output[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_100 = V_0;
		NullCheck(L_100);
		int32_t L_101 = 0;
		float L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		__this->___oldRotateWheels_18 = L_102;
		// timeOldRotateWheels = Time.time;
		float L_103;
		L_103 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___timeOldRotateWheels_17 = L_103;
		goto IL_0288;
	}

IL_0268:
	{
		// GetComponent<RearWheelDrive>().horizontalAxis = 0;
		RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* L_104;
		L_104 = Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77(__this, Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77_RuntimeMethod_var);
		NullCheck(L_104);
		L_104->___horizontalAxis_9 = (0.0f);
		// GetComponent<RearWheelDrive>().verticalAxis = 0;
		RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* L_105;
		L_105 = Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77(__this, Component_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m733F93DDC1ABB2A91B2C271ECF435F96A2E87B77_RuntimeMethod_var);
		NullCheck(L_105);
		L_105->___verticalAxis_10 = (0.0f);
	}

IL_0288:
	{
		// if(startProtection > 0)
		float L_106 = __this->___startProtection_9;
		if ((!(((float)L_106) > ((float)(0.0f)))))
		{
			goto IL_02b9;
		}
	}
	{
		// stop = false;
		__this->___stop_16 = (bool)0;
		// fitness = 0;
		__this->___fitness_15 = (0.0f);
		// startProtection -= Time.deltaTime;
		float L_107 = __this->___startProtection_9;
		float L_108;
		L_108 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___startProtection_9 = ((float)il2cpp_codegen_subtract(L_107, L_108));
	}

IL_02b9:
	{
		// if(Manager.IsCarControl && transform.position.y <= 50)
		bool L_109 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsCarControl_20;
		if (!L_109)
		{
			goto IL_02e8;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_110;
		L_110 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_110);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_110, NULL);
		float L_112 = L_111.___y_3;
		if ((!(((float)L_112) <= ((float)(50.0f)))))
		{
			goto IL_02e8;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113;
		L_113 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_113, NULL);
		// Manager.IsCarControl = false;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsCarControl_20 = (bool)0;
	}

IL_02e8:
	{
		// }
		return;
	}
}
// System.Void Bot::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_OnCollisionEnter_m5C625619B76F6CC6EAB111DCAC025F523B20CC33 (Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD839814FF1C77868F0EB9A98DC10F54E565DC61E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.layer == LayerMask.NameToLayer("Default") && !stop)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_4 = __this->___stop_16;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		// fitness -= 10.0f;
		float L_5 = __this->___fitness_15;
		__this->___fitness_15 = ((float)il2cpp_codegen_subtract(L_5, (10.0f)));
		// stop = true;
		__this->___stop_16 = (bool)1;
	}

IL_0038:
	{
		// if(collision.gameObject.layer == LayerMask.NameToLayer("Win") && !stop)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_7, NULL);
		int32_t L_9;
		L_9 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0070;
		}
	}
	{
		bool L_10 = __this->___stop_16;
		if (L_10)
		{
			goto IL_0070;
		}
	}
	{
		// fitness += 10.0f;
		float L_11 = __this->___fitness_15;
		__this->___fitness_15 = ((float)il2cpp_codegen_add(L_11, (10.0f)));
		// stop = true;
		__this->___stop_16 = (bool)1;
	}

IL_0070:
	{
		// if(collision.gameObject.layer == LayerMask.NameToLayer("CarsColliders") && collision.gameObject != this.gameObject && !stop)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___collision0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_12, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_13, NULL);
		int32_t L_15;
		L_15 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralD839814FF1C77868F0EB9A98DC10F54E565DC61E, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_00bb;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_16 = ___collision0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_20 = __this->___stop_16;
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		// fitness -= 10.0f;
		float L_21 = __this->___fitness_15;
		__this->___fitness_15 = ((float)il2cpp_codegen_subtract(L_21, (10.0f)));
		// stop = true;
		__this->___stop_16 = (bool)1;
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void Bot::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_OnTriggerEnter_mE3A2D030512EB85D12E562CF9570D463EB714502 (Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C456FCB856977ACBE4420BC0E7C91BC3FC234D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(collider.gameObject.layer == LayerMask.NameToLayer("Default") && !stop && Manager.training)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003f;
		}
	}
	{
		bool L_4 = __this->___stop_16;
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		bool L_5 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___training_4;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// fitness -= 10.0f;
		float L_6 = __this->___fitness_15;
		__this->___fitness_15 = ((float)il2cpp_codegen_subtract(L_6, (10.0f)));
		// stop = true;
		__this->___stop_16 = (bool)1;
	}

IL_003f:
	{
		// if(collider.gameObject.layer == LayerMask.NameToLayer("CheckPoint") && !stop)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___collider0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_8, NULL);
		int32_t L_10;
		L_10 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral3C456FCB856977ACBE4420BC0E7C91BC3FC234D7, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0102;
		}
	}
	{
		bool L_11 = __this->___stop_16;
		if (L_11)
		{
			goto IL_0102;
		}
	}
	{
		// bool isCollided = false;
		V_0 = (bool)0;
		// foreach (GameObject checkPoint in detectedCheckPoints)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___detectedCheckPoints_6;
		NullCheck(L_12);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_13;
		L_13 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_12, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008a_1;
			}

IL_0074_1:
			{
				// foreach (GameObject checkPoint in detectedCheckPoints)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
				L_14 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// if (checkPoint == collider.gameObject) isCollided = true;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15 = ___collider0;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_14, L_16, NULL);
				if (!L_17)
				{
					goto IL_008a_1;
				}
			}
			{
				// if (checkPoint == collider.gameObject) isCollided = true;
				V_0 = (bool)1;
			}

IL_008a_1:
			{
				// foreach (GameObject checkPoint in detectedCheckPoints)
				bool L_18;
				L_18 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0074_1;
				}
			}
			{
				goto IL_00a3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		// if(!isCollided)
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_0102;
		}
	}
	{
		// fitness += 5f;
		float L_20 = __this->___fitness_15;
		__this->___fitness_15 = ((float)il2cpp_codegen_add(L_20, (5.0f)));
		// if(detectedCheckPoints.Count < 2) detectedCheckPoints.Add(collider.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = __this->___detectedCheckPoints_6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_21, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_22) >= ((int32_t)2)))
		{
			goto IL_00d8;
		}
	}
	{
		// if(detectedCheckPoints.Count < 2) detectedCheckPoints.Add(collider.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = __this->___detectedCheckPoints_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24 = ___collider0;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_23);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_23, L_25, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		return;
	}

IL_00d8:
	{
		// detectedCheckPoints[1] = detectedCheckPoints[0];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___detectedCheckPoints_6;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_27 = __this->___detectedCheckPoints_6;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_27, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_26);
		List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35(L_26, 1, L_28, List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35_RuntimeMethod_var);
		// detectedCheckPoints[0] = collider.gameObject;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = __this->___detectedCheckPoints_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_30 = ___collider0;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_29);
		List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35(L_29, 0, L_31, List_1_set_Item_m53D4662B60804E1268DEDF93DC45766987395C35_RuntimeMethod_var);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void Bot::UpdateFitness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot_UpdateFitness_m3AAB8DCF9C7D5F8BBEA3DDBADB37D29B3539EBB9 (Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* __this, const RuntimeMethod* method) 
{
	{
		// network.fitness = fitness;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_0 = __this->___network_14;
		float L_1 = __this->___fitness_15;
		NullCheck(L_0);
		L_0->___fitness_5 = L_1;
		// }
		return;
	}
}
// System.Void Bot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bot__ctor_m721C9F7B447E4CD482724E545EE797CD7762B2D8 (Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> detectedCheckPoints = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___detectedCheckPoints_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___detectedCheckPoints_6), (void*)L_0);
		// public float startProtection = 1.0f;
		__this->___startProtection_9 = (1.0f);
		// public float rayDistance = 20.0f;
		__this->___rayDistance_10 = (20.0f);
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
// System.Void CarController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_FixedUpdate_mDD68416C9FFF2FE776131D6365AE9C585C973405 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 V_2;
	memset((&V_2), 0, sizeof(V_2));
	AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* V_3 = NULL;
	{
		// float motor = maxMotorTorque * Input.GetAxis("Vertical");
		float L_0 = __this->___maxMotorTorque_5;
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// float steering = maxSteeringAngle * Input.GetAxis("Horizontal");
		float L_2 = __this->___maxSteeringAngle_6;
		float L_3;
		L_3 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// foreach (AxleInfo axleInfo in axleInfos) {
		List_1_tB4E680158606E6EEE8DF94C796D5362B1294E0AC* L_4 = __this->___axleInfos_4;
		NullCheck(L_4);
		Enumerator_t2DC4426C2FF5ABF250C249DD83911644CBFE4712 L_5;
		L_5 = List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098(L_4, List_1_GetEnumerator_m0441A87EB3B480F8A116353DC19BE4A67F9EF098_RuntimeMethod_var);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4((&V_2), Enumerator_Dispose_m912F73C3021ED5413FB75B33E8A963C6B9C54CF4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0032_1:
			{
				// foreach (AxleInfo axleInfo in axleInfos) {
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_6;
				L_6 = Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_inline((&V_2), Enumerator_get_Current_m184CC562D337089E59B9EADA33477EB83E2065D9_RuntimeMethod_var);
				V_3 = L_6;
				// if (axleInfo.steering) {
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_7 = V_3;
				NullCheck(L_7);
				bool L_8 = L_7->___steering_3;
				if (!L_8)
				{
					goto IL_005a_1;
				}
			}
			{
				// axleInfo.leftWheel.steerAngle = steering;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_9 = V_3;
				NullCheck(L_9);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_10 = L_9->___leftWheel_0;
				float L_11 = V_1;
				NullCheck(L_10);
				WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3(L_10, L_11, NULL);
				// axleInfo.rightWheel.steerAngle = steering;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_12 = V_3;
				NullCheck(L_12);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_13 = L_12->___rightWheel_1;
				float L_14 = V_1;
				NullCheck(L_13);
				WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3(L_13, L_14, NULL);
			}

IL_005a_1:
			{
				// if (axleInfo.motor) {
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = L_15->___motor_2;
				if (!L_16)
				{
					goto IL_007a_1;
				}
			}
			{
				// axleInfo.leftWheel.motorTorque = motor;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_17 = V_3;
				NullCheck(L_17);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_18 = L_17->___leftWheel_0;
				float L_19 = V_0;
				NullCheck(L_18);
				WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8(L_18, L_19, NULL);
				// axleInfo.rightWheel.motorTorque = motor;
				AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* L_20 = V_3;
				NullCheck(L_20);
				WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_21 = L_20->___rightWheel_1;
				float L_22 = V_0;
				NullCheck(L_21);
				WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8(L_21, L_22, NULL);
			}

IL_007a_1:
			{
				// foreach (AxleInfo axleInfo in axleInfos) {
				bool L_23;
				L_23 = Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274((&V_2), Enumerator_MoveNext_m30756AE17D8653440CC89792EDD133418FDFF274_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void CarController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController__ctor_mED29536AC2B7697D76B32073704A86307FDCA1FF (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
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
// System.Void AxleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxleInfo__ctor_m6AEBB35270D53694D8D51B412507D9A53E7CFC08 (AxleInfo_tEC75498AEBD5C8A2E983F25BAC16954502E371F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void EasySuspension::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasySuspension_Update_mF1E31BADFDD3E2D85574556ACF6ACEAB904BAE45 (EasySuspension_tCE97CB54C324C3A222B4D761E2501A692505B39E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* V_0 = NULL;
	int32_t V_1 = 0;
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* V_2 = NULL;
	JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// foreach (WheelCollider wc in GetComponentsInChildren<WheelCollider>()) {
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_0;
		L_0 = Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC(__this, Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00f3;
	}

IL_000e:
	{
		// foreach (WheelCollider wc in GetComponentsInChildren<WheelCollider>()) {
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// JointSpring spring = wc.suspensionSpring;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_5 = V_2;
		NullCheck(L_5);
		JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 L_6;
		L_6 = WheelCollider_get_suspensionSpring_m046582E587BF5AC228C2022D25A822BC4B4B9543(L_5, NULL);
		V_3 = L_6;
		// spring.spring = Mathf.Pow(Mathf.Sqrt(wc.sprungMass) * naturalFrequency, 2);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_7 = V_2;
		NullCheck(L_7);
		float L_8;
		L_8 = WheelCollider_get_sprungMass_m68CE93EA82BB593FEFE5E68AC4EBF4611B55336B(L_7, NULL);
		float L_9;
		L_9 = sqrtf(L_8);
		float L_10 = __this->___naturalFrequency_4;
		float L_11;
		L_11 = powf(((float)il2cpp_codegen_multiply(L_9, L_10)), (2.0f));
		(&V_3)->___spring_0 = L_11;
		// spring.damper = 2 * dampingRatio * Mathf.Sqrt(spring.spring * wc.sprungMass);
		float L_12 = __this->___dampingRatio_5;
		JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 L_13 = V_3;
		float L_14 = L_13.___spring_0;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_15 = V_2;
		NullCheck(L_15);
		float L_16;
		L_16 = WheelCollider_get_sprungMass_m68CE93EA82BB593FEFE5E68AC4EBF4611B55336B(L_15, NULL);
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_multiply(L_14, L_16)));
		(&V_3)->___damper_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_12)), L_17));
		// wc.suspensionSpring = spring;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_18 = V_2;
		JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 L_19 = V_3;
		NullCheck(L_18);
		WheelCollider_set_suspensionSpring_m2E4ACAB8BE03081A58E217DAE84819CFA51A82B7(L_18, L_19, NULL);
		// Vector3 wheelRelativeBody = transform.InverseTransformPoint(wc.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_21 = V_2;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_20, L_23, NULL);
		V_4 = L_24;
		// float distance = GetComponent<Rigidbody>().centerOfMass.y - wheelRelativeBody.y + wc.radius;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25;
		L_25 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Rigidbody_get_centerOfMass_mA66BE4DE0469545EBCF49A66EE4FDD3A5D0ADF91(L_25, NULL);
		float L_27 = L_26.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		float L_29 = L_28.___y_3;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_30 = V_2;
		NullCheck(L_30);
		float L_31;
		L_31 = WheelCollider_get_radius_m68CC3DE301E0C6226E85F99D853365DA1244CD1F(L_30, NULL);
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_27, L_29)), L_31));
		// wc.forceAppPointDistance = distance - forceShift;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_32 = V_2;
		float L_33 = V_5;
		float L_34 = __this->___forceShift_6;
		NullCheck(L_32);
		WheelCollider_set_forceAppPointDistance_m115F21BA7FB72B5006506B77F12DE97E4E497CDB(L_32, ((float)il2cpp_codegen_subtract(L_33, L_34)), NULL);
		// if (spring.targetPosition > 0 && setSuspensionDistance)
		JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 L_35 = V_3;
		float L_36 = L_35.___targetPosition_2;
		if ((!(((float)L_36) > ((float)(0.0f)))))
		{
			goto IL_00ef;
		}
	}
	{
		bool L_37 = __this->___setSuspensionDistance_7;
		if (!L_37)
		{
			goto IL_00ef;
		}
	}
	{
		// wc.suspensionDistance = wc.sprungMass * Physics.gravity.magnitude / (spring.targetPosition * spring.spring);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_38 = V_2;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_39 = V_2;
		NullCheck(L_39);
		float L_40;
		L_40 = WheelCollider_get_sprungMass_m68CE93EA82BB593FEFE5E68AC4EBF4611B55336B(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		V_6 = L_41;
		float L_42;
		L_42 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 L_43 = V_3;
		float L_44 = L_43.___targetPosition_2;
		JointSpring_t5223C53C8742463D5615BE8E9772EC0EE2EBBBD5 L_45 = V_3;
		float L_46 = L_45.___spring_0;
		NullCheck(L_38);
		WheelCollider_set_suspensionDistance_mED5D19A954DD3C7030B4D336466BF0EA1BB20348(L_38, ((float)(((float)il2cpp_codegen_multiply(L_40, L_42))/((float)il2cpp_codegen_multiply(L_44, L_46)))), NULL);
	}

IL_00ef:
	{
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00f3:
	{
		// foreach (WheelCollider wc in GetComponentsInChildren<WheelCollider>()) {
		int32_t L_48 = V_1;
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_49 = V_0;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EasySuspension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasySuspension__ctor_mBDFAF84CC92A9F0B03B995FD5D237F5A97E53D61 (EasySuspension_tCE97CB54C324C3A222B4D761E2501A692505B39E* __this, const RuntimeMethod* method) 
{
	{
		// public float naturalFrequency = 10;
		__this->___naturalFrequency_4 = (10.0f);
		// public float dampingRatio = 0.8f;
		__this->___dampingRatio_5 = (0.800000012f);
		// public float forceShift = 0.03f;
		__this->___forceShift_6 = (0.0299999993f);
		// public bool setSuspensionDistance = true;
		__this->___setSuspensionDistance_7 = (bool)1;
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
// System.Void ErrorPanel::OpenErrorPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078 (ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	{
		// errorText.text = error;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___errorText_4;
		String_t* L_1 = ___error0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ErrorPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorPanel__ctor_m96C041E74E77E2386E668185DCC2E8AA4509386F (ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* __this, const RuntimeMethod* method) 
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
// System.Void InterSceneScript::InitNetwork(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitNetwork_m2A9E78B2E9AD7DE7C7A17ADBD93E10FE901EA81B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Bot.Awake(layers);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___layers0;
		Bot_Awake_mD18D277471EB3F736A927D7238F0805E0B2D5BB0(L_0, NULL);
		// InterSceneScript.layers = layers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___layers0;
		((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5), (void*)L_1);
		// InterSceneScript.InitNeurons();
		InterSceneScript_InitNeurons_m7C248C5B9738D8DCD54ECE3C69A2DD540920AE12(NULL);
		// InterSceneScript.InitBiases();
		InterSceneScript_InitBiases_m32434D6217E328763C9625E06B9799C0A09ADE63(NULL);
		// InterSceneScript.InitWeights();
		InterSceneScript_InitWeights_m47C4B6F8CC53762D0CEFC4D661FCD68BFAE2C7C4(NULL);
		// }
		return;
	}
}
// System.Void InterSceneScript::InitNeurons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitNeurons_m7C248C5B9738D8DCD54ECE3C69A2DD540920AE12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<float[]> neuronsList = new List<float[]>();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_0 = (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*)il2cpp_codegen_object_new(List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347(L_0, List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < layers.Length; i++)
		V_1 = 0;
		goto IL_0020;
	}

IL_000a:
	{
		// neuronsList.Add(new float[layers[i]]);
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		NullCheck(L_1);
		List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_inline(L_1, L_6, List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0020:
	{
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_8 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// neurons = neuronsList.ToArray();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_10 = V_0;
		NullCheck(L_10);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_11;
		L_11 = List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0(L_10, List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___neurons_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___neurons_6), (void*)L_11);
		// }
		return;
	}
}
// System.Void InterSceneScript::InitBiases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitBiases_m32434D6217E328763C9625E06B9799C0A09ADE63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* V_0 = NULL;
	int32_t V_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// List<float[]> biasList = new List<float[]>();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_0 = (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*)il2cpp_codegen_object_new(List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347(L_0, List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < layers.Length; i++)
		V_1 = 0;
		goto IL_0046;
	}

IL_000a:
	{
		// float[] bias = new float[layers[i]];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		// for (int j = 0; j < layers[i]; j++)
		V_3 = 0;
		goto IL_0031;
	}

IL_001b:
	{
		// bias[j] = UnityEngine.Random.Range(-0.5f, 0.5f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_2;
		int32_t L_7 = V_3;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		// for (int j = 0; j < layers[i]; j++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		// for (int j = 0; j < layers[i]; j++)
		int32_t L_10 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) < ((int32_t)L_14)))
		{
			goto IL_001b;
		}
	}
	{
		// biasList.Add(bias);
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_15 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_2;
		NullCheck(L_15);
		List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_inline(L_15, L_16, List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// biases = biasList.ToArray();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_20 = V_0;
		NullCheck(L_20);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_21;
		L_21 = List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0(L_20, List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7), (void*)L_21);
		// }
		return;
	}
}
// System.Void InterSceneScript::InitWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_InitWeights_m47C4B6F8CC53762D0CEFC4D661FCD68BFAE2C7C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// List<float[][]> weightsList = new List<float[][]>();
		List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* L_0 = (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF*)il2cpp_codegen_object_new(List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F(L_0, List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 1; i < layers.Length; i++)
		V_1 = 1;
		goto IL_0076;
	}

IL_000a:
	{
		// List<float[]> layerWeightsList = new List<float[]>();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_1 = (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*)il2cpp_codegen_object_new(List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347(L_1, List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		V_2 = L_1;
		// int neuronsInPreviousLayer = layers[i - 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// for (int j = 0; j < neurons[i].Length; j++)
		V_4 = 0;
		goto IL_0059;
	}

IL_001f:
	{
		// float[] neuronWeights = new float[neuronsInPreviousLayer];
		int32_t L_6 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_5 = L_7;
		// for (int k = 0; k < neuronsInPreviousLayer; k++)
		V_6 = 0;
		goto IL_0046;
	}

IL_002c:
	{
		// neuronWeights[k] = UnityEngine.Random.Range(-0.5f, 0.5f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_5;
		int32_t L_9 = V_6;
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)L_10);
		// for (int k = 0; k < neuronsInPreviousLayer; k++)
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0046:
	{
		// for (int k = 0; k < neuronsInPreviousLayer; k++)
		int32_t L_12 = V_6;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002c;
		}
	}
	{
		// layerWeightsList.Add(neuronWeights);
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_14 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = V_5;
		NullCheck(L_14);
		List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_inline(L_14, L_15, List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		// for (int j = 0; j < neurons[i].Length; j++)
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0059:
	{
		// for (int j = 0; j < neurons[i].Length; j++)
		int32_t L_17 = V_4;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_18 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___neurons_6;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// weightsList.Add(layerWeightsList.ToArray());
		List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* L_22 = V_0;
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_23 = V_2;
		NullCheck(L_23);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_24;
		L_24 = List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0(L_23, List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		NullCheck(L_22);
		List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_inline(L_22, L_24, List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_RuntimeMethod_var);
		// for (int i = 1; i < layers.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0076:
	{
		// for (int i = 1; i < layers.Length; i++)
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___layers_5;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// weights = weightsList.ToArray();
		List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* L_28 = V_0;
		NullCheck(L_28);
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_29;
		L_29 = List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8(L_28, List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8_RuntimeMethod_var);
		((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8), (void*)L_29);
		// }
		return;
	}
}
// System.String InterSceneScript::GetPathWithNetworkName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90FB18D5D024A120560C39771C5741027E1E2963);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC580A37DDEA4536BC6FE5DDBCACFBAD1F8A860);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string path = new string("");
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0;
		L_0 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		String_t* L_1;
		L_1 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_0, NULL);
		V_0 = L_1;
		// if(name == "???????") return "BASE_BOT_NN";
		String_t* L_2 = ___name0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// if(name == "???????") return "BASE_BOT_NN";
		return _stringLiteralBDC580A37DDEA4536BC6FE5DDBCACFBAD1F8A860;
	}

IL_0023:
	{
		// for (int a = 0; a < maxNeuralNetworksCount; a++)
		V_1 = 0;
		goto IL_005b;
	}

IL_0027:
	{
		// string botNNName = PlayerPrefs.GetString(a.ToString() + "_BOT_NN_NAME");
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, _stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5, NULL);
		String_t* L_6;
		L_6 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_5, NULL);
		// if(botNNName == name) path = a.ToString() + "_BOT_NN";
		String_t* L_7 = ___name0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// if(botNNName == name) path = a.ToString() + "_BOT_NN";
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_9, _stringLiteral90FB18D5D024A120560C39771C5741027E1E2963, NULL);
		V_0 = L_10;
	}

IL_0057:
	{
		// for (int a = 0; a < maxNeuralNetworksCount; a++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005b:
	{
		// for (int a = 0; a < maxNeuralNetworksCount; a++)
		int32_t L_12 = V_1;
		int32_t L_13 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___maxNeuralNetworksCount_4;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0027;
		}
	}
	{
		// return path;
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Void InterSceneScript::DeleteNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_DeleteNetwork_m1C6EFFDB93DB72D3D744C5BF073D73B71D9A9843 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// for (int i = 0; i < MenuManager.networksCount; i++)
		V_0 = 0;
		goto IL_00b6;
	}

IL_0007:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if(path == GetPathWithNetworkName(MenuManager.namesNN[i]))
			String_t* L_0 = ___path0;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
			int32_t L_2 = V_0;
			NullCheck(L_1);
			String_t* L_3;
			L_3 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_1, L_2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			String_t* L_4;
			L_4 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_3, NULL);
			bool L_5;
			L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_4, NULL);
			if (!L_5)
			{
				goto IL_00ad_1;
			}
		}
		{
			// Destroy(MenuManager.networksList[i]);
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
			int32_t L_7 = V_0;
			NullCheck(L_6);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
			L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
			// MenuManager.namesNN.RemoveAt(i);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
			int32_t L_10 = V_0;
			NullCheck(L_9);
			List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_9, L_10, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
			// MenuManager.networksList.RemoveAt(i);
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
			int32_t L_12 = V_0;
			NullCheck(L_11);
			List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_11, L_12, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
			// PlayerPrefs.DeleteKey(path + "_NAME");
			String_t* L_13 = ___path0;
			String_t* L_14;
			L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_13, _stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560, NULL);
			PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_14, NULL);
			// PlayerPrefs.DeleteKey(path + "_STEPS");
			String_t* L_15 = ___path0;
			String_t* L_16;
			L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_15, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
			PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_16, NULL);
			// int num = 0;
			V_1 = 0;
		}

IL_006b_1:
		{
			// if(PlayerPrefs.HasKey(path + "_" + num.ToString())) PlayerPrefs.DeleteKey(path + "_" + i.ToString());
			String_t* L_17 = ___path0;
			String_t* L_18;
			L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
			String_t* L_19;
			L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_17, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_18, NULL);
			bool L_20;
			L_20 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_19, NULL);
			if (!L_20)
			{
				goto IL_00a1_1;
			}
		}
		{
			// if(PlayerPrefs.HasKey(path + "_" + num.ToString())) PlayerPrefs.DeleteKey(path + "_" + i.ToString());
			String_t* L_21 = ___path0;
			String_t* L_22;
			L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
			String_t* L_23;
			L_23 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_21, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_22, NULL);
			PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_23, NULL);
			// num++;
			int32_t L_24 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
			// while (true)
			goto IL_006b_1;
		}

IL_00a1_1:
		{
			// MenuManager.networksCount--;
			int32_t L_25 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
			((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		}

IL_00ad_1:
		{
			// }
			goto IL_00b2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00af;
		}
		throw e;
	}

CATCH_00af:
	{// begin catch(System.Object)
		// catch
		// break;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c1;
	}// end catch (depth: 1)

IL_00b2:
	{
		// for (int i = 0; i < MenuManager.networksCount; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00b6:
	{
		// for (int i = 0; i < MenuManager.networksCount; i++)
		int32_t L_27 = V_0;
		int32_t L_28 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0007;
		}
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void InterSceneScript::Save(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_Save_m15327CE35B7F1862D5460BB24EE214972265767F (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int lineNum = 0;
		V_0 = 0;
		// for (int i = 0; i < biases.Length; i++)
		V_1 = 0;
		goto IL_004b;
	}

IL_0006:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		V_2 = 0;
		goto IL_003b;
	}

IL_000a:
	{
		// PlayerPrefs.SetString(path + "_" + lineNum.ToString(), biases[i][j].ToString());
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_1, NULL);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_3 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_2;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_2, L_8, NULL);
		// lineNum++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_11 = V_2;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_12 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_17 = V_1;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_18 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		V_3 = 0;
		goto IL_00c1;
	}

IL_0059:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		V_4 = 0;
		goto IL_00b0;
	}

IL_005e:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		V_5 = 0;
		goto IL_009a;
	}

IL_0063:
	{
		// PlayerPrefs.SetString(path + "_" + lineNum.ToString(), weights[i][j][k].ToString());
		String_t* L_19 = ___path0;
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_21;
		L_21 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_19, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_20, NULL);
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_22 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_5;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_21, L_30, NULL);
		// lineNum++;
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_009a:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_33 = V_5;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_34 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b0:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_42 = V_4;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_43 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00c1:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_48 = V_3;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_49 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InterSceneScript::SaveToPlayerPrefs(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript_SaveToPlayerPrefs_mCDA5C41843543B19F6E316FC06E52FEE268ED518 (String_t* ___path0, String_t* ___preTrainedNetwork1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int NumberOfLines = preTrainedNetwork.Split(new char[] { '\n' }).Length - 1;
		String_t* L_0 = ___preTrainedNetwork1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		NullCheck(L_3);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1));
		// string[] ListLines = new string[NumberOfLines];
		int32_t L_4 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// int index = 0;
		V_2 = 0;
		// for (int i = 0; i < NumberOfLines; i++)
		V_3 = 0;
		goto IL_003d;
	}

IL_0023:
	{
		// ListLines[i] = preTrainedNetwork.Split(new char[] { '\n' })[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		int32_t L_7 = V_3;
		String_t* L_8 = ___preTrainedNetwork1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_8, L_10, NULL);
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_14);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (String_t*)L_14);
		// for (int i = 0; i < NumberOfLines; i++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < NumberOfLines; i++)
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0023;
		}
	}
	{
		// if (NumberOfLines > 0)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		V_4 = 0;
		goto IL_0083;
	}

IL_004d:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		V_5 = 0;
		goto IL_006f;
	}

IL_0052:
	{
		// biases[i][j] = float.Parse(ListLines[index]);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_19 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		float L_28;
		L_28 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_27, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (float)L_28);
		// index++;
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_006f:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_31 = V_5;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_32 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0052;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0083:
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_37 = V_4;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_38 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___biases_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_004d;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		V_6 = 0;
		goto IL_00e8;
	}

IL_0093:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		V_7 = 0;
		goto IL_00d4;
	}

IL_0098:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		V_8 = 0;
		goto IL_00bd;
	}

IL_009d:
	{
		// weights[i][j][k] = float.Parse(ListLines[index]);
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_39 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = V_7;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int32_t L_46 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		String_t* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		float L_51;
		L_51 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_50, NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (float)L_51);
		// index++;
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00bd:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_54 = V_8;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_55 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = V_7;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_009d;
		}
	}
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_62 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_00d4:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_63 = V_7;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_64 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		int32_t L_65 = V_6;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		if ((((int32_t)L_63) < ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))))
		{
			goto IL_0098;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_68 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_00e8:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_69 = V_6;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_70 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___weights_8;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0093;
		}
	}

IL_00f3:
	{
		// Save(path);
		String_t* L_71 = ___path0;
		InterSceneScript_Save_m15327CE35B7F1862D5460BB24EE214972265767F(L_71, NULL);
		// }
		return;
	}
}
// System.Void InterSceneScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterSceneScript__ctor_m61075A8F5A2E00B476CA46EEC947F818BE20D563 (InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF* __this, const RuntimeMethod* method) 
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
// System.Void Manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Start_m6020E6CFF13BDC27498882840D6AE9674E482BB8 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000C3B7B429AFE76248F40BCECA77D092451B2F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AA02CB44FADA734B49B912EEA10A0C0C274B00F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7506C7E0F2FD6A933DEBFA6ECD86A628630F5E36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF531D046A207DC84DE58B98A999E7EFD63F7AA66);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// layers = Bot.layers;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_StaticFields*)il2cpp_codegen_static_fields_for(Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_il2cpp_TypeInfo_var))->___layers_12;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___layers_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___layers_16), (void*)L_0);
		// if(PlayerPrefs.GetInt("TRANING") == 0) training = false;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral7506C7E0F2FD6A933DEBFA6ECD86A628630F5E36, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if(PlayerPrefs.GetInt("TRANING") == 0) training = false;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___training_4 = (bool)0;
		goto IL_0024;
	}

IL_001e:
	{
		// else training = true;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___training_4 = (bool)1;
	}

IL_0024:
	{
		// neuralNetworkName = PlayerPrefs.GetString("SELECTED_BOT_NN");
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteralF531D046A207DC84DE58B98A999E7EFD63F7AA66, NULL);
		__this->___neuralNetworkName_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___neuralNetworkName_26), (void*)L_2);
		// InitNetworks();
		Manager_InitNetworks_mAC151AA8F495AC21AFF80BD8214570B4A7349AE0(__this, NULL);
		// if (training) InvokeRepeating("CreateBots", 0, timeFrame);
		bool L_3 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___training_4;
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (training) InvokeRepeating("CreateBots", 0, timeFrame);
		float L_4 = __this->___timeFrame_5;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral5AA02CB44FADA734B49B912EEA10A0C0C274B00F, (0.0f), L_4, NULL);
		goto IL_005f;
	}

IL_0059:
	{
		// else CreateBots();
		Manager_CreateBots_m4E314307B81902079274FAF71BFADC8CA1FD65FF(__this, NULL);
	}

IL_005f:
	{
		// string path = InterSceneScript.GetPathWithNetworkName(neuralNetworkName);
		String_t* L_5 = __this->___neuralNetworkName_26;
		String_t* L_6;
		L_6 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_5, NULL);
		V_0 = L_6;
		// if(!PlayerPrefs.HasKey(path + "_STEPS"))
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_7, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		bool L_9;
		L_9 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_8, NULL);
		if (L_9)
		{
			goto IL_00b0;
		}
	}
	{
		// if(neuralNetworkName == "???????") PlayerPrefs.SetInt("BASE_BOT_NN_STEPS", 25370);
		String_t* L_10 = __this->___neuralNetworkName_26;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1, NULL);
		if (!L_11)
		{
			goto IL_009f;
		}
	}
	{
		// if(neuralNetworkName == "???????") PlayerPrefs.SetInt("BASE_BOT_NN_STEPS", 25370);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral000C3B7B429AFE76248F40BCECA77D092451B2F0, ((int32_t)25370), NULL);
		return;
	}

IL_009f:
	{
		// else PlayerPrefs.SetInt(path + "_STEPS", 0);
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_12, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_13, 0, NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Update_m1B1B140132649617A2D7FF870578110CF3A49AF1 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m00773415464B87E7E16F7496F5FBC89E5F381ABE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04239476C79884D5EF86CD59947F9AB560C066C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFFEDBDB17E12B860DA2497D5A047AC22FD135B5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if(Input.GetKey(KeyCode.Escape)) Application.Quit();
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(Input.GetKey(KeyCode.Escape)) Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_000e:
	{
		// if(training == false && bots != null)
		bool L_1 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___training_4;
		if (L_1)
		{
			goto IL_0151;
		}
	}
	{
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_2 = __this->___bots_22;
		if (!L_2)
		{
			goto IL_0151;
		}
	}
	{
		// for (int i = 0; i < bots.Count; i++)
		V_0 = 0;
		goto IL_0140;
	}

IL_002a:
	{
		// if(bots[i].stop)
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_3 = __this->___bots_22;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_5;
		L_5 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_3, L_4, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = L_5->___stop_16;
		if (!L_6)
		{
			goto IL_013c;
		}
	}
	{
		// GameObject.Destroy(bots[i].gameObject);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_7 = __this->___bots_22;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_9;
		L_9 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_7, L_8, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
		// Bot bot = (Instantiate(prefabs[i], spawnPoints[i]).GetComponent<Bot>());
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___prefabs_7;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___spawnPoints_8;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_14, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_19);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_20;
		L_20 = GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7(L_19, GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7_RuntimeMethod_var);
		V_1 = L_20;
		// bot.network = networks[i];
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_21 = V_1;
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_22 = __this->___networks_21;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_24;
		L_24 = List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6(L_22, L_23, List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		NullCheck(L_21);
		L_21->___network_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___network_14), (void*)L_24);
		// bots[i] = bot;
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_25 = __this->___bots_22;
		int32_t L_26 = V_0;
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_27 = V_1;
		NullCheck(L_25);
		List_1_set_Item_m00773415464B87E7E16F7496F5FBC89E5F381ABE(L_25, L_26, L_27, List_1_set_Item_m00773415464B87E7E16F7496F5FBC89E5F381ABE_RuntimeMethod_var);
		// if(!IsCarControl)
		bool L_28 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsCarControl_20;
		if (L_28)
		{
			goto IL_013c;
		}
	}
	{
		// if(isCameraFollowing)
		bool L_29 = __this->___isCameraFollowing_25;
		if (!L_29)
		{
			goto IL_00f0;
		}
	}
	{
		// vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___vCam1_9;
		NullCheck(L_30);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_31;
		L_31 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_30, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_32 = __this->___bots_22;
		int32_t L_33 = __this->___followingBot_24;
		NullCheck(L_32);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_34;
		L_34 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_32, L_33, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_31, L_35);
		// vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___vCam1_9;
		NullCheck(L_36);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_37;
		L_37 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_36, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_38 = __this->___bots_22;
		int32_t L_39 = __this->___followingBot_24;
		NullCheck(L_38);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_40;
		L_40 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_38, L_39, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		NullCheck(L_37);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_37, L_41);
		goto IL_013c;
	}

IL_00f0:
	{
		// vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___vCam2_10;
		NullCheck(L_42);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_43;
		L_43 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_42, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_44 = __this->___bots_22;
		int32_t L_45 = __this->___followingBot_24;
		NullCheck(L_44);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_46;
		L_46 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_44, L_45, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = L_46->___followPos_4;
		NullCheck(L_43);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_43, L_47);
		// vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___vCam2_10;
		NullCheck(L_48);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_49;
		L_49 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_48, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_50 = __this->___bots_22;
		int32_t L_51 = __this->___followingBot_24;
		NullCheck(L_50);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_52;
		L_52 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_50, L_51, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = L_52->___lookPos_5;
		NullCheck(L_49);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_49, L_53);
	}

IL_013c:
	{
		// for (int i = 0; i < bots.Count; i++)
		int32_t L_54 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0140:
	{
		// for (int i = 0; i < bots.Count; i++)
		int32_t L_55 = V_0;
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_56 = __this->___bots_22;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_inline(L_56, List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_002a;
		}
	}

IL_0151:
	{
		// if(bots.Count != 0)
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_58 = __this->___bots_22;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_inline(L_58, List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		if (!L_59)
		{
			goto IL_01c5;
		}
	}
	{
		// numOfStepsText.text = "?????: " + PlayerPrefs.GetInt(InterSceneScript.GetPathWithNetworkName(neuralNetworkName) + "_STEPS").ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = __this->___numOfStepsText_12;
		String_t* L_61 = __this->___neuralNetworkName_26;
		String_t* L_62;
		L_62 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_61, NULL);
		String_t* L_63;
		L_63 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_62, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		int32_t L_64;
		L_64 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_63, NULL);
		V_2 = L_64;
		String_t* L_65;
		L_65 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_66;
		L_66 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB04239476C79884D5EF86CD59947F9AB560C066C, L_65, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, L_66);
		// botFitnessText.text = "Fitness: " + bots[followingBot].fitness.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_67 = __this->___botFitnessText_13;
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_68 = __this->___bots_22;
		int32_t L_69 = __this->___followingBot_24;
		NullCheck(L_68);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_70;
		L_70 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_68, L_69, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_70);
		float* L_71 = (&L_70->___fitness_15);
		String_t* L_72;
		L_72 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_71, NULL);
		String_t* L_73;
		L_73 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBFFEDBDB17E12B860DA2497D5A047AC22FD135B5, L_72, NULL);
		NullCheck(L_67);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_67, L_73);
	}

IL_01c5:
	{
		// if(lights[0].GetComponent<Light>().intensity > 0) for (int i = 1; i < lights.Length; i++) lights[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = __this->___lights_14;
		NullCheck(L_74);
		int32_t L_75 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_77;
		L_77 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_76, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_77);
		float L_78;
		L_78 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_77, NULL);
		if ((!(((float)L_78) > ((float)(0.0f)))))
		{
			goto IL_0201;
		}
	}
	{
		// if(lights[0].GetComponent<Light>().intensity > 0) for (int i = 1; i < lights.Length; i++) lights[i].SetActive(false);
		V_3 = 1;
		goto IL_01f4;
	}

IL_01e2:
	{
		// if(lights[0].GetComponent<Light>().intensity > 0) for (int i = 1; i < lights.Length; i++) lights[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_79 = __this->___lights_14;
		int32_t L_80 = V_3;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_82, (bool)0, NULL);
		// if(lights[0].GetComponent<Light>().intensity > 0) for (int i = 1; i < lights.Length; i++) lights[i].SetActive(false);
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_01f4:
	{
		// if(lights[0].GetComponent<Light>().intensity > 0) for (int i = 1; i < lights.Length; i++) lights[i].SetActive(false);
		int32_t L_84 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_85 = __this->___lights_14;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_0227;
	}

IL_0201:
	{
		// else for (int i = 1; i < lights.Length; i++) lights[i].SetActive(true);
		V_4 = 1;
		goto IL_021b;
	}

IL_0206:
	{
		// else for (int i = 1; i < lights.Length; i++) lights[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_86 = __this->___lights_14;
		int32_t L_87 = V_4;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_89);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_89, (bool)1, NULL);
		// else for (int i = 1; i < lights.Length; i++) lights[i].SetActive(true);
		int32_t L_90 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_021b:
	{
		// else for (int i = 1; i < lights.Length; i++) lights[i].SetActive(true);
		int32_t L_91 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_92 = __this->___lights_14;
		NullCheck(L_92);
		if ((((int32_t)L_91) < ((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length)))))
		{
			goto IL_0206;
		}
	}

IL_0227:
	{
		// if(IsUpCamera)
		bool L_93 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsUpCamera_19;
		if (!L_93)
		{
			goto IL_0254;
		}
	}
	{
		// vCam1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = __this->___vCam1_9;
		NullCheck(L_94);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_94, (bool)0, NULL);
		// vCam2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = __this->___vCam2_10;
		NullCheck(L_95);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_95, (bool)0, NULL);
		// vCam3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___vCam3_11;
		NullCheck(L_96);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_96, (bool)1, NULL);
		goto IL_02a1;
	}

IL_0254:
	{
		// else if(!IsCarControl)
		bool L_97 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsCarControl_20;
		if (L_97)
		{
			goto IL_02a1;
		}
	}
	{
		// vCam3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = __this->___vCam3_11;
		NullCheck(L_98);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_98, (bool)0, NULL);
		// if(isCameraFollowing)
		bool L_99 = __this->___isCameraFollowing_25;
		if (!L_99)
		{
			goto IL_0289;
		}
	}
	{
		// vCam1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = __this->___vCam1_9;
		NullCheck(L_100);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_100, (bool)1, NULL);
		// vCam2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___vCam2_10;
		NullCheck(L_101);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_101, (bool)0, NULL);
		goto IL_02a1;
	}

IL_0289:
	{
		// vCam1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___vCam1_9;
		NullCheck(L_102);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_102, (bool)0, NULL);
		// vCam2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103 = __this->___vCam2_10;
		NullCheck(L_103);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_103, (bool)1, NULL);
	}

IL_02a1:
	{
		// if(IsCarControl) myCar.GetComponent<RearWheelDrive>().horizontalAxis = rotateWheelsBotJoystick.Horizontal;
		bool L_104 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsCarControl_20;
		if (!L_104)
		{
			goto IL_02c3;
		}
	}
	{
		// if(IsCarControl) myCar.GetComponent<RearWheelDrive>().horizontalAxis = rotateWheelsBotJoystick.Horizontal;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_105 = __this->___myCar_23;
		NullCheck(L_105);
		RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* L_106;
		L_106 = GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB(L_105, GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB_RuntimeMethod_var);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_107 = __this->___rotateWheelsBotJoystick_15;
		NullCheck(L_107);
		float L_108;
		L_108 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_107, NULL);
		NullCheck(L_106);
		L_106->___horizontalAxis_9 = L_108;
	}

IL_02c3:
	{
		// }
		return;
	}
}
// System.Void Manager::InitNetworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_InitNetworks_mAC151AA8F495AC21AFF80BD8214570B4A7349AE0 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF27A0CF4C6E1A8737B101DCEB1844A53037424BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// NeuralNetwork net = new NeuralNetwork(layers);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___layers_16;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_1 = (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B*)il2cpp_codegen_object_new(NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NeuralNetwork__ctor_m5656B82812F0168ED97841E7D96015CE1A26356F(L_1, L_0, NULL);
		V_0 = L_1;
		// net.Load(InterSceneScript.GetPathWithNetworkName(neuralNetworkName));
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_2 = V_0;
		String_t* L_3 = __this->___neuralNetworkName_26;
		String_t* L_4;
		L_4 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_3, NULL);
		NullCheck(L_2);
		NeuralNetwork_Load_mA5B8179B397238BACD0632BDED05F87FD65FEA78(L_2, L_4, NULL);
		// for (int i = 0; i < populationSize; i++)
		V_1 = 0;
		goto IL_0030;
	}

IL_0020:
	{
		// networks.Add(net);
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_5 = __this->___networks_21;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mF27A0CF4C6E1A8737B101DCEB1844A53037424BB_inline(L_5, L_6, List_1_Add_mF27A0CF4C6E1A8737B101DCEB1844A53037424BB_RuntimeMethod_var);
		// for (int i = 0; i < populationSize; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < populationSize; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___populationSize_6;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Manager::CreateBots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_CreateBots_m4E314307B81902079274FAF71BFADC8CA1FD65FF (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E1873D9950267B63D106EAC5FEF25CCD3A23037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEFC918FE9976925239212560D1CAA350A553BEA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* V_2 = NULL;
	{
		// if (bots.Count != 0)
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_0 = __this->___bots_22;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_inline(L_0, List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		// for (int i = 0; i < bots.Count; i++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0011:
	{
		// GameObject.Destroy(bots[i].gameObject);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_2 = __this->___bots_22;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_4;
		L_4 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_2, L_3, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// for (int i = 0; i < bots.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < bots.Count; i++)
		int32_t L_7 = V_0;
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_8 = __this->___bots_22;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_inline(L_8, List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0011;
		}
	}
	{
		// SortNetworks();
		Manager_SortNetworks_mD1DF87FBBAB4A9551BD85C79EB400A3E404C8FD5(__this, NULL);
		// bots = new List<Bot>();
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_10 = (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5*)il2cpp_codegen_object_new(List_1_tEFC918FE9976925239212560D1CAA350A553BEA5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F(L_10, List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F_RuntimeMethod_var);
		__this->___bots_22 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bots_22), (void*)L_10);
		// string path = InterSceneScript.GetPathWithNetworkName(neuralNetworkName) + "_STEPS";
		String_t* L_11 = __this->___neuralNetworkName_26;
		String_t* L_12;
		L_12 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_12, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		// PlayerPrefs.SetInt(path, PlayerPrefs.GetInt(path) + 1);
		String_t* L_14 = L_13;
		int32_t L_15;
		L_15 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_14, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
	}

IL_006c:
	{
		// for (int i = 0; i < populationSize; i++)
		V_1 = 0;
		goto IL_00ad;
	}

IL_0070:
	{
		// Bot bot = (Instantiate(prefabs[i], spawnPoints[i])).GetComponent<Bot>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___prefabs_7;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = __this->___spawnPoints_8;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_19, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_24);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_25;
		L_25 = GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7(L_24, GameObject_GetComponent_TisBot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1_mF28E8B2EA89D985521F6C4B47E002575BF4F0CF7_RuntimeMethod_var);
		V_2 = L_25;
		// bot.network = networks[i];
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_26 = V_2;
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_27 = __this->___networks_21;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_29;
		L_29 = List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6(L_27, L_28, List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->___network_14 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___network_14), (void*)L_29);
		// bots.Add(bot);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_30 = __this->___bots_22;
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_31 = V_2;
		NullCheck(L_30);
		List_1_Add_m4E1873D9950267B63D106EAC5FEF25CCD3A23037_inline(L_30, L_31, List_1_Add_m4E1873D9950267B63D106EAC5FEF25CCD3A23037_RuntimeMethod_var);
		// for (int i = 0; i < populationSize; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < populationSize; i++)
		int32_t L_33 = V_1;
		int32_t L_34 = __this->___populationSize_6;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0070;
		}
	}
	{
		// if(isCameraFollowing)
		bool L_35 = __this->___isCameraFollowing_25;
		if (!L_35)
		{
			goto IL_010b;
		}
	}
	{
		// vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___vCam1_9;
		NullCheck(L_36);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_37;
		L_37 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_36, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_38 = __this->___bots_22;
		int32_t L_39 = __this->___followingBot_24;
		NullCheck(L_38);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_40;
		L_40 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_38, L_39, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		NullCheck(L_37);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_37, L_41);
		// vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___vCam1_9;
		NullCheck(L_42);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_43;
		L_43 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_42, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_44 = __this->___bots_22;
		int32_t L_45 = __this->___followingBot_24;
		NullCheck(L_44);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_46;
		L_46 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_44, L_45, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		NullCheck(L_43);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_43, L_47);
		return;
	}

IL_010b:
	{
		// vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___vCam2_10;
		NullCheck(L_48);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_49;
		L_49 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_48, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_50 = __this->___bots_22;
		int32_t L_51 = __this->___followingBot_24;
		NullCheck(L_50);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_52;
		L_52 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_50, L_51, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = L_52->___followPos_4;
		NullCheck(L_49);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_49, L_53);
		// vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___vCam2_10;
		NullCheck(L_54);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_55;
		L_55 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_54, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_56 = __this->___bots_22;
		int32_t L_57 = __this->___followingBot_24;
		NullCheck(L_56);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_58;
		L_58 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_56, L_57, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = L_58->___lookPos_5;
		NullCheck(L_55);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_55, L_59);
		// }
		return;
	}
}
// System.Void Manager::SortNetworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_SortNetworks_mD1DF87FBBAB4A9551BD85C79EB400A3E404C8FD5 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m740F89541FDA37EE530727CFFEE7BD97EF801F50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m94584A0BD535F5BF106DA5F9C625DF773B3D228A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < bots.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// bots[i].UpdateFitness();
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_0 = __this->___bots_22;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_2;
		L_2 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_0, L_1, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_2);
		Bot_UpdateFitness_m3AAB8DCF9C7D5F8BBEA3DDBADB37D29B3539EBB9(L_2, NULL);
		// for (int i = 0; i < bots.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < bots.Count; i++)
		int32_t L_4 = V_0;
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_5 = __this->___bots_22;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_inline(L_5, List_1_get_Count_mDB4E6BC7F797C4D92D55E9E4EA54DDA261A1493F_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// networks.Sort();
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_7 = __this->___networks_21;
		NullCheck(L_7);
		List_1_Sort_m740F89541FDA37EE530727CFFEE7BD97EF801F50(L_7, List_1_Sort_m740F89541FDA37EE530727CFFEE7BD97EF801F50_RuntimeMethod_var);
		// networks[populationSize - 1].Save(InterSceneScript.GetPathWithNetworkName(neuralNetworkName));
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_8 = __this->___networks_21;
		int32_t L_9 = __this->___populationSize_6;
		NullCheck(L_8);
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_10;
		L_10 = List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		String_t* L_11 = __this->___neuralNetworkName_26;
		String_t* L_12;
		L_12 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_11, NULL);
		NullCheck(L_10);
		NeuralNetwork_Save_m450B4C1B7F8541046A2B8DD17C47D66DB388AD52(L_10, L_12, NULL);
		// for (int i = 0; i < populationSize / 2; i++)
		V_1 = 0;
		goto IL_00af;
	}

IL_0059:
	{
		// networks[i] = networks[i + populationSize / 2].copy(new NeuralNetwork(layers));
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_13 = __this->___networks_21;
		int32_t L_14 = V_1;
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_15 = __this->___networks_21;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->___populationSize_6;
		NullCheck(L_15);
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_18;
		L_18 = List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6(L_15, ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17/2)))), List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___layers_16;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_20 = (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B*)il2cpp_codegen_object_new(NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		NeuralNetwork__ctor_m5656B82812F0168ED97841E7D96015CE1A26356F(L_20, L_19, NULL);
		NullCheck(L_18);
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_21;
		L_21 = NeuralNetwork_copy_m268029B5908F2AAA85F3180DDA9579CF89A6DCCF(L_18, L_20, NULL);
		NullCheck(L_13);
		List_1_set_Item_m94584A0BD535F5BF106DA5F9C625DF773B3D228A(L_13, L_14, L_21, List_1_set_Item_m94584A0BD535F5BF106DA5F9C625DF773B3D228A_RuntimeMethod_var);
		// networks[i].Mutate((int)(1/MutationChance), MutationStrength);
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_22 = __this->___networks_21;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_24;
		L_24 = List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6(L_22, L_23, List_1_get_Item_m44E8F28D8C9B4F5B2F1C0EE36655B73339FD53F6_RuntimeMethod_var);
		float L_25 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationChance_17;
		float L_26 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationStrength_18;
		NullCheck(L_24);
		NeuralNetwork_Mutate_m15A8049FD7B9CBE768EF0952E29C4CAE65D57860(L_24, il2cpp_codegen_cast_double_to_int<int32_t>(((float)((1.0f)/L_25))), L_26, NULL);
		// for (int i = 0; i < populationSize / 2; i++)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00af:
	{
		// for (int i = 0; i < populationSize / 2; i++)
		int32_t L_28 = V_1;
		int32_t L_29 = __this->___populationSize_6;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(L_29/2)))))
		{
			goto IL_0059;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Manager::FollowBot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_FollowBot_mE6A0EBE9A2AE2F99281178063BECFBD81501B431 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (followingBot < populationSize - 1 && followingBot > 0) followingBot += where;
		int32_t L_0 = __this->___followingBot_24;
		int32_t L_1 = __this->___populationSize_6;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1)))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = __this->___followingBot_24;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		// if (followingBot < populationSize - 1 && followingBot > 0) followingBot += where;
		int32_t L_3 = __this->___followingBot_24;
		int32_t L_4 = ___where0;
		__this->___followingBot_24 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		goto IL_0088;
	}

IL_0029:
	{
		// else if (followingBot == 0 && where < 0) followingBot = populationSize + where;
		int32_t L_5 = __this->___followingBot_24;
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_6 = ___where0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// else if (followingBot == 0 && where < 0) followingBot = populationSize + where;
		int32_t L_7 = __this->___populationSize_6;
		int32_t L_8 = ___where0;
		__this->___followingBot_24 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		goto IL_0088;
	}

IL_0045:
	{
		// else if (followingBot == populationSize - 1 && where > 0) followingBot = 0;
		int32_t L_9 = __this->___followingBot_24;
		int32_t L_10 = __this->___populationSize_6;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_10, 1))))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_11 = ___where0;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		// else if (followingBot == populationSize - 1 && where > 0) followingBot = 0;
		__this->___followingBot_24 = 0;
		goto IL_0088;
	}

IL_0062:
	{
		// else if (followingBot == populationSize - 1 || followingBot == 0) followingBot += where;
		int32_t L_12 = __this->___followingBot_24;
		int32_t L_13 = __this->___populationSize_6;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_14 = __this->___followingBot_24;
		if (L_14)
		{
			goto IL_0088;
		}
	}

IL_007a:
	{
		// else if (followingBot == populationSize - 1 || followingBot == 0) followingBot += where;
		int32_t L_15 = __this->___followingBot_24;
		int32_t L_16 = ___where0;
		__this->___followingBot_24 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
	}

IL_0088:
	{
		// if(isCameraFollowing)
		bool L_17 = __this->___isCameraFollowing_25;
		if (!L_17)
		{
			goto IL_00dd;
		}
	}
	{
		// vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___vCam1_9;
		NullCheck(L_18);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_19;
		L_19 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_18, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_20 = __this->___bots_22;
		int32_t L_21 = __this->___followingBot_24;
		NullCheck(L_20);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_22;
		L_22 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_20, L_21, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_19, L_23);
		// vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___vCam1_9;
		NullCheck(L_24);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_25;
		L_25 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_24, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_26 = __this->___bots_22;
		int32_t L_27 = __this->___followingBot_24;
		NullCheck(L_26);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_28;
		L_28 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_26, L_27, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_25, L_29);
		return;
	}

IL_00dd:
	{
		// vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___vCam2_10;
		NullCheck(L_30);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_31;
		L_31 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_30, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_32 = __this->___bots_22;
		int32_t L_33 = __this->___followingBot_24;
		NullCheck(L_32);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_34;
		L_34 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_32, L_33, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34->___followPos_4;
		NullCheck(L_31);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_31, L_35);
		// vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___vCam2_10;
		NullCheck(L_36);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_37;
		L_37 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_36, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_38 = __this->___bots_22;
		int32_t L_39 = __this->___followingBot_24;
		NullCheck(L_38);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_40;
		L_40 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_38, L_39, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = L_40->___lookPos_5;
		NullCheck(L_37);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_37, L_41);
		// }
		return;
	}
}
// System.Void Manager::ReplaceCameraOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_ReplaceCameraOffset_m01CCA64B94108F5140BF3F5C3709D7BD6D325239 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!IsUpCamera)
		bool L_0 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsUpCamera_19;
		if (L_0)
		{
			goto IL_00e9;
		}
	}
	{
		// if(isCameraFollowing)
		bool L_1 = __this->___isCameraFollowing_25;
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// vCam1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___vCam1_9;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// vCam2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___vCam2_10;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// vCam2.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].followPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___vCam2_10;
		NullCheck(L_4);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_5;
		L_5 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_4, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_6 = __this->___bots_22;
		int32_t L_7 = __this->___followingBot_24;
		NullCheck(L_6);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_8;
		L_8 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_6, L_7, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___followPos_4;
		NullCheck(L_5);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_5, L_9);
		// vCam2.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].lookPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___vCam2_10;
		NullCheck(L_10);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_11;
		L_11 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_10, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_12 = __this->___bots_22;
		int32_t L_13 = __this->___followingBot_24;
		NullCheck(L_12);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_14;
		L_14 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_12, L_13, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14->___lookPos_5;
		NullCheck(L_11);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_11, L_15);
		// isCameraFollowing = false;
		__this->___isCameraFollowing_25 = (bool)0;
		return;
	}

IL_007e:
	{
		// vCam2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___vCam2_10;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// vCam1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___vCam1_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// vCam1.GetComponent<CinemachineVirtualCamera>().Follow = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___vCam1_9;
		NullCheck(L_18);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_19;
		L_19 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_18, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_20 = __this->___bots_22;
		int32_t L_21 = __this->___followingBot_24;
		NullCheck(L_20);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_22;
		L_22 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_20, L_21, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_19, L_23);
		// vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = bots[followingBot].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___vCam1_9;
		NullCheck(L_24);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_25;
		L_25 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_24, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_26 = __this->___bots_22;
		int32_t L_27 = __this->___followingBot_24;
		NullCheck(L_26);
		Bot_tA900FCAF52E689075AE77B2F209DEE29A5BC6DC1* L_28;
		L_28 = List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C(L_26, L_27, List_1_get_Item_mC853B9A869FF23DA50976CF2CCEEDC789B638A0C_RuntimeMethod_var);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_25, L_29);
		// isCameraFollowing = true;
		__this->___isCameraFollowing_25 = (bool)1;
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void Manager::SetTimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_SetTimeScale_m968DBB4F43E67B4673F0BF77C71AF5CE916F92D8 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, float ___scale0, const RuntimeMethod* method) 
{
	{
		// oldTimeScale = Time.timeScale;
		float L_0;
		L_0 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		__this->___oldTimeScale_27 = L_0;
		// Time.timeScale = scale;
		float L_1 = ___scale0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C(L_1, NULL);
		// }
		return;
	}
}
// System.Void Manager::SetOldTimeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_SetOldTimeScale_mA6598D79AA15B36DD6E88CE5918134770BB32BE0 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = oldTimeScale;
		float L_0 = __this->___oldTimeScale_27;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Manager::CreateMyCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_CreateMyCar_mDA3BA7B118937419F6B34B30721F5780C0646615 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject car = Instantiate(prefabs[0], spawnPoints[0]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___prefabs_7;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___spawnPoints_8;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_2, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_6;
		// vCam1.GetComponent<CinemachineVirtualCamera>().Follow = car.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___vCam1_9;
		NullCheck(L_7);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_8;
		L_8 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_7, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(32 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_8, L_10);
		// vCam1.GetComponent<CinemachineVirtualCamera>().LookAt = car.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___vCam1_9;
		NullCheck(L_11);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_12;
		L_12 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_11, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform) */, L_12, L_14);
		// IsCarControl = true;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsCarControl_20 = (bool)1;
		// }
		return;
	}
}
// System.Void Manager::GasBot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GasBot_m278B691043820ACB810C5D0E8B173FF0A1250CF4 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myCar.GetComponent<RearWheelDrive>().verticalAxis = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___myCar_23;
		NullCheck(L_0);
		RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* L_1;
		L_1 = GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB(L_0, GameObject_GetComponent_TisRearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299_m71D4E88928F813C8C1303B507498ADC1EA057BEB_RuntimeMethod_var);
		float L_2 = ___value0;
		NullCheck(L_1);
		L_1->___verticalAxis_10 = L_2;
		// }
		return;
	}
}
// System.Void Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__ctor_m657ECC756CD44219E6C63B972C78FD4164A0CE1A (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6ED5F804A9F5D9764FFC9A445046EBE16A5B1545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEFC918FE9976925239212560D1CAA350A553BEA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float timeFrame = 20;
		__this->___timeFrame_5 = (20.0f);
		// public List<NeuralNetwork> networks = new List<NeuralNetwork>();
		List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5* L_0 = (List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5*)il2cpp_codegen_object_new(List_1_tA61C69406C5EB5C7B356F91A40F576891A5AF0A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6ED5F804A9F5D9764FFC9A445046EBE16A5B1545(L_0, List_1__ctor_m6ED5F804A9F5D9764FFC9A445046EBE16A5B1545_RuntimeMethod_var);
		__this->___networks_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___networks_21), (void*)L_0);
		// public List<Bot> bots = new List<Bot>();
		List_1_tEFC918FE9976925239212560D1CAA350A553BEA5* L_1 = (List_1_tEFC918FE9976925239212560D1CAA350A553BEA5*)il2cpp_codegen_object_new(List_1_tEFC918FE9976925239212560D1CAA350A553BEA5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F(L_1, List_1__ctor_m39E18A10859FD277E2805F0914B1418B3104494F_RuntimeMethod_var);
		__this->___bots_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bots_22), (void*)L_1);
		// private bool isCameraFollowing = true;
		__this->___isCameraFollowing_25 = (bool)1;
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
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m58062825AA9A256E42311B4A4833E7425589BBDF (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F5E3C127FDA45FC60CBF9C52DE1AAFAFC80214D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC580A37DDEA4536BC6FE5DDBCACFBAD1F8A860);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// InterSceneScript.InitNetwork(layers);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___layers_13;
		InterSceneScript_InitNetwork_m2A9E78B2E9AD7DE7C7A17ADBD93E10FE901EA81B(L_0, NULL);
		// InterSceneScript.maxNeuralNetworksCount = maxNeuralNetworksCount;
		int32_t L_1 = __this->___maxNeuralNetworksCount_5;
		((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___maxNeuralNetworksCount_4 = L_1;
		// selectedNetworkName = null;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14), (void*)(String_t*)NULL);
		// networksCount = 1;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15 = 1;
		// namesNN = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16), (void*)L_2);
		// networksList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17), (void*)L_3);
		// if(!PlayerPrefs.HasKey("BASE_BOT_NN_NAME") || PlayerPrefs.HasKey("BASE_BOT_NN_0"))
		bool L_4;
		L_4 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		bool L_5;
		L_5 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral2F5E3C127FDA45FC60CBF9C52DE1AAFAFC80214D, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}

IL_004e:
	{
		// PlayerPrefs.SetString("BASE_BOT_NN_NAME", "???????");
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359, _stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1, NULL);
		// InterSceneScript.SaveToPlayerPrefs("BASE_BOT_NN", preTrainedNetwork);
		String_t* L_6 = __this->___preTrainedNetwork_4;
		InterSceneScript_SaveToPlayerPrefs_mCDA5C41843543B19F6E316FC06E52FEE268ED518(_stringLiteralBDC580A37DDEA4536BC6FE5DDBCACFBAD1F8A860, L_6, NULL);
	}

IL_006d:
	{
		// GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___networkElementPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___scrollNetworkPanel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_9;
		// net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_11;
		L_11 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_10, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___text_4;
		String_t* L_13;
		L_13 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_13);
		// networksList.Add(net);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_14);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// namesNN.Add(PlayerPrefs.GetString("BASE_BOT_NN_NAME"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		String_t* L_17;
		L_17 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359, NULL);
		NullCheck(L_16);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_16, L_17, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < InterSceneScript.maxNeuralNetworksCount + 1; i++)
		V_1 = 0;
		goto IL_014a;
	}

IL_00bf:
	{
		// if(PlayerPrefs.HasKey(i.ToString() + "_BOT_NN_NAME"))
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_18, _stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5, NULL);
		bool L_20;
		L_20 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_19, NULL);
		if (!L_20)
		{
			goto IL_0146;
		}
	}
	{
		// net = Instantiate(networkElementPrefab, scrollNetworkPanel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___networkElementPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___scrollNetworkPanel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_23;
		// net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString(i + "_BOT_NN_NAME");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		NullCheck(L_24);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_25;
		L_25 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_24, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_25);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = L_25->___text_4;
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_28;
		L_28 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_27, _stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5, NULL);
		String_t* L_29;
		L_29 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_28, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_29);
		// networksList.Add(net);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_0;
		NullCheck(L_30);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_30, L_31, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// namesNN.Add(PlayerPrefs.GetString(i + "_BOT_NN_NAME"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_34;
		L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_33, _stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5, NULL);
		String_t* L_35;
		L_35 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_34, NULL);
		NullCheck(L_32);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_32, L_35, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// networksCount++;
		int32_t L_36 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0146:
	{
		// for (int i = 0; i < InterSceneScript.maxNeuralNetworksCount + 1; i++)
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_014a:
	{
		// for (int i = 0; i < InterSceneScript.maxNeuralNetworksCount + 1; i++)
		int32_t L_38 = V_1;
		int32_t L_39 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___maxNeuralNetworksCount_4;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)))))
		{
			goto IL_00bf;
		}
	}
	{
		// addNetworkButton.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___addNetworkButton_10;
		NullCheck(L_40);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_40, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// addNetworkButton.parent = scrollNetworkPanel;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___addNetworkButton_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___scrollNetworkPanel_9;
		NullCheck(L_41);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_41, L_42, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Update_mE8D4FFA199E069DAFD4314D5F28EBF5B9644C8A3 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1);
		s_Il2CppMethodInitialized = true;
	}
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if(Input.GetKey(KeyCode.Escape)) Application.Quit();
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(Input.GetKey(KeyCode.Escape)) Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_000e:
	{
		// if(selectedNetworkName == null)
		String_t* L_1 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		if (L_1)
		{
			goto IL_0040;
		}
	}
	{
		// foreach (Button button in buttons) button.interactable = false;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_2 = __this->___buttons_12;
		V_0 = L_2;
		V_1 = 0;
		goto IL_002d;
	}

IL_0020:
	{
		// foreach (Button button in buttons) button.interactable = false;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// foreach (Button button in buttons) button.interactable = false;
		NullCheck(L_6);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, (bool)0, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002d:
	{
		// foreach (Button button in buttons) button.interactable = false;
		int32_t L_8 = V_1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// traningToggle.interactable = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = __this->___traningToggle_8;
		NullCheck(L_10);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_10, (bool)0, NULL);
		return;
	}

IL_0040:
	{
		// else if(selectedNetworkName != "???????")
		String_t* L_11 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		bool L_12;
		L_12 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_11, _stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1, NULL);
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		// foreach (Button button in buttons) button.interactable = true;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_13 = __this->___buttons_12;
		V_0 = L_13;
		V_1 = 0;
		goto IL_0069;
	}

IL_005c:
	{
		// foreach (Button button in buttons) button.interactable = true;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		// foreach (Button button in buttons) button.interactable = true;
		NullCheck(L_17);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)1, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0069:
	{
		// foreach (Button button in buttons) button.interactable = true;
		int32_t L_19 = V_1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_005c;
		}
	}
	{
		// traningToggle.interactable = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_21 = __this->___traningToggle_8;
		NullCheck(L_21);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_21, (bool)1, NULL);
		return;
	}

IL_007c:
	{
		// buttons[0].interactable = false;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_22 = __this->___buttons_12;
		NullCheck(L_22);
		int32_t L_23 = 0;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_24, (bool)0, NULL);
		// for (int i = 1; i < buttons.Length; i++) buttons[i].interactable = true;
		V_2 = 1;
		goto IL_00a0;
	}

IL_008e:
	{
		// for (int i = 1; i < buttons.Length; i++) buttons[i].interactable = true;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_25 = __this->___buttons_12;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_28, (bool)1, NULL);
		// for (int i = 1; i < buttons.Length; i++) buttons[i].interactable = true;
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a0:
	{
		// for (int i = 1; i < buttons.Length; i++) buttons[i].interactable = true;
		int32_t L_30 = V_2;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_31 = __this->___buttons_12;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_008e;
		}
	}
	{
		// traningToggle.interactable = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_32 = __this->___traningToggle_8;
		NullCheck(L_32);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_32, (bool)0, NULL);
		// traningToggle.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_33 = __this->___traningToggle_8;
		NullCheck(L_33);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_33, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Play_m912CD0E327401062DA0583B6BF317543352E773D (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7506C7E0F2FD6A933DEBFA6ECD86A628630F5E36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF531D046A207DC84DE58B98A999E7EFD63F7AA66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(traningToggle.isOn) PlayerPrefs.SetInt("TRANING", 1);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___traningToggle_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if(traningToggle.isOn) PlayerPrefs.SetInt("TRANING", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral7506C7E0F2FD6A933DEBFA6ECD86A628630F5E36, 1, NULL);
		goto IL_0025;
	}

IL_001a:
	{
		// else PlayerPrefs.SetInt("TRANING", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral7506C7E0F2FD6A933DEBFA6ECD86A628630F5E36, 0, NULL);
	}

IL_0025:
	{
		// PlayerPrefs.SetString("SELECTED_BOT_NN", selectedNetworkName);
		String_t* L_2 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralF531D046A207DC84DE58B98A999E7EFD63F7AA66, L_2, NULL);
		// loadingPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___loadingPanel_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// SceneTransition.SwitchToScene("Game");
		SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::RenameNeuralNetwork(UnityEngine.UI.InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_RenameNeuralNetwork_m8DE8A940D1A5FAA6189FB4755628BA5FCB39A23A (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PlayerPrefs.SetString(InterSceneScript.GetPathWithNetworkName(selectedNetworkName) + "_NAME", name.text.ToString());
		String_t* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		String_t* L_1;
		L_1 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = ___name0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_2, L_5, NULL);
		// for (int i = 0; i < networksList.Count; i++)
		V_0 = 0;
		goto IL_008e;
	}

IL_0028:
	{
		// if(networksList[i].GetComponent<NeuralNetworkElement>().text.text == selectedNetworkName)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_8);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_9;
		L_9 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_8, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___text_4;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// networksList[i].GetComponent<NeuralNetworkElement>().text.text = name.text;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, L_15, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_16);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_17;
		L_17 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_16, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_17);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = L_17->___text_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_19 = ___name0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_19, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// selectedNetworkName = name.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_21 = ___name0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_21, NULL);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14), (void*)L_22);
		// namesNN[i] = name.text;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		int32_t L_24 = V_0;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_25 = ___name0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_25, NULL);
		NullCheck(L_23);
		List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C(L_23, L_24, L_26, List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
	}

IL_008a:
	{
		// for (int i = 0; i < networksList.Count; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_008e:
	{
		// for (int i = 0; i < networksList.Count; i++)
		int32_t L_28 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_29, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MenuManager::CopyNeuralNetwork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_CopyNeuralNetwork_m73D724BA8DAF22ABDF99A1D274E7F0A9A10584AB (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90FB18D5D024A120560C39771C5741027E1E2963);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC91FA83F2375CE8B57077DA090BB22868966FDCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A5237DB46DDCB7166B64B66EB26C086D4EBE5C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// if(namesNN.Count < InterSceneScript.maxNeuralNetworksCount + 1)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_2 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___maxNeuralNetworksCount_4;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1)))))
		{
			goto IL_013d;
		}
	}
	{
		// string pathCopingNetwork = InterSceneScript.GetPathWithNetworkName(selectedNetworkName);
		String_t* L_3 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		String_t* L_4;
		L_4 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_3, NULL);
		V_0 = L_4;
		// string pathCopedNetwork = (networksCount - 1).ToString() + "_BOT_NN";
		int32_t L_5 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, _stringLiteral90FB18D5D024A120560C39771C5741027E1E2963, NULL);
		V_1 = L_7;
		// string name = selectedNetworkName + " (?????)";
		String_t* L_8 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteralC91FA83F2375CE8B57077DA090BB22868966FDCA, NULL);
		V_2 = L_9;
		// int i = 0;
		V_3 = 0;
	}

IL_004e:
	{
		// if(PlayerPrefs.HasKey(pathCopingNetwork + "_" + i)) PlayerPrefs.SetString(pathCopedNetwork + "_" + i.ToString(), PlayerPrefs.GetString(pathCopingNetwork + "_" + i));
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_10, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_11, NULL);
		bool L_13;
		L_13 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_12, NULL);
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		// if(PlayerPrefs.HasKey(pathCopingNetwork + "_" + i)) PlayerPrefs.SetString(pathCopedNetwork + "_" + i.ToString(), PlayerPrefs.GetString(pathCopingNetwork + "_" + i));
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_14, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_15, NULL);
		String_t* L_17 = V_0;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_17, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_18, NULL);
		String_t* L_20;
		L_20 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_19, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_16, L_20, NULL);
		// i++;
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// while (true)
		goto IL_004e;
	}

IL_009b:
	{
		// PlayerPrefs.SetString(pathCopedNetwork + "_NAME", name);
		String_t* L_22 = V_1;
		String_t* L_23;
		L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_22, _stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560, NULL);
		String_t* L_24 = V_2;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_23, L_24, NULL);
		// PlayerPrefs.SetInt(pathCopedNetwork + "_STEPS", PlayerPrefs.GetInt(pathCopingNetwork + "_STEPS"));
		String_t* L_25 = V_1;
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_25, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		String_t* L_27 = V_0;
		String_t* L_28;
		L_28 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_27, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		int32_t L_29;
		L_29 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_28, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_26, L_29, NULL);
		// GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___networkElementPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___scrollNetworkPanel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_30, L_31, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_4 = L_32;
		// net.GetComponent<NeuralNetworkElement>().text.text = name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_4;
		NullCheck(L_33);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_34;
		L_34 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_33, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_34);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = L_34->___text_4;
		String_t* L_36 = V_2;
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_36);
		// networksList.Add(net);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_37 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_4;
		NullCheck(L_37);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_37, L_38, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// namesNN.Add(PlayerPrefs.GetString(name));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		String_t* L_40 = V_2;
		String_t* L_41;
		L_41 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_40, NULL);
		NullCheck(L_39);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_39, L_41, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// networksCount++;
		int32_t L_42 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		// addNetworkButton.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___addNetworkButton_10;
		NullCheck(L_43);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_43, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// addNetworkButton.parent = scrollNetworkPanel;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___addNetworkButton_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___scrollNetworkPanel_9;
		NullCheck(L_44);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_44, L_45, NULL);
		// selectedNetworkName = name;
		String_t* L_46 = V_2;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14), (void*)L_46);
		return;
	}

IL_013d:
	{
		// else errorPanel.OpenErrorPanel("???????? ????? ?????????????? ?????????? (" + maxNeuralNetworksCount.ToString() + ")!");
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_47 = __this->___errorPanel_11;
		int32_t* L_48 = (&__this->___maxNeuralNetworksCount_5);
		String_t* L_49;
		L_49 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE5A5237DB46DDCB7166B64B66EB26C086D4EBE5C, L_49, _stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C, NULL);
		NullCheck(L_47);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_47, L_50, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::SaveNewNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SaveNewNetwork_m45C65B499AC28466D90F7AF3A94AFF01FAB75B7F (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA6F6D63C8CD543FF6DF8395B4DA317F4168166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90FB18D5D024A120560C39771C5741027E1E2963);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A5237DB46DDCB7166B64B66EB26C086D4EBE5C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if(namesNN.Count < InterSceneScript.maxNeuralNetworksCount + 1)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_2 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___maxNeuralNetworksCount_4;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1)))))
		{
			goto IL_010b;
		}
	}
	{
		// bool isAllow = true;
		V_0 = (bool)1;
		// foreach (string nameNN in namesNN)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		NullCheck(L_3);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_4;
		L_4 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_3, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0025_1:
			{
				// foreach (string nameNN in namesNN)
				String_t* L_5;
				L_5 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// if(nameNN == name) isAllow = false;
				String_t* L_6 = ___name0;
				bool L_7;
				L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_0036_1;
				}
			}
			{
				// if(nameNN == name) isAllow = false;
				V_0 = (bool)0;
			}

IL_0036_1:
			{
				// foreach (string nameNN in namesNN)
				bool L_8;
				L_8 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// if(isAllow)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_00fa;
		}
	}
	{
		// PlayerPrefs.SetString((networksCount - 1).ToString() + "_BOT_NN_NAME", name);
		int32_t L_10 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5, NULL);
		String_t* L_13 = ___name0;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_12, L_13, NULL);
		// PlayerPrefs.SetString((networksCount - 1).ToString() + "_BOT_NN", "");
		int32_t L_14 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_15, _stringLiteral90FB18D5D024A120560C39771C5741027E1E2963, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___networkElementPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___scrollNetworkPanel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_2 = L_19;
		// net.GetComponent<NeuralNetworkElement>().text.text = name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		NullCheck(L_20);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_21;
		L_21 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_20, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21->___text_4;
		String_t* L_23 = ___name0;
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_23);
		// networksList.Add(net);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
		NullCheck(L_24);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_24, L_25, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// namesNN.Add(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		String_t* L_27 = ___name0;
		NullCheck(L_26);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_26, L_27, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// networksCount++;
		int32_t L_28 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		// addNetworkButton.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___addNetworkButton_10;
		NullCheck(L_29);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_29, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// addNetworkButton.parent = scrollNetworkPanel;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___addNetworkButton_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___scrollNetworkPanel_9;
		NullCheck(L_30);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_30, L_31, NULL);
		return;
	}

IL_00fa:
	{
		// else errorPanel.OpenErrorPanel("????????? ? ?????? ????????? ??? ??????????!\n?????????? ?????? ????????.");
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_32 = __this->___errorPanel_11;
		NullCheck(L_32);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_32, _stringLiteral7AA6F6D63C8CD543FF6DF8395B4DA317F4168166, NULL);
		return;
	}

IL_010b:
	{
		// else errorPanel.OpenErrorPanel("???????? ????? ?????????????? ?????????? (" + maxNeuralNetworksCount.ToString() + ")!");
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_33 = __this->___errorPanel_11;
		int32_t* L_34 = (&__this->___maxNeuralNetworksCount_5);
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_34, NULL);
		String_t* L_36;
		L_36 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE5A5237DB46DDCB7166B64B66EB26C086D4EBE5C, L_35, _stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C, NULL);
		NullCheck(L_33);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_33, L_36, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::SaveInputNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SaveInputNetwork_m4F025320F1365F85F18AF5206336DCEC1B4FED56 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___network0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BF74CA2AB7D5DE75DD049620726BEAA2AD27B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90FB18D5D024A120560C39771C5741027E1E2963);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A5237DB46DDCB7166B64B66EB26C086D4EBE5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C3814CB51259093F194963851023672A6135E0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(namesNN.Count < InterSceneScript.maxNeuralNetworksCount + 1)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_2 = ((InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_StaticFields*)il2cpp_codegen_static_fields_for(InterSceneScript_tD644EC6AADB97C850EFA99074D8D6C9CB53C2FAF_il2cpp_TypeInfo_var))->___maxNeuralNetworksCount_4;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1)))))
		{
			goto IL_01b2;
		}
	}
	{
		// if(network.Split("\n\n").Length >= 3)
		String_t* L_3 = ___network0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_3, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, 0, NULL);
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)3)))
		{
			goto IL_01a1;
		}
	}
	{
		// string path = (networksCount - 1).ToString() + "_BOT_NN";
		int32_t L_5 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, _stringLiteral90FB18D5D024A120560C39771C5741027E1E2963, NULL);
		V_0 = L_7;
		// string neuralNetworkName = network.Split("\n\n")[0];
		String_t* L_8 = ___network0;
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_8, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, 0, NULL);
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// PlayerPrefs.SetInt(path + "_STEPS", int.Parse(network.Split("\n\n")[1]));
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_12, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		String_t* L_14 = ___network0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_14, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, 0, NULL);
		NullCheck(L_15);
		int32_t L_16 = 1;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18;
		L_18 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_17, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_13, L_18, NULL);
		// print(int.Parse(network.Split("\n\n")[1]));
		String_t* L_19 = ___network0;
		NullCheck(L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
		L_20 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_19, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, 0, NULL);
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23;
		L_23 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_22, NULL);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_25, NULL);
		// foreach (var name in namesNN) if(name == neuralNetworkName) neuralNetworkName = "???????? " + (networksCount + 1).ToString();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		NullCheck(L_26);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_27;
		L_27 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_26, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_4), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ca_1;
			}

IL_00a1_1:
			{
				// foreach (var name in namesNN) if(name == neuralNetworkName) neuralNetworkName = "???????? " + (networksCount + 1).ToString();
				String_t* L_28;
				L_28 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_4), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// foreach (var name in namesNN) if(name == neuralNetworkName) neuralNetworkName = "???????? " + (networksCount + 1).ToString();
				String_t* L_29 = V_1;
				bool L_30;
				L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, L_29, NULL);
				if (!L_30)
				{
					goto IL_00ca_1;
				}
			}
			{
				// foreach (var name in namesNN) if(name == neuralNetworkName) neuralNetworkName = "???????? " + (networksCount + 1).ToString();
				int32_t L_31 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
				V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
				String_t* L_32;
				L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
				String_t* L_33;
				L_33 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF6C3814CB51259093F194963851023672A6135E0, L_32, NULL);
				V_1 = L_33;
			}

IL_00ca_1:
			{
				// foreach (var name in namesNN) if(name == neuralNetworkName) neuralNetworkName = "???????? " + (networksCount + 1).ToString();
				bool L_34;
				L_34 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_4), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_00a1_1;
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
	}
	try
	{// begin try (depth: 1)
		// try { InterSceneScript.SaveToPlayerPrefs(path, network.Split("\n\n")[2] + "\n"); }
		String_t* L_35 = V_0;
		String_t* L_36 = ___network0;
		NullCheck(L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37;
		L_37 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_36, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, 0, NULL);
		NullCheck(L_37);
		int32_t L_38 = 2;
		String_t* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		String_t* L_40;
		L_40 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_39, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		InterSceneScript_SaveToPlayerPrefs_mCDA5C41843543B19F6E316FC06E52FEE268ED518(L_35, L_40, NULL);
		// try { InterSceneScript.SaveToPlayerPrefs(path, network.Split("\n\n")[2] + "\n"); }
		goto IL_011a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{// begin catch(System.Object)
		// catch
		// errorPanel.OpenErrorPanel("?????? ?? ????? ?? ?????? ?????????, ????????? ?? ? ?????????? ??? ???.");
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_41 = __this->___errorPanel_11;
		NullCheck(L_41);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2968EAB3B91257ED00BDAEA0A3B62C80597F8E9)), NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01d7;
	}// end catch (depth: 1)

IL_011a:
	{
		// GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___networkElementPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___scrollNetworkPanel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_42, L_43, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_2 = L_44;
		// net.GetComponent<NeuralNetworkElement>().text.text = neuralNetworkName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_2;
		NullCheck(L_45);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_46;
		L_46 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_45, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_46);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_47 = L_46->___text_4;
		String_t* L_48 = V_1;
		NullCheck(L_47);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_48);
		// networksList.Add(net);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_49 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_2;
		NullCheck(L_49);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_49, L_50, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// namesNN.Add(PlayerPrefs.GetString(neuralNetworkName));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_51 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		String_t* L_52 = V_1;
		String_t* L_53;
		L_53 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_52, NULL);
		NullCheck(L_51);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_51, L_53, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// PlayerPrefs.SetString((networksCount - 1).ToString() + "_BOT_NN_NAME", neuralNetworkName);
		int32_t L_54 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		String_t* L_55;
		L_55 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_56;
		L_56 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_55, _stringLiteralBC0B2616EF2B49FC335F9BA21607FDCD925232E5, NULL);
		String_t* L_57 = V_1;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_56, L_57, NULL);
		// networksCount++;
		int32_t L_58 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		// addNetworkButton.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = __this->___addNetworkButton_10;
		NullCheck(L_59);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_59, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// addNetworkButton.parent = scrollNetworkPanel;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = __this->___addNetworkButton_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = __this->___scrollNetworkPanel_9;
		NullCheck(L_60);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_60, L_61, NULL);
		return;
	}

IL_01a1:
	{
		// else errorPanel.OpenErrorPanel("?????? ?? ??????????!");
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_62 = __this->___errorPanel_11;
		NullCheck(L_62);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_62, _stringLiteral88BF74CA2AB7D5DE75DD049620726BEAA2AD27B3, NULL);
		return;
	}

IL_01b2:
	{
		// else errorPanel.OpenErrorPanel("???????? ????? ?????????????? ?????????? (" + maxNeuralNetworksCount.ToString() + ")!");
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_63 = __this->___errorPanel_11;
		int32_t* L_64 = (&__this->___maxNeuralNetworksCount_5);
		String_t* L_65;
		L_65 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_64, NULL);
		String_t* L_66;
		L_66 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE5A5237DB46DDCB7166B64B66EB26C086D4EBE5C, L_65, _stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C, NULL);
		NullCheck(L_63);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_63, L_66, NULL);
	}

IL_01d7:
	{
		// }
		return;
	}
}
// System.Void MenuManager::SelectNetworkNameToNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SelectNetworkNameToNull_m923FAB2740211B8F013FEAFDBBACBAAAE16BE482 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedNetworkName = null;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14), (void*)(String_t*)NULL);
		// }
		return;
	}
}
// System.Void MenuManager::DeleteNetworkAccepting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_DeleteNetworkAccepting_mBD1886F7D003758A1D20290E0A560FFD58089AAB (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___isDelete0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isDelete) InterSceneScript.DeleteNetwork(InterSceneScript.GetPathWithNetworkName(selectedNetworkName));
		bool L_0 = ___isDelete0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if(isDelete) InterSceneScript.DeleteNetwork(InterSceneScript.GetPathWithNetworkName(selectedNetworkName));
		String_t* L_1 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		String_t* L_2;
		L_2 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_1, NULL);
		InterSceneScript_DeleteNetwork_m1C6EFFDB93DB72D3D744C5BF073D73B71D9A9843(L_2, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void MenuManager::ShareNetwork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShareNetwork_m2B66B6EC1C6F01A41107FC9BE34F84FA5F236092 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ShareMessage());
		RuntimeObject* L_0;
		L_0 = MenuManager_ShareMessage_m5A36B34BA570E85C9F273E91D7E601FC999B4665(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MenuManager::ShareMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuManager_ShareMessage_m5A36B34BA570E85C9F273E91D7E601FC999B4665 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* L_0 = (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E*)il2cpp_codegen_object_new(U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShareMessageU3Ed__24__ctor_mA51E89A88BBCEB768D04A29C0E1011E3F7FD0B28(L_0, 0, NULL);
		U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.String MenuManager::LoadAndReturnNeuralNetwork(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MenuManager_LoadAndReturnNeuralNetwork_m0036F427C8C1A696F6021CA3EFE1C4B731D3860E (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string neuralNetworkString = new string("");
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0;
		L_0 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		String_t* L_1;
		L_1 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_0, NULL);
		V_0 = L_1;
		// int i = 0;
		V_1 = 0;
	}

IL_0012:
	{
		// if(PlayerPrefs.HasKey(path + "_" + i.ToString()))
		String_t* L_2 = ___path0;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_3, NULL);
		bool L_5;
		L_5 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_4, NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		// neuralNetworkString += PlayerPrefs.GetString(path + "_" + i.ToString()) + "\n";
		String_t* L_6 = V_0;
		String_t* L_7 = ___path0;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_7, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_8, NULL);
		String_t* L_10;
		L_10 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, L_10, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_11;
		// i++;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0012;
	}

IL_0054:
	{
		// return neuralNetworkString;
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void MenuManager::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_DeleteAll_m87B6C424E45C6E7DDF3A64B02CDDA407489A1874 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC580A37DDEA4536BC6FE5DDBCACFBAD1F8A860);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < networksList.Count; i++)
		V_1 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		// Destroy(networksList[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// for (int i = 0; i < networksList.Count; i++)
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < networksList.Count; i++)
		int32_t L_4 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521(NULL);
		// namesNN = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_7, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16), (void*)L_7);
		// networksList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_8, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17), (void*)L_8);
		// selectedNetworkName = null;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14), (void*)(String_t*)NULL);
		// networksCount = 1;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksCount_15 = 1;
		// PlayerPrefs.SetString("BASE_BOT_NN_NAME", "???????");
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359, _stringLiteralB0AA3369666C9B473B65CFD568150D3010F90EF1, NULL);
		// InterSceneScript.SaveToPlayerPrefs("BASE_BOT_NN", preTrainedNetwork);
		String_t* L_9 = __this->___preTrainedNetwork_4;
		InterSceneScript_SaveToPlayerPrefs_mCDA5C41843543B19F6E316FC06E52FEE268ED518(_stringLiteralBDC580A37DDEA4536BC6FE5DDBCACFBAD1F8A860, L_9, NULL);
		// GameObject net = Instantiate(networkElementPrefab, scrollNetworkPanel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___networkElementPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___scrollNetworkPanel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_12;
		// net.GetComponent<NeuralNetworkElement>().text.text = PlayerPrefs.GetString("BASE_BOT_NN_NAME");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* L_14;
		L_14 = GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305(L_13, GameObject_GetComponent_TisNeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C_m97FBFD642CE91B8665105038D200BCCA7F2B1305_RuntimeMethod_var);
		NullCheck(L_14);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = L_14->___text_4;
		String_t* L_16;
		L_16 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_16);
		// networksList.Add(net);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_17 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___networksList_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_17, L_18, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// namesNN.Add(PlayerPrefs.GetString("BASE_BOT_NN_NAME"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___namesNN_16;
		String_t* L_20;
		L_20 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral8FD98E02F188DC220D1C8C140C6D6C72261ED359, NULL);
		NullCheck(L_19);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_19, L_20, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// addNetworkButton.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___addNetworkButton_10;
		NullCheck(L_21);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_21, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// addNetworkButton.parent = scrollNetworkPanel;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___addNetworkButton_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___scrollNetworkPanel_9;
		NullCheck(L_22);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FCFDE5706F4D32F0D62CF251056F80315954921D5F969E70EFEE02344CBB2549_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] layers = new int[3] { 4, 3, 2 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FCFDE5706F4D32F0D62CF251056F80315954921D5F969E70EFEE02344CBB2549_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___layers_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layers_13), (void*)L_1);
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
// System.Void MenuManager/<ShareMessage>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareMessageU3Ed__24__ctor_mA51E89A88BBCEB768D04A29C0E1011E3F7FD0B28 (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MenuManager/<ShareMessage>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareMessageU3Ed__24_System_IDisposable_Dispose_m70081817E906A111C46A8F47E9A79617D240579B (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MenuManager/<ShareMessage>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShareMessageU3Ed__24_MoveNext_m767FA2F1B1CBAD8862CE757AA2D20CCAD68E1898 (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03759378C31F4B771E191F4769EAE593FB1DDBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BCA67AE45A2B468FE9690DDEAD602D30038CDF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// string path = InterSceneScript.GetPathWithNetworkName(selectedNetworkName);
		String_t* L_5 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14;
		String_t* L_6;
		L_6 = InterSceneScript_GetPathWithNetworkName_m83D28E5D14D0FE14AF8B8CD4D2632B4E2C18E8B9(L_5, NULL);
		V_2 = L_6;
		// string neuralNetworkString = PlayerPrefs.GetString(path + "_NAME") + "\n\n" + PlayerPrefs.GetInt(path + "_STEPS") + "\n\n" + LoadAndReturnNeuralNetwork(path);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = V_2;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_9, _stringLiteral7B4FD53EC475D9AAFE2E92A6DC571C7A62F8C560, NULL);
		String_t* L_11;
		L_11 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_10, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = V_2;
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_14, _stringLiteral2154A39BE9EE1BC8C6998A5E7445450D810F2E82, NULL);
		int32_t L_16;
		L_16 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_15, NULL);
		V_4 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_13;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_20 = V_1;
		String_t* L_21 = V_2;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = MenuManager_LoadAndReturnNeuralNetwork_m0036F427C8C1A696F6021CA3EFE1C4B731D3860E(L_20, L_21, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_22);
		String_t* L_23;
		L_23 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_19, NULL);
		V_3 = L_23;
		// print(neuralNetworkString);
		String_t* L_24 = V_3;
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_24, NULL);
		// if(neuralNetworkString != "") new NativeShare().SetSubject("??? ????????? ????.").SetText(neuralNetworkString).Share();
		String_t* L_25 = V_3;
		bool L_26;
		L_26 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_25, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_26)
		{
			goto IL_00c8;
		}
	}
	{
		// if(neuralNetworkString != "") new NativeShare().SetSubject("??? ????????? ????.").SetText(neuralNetworkString).Share();
		NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* L_27 = (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B*)il2cpp_codegen_object_new(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		NativeShare__ctor_m7808C679AB06B9BE0BFF3FA5FF0F7FD06C51BE6E(L_27, NULL);
		NullCheck(L_27);
		NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* L_28;
		L_28 = NativeShare_SetSubject_mB0E01F5228D5C868274067653497BFD0F1EF1D8A(L_27, _stringLiteral03759378C31F4B771E191F4769EAE593FB1DDBD5, NULL);
		String_t* L_29 = V_3;
		NullCheck(L_28);
		NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* L_30;
		L_30 = NativeShare_SetText_mEB89C82F62181F7754C20F3516754B81559DBA13(L_28, L_29, NULL);
		NullCheck(L_30);
		NativeShare_Share_m3DB5879D819C16FC4325D124E296F6C6CD9C13DD(L_30, NULL);
		goto IL_00d8;
	}

IL_00c8:
	{
		// else errorPanel.OpenErrorPanel("?????????? ????????? ?????? ??????!\n??????? ?? ? ?????????? ?????.");
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_31 = V_1;
		NullCheck(L_31);
		ErrorPanel_t43D0A7FD5C134E1E992301F5EDC44774E6648C2D* L_32 = L_31->___errorPanel_11;
		NullCheck(L_32);
		ErrorPanel_OpenErrorPanel_mD9401C52A67940EB0FCF1704B22FF64330820078(L_32, _stringLiteral5BCA67AE45A2B468FE9690DDEAD602D30038CDF9, NULL);
	}

IL_00d8:
	{
		// }
		return (bool)0;
	}
}
// System.Object MenuManager/<ShareMessage>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShareMessageU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D15E6B1219A5B8CCA65E7C0EDF628C3391F5416 (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MenuManager/<ShareMessage>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareMessageU3Ed__24_System_Collections_IEnumerator_Reset_mF85AA7654EA44100AB5E4F1BD3FC4BDB796D6C22 (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShareMessageU3Ed__24_System_Collections_IEnumerator_Reset_mF85AA7654EA44100AB5E4F1BD3FC4BDB796D6C22_RuntimeMethod_var)));
	}
}
// System.Object MenuManager/<ShareMessage>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShareMessageU3Ed__24_System_Collections_IEnumerator_get_Current_m31ED91C9F086D85302003DB99EA7D82C4284722D (U3CShareMessageU3Ed__24_tCB86508320600A60144C29A98F7C3F71FBDEE58E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NeuralNetwork::.ctor(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork__ctor_m5656B82812F0168ED97841E7D96015CE1A26356F (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___layers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public NeuralNetwork(int[] layers)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.layers = new int[layers.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___layers0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___layers_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layers_0), (void*)L_1);
		// for (int i = 0; i < layers.Length; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0018:
	{
		// this.layers[i] = layers[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___layers_0;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___layers0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_7);
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___layers0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// InitNeurons();
		NeuralNetwork_InitNeurons_mBB1E561268144871C52F73BBBC7F4E104AD0E5A6(__this, NULL);
		// InitBiases();
		NeuralNetwork_InitBiases_mC9CAE1D3A88F3A9F2CD106F179F4F3EED8708A3B(__this, NULL);
		// InitWeights();
		NeuralNetwork_InitWeights_m474E7D8DBEEC6085CF7F083855561BD43E5B3FFC(__this, NULL);
		// }
		return;
	}
}
// System.Void NeuralNetwork::InitNeurons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_InitNeurons_mBB1E561268144871C52F73BBBC7F4E104AD0E5A6 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<float[]> neuronsList = new List<float[]>();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_0 = (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*)il2cpp_codegen_object_new(List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347(L_0, List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < layers.Length; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_000a:
	{
		// neuronsList.Add(new float[layers[i]]);
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___layers_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		NullCheck(L_1);
		List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_inline(L_1, L_6, List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_8 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___layers_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// neurons = neuronsList.ToArray();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_10 = V_0;
		NullCheck(L_10);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_11;
		L_11 = List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0(L_10, List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		__this->___neurons_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___neurons_1), (void*)L_11);
		// }
		return;
	}
}
// System.Void NeuralNetwork::InitBiases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_InitBiases_mC9CAE1D3A88F3A9F2CD106F179F4F3EED8708A3B (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* V_0 = NULL;
	int32_t V_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// List<float[]> biasList = new List<float[]>();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_0 = (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*)il2cpp_codegen_object_new(List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347(L_0, List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < layers.Length; i++)
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		// float[] bias = new float[layers[i]];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___layers_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		// for (int j = 0; j < layers[i]; j++)
		V_3 = 0;
		goto IL_0032;
	}

IL_001c:
	{
		// bias[j] = UnityEngine.Random.Range(-0.5f, 0.5f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_2;
		int32_t L_7 = V_3;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		// for (int j = 0; j < layers[i]; j++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0032:
	{
		// for (int j = 0; j < layers[i]; j++)
		int32_t L_10 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___layers_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) < ((int32_t)L_14)))
		{
			goto IL_001c;
		}
	}
	{
		// biasList.Add(bias);
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_15 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_2;
		NullCheck(L_15);
		List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_inline(L_15, L_16, List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		// for (int i = 0; i < layers.Length; i++)
		int32_t L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___layers_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// biases = biasList.ToArray();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_20 = V_0;
		NullCheck(L_20);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_21;
		L_21 = List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0(L_20, List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		__this->___biases_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___biases_2), (void*)L_21);
		// }
		return;
	}
}
// System.Void NeuralNetwork::InitWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_InitWeights_m474E7D8DBEEC6085CF7F083855561BD43E5B3FFC (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// List<float[][]> weightsList = new List<float[][]>();
		List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* L_0 = (List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF*)il2cpp_codegen_object_new(List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F(L_0, List_1__ctor_m2E9A9C3F624C40DB949917C756540F7FC4B5FC0F_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 1; i < layers.Length; i++)
		V_1 = 1;
		goto IL_0078;
	}

IL_000a:
	{
		// List<float[]> layerWeightsList = new List<float[]>();
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_1 = (List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896*)il2cpp_codegen_object_new(List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347(L_1, List_1__ctor_mC3A3449461E28759BD1D812308B3746F528C1347_RuntimeMethod_var);
		V_2 = L_1;
		// int neuronsInPreviousLayer = layers[i - 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___layers_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// for (int j = 0; j < neurons[i].Length; j++)
		V_4 = 0;
		goto IL_005a;
	}

IL_0020:
	{
		// float[] neuronWeights = new float[neuronsInPreviousLayer];
		int32_t L_6 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_5 = L_7;
		// for (int k = 0; k < neuronsInPreviousLayer; k++)
		V_6 = 0;
		goto IL_0047;
	}

IL_002d:
	{
		// neuronWeights[k] = UnityEngine.Random.Range(-0.5f, 0.5f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_5;
		int32_t L_9 = V_6;
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)L_10);
		// for (int k = 0; k < neuronsInPreviousLayer; k++)
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0047:
	{
		// for (int k = 0; k < neuronsInPreviousLayer; k++)
		int32_t L_12 = V_6;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002d;
		}
	}
	{
		// layerWeightsList.Add(neuronWeights);
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_14 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = V_5;
		NullCheck(L_14);
		List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_inline(L_14, L_15, List_1_Add_m36E4C95FDA562BB6E8E783562EB7F959C8502752_RuntimeMethod_var);
		// for (int j = 0; j < neurons[i].Length; j++)
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005a:
	{
		// for (int j = 0; j < neurons[i].Length; j++)
		int32_t L_17 = V_4;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_18 = __this->___neurons_1;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// weightsList.Add(layerWeightsList.ToArray());
		List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* L_22 = V_0;
		List_1_tACA3EE7A09CB9029F627DC3B525F514EB4D2F896* L_23 = V_2;
		NullCheck(L_23);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_24;
		L_24 = List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0(L_23, List_1_ToArray_m935E750A499549BB2F1A9B7DEAFAFB8CBF6E49B0_RuntimeMethod_var);
		NullCheck(L_22);
		List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_inline(L_22, L_24, List_1_Add_m49ADDB4796AB7ECA7E6A1A14CD9D9A710B2DC713_RuntimeMethod_var);
		// for (int i = 1; i < layers.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0078:
	{
		// for (int i = 1; i < layers.Length; i++)
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___layers_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// weights = weightsList.ToArray();
		List_1_t63AD175A025924BE5A0A9AF30AA395625F642AFF* L_28 = V_0;
		NullCheck(L_28);
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_29;
		L_29 = List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8(L_28, List_1_ToArray_m939155CCD8348FF338188F242583B4CFE8A826E8_RuntimeMethod_var);
		__this->___weights_3 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weights_3), (void*)L_29);
		// }
		return;
	}
}
// System.Single[] NeuralNetwork::FeedForward(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* NeuralNetwork_FeedForward_m45AC6764E1B9DA098BAE5BD6F24787A5335918AD (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputs0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		// for (int i = 0; i < inputs.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// neurons[0][i] = inputs[i];
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_0 = __this->___neurons_1;
		NullCheck(L_0);
		int32_t L_1 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___inputs0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)L_7);
		// for (int i = 0; i < inputs.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < inputs.Length; i++)
		int32_t L_9 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___inputs0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 1; i < layers.Length; i++)
		V_1 = 1;
		goto IL_0095;
	}

IL_001f:
	{
		// for (int j = 0; j < neurons[i].Length; j++)
		V_2 = 0;
		goto IL_0084;
	}

IL_0023:
	{
		// float value = 0f;
		V_3 = (0.0f);
		// for (int k = 0; k < neurons[i - 1].Length; k++)
		V_4 = 0;
		goto IL_0054;
	}

IL_002e:
	{
		// value += weights[i - 1][j][k] * neurons[i - 1][k];
		float L_11 = V_3;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_12 = __this->___weights_3;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_22 = __this->___neurons_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_21, L_28))));
		// for (int k = 0; k < neurons[i - 1].Length; k++)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0054:
	{
		// for (int k = 0; k < neurons[i - 1].Length; k++)
		int32_t L_30 = V_4;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_31 = __this->___neurons_1;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// neurons[i][j] = activate(value + biases[i][j]);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_35 = __this->___neurons_1;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_2;
		float L_40 = V_3;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_41 = __this->___biases_2;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = V_2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		float L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48;
		L_48 = NeuralNetwork_activate_m563599D40860001AC719DC60B6C5229B00D62DB6(__this, ((float)il2cpp_codegen_add(L_40, L_47)), NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (float)L_48);
		// for (int j = 0; j < neurons[i].Length; j++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0084:
	{
		// for (int j = 0; j < neurons[i].Length; j++)
		int32_t L_50 = V_2;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_51 = __this->___neurons_1;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// for (int i = 1; i < layers.Length; i++)
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0095:
	{
		// for (int i = 1; i < layers.Length; i++)
		int32_t L_56 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___layers_0;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// return neurons[neurons.Length - 1];
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_58 = __this->___neurons_1;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_59 = __this->___neurons_1;
		NullCheck(L_59);
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_59)->max_length)), 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		return L_61;
	}
}
// System.Single NeuralNetwork::activate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NeuralNetwork_activate_m563599D40860001AC719DC60B6C5229B00D62DB6 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (float)Math.Tanh(value);
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = tanh(((double)L_0));
		return ((float)L_1);
	}
}
// System.Void NeuralNetwork::Mutate(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_Mutate_m15A8049FD7B9CBE768EF0952E29C4CAE65D57860 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, int32_t ___chance0, float ___val1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B4_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	int32_t G_B5_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B5_2 = NULL;
	int32_t G_B14_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B14_1 = NULL;
	int32_t G_B13_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B13_1 = NULL;
	float G_B15_0 = 0.0f;
	int32_t G_B15_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B15_2 = NULL;
	{
		// for (int i = 0; i < biases.Length; i++)
		V_0 = 0;
		goto IL_0063;
	}

IL_0004:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		V_1 = 0;
		goto IL_0052;
	}

IL_0008:
	{
		// biases[i][j] = (UnityEngine.Random.Range(0f, chance) <= 5) ? biases[i][j] += UnityEngine.Random.Range(-val, val) : biases[i][j];
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_0 = __this->___biases_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_1;
		int32_t L_5 = ___chance0;
		float L_6;
		L_6 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), ((float)L_5), NULL);
		G_B3_0 = L_4;
		G_B3_1 = L_3;
		if ((((float)L_6) <= ((float)(5.0f))))
		{
			G_B4_0 = L_4;
			G_B4_1 = L_3;
			goto IL_0030;
		}
	}
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_7 = __this->___biases_2;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		G_B5_0 = L_13;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_004d;
	}

IL_0030:
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_14 = __this->___biases_2;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_1;
		NullCheck(L_17);
		float* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		float L_20 = *((float*)L_19);
		float L_21 = ___val1;
		float L_22 = ___val1;
		float L_23;
		L_23 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_21)), L_22, NULL);
		float L_24 = ((float)il2cpp_codegen_add(L_20, L_23));
		V_2 = L_24;
		*((float*)L_19) = (float)L_24;
		float L_25 = V_2;
		G_B5_0 = L_25;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_004d:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (float)G_B5_0);
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0052:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_27 = V_1;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_28 = __this->___biases_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_33 = V_0;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_34 = __this->___biases_2;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		V_3 = 0;
		goto IL_0103;
	}

IL_0075:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		V_4 = 0;
		goto IL_00ee;
	}

IL_007a:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		V_5 = 0;
		goto IL_00d7;
	}

IL_007f:
	{
		// weights[i][j][k] = (UnityEngine.Random.Range(0f, chance) <= 5) ? weights[i][j][k] += UnityEngine.Random.Range(-val, val) : weights[i][j][k];
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_35 = __this->___weights_3;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = V_5;
		int32_t L_43 = ___chance0;
		float L_44;
		L_44 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), ((float)L_43), NULL);
		G_B13_0 = L_42;
		G_B13_1 = L_41;
		if ((((float)L_44) <= ((float)(5.0f))))
		{
			G_B14_0 = L_42;
			G_B14_1 = L_41;
			goto IL_00af;
		}
	}
	{
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_45 = __this->___weights_3;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		float L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		G_B15_0 = L_54;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_00d0;
	}

IL_00af:
	{
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_55 = __this->___weights_3;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = V_4;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = V_5;
		NullCheck(L_61);
		float* L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)));
		float L_64 = *((float*)L_63);
		float L_65 = ___val1;
		float L_66 = ___val1;
		float L_67;
		L_67 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_65)), L_66, NULL);
		float L_68 = ((float)il2cpp_codegen_add(L_64, L_67));
		V_2 = L_68;
		*((float*)L_63) = (float)L_68;
		float L_69 = V_2;
		G_B15_0 = L_69;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_00d0:
	{
		NullCheck(G_B15_2);
		(G_B15_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B15_1), (float)G_B15_0);
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_70 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_00d7:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_71 = V_5;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_72 = __this->___weights_3;
		int32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		int32_t L_76 = V_4;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_79 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_00ee:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_80 = V_4;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_81 = __this->___weights_3;
		int32_t L_82 = V_3;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		if ((((int32_t)L_80) < ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))
		{
			goto IL_007a;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_85 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0103:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_86 = V_3;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_87 = __this->___weights_3;
		NullCheck(L_87);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 NeuralNetwork::CompareTo(NeuralNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NeuralNetwork_CompareTo_mC5791CD303645393201932117FF9325AAE29DE1B (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) return 1;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (other == null) return 1;
		return 1;
	}

IL_0005:
	{
		// if (fitness > other.fitness) return 1;
		float L_1 = __this->___fitness_5;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_2 = ___other0;
		NullCheck(L_2);
		float L_3 = L_2->___fitness_5;
		if ((!(((float)L_1) > ((float)L_3))))
		{
			goto IL_0015;
		}
	}
	{
		// if (fitness > other.fitness) return 1;
		return 1;
	}

IL_0015:
	{
		// else if (fitness < other.fitness) return -1;
		float L_4 = __this->___fitness_5;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_5 = ___other0;
		NullCheck(L_5);
		float L_6 = L_5->___fitness_5;
		if ((!(((float)L_4) < ((float)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		// else if (fitness < other.fitness) return -1;
		return (-1);
	}

IL_0025:
	{
		// else return 0;
		return 0;
	}
}
// NeuralNetwork NeuralNetwork::copy(NeuralNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* NeuralNetwork_copy_m268029B5908F2AAA85F3180DDA9579CF89A6DCCF (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* ___nn0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// for (int i = 0; i < biases.Length; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		V_1 = 0;
		goto IL_0020;
	}

IL_0008:
	{
		// nn.biases[i][j] = biases[i][j];
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_0 = ___nn0;
		NullCheck(L_0);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_1 = L_0->___biases_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_1;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_6 = __this->___biases_2;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_12);
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0020:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_14 = V_1;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_15 = __this->___biases_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_20 = V_0;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_21 = __this->___biases_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		V_2 = 0;
		goto IL_008e;
	}

IL_0040:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		V_3 = 0;
		goto IL_007d;
	}

IL_0044:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		V_4 = 0;
		goto IL_0069;
	}

IL_0049:
	{
		// nn.weights[i][j][k] = weights[i][j][k];
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_22 = ___nn0;
		NullCheck(L_22);
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_23 = L_22->___weights_3;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_4;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_31 = __this->___weights_3;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		float L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (float)L_40);
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0069:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_42 = V_4;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_43 = __this->___weights_3;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_007d:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_51 = V_3;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_52 = __this->___weights_3;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_008e:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_57 = V_2;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_58 = __this->___weights_3;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))
		{
			goto IL_0040;
		}
	}
	{
		// return nn;
		NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* L_59 = ___nn0;
		return L_59;
	}
}
// System.Void NeuralNetwork::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_Load_mA5B8179B397238BACD0632BDED05F87FD65FEA78 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A699366712743B9864E5DE2F3CCD9D9AD40A60C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// if (PlayerPrefs.HasKey(path + "_0"))
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral7A699366712743B9864E5DE2F3CCD9D9AD40A60C, NULL);
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_1, NULL);
		if (!L_2)
		{
			goto IL_0123;
		}
	}
	{
		// int NumberOfLines = 0;
		V_0 = 0;
		// int index = 0;
		V_1 = 0;
	}

IL_0019:
	{
		// if(PlayerPrefs.HasKey(path + "_" + NumberOfLines.ToString())) NumberOfLines++;
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_4, NULL);
		bool L_6;
		L_6 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if(PlayerPrefs.HasKey(path + "_" + NumberOfLines.ToString())) NumberOfLines++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		goto IL_0019;
	}

IL_0038:
	{
		// string[] ListLines = new string[NumberOfLines];
		int32_t L_8 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		// for (int i = 0; i < NumberOfLines; i++)
		V_3 = 0;
		goto IL_0066;
	}

IL_0043:
	{
		// ListLines[i] = PlayerPrefs.GetString(path + "_" + i.ToString()).ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_2;
		int32_t L_11 = V_3;
		String_t* L_12 = ___path0;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_12, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_13, NULL);
		String_t* L_15;
		L_15 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_16);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (String_t*)L_16);
		// for (int i = 0; i < NumberOfLines; i++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0066:
	{
		// for (int i = 0; i < NumberOfLines; i++)
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0043;
		}
	}
	{
		// if (NumberOfLines > 0)
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0123;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		V_4 = 0;
		goto IL_00ae;
	}

IL_0076:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		V_5 = 0;
		goto IL_0099;
	}

IL_007b:
	{
		// biases[i][j] = float.Parse(ListLines[index]);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_21 = __this->___biases_2;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_2;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		String_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		float L_30;
		L_30 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_29, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (float)L_30);
		// index++;
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0099:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_33 = V_5;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_34 = __this->___biases_2;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_007b;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00ae:
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_39 = V_4;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_40 = __this->___biases_2;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0076;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		V_6 = 0;
		goto IL_0117;
	}

IL_00bf:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		V_7 = 0;
		goto IL_0102;
	}

IL_00c4:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		V_8 = 0;
		goto IL_00ea;
	}

IL_00c9:
	{
		// weights[i][j][k] = float.Parse(ListLines[index]); ;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_41 = __this->___weights_3;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = V_7;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = V_2;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		String_t* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		float L_53;
		L_53 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_52, NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (float)L_53);
		// index++;
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_55 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00ea:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_56 = V_8;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_57 = __this->___weights_3;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		int32_t L_61 = V_7;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_00c9;
		}
	}
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_64 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0102:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_65 = V_7;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_66 = __this->___weights_3;
		int32_t L_67 = V_6;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_00c4;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_70 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0117:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_71 = V_6;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_72 = __this->___weights_3;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))))
		{
			goto IL_00bf;
		}
	}

IL_0123:
	{
		// }
		return;
	}
}
// System.Void NeuralNetwork::Save(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetwork_Save_m450B4C1B7F8541046A2B8DD17C47D66DB388AD52 (NeuralNetwork_tA7DAFE60E2498DC7C3B2B949200CA78EAA87B38B* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int lineNum = 0;
		V_0 = 0;
		// for (int i = 0; i < biases.Length; i++)
		V_1 = 0;
		goto IL_004d;
	}

IL_0006:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		V_2 = 0;
		goto IL_003c;
	}

IL_000a:
	{
		// PlayerPrefs.SetString(path + "_" + lineNum.ToString(), biases[i][j].ToString());
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_1, NULL);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_3 = __this->___biases_2;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_2;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_2, L_8, NULL);
		// lineNum++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003c:
	{
		// for (int j = 0; j < biases[i].Length; j++)
		int32_t L_11 = V_2;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_12 = __this->___biases_2;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < biases.Length; i++)
		int32_t L_17 = V_1;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_18 = __this->___biases_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		V_3 = 0;
		goto IL_00c7;
	}

IL_005c:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_0061:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		V_5 = 0;
		goto IL_009e;
	}

IL_0066:
	{
		// PlayerPrefs.SetString(path + "_" + lineNum.ToString(), weights[i][j][k].ToString());
		String_t* L_19 = ___path0;
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_21;
		L_21 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_19, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_20, NULL);
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_22 = __this->___weights_3;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_5;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_21, L_30, NULL);
		// lineNum++;
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_009e:
	{
		// for (int k = 0; k < weights[i][j].Length; k++)
		int32_t L_33 = V_5;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_34 = __this->___weights_3;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b5:
	{
		// for (int j = 0; j < weights[i].Length; j++)
		int32_t L_42 = V_4;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_43 = __this->___weights_3;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00c7:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_48 = V_3;
		SingleU5BU5DU5BU5DU5BU5D_tDB8418EE7CF357DD86765560790736A9AFEA20D8* L_49 = __this->___weights_3;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_005c;
		}
	}
	{
		// }
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
// System.Void NeuralNetworkElement::SetSelectedNetwork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetworkElement_SetSelectedNetwork_m80F4036219E83F0BB303EB2777FFDF2649EF4CF0 (NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MenuManager.selectedNetworkName = text.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___selectedNetworkName_14), (void*)L_1);
		// }
		return;
	}
}
// System.Void NeuralNetworkElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NeuralNetworkElement__ctor_m31EB18DD1F8CFEE4E2CD5838C385EFE8963BEA4A (NeuralNetworkElement_t9BB21A1EB9B57C82391505DFBA46633775D3758C* __this, const RuntimeMethod* method) 
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
// System.Void RearWheelDrive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RearWheelDrive_Start_mAEB7A539C980FF3416D4621B9A5E1D8A09ACF716 (RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* V_1 = NULL;
	{
		// wheels = GetComponentsInChildren<WheelCollider>();
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_0;
		L_0 = Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC(__this, Component_GetComponentsInChildren_TisWheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481_mA4E91E0E874F364344E2D65C4C7F434F3CE2E3CC_RuntimeMethod_var);
		__this->___wheels_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wheels_4), (void*)L_0);
		// for (int i = 0; i < wheels.Length; ++i)
		V_0 = 0;
		goto IL_0046;
	}

IL_0010:
	{
		// var wheel = wheels [i];
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_1 = __this->___wheels_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (wheelShape != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___wheelShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// var ws = GameObject.Instantiate (wheelShape);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___wheelShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// ws.transform.parent = wheel.transform;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_9);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_9, L_11, NULL);
	}

IL_0042:
	{
		// for (int i = 0; i < wheels.Length; ++i)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < wheels.Length; ++i)
		int32_t L_13 = V_0;
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_14 = __this->___wheels_4;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RearWheelDrive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RearWheelDrive_Update_m926D92491A83A5543505F1FA8411E34C54EC5453 (RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* V_2 = NULL;
	int32_t V_3 = 0;
	WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* V_4 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if(isBot)
		bool L_0 = __this->___isBot_5;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// angle = maxAngle * horizontalAxis;
		float L_1 = __this->___maxAngle_6;
		float L_2 = __this->___horizontalAxis_9;
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// torque = maxTorque * verticalAxis;
		float L_3 = __this->___maxTorque_7;
		float L_4 = __this->___verticalAxis_10;
		V_1 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		goto IL_004a;
	}

IL_0026:
	{
		// angle = maxAngle * Input.GetAxis("Horizontal");
		float L_5 = __this->___maxAngle_6;
		float L_6;
		L_6 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		// torque = maxTorque * Input.GetAxis("Vertical");
		float L_7 = __this->___maxTorque_7;
		float L_8;
		L_8 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_7, L_8));
	}

IL_004a:
	{
		// foreach (WheelCollider wheel in wheels)
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_9 = __this->___wheels_4;
		V_2 = L_9;
		V_3 = 0;
		goto IL_00ef;
	}

IL_0058:
	{
		// foreach (WheelCollider wheel in wheels)
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// if (wheel.transform.localPosition.z > 0)
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_14 = V_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___z_4;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		// wheel.steerAngle = angle;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_18 = V_4;
		float L_19 = V_0;
		NullCheck(L_18);
		WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3(L_18, L_19, NULL);
	}

IL_007d:
	{
		// if (wheel.transform.localPosition.z < 0)
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_20 = V_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_21, NULL);
		float L_23 = L_22.___z_4;
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		// wheel.motorTorque = torque;
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_24 = V_4;
		float L_25 = V_1;
		NullCheck(L_24);
		WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8(L_24, L_25, NULL);
	}

IL_009d:
	{
		// if (wheelShape)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___wheelShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_26, NULL);
		if (!L_27)
		{
			goto IL_00eb;
		}
	}
	{
		// wheel.GetWorldPose (out p, out q);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_28 = V_4;
		NullCheck(L_28);
		WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890(L_28, (&V_6), (&V_5), NULL);
		// Transform shapeTransform = wheel.transform.GetChild (0);
		WheelCollider_t4E35407C7AFEFA3DB30E9FFE3C38C9A5C5933481* L_29 = V_4;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, 0, NULL);
		// shapeTransform.position = p;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_6;
		NullCheck(L_32);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_33, NULL);
		// shapeTransform.rotation = q;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_32;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_5;
		NullCheck(L_34);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_34, L_35, NULL);
		// shapeTransform.localScale = new Vector3(1, 1, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_36, NULL);
	}

IL_00eb:
	{
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ef:
	{
		// foreach (WheelCollider wheel in wheels)
		int32_t L_38 = V_3;
		WheelColliderU5BU5D_tF5FFE8A40E6E1C6419886F2DA5E0EA250D73CFF9* L_39 = V_2;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RearWheelDrive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RearWheelDrive__ctor_mC03E45596AA6E4E4AF1FD59515DA0F796E1AAFCB (RearWheelDrive_t8F7A852872588EACC91630D52D300E1BE2C2C299* __this, const RuntimeMethod* method) 
{
	{
		// public bool isBot = true;
		__this->___isBot_5 = (bool)1;
		// public float maxAngle = 30;
		__this->___maxAngle_6 = (30.0f);
		// public float maxTorque = 300;
		__this->___maxTorque_7 = (300.0f);
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
// System.Void SceneTransition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_Awake_m1D6D462D046C97ED961893D165083D28C22541B2 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_mACB9D918D755F05F474CD24F5E420D532083AB9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = GetComponent<SceneTransition>();
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_0;
		L_0 = Component_GetComponent_TisSceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_mACB9D918D755F05F474CD24F5E420D532083AB9E(__this, Component_GetComponent_TisSceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_mACB9D918D755F05F474CD24F5E420D532083AB9E_RuntimeMethod_var);
		((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___instance_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___instance_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void SceneTransition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_Update_mA7239AD26F1EFBD3705089EBB6AF8F35CB6EB73F (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if(isInput)
		bool L_0 = __this->___isInput_6;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// float progress = loadSceneAsyncOperation.progress;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1 = __this->___loadSceneAsyncOperation_9;
		NullCheck(L_1);
		float L_2;
		L_2 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_1, NULL);
		V_0 = L_2;
		// loadingText.text = Mathf.Round(progress * 100).ToString() + "%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___loadingText_4;
		float L_4 = V_0;
		float L_5;
		L_5 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, (100.0f))));
		V_1 = L_5;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// loadingImage.fillAmount = progress;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___loadingImage_5;
		float L_9 = V_0;
		NullCheck(L_8);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_8, L_9, NULL);
		return;
	}

IL_004a:
	{
		// else gameObject.SetActive(isActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_11 = __this->___isActive_7;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void SceneTransition::SwitchToScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_SwitchToScene_m98585F5CE4A9EC5C8EFFC118626CF975DA59B316 (String_t* ___nameScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// try { instance.loadSceneAsyncOperation = SceneManager.LoadSceneAsync(nameScene); }
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_0 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___instance_8;
		String_t* L_1 = ___nameScene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184(L_1, NULL);
		NullCheck(L_0);
		L_0->___loadSceneAsyncOperation_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___loadSceneAsyncOperation_9), (void*)L_2);
		// try { instance.loadSceneAsyncOperation = SceneManager.LoadSceneAsync(nameScene); }
		goto IL_0015;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Object)
		// catch {}
		// catch {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	}// end catch (depth: 1)

IL_0015:
	{
		// }
		return;
	}
}
// System.Void SceneTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition__ctor_m6FEBED7A92C4C5A3ED76C9251DC10A680690B5E5 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	{
		// public bool isActive = true;
		__this->___isActive_7 = (bool)1;
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
// System.Void SliderManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderManager_Awake_m0BC095E84E58FF263A716A0400BFB8FC2EBC5F8E (SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_0);
		// toggle = GetComponent<Toggle>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1;
		L_1 = Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE(__this, Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		__this->___toggle_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void SliderManager::SaveValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderManager_SaveValues_m10DED96CECDDFE293D4A3A241208DDDAD9154EFD (SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A200AEE38F3AA2B9E4B60448584323A4479157D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FBB9A644E760E686CBDBEAB590394F27F21E609);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB13FF3E8BC9CEBF65E9DB8504F7CA10E62E19E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5CD885599A758737CB1BE64F03A17F96342E4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "GameSpeed") Time.timeScale = slider.value;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_4;
		NullCheck(L_0);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_0, NULL);
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_1, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral1A200AEE38F3AA2B9E4B60448584323A4479157D, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "GameSpeed") Time.timeScale = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___slider_5;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C(L_6, NULL);
	}

IL_0031:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationChance") Manager.MutationChance = slider.value;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___inputField_4;
		NullCheck(L_7);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8;
		L_8 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_7, NULL);
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9;
		L_9 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_8, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral7F5CD885599A758737CB1BE64F03A17F96342E4B, NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationChance") Manager.MutationChance = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___slider_5;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_12);
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationChance_17 = L_13;
	}

IL_0062:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationStrength") Manager.MutationStrength = slider.value;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_14 = __this->___inputField_4;
		NullCheck(L_14);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_15;
		L_15 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_14, NULL);
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16;
		L_16 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_15, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral7CB13FF3E8BC9CEBF65E9DB8504F7CA10E62E19E, NULL);
		if (!L_18)
		{
			goto IL_0093;
		}
	}
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationStrength") Manager.MutationStrength = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___slider_5;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_19);
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationStrength_18 = L_20;
	}

IL_0093:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "IsUpCamera") Manager.IsUpCamera = toggle.isOn;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_21 = __this->___inputField_4;
		NullCheck(L_21);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_22;
		L_22 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_21, NULL);
		NullCheck(L_22);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23;
		L_23 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_22, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_23);
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral2FBB9A644E760E686CBDBEAB590394F27F21E609, NULL);
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "IsUpCamera") Manager.IsUpCamera = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_26 = __this->___toggle_6;
		NullCheck(L_26);
		bool L_27;
		L_27 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_26, NULL);
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsUpCamera_19 = L_27;
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void SliderManager::SetDefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderManager_SetDefaultValue_m6ED29B6CC4A47BE767C047434BE3B0C7BFCB45A8 (SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A200AEE38F3AA2B9E4B60448584323A4479157D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FBB9A644E760E686CBDBEAB590394F27F21E609);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B45CA1576D910692CC3B5D14C08CBCDFAD7B89E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB13FF3E8BC9CEBF65E9DB8504F7CA10E62E19E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5CD885599A758737CB1BE64F03A17F96342E4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA45F5215BA710500368C36205BA89E195AC83FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "GameSpeed")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_4;
		NullCheck(L_0);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_0, NULL);
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_1, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral1A200AEE38F3AA2B9E4B60448584323A4479157D, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// inputField.text = "1";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___inputField_4;
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		// slider.value = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_5;
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, (1.0f));
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
	}

IL_004b:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationChance")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___inputField_4;
		NullCheck(L_7);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8;
		L_8 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_7, NULL);
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9;
		L_9 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_8, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral7F5CD885599A758737CB1BE64F03A17F96342E4B, NULL);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		// inputField.text = "0.1";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___inputField_4;
		NullCheck(L_12);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_12, _stringLiteral4B45CA1576D910692CC3B5D14C08CBCDFAD7B89E, NULL);
		// slider.value = 0.1f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->___slider_5;
		NullCheck(L_13);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_13, (0.100000001f));
		// Manager.MutationChance = 0.1f;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationChance_17 = (0.100000001f);
	}

IL_0096:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationStrength")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_14 = __this->___inputField_4;
		NullCheck(L_14);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_15;
		L_15 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_14, NULL);
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16;
		L_16 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_15, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral7CB13FF3E8BC9CEBF65E9DB8504F7CA10E62E19E, NULL);
		if (!L_18)
		{
			goto IL_00e1;
		}
	}
	{
		// inputField.text = "0.01";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_19 = __this->___inputField_4;
		NullCheck(L_19);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_19, _stringLiteralA45F5215BA710500368C36205BA89E195AC83FBF, NULL);
		// slider.value = 0.01f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_20 = __this->___slider_5;
		NullCheck(L_20);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_20, (0.00999999978f));
		// Manager.MutationStrength = 0.01f;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationStrength_18 = (0.00999999978f);
	}

IL_00e1:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "IsUpCamera")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_21 = __this->___inputField_4;
		NullCheck(L_21);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_22;
		L_22 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_21, NULL);
		NullCheck(L_22);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23;
		L_23 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_22, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_23);
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral2FBB9A644E760E686CBDBEAB590394F27F21E609, NULL);
		if (!L_25)
		{
			goto IL_0114;
		}
	}
	{
		// toggle.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_26 = __this->___toggle_6;
		NullCheck(L_26);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_26, (bool)0, NULL);
		// Manager.IsUpCamera = false;
		((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsUpCamera_19 = (bool)0;
	}

IL_0114:
	{
		// }
		return;
	}
}
// System.Void SliderManager::SetCurrentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderManager_SetCurrentValue_mB1FD2C4A5B22CFD82DF458756BA1974F9A1568C1 (SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A200AEE38F3AA2B9E4B60448584323A4479157D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FBB9A644E760E686CBDBEAB590394F27F21E609);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB13FF3E8BC9CEBF65E9DB8504F7CA10E62E19E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5CD885599A758737CB1BE64F03A17F96342E4B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "GameSpeed")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_4;
		NullCheck(L_0);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_0, NULL);
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_1, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral1A200AEE38F3AA2B9E4B60448584323A4479157D, NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// inputField.text = Time.timeScale.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___inputField_4;
		float L_6;
		L_6 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, L_7, NULL);
		// slider.value = Time.timeScale;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___slider_5;
		float L_9;
		L_9 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_8, L_9);
	}

IL_0049:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationChance")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_10 = __this->___inputField_4;
		NullCheck(L_10);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_11;
		L_11 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_10, NULL);
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12;
		L_12 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_11, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral7F5CD885599A758737CB1BE64F03A17F96342E4B, NULL);
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		// inputField.text = Manager.MutationChance.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___inputField_4;
		String_t* L_16;
		L_16 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationChance_17), NULL);
		NullCheck(L_15);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_15, L_16, NULL);
		// slider.value = Manager.MutationChance;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_17 = __this->___slider_5;
		float L_18 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationChance_17;
		NullCheck(L_17);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_17, L_18);
	}

IL_008f:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "MutationStrength")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_19 = __this->___inputField_4;
		NullCheck(L_19);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_20;
		L_20 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_19, NULL);
		NullCheck(L_20);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21;
		L_21 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_20, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_21);
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral7CB13FF3E8BC9CEBF65E9DB8504F7CA10E62E19E, NULL);
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		// inputField.text = Manager.MutationStrength.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_24 = __this->___inputField_4;
		String_t* L_25;
		L_25 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationStrength_18), NULL);
		NullCheck(L_24);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_24, L_25, NULL);
		// slider.value = Manager.MutationStrength;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_26 = __this->___slider_5;
		float L_27 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___MutationStrength_18;
		NullCheck(L_26);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_26, L_27);
	}

IL_00d5:
	{
		// if(inputField.placeholder.GetComponent<Text>().text == "IsUpCamera")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_28 = __this->___inputField_4;
		NullCheck(L_28);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_29;
		L_29 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_28, NULL);
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30;
		L_30 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_29, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_30);
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral2FBB9A644E760E686CBDBEAB590394F27F21E609, NULL);
		if (!L_32)
		{
			goto IL_0106;
		}
	}
	{
		// toggle.isOn = Manager.IsUpCamera;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_33 = __this->___toggle_6;
		bool L_34 = ((Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_il2cpp_TypeInfo_var))->___IsUpCamera_19;
		NullCheck(L_33);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_33, L_34, NULL);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void SliderManager::SetValueFromSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderManager_SetValueFromSlider_m3ACFFBE732BCF7ED15198CB2BDB763CEE25780F1 (SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// inputField.text = slider.value.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_5;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void SliderManager::SetValueFromInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderManager_SetValueFromInputField_m2DB0FD5C9B67C9D73A41E7716458C90501B4BCAB (SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C* __this, const RuntimeMethod* method) 
{
	{
		// slider.value = float.Parse(inputField.text);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_5;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___inputField_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_1, NULL);
		float L_3;
		L_3 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void SliderManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderManager__ctor_mE1786E8FB91AF016A644295F6755B9C5BCEA760A (SliderManager_t9626DF07E6E3EC67FA9F35D95613C686B49D3D8C* __this, const RuntimeMethod* method) 
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
// System.Void TextManager::OpenURL(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextManager_OpenURL_mE0DA10593EE46BFA3BEF92245CCC8B5CBDFDB41D (TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___urlText0, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(urlText.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___urlText0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(L_1, NULL);
		// }
		return;
	}
}
// System.Void TextManager::CopyText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextManager_CopyText_m97381822D59BBDB732EE47960601ADBEAF994CB2 (TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___copyText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90E745986B8565BF493EC39344C15F82178FA760);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUIUtility.systemCopyBuffer = copyText.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___copyText0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		GUIUtility_set_systemCopyBuffer_m3C8F2ECFF3D48746F5E0F8D0376B2DEC4F7C9511(L_1, NULL);
		// isCopingTextAnim.SetTrigger("Anim");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___isCopingTextAnim_4;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral90E745986B8565BF493EC39344C15F82178FA760, NULL);
		// }
		return;
	}
}
// System.Void TextManager::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextManager_PointerDown_mA14321079F46BFD381F7CFEFFAAA38F4482B8825 (TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936* __this, const RuntimeMethod* method) 
{
	{
		// timeOfPointerDown = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___timeOfPointerDown_7 = L_0;
		// }
		return;
	}
}
// System.Void TextManager::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextManager_PointerUp_mEC708D4C0FCB4D3DEC4ED545E8C8DB22CA0D4620 (TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936* __this, const RuntimeMethod* method) 
{
	{
		// if(Time.time - timeOfPointerDown >= clickedTimeOffset) CopyText(copyText);
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->___timeOfPointerDown_7;
		float L_2 = __this->___clickedTimeOffset_6;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) >= ((float)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		// if(Time.time - timeOfPointerDown >= clickedTimeOffset) CopyText(copyText);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___copyText_5;
		TextManager_CopyText_m97381822D59BBDB732EE47960601ADBEAF994CB2(__this, L_3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void TextManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextManager__ctor_mE8D11DAD772F51A380EF2569FEB3A2FBA34E14FF (TextManager_t035D1E5CAAF615422BCE680E65D2EDDEDC297936* __this, const RuntimeMethod* method) 
{
	{
		// public float clickedTimeOffset = 3;
		__this->___clickedTimeOffset_6 = (3.0f);
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
// System.Void HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSetAnimatorBoolean_SetBoolean_m815C8C5DC578CC62D212E263DDBCE697C673498F (ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// animator.SetBool(booleanName, value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		String_t* L_1 = __this->___booleanName_5;
		bool L_2 = ___value0;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSetAnimatorBoolean__ctor_mB5F62D8E9CC2A3074161524E69FFAD7C63C238D5 (ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public Graphic placeholder { get { return m_Placeholder; } set { SetPropertyUtility.SetClass(ref m_Placeholder, value); } }
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___m_Placeholder_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
