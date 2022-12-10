package ; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class Slaptastic extends openfl.display.MovieClip {


	@:keep public var Powercharge (default, null):slaptastic_fla.Sprite365_4;
	@:keep public var Skin (default, null):slaptastic_fla.Sprite371_13;
	@:keep public var Lala (default, null):slaptastic_fla.Sprite356_3;
	@:keep public var hurtBox (default, null):slaptastic_fla.Sprite354_2;
	@:keep public var Man (default, null):openfl.display.MovieClip;
	

	public function new () {

		var swfLite = SWFLite.instances.get ("Slaptastic.swf");
		var symbol = swfLite.symbols.get (586);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("Slaptastic") class Slaptastic extends openfl.display.MovieClip {


	@:keep public var Powercharge (default, null):slaptastic_fla.Sprite365_4;
	@:keep public var Skin (default, null):slaptastic_fla.Sprite371_13;
	@:keep public var Lala (default, null):slaptastic_fla.Sprite356_3;
	@:keep public var hurtBox (default, null):slaptastic_fla.Sprite354_2;
	@:keep public var Man (default, null):openfl.display.MovieClip;
	

	public function new () {

		super ();

	}


}
#end