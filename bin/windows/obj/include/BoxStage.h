#ifndef INCLUDED_BoxStage
#define INCLUDED_BoxStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
HX_DECLARE_CLASS0(BoxStage)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES BoxStage_obj : public  ::openfl::display::MovieClip_obj
{
	public:
		typedef  ::openfl::display::MovieClip_obj super;
		typedef BoxStage_obj OBJ_;
		BoxStage_obj();

	public:
		enum { _hx_ClassId = 0x346d0393 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BoxStage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BoxStage"); }
		static ::hx::ObjectPtr< BoxStage_obj > __new();
		static ::hx::ObjectPtr< BoxStage_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoxStage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BoxStage",d3,10,dc,d8); }

		 ::openfl::display::MovieClip PlayerStart;
		 ::openfl::display::MovieClip S1;
		 ::openfl::display::MovieClip S2;
		 ::openfl::display::MovieClip S3;
		 ::openfl::display::MovieClip S4;
		 ::openfl::display::MovieClip S5;
		 ::openfl::display::MovieClip S0;
		 ::openfl::display::MovieClip ground;
		 ::openfl::display::MovieClip playerCreateMovieclip;
};


#endif /* INCLUDED_BoxStage */ 
