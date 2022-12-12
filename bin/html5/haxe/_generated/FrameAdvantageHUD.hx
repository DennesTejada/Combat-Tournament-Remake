package ;

@:access(swf.exporters.animate)

class FrameAdvantageHUD extends #if flash flash.display.MovieClip.MovieClip2 #else openfl.display.MovieClip #end
{
	@:keep @:noCompletion @:dox(hide) public var mc(default, null):openfl.display.MovieClip;
	

	public function new()
	{
		var library = swf.exporters.animate.AnimateLibrary.get("SGCQJX8Qc5NWktyUiHCw");
		var symbol = library.symbols.get(4);
		symbol.__init(library);

		super();
	}
}