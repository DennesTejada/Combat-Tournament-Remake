#ifndef INCLUDED_engine_events_NetworkEvent
#define INCLUDED_engine_events_NetworkEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(engine,events,NetworkEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace engine{
namespace events{


class HXCPP_CLASS_ATTRIBUTES NetworkEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef NetworkEvent_obj OBJ_;
		NetworkEvent_obj();

	public:
		enum { _hx_ClassId = 0x1993f1cf };

		void __construct(::String __o_type, ::Dynamic obj);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="engine.events.NetworkEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"engine.events.NetworkEvent"); }
		static ::hx::ObjectPtr< NetworkEvent_obj > __new(::String __o_type, ::Dynamic obj);
		static ::hx::ObjectPtr< NetworkEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_type, ::Dynamic obj);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetworkEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetworkEvent",ac,08,9a,32); }

		static void __boot();
		static ::String ON_INPUT_UPDATE;
		 ::Dynamic data;
};

} // end namespace engine
} // end namespace events

#endif /* INCLUDED_engine_events_NetworkEvent */ 
