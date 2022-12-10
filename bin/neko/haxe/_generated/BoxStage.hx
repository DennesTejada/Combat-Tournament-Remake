package ;

@:access(swf.exporters.animate)

class BoxStage extends #if flash flash.display.MovieClip.MovieClip2 #else openfl.display.MovieClip #end
{
	@:keep @:noCompletion @:dox(hide) public var PlayerStart(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var S1(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var S2(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var S3(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var S4(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var S5(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var S0(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var ground(default, null):openfl.display.MovieClip;
	@:keep @:noCompletion @:dox(hide) public var playerCreateMovieclip(default, null):openfl.display.MovieClip;
	

	public function new()
	{
		var library = swf.exporters.animate.AnimateLibrary.get("CSXNdOOow8BuJa5Cz3xN");
		var symbol = library.symbols.get(7);
		symbol.__init(library);

		super();
	}
}