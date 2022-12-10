package slaptastic_fla; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class Sprite206_7 extends openfl.display.MovieClip {


	

	public function new () {

		var swfLite = SWFLite.instances.get ("Slaptastic.swf");
		var symbol = swfLite.symbols.get (11);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("Slaptastic_fla.sprite206_7") class Sprite206_7 extends openfl.display.MovieClip {


	

	public function new () {

		super ();

	}


}
#end