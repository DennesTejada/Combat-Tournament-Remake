#ifndef INCLUDED_openfl_events_DatagramSocketDataEvent
#define INCLUDED_openfl_events_DatagramSocketDataEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,events,DatagramSocketDataEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES DatagramSocketDataEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef DatagramSocketDataEvent_obj OBJ_;
		DatagramSocketDataEvent_obj();

	public:
		enum { _hx_ClassId = 0x07af7333 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_srcAddress,::hx::Null< int >  __o_srcPort,::String __o_dstAddress,::hx::Null< int >  __o_dstPort, ::openfl::utils::ByteArrayData data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.DatagramSocketDataEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.DatagramSocketDataEvent"); }
		static ::hx::ObjectPtr< DatagramSocketDataEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_srcAddress,::hx::Null< int >  __o_srcPort,::String __o_dstAddress,::hx::Null< int >  __o_dstPort, ::openfl::utils::ByteArrayData data);
		static ::hx::ObjectPtr< DatagramSocketDataEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_srcAddress,::hx::Null< int >  __o_srcPort,::String __o_dstAddress,::hx::Null< int >  __o_dstPort, ::openfl::utils::ByteArrayData data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DatagramSocketDataEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DatagramSocketDataEvent",3c,05,d1,65); }

		static void __boot();
		static ::String DATA;
		 ::openfl::utils::ByteArrayData data;
		::String dstAddress;
		int dstPort;
		::String srcAddress;
		int srcPort;
		 ::openfl::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_DatagramSocketDataEvent */ 
