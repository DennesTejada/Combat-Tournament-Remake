package slaptastic_fla; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class Sprite245_22 extends openfl.display.MovieClip {


	

	public function new () {

		var swfLite = SWFLite.instances.get ("Slaptastic.swf");
		var symbol = swfLite.symbols.get (517);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("Slaptastic_fla.sprite245_22") class Sprite245_22 extends openfl.display.MovieClip {


	

	public function new () {

		super ();

	}


}
#end