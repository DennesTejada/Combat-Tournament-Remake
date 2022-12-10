#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_client_ClientInput
#include <client/ClientInput.h>
#endif
#ifndef INCLUDED_engine_GameInput
#include <engine/GameInput.h>
#endif
#ifndef INCLUDED_engine_GameLoop
#include <engine/GameLoop.h>
#endif
#ifndef INCLUDED_engine_events_GameEvent
#include <engine/events/GameEvent.h>
#endif
#ifndef INCLUDED_engine_events_NetworkEvent
#include <engine/events/NetworkEvent.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e40670a5254b1ba4_7_new,"client.ClientInput","new",0x2dbde1ee,"client.ClientInput.new","client/ClientInput.hx",7,0xa1d0d503)
HX_LOCAL_STACK_FRAME(_hx_pos_e40670a5254b1ba4_24_reset,"client.ClientInput","reset",0xd0045add,"client.ClientInput.reset","client/ClientInput.hx",24,0xa1d0d503)
HX_LOCAL_STACK_FRAME(_hx_pos_e40670a5254b1ba4_26_onUpdate,"client.ClientInput","onUpdate",0x30d8083a,"client.ClientInput.onUpdate","client/ClientInput.hx",26,0xa1d0d503)
namespace client{

void ClientInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e40670a5254b1ba4_7_new)
HXLINE(  11)		this->index = 0;
HXLINE(  10)		this->maxInputs = 40;
HXLINE(   9)		this->inputList = ::cpp::VirtualArray_obj::__new();
HXLINE(  14)		super::__construct();
HXLINE(  16)		int a = 0;
HXLINE(  17)		while((a < this->maxInputs)){
HXLINE(  18)			 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(  18)			this->inputList->push(this1);
HXLINE(  19)			a = (a + 1);
            		}
HXLINE(  21)		::Main_obj::gameLoop->addEventListener(::engine::events::GameEvent_obj::ON_GAME_LOOP,this->onUpdate_dyn(),null(),null(),null());
            	}

Dynamic ClientInput_obj::__CreateEmpty() { return new ClientInput_obj; }

void *ClientInput_obj::_hx_vtable = 0;

Dynamic ClientInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientInput_obj > _hx_result = new ClientInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClientInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x411f192c || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ClientInput_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_e40670a5254b1ba4_24_reset)
HXDLIN(  24)		this->index = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientInput_obj,reset,(void))

void ClientInput_obj::onUpdate( ::engine::events::GameEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_e40670a5254b1ba4_26_onUpdate)
HXLINE(  28)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(  28)		 ::Dynamic newInput = this1;
HXLINE(  29)		{
HXLINE(  29)			 ::Dynamic value = ::Main_obj::gameInput->UP;
HXDLIN(  29)			{
HXLINE(  29)				 ::Dynamic this2 = newInput;
HXDLIN(  29)				if (::hx::IsNotNull( this2 )) {
HXLINE(  29)					::Reflect_obj::setProperty(this2,HX_("UP",5b,4a,00,00),value);
            				}
            			}
            		}
HXLINE(  30)		{
HXLINE(  30)			 ::Dynamic value1 = ::Main_obj::gameInput->DOWN;
HXDLIN(  30)			{
HXLINE(  30)				 ::Dynamic this3 = newInput;
HXDLIN(  30)				if (::hx::IsNotNull( this3 )) {
HXLINE(  30)					::Reflect_obj::setProperty(this3,HX_("DOWN",62,c0,2e,2d),value1);
            				}
            			}
            		}
HXLINE(  31)		{
HXLINE(  31)			 ::Dynamic value2 = ::Main_obj::gameInput->LEFT;
HXDLIN(  31)			{
HXLINE(  31)				 ::Dynamic this4 = newInput;
HXDLIN(  31)				if (::hx::IsNotNull( this4 )) {
HXLINE(  31)					::Reflect_obj::setProperty(this4,HX_("LEFT",07,d0,70,32),value2);
            				}
            			}
            		}
HXLINE(  32)		{
HXLINE(  32)			 ::Dynamic value3 = ::Main_obj::gameInput->RIGHT;
HXDLIN(  32)			{
HXLINE(  32)				 ::Dynamic this5 = newInput;
HXDLIN(  32)				if (::hx::IsNotNull( this5 )) {
HXLINE(  32)					::Reflect_obj::setProperty(this5,HX_("RIGHT",bc,43,52,67),value3);
            				}
            			}
            		}
HXLINE(  33)		{
HXLINE(  33)			 ::Dynamic value4 = ::Main_obj::gameInput->ATTACK;
HXDLIN(  33)			{
HXLINE(  33)				 ::Dynamic this6 = newInput;
HXDLIN(  33)				if (::hx::IsNotNull( this6 )) {
HXLINE(  33)					::Reflect_obj::setProperty(this6,HX_("ATTACK",c8,a7,92,92),value4);
            				}
            			}
            		}
HXLINE(  34)		{
HXLINE(  34)			 ::Dynamic value5 = ::Main_obj::gameInput->SPECIAL;
HXDLIN(  34)			{
HXLINE(  34)				 ::Dynamic this7 = newInput;
HXDLIN(  34)				if (::hx::IsNotNull( this7 )) {
HXLINE(  34)					::Reflect_obj::setProperty(this7,HX_("SPECIAL",19,4e,29,5f),value5);
            				}
            			}
            		}
HXLINE(  35)		{
HXLINE(  35)			 ::Dynamic value6 = ::Main_obj::gameInput->BLOCK;
HXDLIN(  35)			{
HXLINE(  35)				 ::Dynamic this8 = newInput;
HXDLIN(  35)				if (::hx::IsNotNull( this8 )) {
HXLINE(  35)					::Reflect_obj::setProperty(this8,HX_("BLOCK",2d,ad,ea,32),value6);
            				}
            			}
            		}
HXLINE(  36)		{
HXLINE(  36)			 ::Dynamic value7 = ::Main_obj::gameInput->JUMP;
HXDLIN(  36)			{
HXLINE(  36)				 ::Dynamic this9 = newInput;
HXDLIN(  36)				if (::hx::IsNotNull( this9 )) {
HXLINE(  36)					::Reflect_obj::setProperty(this9,HX_("JUMP",ee,8c,2a,31),value7);
            				}
            			}
            		}
HXLINE(  37)		this->inputList->set(::hx::Mod(this->index,this->inputList->get_length()),newInput);
HXLINE(  38)		 ::client::ClientInput _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  38)		_hx_tmp->index = (_hx_tmp->index + 1);
HXLINE(  39)		this->dispatchEvent( ::engine::events::NetworkEvent_obj::__alloc( HX_CTX ,::engine::events::NetworkEvent_obj::ON_INPUT_UPDATE,newInput));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientInput_obj,onUpdate,(void))


::hx::ObjectPtr< ClientInput_obj > ClientInput_obj::__new() {
	::hx::ObjectPtr< ClientInput_obj > __this = new ClientInput_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ClientInput_obj > ClientInput_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ClientInput_obj *__this = (ClientInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClientInput_obj), true, "client.ClientInput"));
	*(void **)__this = ClientInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClientInput_obj::ClientInput_obj()
{
}

void ClientInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClientInput);
	HX_MARK_MEMBER_NAME(inputList,"inputList");
	HX_MARK_MEMBER_NAME(maxInputs,"maxInputs");
	HX_MARK_MEMBER_NAME(index,"index");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClientInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inputList,"inputList");
	HX_VISIT_MEMBER_NAME(maxInputs,"maxInputs");
	HX_VISIT_MEMBER_NAME(index,"index");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ClientInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputList") ) { return ::hx::Val( inputList ); }
		if (HX_FIELD_EQ(inName,"maxInputs") ) { return ::hx::Val( maxInputs ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClientInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputList") ) { inputList=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxInputs") ) { maxInputs=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClientInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("inputList",88,d9,dd,0e));
	outFields->push(HX_("maxInputs",ed,d6,78,cb));
	outFields->push(HX_("index",12,9b,14,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClientInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ClientInput_obj,inputList),HX_("inputList",88,d9,dd,0e)},
	{::hx::fsInt,(int)offsetof(ClientInput_obj,maxInputs),HX_("maxInputs",ed,d6,78,cb)},
	{::hx::fsInt,(int)offsetof(ClientInput_obj,index),HX_("index",12,9b,14,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClientInput_obj_sStaticStorageInfo = 0;
#endif

static ::String ClientInput_obj_sMemberFields[] = {
	HX_("inputList",88,d9,dd,0e),
	HX_("maxInputs",ed,d6,78,cb),
	HX_("index",12,9b,14,be),
	HX_("reset",cf,49,c8,e6),
	HX_("onUpdate",88,7c,b2,66),
	::String(null()) };

::hx::Class ClientInput_obj::__mClass;

void ClientInput_obj::__register()
{
	ClientInput_obj _hx_dummy;
	ClientInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("client.ClientInput",fc,12,17,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClientInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClientInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace client
