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
	print(client.AESEncode("xxx","jjj")) 
	print(client.AESDecode("xxx",client.AESEncode("xxx","jjj")))

