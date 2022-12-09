package server;
import sys.thread.Thread;
import openfl.display.Sprite;
import sys.net.Host;
import sys.net.Socket;
/**
 * ...
 * @author ...
 */
class ServerMain extends Sprite
{
	public var socket:Socket;
	public var IP:String = '127.0.0.1';
	public var Port:Int = 9000;
	public var maxConnections:Int = 8;
	public var clients:Array<ClientInfo>;
	public function new()
	{
		super();
	}
	public function createServer()
	{
		try
		{
			socket = new Socket();
			socket.bind(new Host(IP), Port);
			socket.listen(maxConnections);
			trace('[SERVER] Created Server.');
		}
		catch (z:Dynamic)
		{
			trace('[SERVER] Could not bind to port.\n');
			return;
		}
		clients = new Array<ClientInfo>();
		Thread.create(threadAccept);
	}
	function threadAccept()
	{
		while (true)
		{
			//accept all incoming connection
			var sk = socket.accept();
			if (sk != null)
			{
				var cl = new ClientInfo(socket, sk);
				Thread.create(getThreadListen(cl));
			}
		}
	}
	function getThreadListen(cl:ClientInfo) {
		return function() {
			clients.push(cl);
			trace(Std.string(cl) + ' connected.\n');
			while (cl.active) {
				try {
					var text = cl.socket.input.readLine();
					trace(text);
				} catch (z:Dynamic) {
					break;
				}
			}
			trace("[CLIENT] "+Std.string(cl) + ' timed out.\n');
			trace(cl.name + ' disconnected.\n');
			clients.remove(cl);
			try {
				cl.socket.shutdown(true, true);
				cl.socket.close();
			} catch (e:Dynamic) {
				
			}
		}
	}
}
class ClientInfo
	{
		public var socket:Socket;
		public var name:String;
		public var server:Socket;
		public var active:Bool;
		public function new(sv:Socket, skt:Socket)
		{
			server = sv;
			socket = skt;
			name = '';
			active = true;
		}
		public function send(command:String)
		{
			try
			{
				socket.output.writeString(command);
			}
			catch (z:Dynamic)
			{
				active = false;
			}
		}
	}