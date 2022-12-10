package slaptastic_fla; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class Sprite371_13 extends openfl.display.MovieClip {


	@:keep public var TeamMate (default, null):openfl.display.MovieClip;
	@:keep public var Bar (default, null):openfl.display.MovieClip;
	

	public function new () {

		var swfLite = SWFLite.instances.get ("Slaptastic.swf");
		var symbol = swfLite.symbols.get (374);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("Slaptastic_fla.sprite371_13") class Sprite371_13 extends openfl.display.MovieClip {


	@:keep public var TeamMate (default, null):openfl.display.MovieClip;
	@:keep public var Bar (default, null):openfl.display.MovieClip;
	

	public function new () {

		super ();

	}


}
#end