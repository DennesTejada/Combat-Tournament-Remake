package slaptastic_fla; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class Attack1_24 extends openfl.display.MovieClip {


	@:keep public var Slap01 (default, null):HitBox;
	

	public function new () {

		var swfLite = SWFLite.instances.get ("Slaptastic.swf");
		var symbol = swfLite.symbols.get (566);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("Slaptastic_fla.Attack1_24") class Attack1_24 extends openfl.display.MovieClip {


	@:keep public var Slap01 (default, null):HitBox;
	

	public function new () {

		super ();

	}


}
#end