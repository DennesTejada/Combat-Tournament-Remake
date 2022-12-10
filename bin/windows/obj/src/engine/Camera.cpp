#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_engine_Camera
#include <engine/Camera.h>
#endif
#ifndef INCLUDED_engine_GameLoop
#include <engine/GameLoop.h>
#endif
#ifndef INCLUDED_engine_events_GameEvent
#include <engine/events/GameEvent.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b19832cc837a7a1b_15_new,"engine.Camera","new",0xad1d1363,"engine.Camera.new","engine/Camera.hx",15,0xcb66214c)
HX_LOCAL_STACK_FRAME(_hx_pos_b19832cc837a7a1b_27_addedToStage,"engine.Camera","addedToStage",0xbcaae700,"engine.Camera.addedToStage","engine/Camera.hx",27,0xcb66214c)
HX_LOCAL_STACK_FRAME(_hx_pos_b19832cc837a7a1b_33_update,"engine.Camera","update",0x8923c6e6,"engine.Camera.update","engine/Camera.hx",33,0xcb66214c)
namespace engine{

void Camera_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b19832cc837a7a1b_15_new)
HXLINE(  21)		this->viewHeight = 480;
HXLINE(  20)		this->viewWidth = 800;
HXLINE(  24)		super::__construct();
HXLINE(  25)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->addedToStage_dyn(),null(),null(),null());
            	}

Dynamic Camera_obj::__CreateEmpty() { return new Camera_obj; }

void *Camera_obj::_hx_vtable = 0;

Dynamic Camera_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Camera_obj > _hx_result = new Camera_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Camera_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1eebda07) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1eebda07;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Camera_obj::addedToStage( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_b19832cc837a7a1b_27_addedToStage)
HXLINE(  28)		this->bitmapDataView =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,800,480,false,null());
HXLINE(  29)		this->bitmapView =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,this->bitmapDataView,null(),null());
HXLINE(  30)		this->stage->addChild(this->bitmapView);
HXLINE(  31)		::Main_obj::gameLoop->addEventListener(::engine::events::GameEvent_obj::ON_GAME_LOOP,this->update_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,addedToStage,(void))

void Camera_obj::update( ::engine::events::GameEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_b19832cc837a7a1b_33_update)
HXLINE(  34)		 ::openfl::geom::Matrix matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  35)		Float _hx_tmp = -(this->get_x());
HXDLIN(  35)		Float _hx_tmp1 = (( (Float)(this->viewWidth) ) / ( (Float)(2) ));
HXDLIN(  35)		matrix->tx = (_hx_tmp + (_hx_tmp1 * this->get_scaleX()));
HXLINE(  36)		Float _hx_tmp2 = -(this->get_y());
HXDLIN(  36)		Float _hx_tmp3 = (( (Float)(this->viewHeight) ) / ( (Float)(2) ));
HXDLIN(  36)		matrix->ty = (_hx_tmp2 + (_hx_tmp3 * this->get_scaleY()));
HXLINE(  37)		Float _hx_tmp4 = (( (Float)(1) ) / this->get_scaleX());
HXDLIN(  37)		matrix->scale(_hx_tmp4,(( (Float)(1) ) / this->get_scaleY()));
HXLINE(  38)		this->parent->set_visible(true);
HXLINE(  39)		this->bitmapDataView->draw(this->parent,matrix,null(),null(),null(),null());
HXLINE(  40)		this->parent->set_visible(false);
HXLINE(  41)		if (::hx::IsNotNull( this->target )) {
HXLINE(  42)			this->set_x(this->target->get_x());
HXLINE(  43)			this->set_y(this->target->get_y());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,update,(void))


::hx::ObjectPtr< Camera_obj > Camera_obj::__new() {
	::hx::ObjectPtr< Camera_obj > __this = new Camera_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Camera_obj > Camera_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Camera_obj *__this = (Camera_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Camera_obj), true, "engine.Camera"));
	*(void **)__this = Camera_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(bitmapDataView,"bitmapDataView");
	HX_MARK_MEMBER_NAME(bitmapView,"bitmapView");
	HX_MARK_MEMBER_NAME(viewWidth,"viewWidth");
	HX_MARK_MEMBER_NAME(viewHeight,"viewHeight");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(bitmapDataView,"bitmapDataView");
	HX_VISIT_MEMBER_NAME(bitmapView,"bitmapView");
	HX_VISIT_MEMBER_NAME(viewWidth,"viewWidth");
	HX_VISIT_MEMBER_NAME(viewHeight,"viewHeight");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Camera_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { return ::hx::Val( viewWidth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapView") ) { return ::hx::Val( bitmapView ); }
		if (HX_FIELD_EQ(inName,"viewHeight") ) { return ::hx::Val( viewHeight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToStage") ) { return ::hx::Val( addedToStage_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapDataView") ) { return ::hx::Val( bitmapDataView ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Camera_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { viewWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapView") ) { bitmapView=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewHeight") ) { viewHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapDataView") ) { bitmapDataView=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("bitmapDataView",be,e4,08,59));
	outFields->push(HX_("bitmapView",f4,91,ac,3f));
	outFields->push(HX_("viewWidth",61,25,f7,0a));
	outFields->push(HX_("viewHeight",2c,08,99,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Camera_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(Camera_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Camera_obj,bitmapDataView),HX_("bitmapDataView",be,e4,08,59)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(Camera_obj,bitmapView),HX_("bitmapView",f4,91,ac,3f)},
	{::hx::fsInt,(int)offsetof(Camera_obj,viewWidth),HX_("viewWidth",61,25,f7,0a)},
	{::hx::fsInt,(int)offsetof(Camera_obj,viewHeight),HX_("viewHeight",2c,08,99,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Camera_obj_sStaticStorageInfo = 0;
#endif

static ::String Camera_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("bitmapDataView",be,e4,08,59),
	HX_("bitmapView",f4,91,ac,3f),
	HX_("viewWidth",61,25,f7,0a),
	HX_("viewHeight",2c,08,99,43),
	HX_("addedToStage",63,22,55,0c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	Camera_obj _hx_dummy;
	Camera_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("engine.Camera",f1,25,d9,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Camera_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Camera_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Camera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Camera_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace engine
