package engine;
import engine.events.GameEvent;
import lime.graphics.FlashRenderContext;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.geom.Matrix;
import openfl.geom.Rectangle;

/**
 * ...
 * Camera
 * method
 * draw the entire game again but move the copy to the "render view" and only draw whats in renderview
 * @author ...
 */
class Camera extends Sprite
{
	public var target:Sprite;
	private var bitmapDataView:BitmapData;
	private var bitmapView:Bitmap;
	private var viewWidth:Int = 800;
	private var viewHeight:Int = 480;
	public function new() 
	{
		super();
		addEventListener(Event.ADDED_TO_STAGE, addedToStage);
	}
	public function addedToStage(e:Event){
		//how big is the image?
		bitmapDataView = new BitmapData(800, 480, false);
		bitmapView = new Bitmap(bitmapDataView);
		//add to render list so it's seeable
		stage.addChild(bitmapView);
		Main.gameLoop.addEventListener(GameEvent.ON_GAME_LOOP, update);
	}
	public function update(e:GameEvent){
		var matrix = new Matrix();
		//tx = x position
		matrix.tx = -x + (viewWidth / 2) * scaleX;
		//ty = y position
		matrix.ty = -y + (viewHeight / 2) * scaleY;
		//scale how fat or wide the image is,aka are camera zoom in and out
		matrix.scale(1 / scaleX, 1 / scaleY);
		//show the none copy of the entire game
		parent.visible = true;
		//draw only in render view "the entire game"(parent)
		bitmapDataView.draw(parent, matrix);
		//hide the orginal game view for performance boost
		parent.visible = false;
		if (target != null){
			x = target.x;
			y = target.y;
		}
	}
	
}