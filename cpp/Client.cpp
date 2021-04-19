#include "MyAESService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TBufferTransports.h>

#include <iostream>

using namespace apache::thrift;
using namespace apache::thrift::protocol; 
using namespace apache::thrift::transport;

std::string serverIP = "localhost";
int serverPort = 8090;

std::string AESEncode(std::string encodeRules, std::string content) {

	std::shared_ptr<TSocket> socket(new TSocket(serverIP, serverPort));
	std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
	std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
	
	transport->open();
	MyAESServiceClient* client=new MyAESServiceClient(protocol);
	std::string _return;
	client->AESEncode(_return,encodeRules, content);
	transport->close();

	return _return;
}

std::string AESDecode(std::string encodeRules, std::string content) {

	std::shared_ptr<TSocket> socket(new TSocket(serverIP, serverPort));
	std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
	std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));

	transport->open();
	MyAESServiceClient* client = new MyAESServiceClient(protocol);
	std::string _return;
	client->AESDecode(_return, encodeRules, content);
	transport->close();

	return _return;
}

int main()
{
	std::string command;
	while (true) {
		std::cout << "Input command (e or d): ";
		std::cin >> command;
		if (command == "e") {
			std::string encodeRules, content;
			std::cin >> encodeRules;
			std::cin >> content;
			std::cout << "Encode result: " << AESEncode(encodeRules, content);
			std::cout << std::endl;
			std::cout << "Decode result: " << AESDecode(encodeRules, AESEncode(encodeRules, content));
			std::cout << std::endl;
		}
		else if (command == "d")
		{
			std::string encodeRules, content;
			std::cin >> encodeRules;
			std::cin >> content;
			std::cout << "Decode result: " << AESDecode(encodeRules, content);
			std::cout << std::endl;
			std::cout << "Encode result: " << AESEncode(encodeRules, AESDecode(encodeRules, content));
			std::cout << std::endl;
		}
		else if (command == "q") {
			break;
		}
		else {
			std::cout << "Unknown command" << std::endl;
		}
	}
	return 0;
}