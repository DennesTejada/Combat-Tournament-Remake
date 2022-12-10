#ifndef INCLUDED_client_ClientInput
#define INCLUDED_client_ClientInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(client,ClientInput)
HX_DECLARE_CLASS2(engine,events,GameEvent)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace client{


class HXCPP_CLASS_ATTRIBUTES ClientInput_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef ClientInput_obj OBJ_;
		ClientInput_obj();

	public:
		enum { _hx_ClassId = 0x411f192c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="client.ClientInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"client.ClientInput"); }
		static ::hx::ObjectPtr< ClientInput_obj > __new();
		static ::hx::ObjectPtr< ClientInput_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientInput",9f,d1,75,80); }

		::cpp::VirtualArray inputList;
		int maxInputs;
		int index;
		void reset();
		::Dynamic reset_dyn();

		void onUpdate( ::engine::events::GameEvent e);
		::Dynamic onUpdate_dyn();

};

} // end namespace client

#endif /* INCLUDED_client_ClientInput */ 
