package ;

@:access(swf.exporters.animate)

class SlaptasticAttack extends #if flash flash.display.MovieClip.MovieClip2 #else openfl.display.MovieClip #end
{
	@:keep @:noCompletion @:dox(hide) public var Slap02(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var Slap03(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var Slap04(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var SlapHard01(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var FastSlap(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var hit9(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var UpSlap(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var SlapHard02(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var hit6(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var MegaHandHit(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var Powercharge(default, null):slaptastic_fla.Sprite365_4;
	@:keep @:noCompletion @:dox(hide) public var GoUp01(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var DownHitSlap01(default, null):HitBox;
	@:keep @:noCompletion @:dox(hide) public var SlapHard07(default, null):HitBox;
	

	public function new()
	{
		var library = swf.exporters.animate.AnimateLibrary.get("HdXepoOueHQVMzQBUMNw");
		var symbol = library.symbols.get(329);
		symbol.__init(library);

		super();
	}
}