package;
import client.ClientMain;
import flash.display.Sprite;
import server.ServerMain;

/**
 * ...
 * @author Dennes Tejada
 */
class Global
{
	static public var game:Game = new Game();
	static public var gameServer:ServerMain = new ServerMain(); 
	static public var gameClient:ClientMain = new ClientMain(); 
	public function new() 
	{
		restart();
	}
	static public function restart(){
		game = new Game();
		gameServer = new ServerMain();
		gameClient = new ClientMain();
	}
	
}