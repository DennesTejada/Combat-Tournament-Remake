#ifndef INCLUDED_engine_GameLoop
#define INCLUDED_engine_GameLoop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(engine,GameLoop)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace engine{


class HXCPP_CLASS_ATTRIBUTES GameLoop_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef GameLoop_obj OBJ_;
		GameLoop_obj();

	public:
		enum { _hx_ClassId = 0x60d25758 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="engine.GameLoop")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"engine.GameLoop"); }
		static ::hx::ObjectPtr< GameLoop_obj > __new();
		static ::hx::ObjectPtr< GameLoop_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameLoop_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameLoop",96,63,8f,8d); }

		Float currentTime;
		Float previousTime;
		Float timeAccel;
		Float delta;
		Float gameSpeed;
		void enter_frame( ::openfl::events::Event e);
		::Dynamic enter_frame_dyn();

		void resetTime();
		::Dynamic resetTime_dyn();

};

} // end namespace engine

#endif /* INCLUDED_engine_GameLoop */ 
