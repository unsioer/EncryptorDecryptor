from MyAESService import MyAESService
from MyAESService.ttypes import *
  
from thrift import Thrift  
from thrift.transport import TSocket  
from thrift.transport import TTransport  
from thrift.protocol import TBinaryProtocol  
# If the server uses TBinaryProtocol, the client should follow.

if __name__ == '__main__':
    transport = TSocket.TSocket('localhost', 8090) 
    transport = TTransport.TBufferedTransport(transport)  
    protocol = TBinaryProtocol.TBinaryProtocol(transport)  
    client = MyAESService.Client(protocol)  
    transport.open()
    while True:
        command = input('Input command (e or d): ')
        if command == 'e':
            encodeRules = input()
            content = input()
            print('Encode result:', client.AESEncode(encodeRules, content))
            print('Decode result:', client.AESDecode(encodeRules, client.AESEncode(encodeRules, content)))
        elif command == 'd':
            encodeRules = input()
            content = input()
            print('Decode result:', client.AESDecode(encodeRules, content))
            print('Encode result:', client.AESEncode(encodeRules, client.AESDecode(encodeRules, content)))
        elif command == 'q':
            break
        else:
            print('Unknown command')
    transport.close()
