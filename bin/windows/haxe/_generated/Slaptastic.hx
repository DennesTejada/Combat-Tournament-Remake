package ;

@:access(swf.exporters.animate)

class Slaptastic extends #if flash flash.display.MovieClip.MovieClip2 #else openfl.display.MovieClip #end
{
	@:keep @:noCompletion @:dox(hide) public var hurtBox(default, null):slaptastic_fla.Sprite354_2;
	@:keep @:noCompletion @:dox(hide) public var Lala(default, null):slaptastic_fla.Sprite356_3;
	@:keep @:noCompletion @:dox(hide) public var Powercharge(default, null):slaptastic_fla.Sprite365_4;
	@:keep @:noCompletion @:dox(hide) public var Man(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var Skin(default, null):slaptastic_fla.Sprite371_13;
	

	public function new()
	{
		var library = swf.exporters.animate.AnimateLibrary.get("HdXepoOueHQVMzQBUMNw");
		var symbol = library.symbols.get(586);
		symbol.__init(library);

		super();
	}
}