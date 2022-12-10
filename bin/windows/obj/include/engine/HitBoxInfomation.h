#ifndef INCLUDED_engine_HitBoxInfomation
#define INCLUDED_engine_HitBoxInfomation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f9e91d5617a4e528_7_new)
HX_DECLARE_CLASS1(engine,HitBoxInfomation)
HX_DECLARE_CLASS1(engine,PlayerDefault)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace engine{


class HXCPP_CLASS_ATTRIBUTES HitBoxInfomation_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HitBoxInfomation_obj OBJ_;
		HitBoxInfomation_obj();

	public:
		enum { _hx_ClassId = 0x2aad3790 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="engine.HitBoxInfomation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"engine.HitBoxInfomation"); }

		inline static ::hx::ObjectPtr< HitBoxInfomation_obj > __new() {
			::hx::ObjectPtr< HitBoxInfomation_obj > __this = new HitBoxInfomation_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HitBoxInfomation_obj > __alloc(::hx::Ctx *_hx_ctx) {
			HitBoxInfomation_obj *__this = (HitBoxInfomation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HitBoxInfomation_obj), true, "engine.HitBoxInfomation"));
			*(void **)__this = HitBoxInfomation_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f9e91d5617a4e528_7_new)
HXLINE(  14)		( ( ::engine::HitBoxInfomation)(__this) )->isLauncher = false;
HXLINE(  13)		( ( ::engine::HitBoxInfomation)(__this) )->damage = ((Float)0);
HXLINE(  12)		( ( ::engine::HitBoxInfomation)(__this) )->gravity = ((Float).5);
HXLINE(  11)		( ( ::engine::HitBoxInfomation)(__this) )->friction = ((Float).8);
HXLINE(  10)		( ( ::engine::HitBoxInfomation)(__this) )->yspeed = ((Float)0);
HXLINE(   9)		( ( ::engine::HitBoxInfomation)(__this) )->xspeed = ((Float)0);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HitBoxInfomation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HitBoxInfomation",ce,b1,cd,43); }

		Float xspeed;
		Float yspeed;
		Float friction;
		Float gravity;
		Float damage;
		bool isLauncher;
		 ::engine::PlayerDefault hitter;
};

} // end namespace engine

#endif /* INCLUDED_engine_HitBoxInfomation */ 
