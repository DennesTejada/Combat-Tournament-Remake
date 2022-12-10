#ifndef INCLUDED_swf_exporters_animate_AnimateFrameObject
#define INCLUDED_swf_exporters_animate_AnimateFrameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_328c59b03f9bae44_27_new)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS3(swf,exporters,animate,AnimateFrameObject)
HX_DECLARE_CLASS3(swf,exporters,core,FilterType)

namespace swf{
namespace exporters{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateFrameObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimateFrameObject_obj OBJ_;
		AnimateFrameObject_obj();

	public:
		enum { _hx_ClassId = 0x6ea0ea7c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="swf.exporters.animate.AnimateFrameObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"swf.exporters.animate.AnimateFrameObject"); }

		inline static ::hx::ObjectPtr< AnimateFrameObject_obj > __new() {
			::hx::ObjectPtr< AnimateFrameObject_obj > __this = new AnimateFrameObject_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AnimateFrameObject_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AnimateFrameObject_obj *__this = (AnimateFrameObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimateFrameObject_obj), true, "swf.exporters.animate.AnimateFrameObject"));
			*(void **)__this = AnimateFrameObject_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_328c59b03f9bae44_27_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimateFrameObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateFrameObject",cb,5d,2d,39); }

		 ::Dynamic blendMode;
		 ::Dynamic cacheAsBitmap;
		int clipDepth;
		 ::openfl::geom::ColorTransform colorTransform;
		int depth;
		::Array< ::Dynamic> filters;
		int id;
		 ::openfl::geom::Matrix matrix;
		::String name;
		int symbol;
		int type;
		 ::Dynamic visible;
};

} // end namespace swf
} // end namespace exporters
} // end namespace animate

#endif /* INCLUDED_swf_exporters_animate_AnimateFrameObject */ 
