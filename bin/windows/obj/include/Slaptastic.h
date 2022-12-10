#ifndef INCLUDED_Slaptastic
#define INCLUDED_Slaptastic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
HX_DECLARE_CLASS0(Slaptastic)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(slaptastic_fla,Sprite354_2)
HX_DECLARE_CLASS1(slaptastic_fla,Sprite356_3)
HX_DECLARE_CLASS1(slaptastic_fla,Sprite365_4)
HX_DECLARE_CLASS1(slaptastic_fla,Sprite371_13)



class HXCPP_CLASS_ATTRIBUTES Slaptastic_obj : public  ::openfl::display::MovieClip_obj
{
	public:
		typedef  ::openfl::display::MovieClip_obj super;
		typedef Slaptastic_obj OBJ_;
		Slaptastic_obj();

	public:
		enum { _hx_ClassId = 0x12128fb4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Slaptastic")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Slaptastic"); }
		static ::hx::ObjectPtr< Slaptastic_obj > __new();
		static ::hx::ObjectPtr< Slaptastic_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Slaptastic_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Slaptastic",90,66,1e,bb); }

		 ::slaptastic_fla::Sprite354_2 hurtBox;
		 ::slaptastic_fla::Sprite356_3 Lala;
		 ::slaptastic_fla::Sprite365_4 Powercharge;
		 ::openfl::display::MovieClip Man;
		 ::slaptastic_fla::Sprite371_13 Skin;
};


#endif /* INCLUDED_Slaptastic */ 
