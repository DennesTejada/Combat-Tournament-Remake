package ; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class HitBox extends openfl.display.MovieClip {


	

	public function new () {

		var swfLite = SWFLite.instances.get ("Slaptastic.swf");
		var symbol = swfLite.symbols.get (35);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("HitBox") class HitBox extends openfl.display.MovieClip {


	

	public function new () {

		super ();

	}


}
#end