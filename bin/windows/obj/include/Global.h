#ifndef INCLUDED_Global
#define INCLUDED_Global

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_babd1827f55eb107_17_new)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(Global)
HX_DECLARE_CLASS1(client,ClientMain)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(server,ServerMain)



class HXCPP_CLASS_ATTRIBUTES Global_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Global_obj OBJ_;
		Global_obj();

	public:
		enum { _hx_ClassId = 0x3d916843 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Global")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Global"); }

		inline static ::hx::ObjectPtr< Global_obj > __new() {
			::hx::ObjectPtr< Global_obj > __this = new Global_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Global_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Global_obj *__this = (Global_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Global_obj), false, "Global"));
			*(void **)__this = Global_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_babd1827f55eb107_17_new)
HXDLIN(  17)		::Global_obj::restart();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Global_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Global",83,a5,46,dc); }

		static void __boot();
		static  ::Game game;
		static  ::server::ServerMain gameServer;
		static  ::client::ClientMain gameClient;
		static void restart();
		static ::Dynamic restart_dyn();

};


#endif /* INCLUDED_Global */ 
