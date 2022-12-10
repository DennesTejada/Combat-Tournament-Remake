#ifndef INCLUDED_engine_events_GameEvent
#define INCLUDED_engine_events_GameEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(engine,events,GameEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace engine{
namespace events{


class HXCPP_CLASS_ATTRIBUTES GameEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef GameEvent_obj OBJ_;
		GameEvent_obj();

	public:
		enum { _hx_ClassId = 0x3907556d };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="engine.events.GameEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"engine.events.GameEvent"); }
		static ::hx::ObjectPtr< GameEvent_obj > __new(::String type);
		static ::hx::ObjectPtr< GameEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameEvent_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameEvent",a8,96,b2,4c); }

		static void __boot();
		static ::String ON_GAME_LOOP;
};

} // end namespace engine
} // end namespace events

#endif /* INCLUDED_engine_events_GameEvent */ 
