#pragma once
#include <winsock2.h>
#include <ws2tcpip.h>
#include <winbase.h>

#include ".\socket.h"
#include <string>
using namespace std;
using std::string;

#pragma comment (lib, "Ws2_32.lib") //ccc
#pragma comment (lib, "Mswsock.lib")
//#pragma comment (lib, "AdvApi32.lib")

#define DEFAULT_BUFLEN 512

class Socket
{
public:
	Socket();
	Socket(string new_ip, string new_port);
	~Socket(void);
	bool MakeSocket();
	bool SendData(char* sendText);
	bool ShutdownSocket();
	bool ReceiveData();
	char errMsg[100];
	char recvbufAll[DEFAULT_BUFLEN];
	bool IsError();
	bool IsReceiveAll();
	string def_ip;
	string def_port;
private:
	bool receivedAllData; //������ ��������� ������ �����������
	bool error;
	SOCKET ConnectSocket;
	addrinfo *ptrAddrInfo;
};
