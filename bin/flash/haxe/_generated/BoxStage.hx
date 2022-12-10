package ; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class BoxStage extends openfl.display.MovieClip {


	@:keep public var S1 (default, null):openfl.display.MovieClip;
	@:keep public var S0 (default, null):openfl.display.MovieClip;
	@:keep public var S4 (default, null):openfl.display.MovieClip;
	@:keep public var playerCreateMovieclip (default, null):openfl.display.MovieClip;
	@:keep public var S2 (default, null):openfl.display.MovieClip;
	@:keep public var PlayerStart (default, null):openfl.display.MovieClip;
	@:keep public var ground (default, null):openfl.display.MovieClip;
	@:keep public var S5 (default, null):openfl.display.MovieClip;
	@:keep public var S3 (default, null):openfl.display.MovieClip;
	

	public function new () {

		var swfLite = SWFLite.instances.get ("Box.swf");
		var symbol = swfLite.symbols.get (7);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("boxStage") class BoxStage extends openfl.display.MovieClip {


	@:keep public var S1 (default, null):openfl.display.MovieClip;
	@:keep public var S0 (default, null):openfl.display.MovieClip;
	@:keep public var S4 (default, null):openfl.display.MovieClip;
	@:keep public var playerCreateMovieclip (default, null):openfl.display.MovieClip;
	@:keep public var S2 (default, null):openfl.display.MovieClip;
	@:keep public var PlayerStart (default, null):openfl.display.MovieClip;
	@:keep public var ground (default, null):openfl.display.MovieClip;
	@:keep public var S5 (default, null):openfl.display.MovieClip;
	@:keep public var S3 (default, null):openfl.display.MovieClip;
	

	public function new () {

		super ();

	}


}
#end