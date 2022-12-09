package client;
import openfl.utils.Object;
import sys.thread.Thread;
import openfl.display.Sprite;
import sys.net.Host;
import sys.net.Socket;
/**
 * ...
 * @author ...
 */
class ClientMain extends Sprite
{
	public var socket:Socket;
	public var IP:String = '127.0.0.1';
	public var Port:Int = 9000;
	public var maxConnections:Int = 8;
	public var localPlayerInfo:Object;
	public function new() 
	{
		super();
	}
	public function joinServer(){
		try {
			socket = new Socket();
			socket.connect(new Host(IP), Port);
			trace("[Client] Connected.");
		} catch (z:Dynamic) {
			trace("[Client] Failed To Connect.");
			return;
		}
		Thread.create(threadListen);
	}
	function threadListen() {
		while (true) {
			try {
				var text = socket.input.readLine();
				trace("[CLIENT] " + text + '\n');
			} catch (z:Dynamic) {
				trace("[CLIENT] " + 'Connection lost.\n');
				return;
			}
		}
	}
}