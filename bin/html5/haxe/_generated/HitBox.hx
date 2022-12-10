package ;

@:access(swf.exporters.animate)

class HitBox extends #if flash flash.display.MovieClip.MovieClip2 #else openfl.display.MovieClip #end
{
	

	public function new()
	{
		var library = swf.exporters.animate.AnimateLibrary.get("eABpgdCAwUPX0OAB4YpX");
		var symbol = library.symbols.get(35);
		symbol.__init(library);

		super();
	}
}