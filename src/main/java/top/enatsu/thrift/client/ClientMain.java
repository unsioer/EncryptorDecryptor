package top.enatsu.thrift.client;

import org.apache.thrift.TException;
import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.protocol.TProtocol;
import org.apache.thrift.transport.TSocket;
import org.apache.thrift.transport.TTransport;
import org.apache.thrift.transport.TTransportException;
import top.enatsu.thrift.common.MyAESService;

import java.util.Scanner;

public class ClientMain {

    public static final String SERVER_IP = "localhost";
    public static final int SERVER_PORT = 8090;

    public String AESEncode(String encodeRules, String content) {
        TTransport transport = null;
        try {
            transport = new TSocket(SERVER_IP,SERVER_PORT);
            TProtocol protocol = new TBinaryProtocol(transport);
            MyAESService.Client client = new MyAESService.Client(protocol);
            transport.open();
            return client.AESEncode(encodeRules,content);
        } catch (TTransportException e) {
            e.printStackTrace();
        } catch (TException e) {
            e.printStackTrace();
        } finally {
            if (null != transport) transport.close();
        }
        return null;
    }

    public String AESDecode(String encodeRules, String content) {
        TTransport transport = null;
        try {
            transport = new TSocket(SERVER_IP,SERVER_PORT);
            TProtocol protocol = new TBinaryProtocol(transport);
            MyAESService.Client client = new MyAESService.Client(protocol);
            transport.open();
            return client.AESDecode(encodeRules,content);
        } catch (TTransportException e) {
            e.printStackTrace();
        } catch (TException e) {
            e.printStackTrace();
        } finally {
            if (null != transport) transport.close();
        }
        return null;
    }

    public static void main(String[] args) {
        ClientMain client = new ClientMain();
        Scanner input = new Scanner(System.in);
        String command;
        while(true){
            command=input.next();
            if(command.equals("e")){
                String rules = input.next();
                String content = input.next();
                System.out.println(client.AESEncode(rules, content));
                System.out.println(client.AESDecode(rules, client.AESEncode(rules, content)));
            }
            else if(command.equals("d")){
                String rules = input.next();
                String content = input.next();
                System.out.println(client.AESDecode(rules, content));
                System.out.println(client.AESEncode(rules, client.AESDecode(rules, content)));
            }
        }
    }
}
