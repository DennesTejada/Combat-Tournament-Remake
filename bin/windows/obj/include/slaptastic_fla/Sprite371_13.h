#ifndef INCLUDED_slaptastic_fla_Sprite371_13
#define INCLUDED_slaptastic_fla_Sprite371_13

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(slaptastic_fla,Sprite371_13)

namespace slaptastic_fla{


class HXCPP_CLASS_ATTRIBUTES Sprite371_13_obj : public  ::openfl::display::MovieClip_obj
{
	public:
		typedef  ::openfl::display::MovieClip_obj super;
		typedef Sprite371_13_obj OBJ_;
		Sprite371_13_obj();

	public:
		enum { _hx_ClassId = 0x26389445 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="slaptastic_fla.Sprite371_13")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"slaptastic_fla.Sprite371_13"); }
		static ::hx::ObjectPtr< Sprite371_13_obj > __new();
		static ::hx::ObjectPtr< Sprite371_13_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sprite371_13_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sprite371_13",f9,7d,49,5b); }

		 ::openfl::display::MovieClip Bar;
		 ::openfl::display::MovieClip TeamMate;
};

} // end namespace slaptastic_fla

#endif /* INCLUDED_slaptastic_fla_Sprite371_13 */ 
