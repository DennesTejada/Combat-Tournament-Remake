#ifndef INCLUDED_engine_Camera
#define INCLUDED_engine_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(engine,Camera)
HX_DECLARE_CLASS2(engine,events,GameEvent)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace engine{


class HXCPP_CLASS_ATTRIBUTES Camera_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef Camera_obj OBJ_;
		Camera_obj();

	public:
		enum { _hx_ClassId = 0x1eebda07 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="engine.Camera")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"engine.Camera"); }
		static ::hx::ObjectPtr< Camera_obj > __new();
		static ::hx::ObjectPtr< Camera_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Camera",c5,ba,20,ec); }

		 ::openfl::display::Sprite target;
		 ::openfl::display::BitmapData bitmapDataView;
		 ::openfl::display::Bitmap bitmapView;
		int viewWidth;
		int viewHeight;
		void addedToStage( ::openfl::events::Event e);
		::Dynamic addedToStage_dyn();

		void update( ::engine::events::GameEvent e);
		::Dynamic update_dyn();

};

} // end namespace engine

#endif /* INCLUDED_engine_Camera */ 
