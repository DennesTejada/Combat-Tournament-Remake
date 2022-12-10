#ifndef INCLUDED_slaptastic_fla_Sprite354_2
#define INCLUDED_slaptastic_fla_Sprite354_2

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
HX_DECLARE_CLASS1(slaptastic_fla,Sprite354_2)

namespace slaptastic_fla{


class HXCPP_CLASS_ATTRIBUTES Sprite354_2_obj : public  ::openfl::display::MovieClip_obj
{
	public:
		typedef  ::openfl::display::MovieClip_obj super;
		typedef Sprite354_2_obj OBJ_;
		Sprite354_2_obj();

	public:
		enum { _hx_ClassId = 0x1a68edb4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="slaptastic_fla.Sprite354_2")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"slaptastic_fla.Sprite354_2"); }
		static ::hx::ObjectPtr< Sprite354_2_obj > __new();
		static ::hx::ObjectPtr< Sprite354_2_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sprite354_2_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sprite354_2",80,b6,47,08); }

};

} // end namespace slaptastic_fla

#endif /* INCLUDED_slaptastic_fla_Sprite354_2 */ 
