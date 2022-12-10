package ; #if !flash


import swf.exporters.swflite.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;

@:access(swf.exporters.swflite)

class SlaptasticAttack extends openfl.display.MovieClip {


	@:keep public var Slap02 (default, null):HitBox;
	@:keep public var Slap03 (default, null):HitBox;
	@:keep public var Slap04 (default, null):HitBox;
	@:keep public var SlapHard01 (default, null):HitBox;
	@:keep public var FastSlap (default, null):HitBox;
	@:keep public var hit9 (default, null):HitBox;
	@:keep public var UpSlap (default, null):HitBox;
	@:keep public var SlapHard02 (default, null):HitBox;
	@:keep public var hit6 (default, null):HitBox;
	@:keep public var MegaHandHit (default, null):HitBox;
	@:keep public var GoUp01 (default, null):HitBox;
	@:keep public var Powercharge (default, null):slaptastic_fla.Sprite365_4;
	@:keep public var DownHitSlap01 (default, null):HitBox;
	@:keep public var SlapHard07 (default, null):HitBox;
	

	public function new () {

		var swfLite = SWFLite.instances.get ("Slaptastic.swf");
		var symbol = swfLite.symbols.get (329);
		symbol.__init(swfLite);

		super();

	}


}


#else
@:bind @:native("SlaptasticAttack") class SlaptasticAttack extends openfl.display.MovieClip {


	@:keep public var Slap02 (default, null):HitBox;
	@:keep public var Slap03 (default, null):HitBox;
	@:keep public var Slap04 (default, null):HitBox;
	@:keep public var SlapHard01 (default, null):HitBox;
	@:keep public var FastSlap (default, null):HitBox;
	@:keep public var hit9 (default, null):HitBox;
	@:keep public var UpSlap (default, null):HitBox;
	@:keep public var SlapHard02 (default, null):HitBox;
	@:keep public var hit6 (default, null):HitBox;
	@:keep public var MegaHandHit (default, null):HitBox;
	@:keep public var GoUp01 (default, null):HitBox;
	@:keep public var Powercharge (default, null):slaptastic_fla.Sprite365_4;
	@:keep public var DownHitSlap01 (default, null):HitBox;
	@:keep public var SlapHard07 (default, null):HitBox;
	

	public function new () {

		super ();

	}


}
#end