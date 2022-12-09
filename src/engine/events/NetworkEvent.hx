package engine.events;
import openfl.events.Event;
import openfl.utils.Object;

/**
 * ...
 * @author ...
 */
class NetworkEvent extends Event
{
	static public var ON_INPUT_UPDATE:String = "ON_INPUT_UPDATE";
	
	public var data:Object;
	public function new(type:String="null",obj:Object=null) 
	{
		data = obj;
		super(type,obj);
	}
	
}