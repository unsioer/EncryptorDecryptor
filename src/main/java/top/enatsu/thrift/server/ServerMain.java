package top.enatsu.thrift.server;

import org.apache.thrift.TProcessor;
import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.server.TServer;
import org.apache.thrift.server.TSimpleServer;
import org.apache.thrift.transport.TServerSocket;
import top.enatsu.MyAES;
import top.enatsu.thrift.common.MyAESImpl;
import top.enatsu.thrift.common.MyAESService;

public class ServerMain {
    public  static  final int  SERVER_PORT = 8090;
    public void startServer() {
        try {
            System.out.println("Start ....");
            TProcessor tprocessor = new MyAESService.Processor<MyAESService.Iface>( new MyAESImpl());

            TServerSocket serverTransport = new TServerSocket(SERVER_PORT);
            TServer.Args tArgs = new TServer.Args(serverTransport);
            tArgs.processor(tprocessor);
            tArgs.protocolFactory(new TBinaryProtocol.Factory());

            TServer server = new TSimpleServer(tArgs);
            server.serve();

        } catch (Exception e) {
            System.out.println("Server start error!!!");
            e.printStackTrace();
        }
    }
    public static void main(String[] args){
        ServerMain server=new ServerMain();
        server.startServer();
    }
}
