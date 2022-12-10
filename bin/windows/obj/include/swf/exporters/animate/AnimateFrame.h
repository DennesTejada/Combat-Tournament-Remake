#ifndef INCLUDED_swf_exporters_animate_AnimateFrame
#define INCLUDED_swf_exporters_animate_AnimateFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c984b063f3ee6f36_17_new)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateFrame)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateFrameObject)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateFrame_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimateFrame_obj OBJ_;
		AnimateFrame_obj();

	public:
		enum { _hx_ClassId = 0x545d33dd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateFrame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateFrame"); }

		inline static ::hx::ObjectPtr< AnimateFrame_obj > __new() {
			::hx::ObjectPtr< AnimateFrame_obj > __this = new AnimateFrame_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AnimateFrame_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AnimateFrame_obj *__this = (AnimateFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateFrame_obj), true, "swf.exporters.animate.AnimateFrame"));
			*(void **)__this = AnimateFrame_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c984b063f3ee6f36_17_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateFrame_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateFrame",ec,31,15,40); }

		::Array< ::String > labels;
		::Array< ::Dynamic> objects;
		 ::Dynamic script;
		Dynamic script_dyn() { return script;}
		::String scriptSource;
};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateFrame */ 
