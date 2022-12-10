#ifndef INCLUDED_openfl_events_ServerSocketConnectEvent
#define INCLUDED_openfl_events_ServerSocketConnectEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,ServerSocketConnectEvent)
HX_DECLARE_CLASS2(openfl,net,Socket)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ServerSocketConnectEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ServerSocketConnectEvent_obj OBJ_;
		ServerSocketConnectEvent_obj();

	public:
		enum { _hx_ClassId = 0x3fc3c60f };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::net::Socket socket);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.ServerSocketConnectEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.ServerSocketConnectEvent"); }
		static ::hx::ObjectPtr< ServerSocketConnectEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::net::Socket socket);
		static ::hx::ObjectPtr< ServerSocketConnectEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::net::Socket socket);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ServerSocketConnectEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ServerSocketConnectEvent",e6,fb,01,3f); }

		static void __boot();
		static ::String CONNECT;
		 ::openfl::net::Socket socket;
		 ::openfl::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_ServerSocketConnectEvent */ 
