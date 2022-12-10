#ifndef INCLUDED_engine_GameInput
#define INCLUDED_engine_GameInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(engine,GameInput)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)

namespace engine{


class HXCPP_CLASS_ATTRIBUTES GameInput_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef GameInput_obj OBJ_;
		GameInput_obj();

	public:
		enum { _hx_ClassId = 0x7f8ab92e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="engine.GameInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"engine.GameInput"); }
		static ::hx::ObjectPtr< GameInput_obj > __new();
		static ::hx::ObjectPtr< GameInput_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameInput",98,92,0b,95); }

		int BIND_UP;
		int BIND_DOWN;
		int BIND_LEFT;
		int BIND_RIGHT;
		int BIND_ATTACK;
		int BIND_SPECIAL;
		int BIND_BLOCK;
		int BIND_JUMP;
		bool UP;
		bool DOWN;
		bool LEFT;
		bool RIGHT;
		bool ATTACK;
		bool SPECIAL;
		bool BLOCK;
		bool JUMP;
		void key_down( ::openfl::events::KeyboardEvent e);
		::Dynamic key_down_dyn();

		void key_up( ::openfl::events::KeyboardEvent e);
		::Dynamic key_up_dyn();

};

} // end namespace engine

#endif /* INCLUDED_engine_GameInput */ 
