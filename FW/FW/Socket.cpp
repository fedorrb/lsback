#include ".\socket.h"
#include <string>
using namespace std;
using std::string;

Socket::Socket()
{
	errMsg[0] = '\0';
	recvbufAll[0] = '\0';
	ptrAddrInfo = NULL;
	receivedAllData = false;
	error = false;
	ConnectSocket = INVALID_SOCKET;
	def_ip = "10.0.8.181";
	def_port = "9000";
}

Socket::Socket(string new_ip, string new_port)
{
	errMsg[0] = '\0';
	recvbufAll[0] = '\0';
	ptrAddrInfo = NULL;
	receivedAllData = false;
	error = false;
	ConnectSocket = INVALID_SOCKET;
	def_ip = new_ip;
	def_port = new_port;
}

Socket::~Socket(void)
{
	freeaddrinfo(ptrAddrInfo);
	WSACleanup();
}

bool Socket::MakeSocket() {
	error = false;
	int iResult = 0;
	WSADATA wsaData;
	struct addrinfo hints;

	// ���� �� �� ������ ��������� �������
	if ( WSAStartup( MAKEWORD(2,2), &wsaData) ) //ok  WS2_32.dll
	{
		strcpy(errMsg,"³������ �������� ������.");
		error = true;
		return false;
	}

	//Creating a Socket for the Client
	ZeroMemory( &hints, sizeof(hints) );
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;

	// Resolve the server address and port
	//iResult = getaddrinfo(DEFAULT_IP, DEFAULT_PORT, &hints, &ptrAddrInfo);
	iResult = getaddrinfo(def_ip.c_str(), def_port.c_str(), &hints, &ptrAddrInfo);
	
	if (iResult != 0)
	{
		strcpy(errMsg, "getaddrinfo failed: ");
		strcat(errMsg, strerror(iResult));
		WSACleanup();
		error = true;
		return false;
	}
	return true;
}
//*****************************************************************************

bool Socket::SendData(char* sendText)
{
	addrinfo *ptr = NULL;
	int iResult, recvbuflen = DEFAULT_BUFLEN;
	ConnectSocket = INVALID_SOCKET;
	if(!error) {

		// Attempt to connect to the first address returned by the call to getaddrinfo
		// ����� ������ ����� �������������� ����������
		ptr = ptrAddrInfo;

		// Attempt to connect to an address until one succeeds
		// ���������� ��������� ����� ������� ���� �� ��������� ����������
		for(ptr=ptrAddrInfo; ptr != NULL ;ptr=ptr->ai_next)
		{
			// Create a SOCKET for connecting to server
			ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);
			if (ConnectSocket == INVALID_SOCKET)
			{
				strcpy(errMsg, "Error at socket: ");
				strcat(errMsg, strerror(WSAGetLastError()));
				error = true;
				return false;
			}
			// Connect to server.
			iResult = connect( ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
			if (iResult == SOCKET_ERROR)
			{
				closesocket(ConnectSocket);
				ConnectSocket = INVALID_SOCKET;
				continue;
			}
			break;
		}

		if (ConnectSocket == INVALID_SOCKET)
		{
			strcpy(errMsg, "Unable to connect to server!");
			error = true;
			return false;
		}

		/* The getaddrinfo function is used to determine the values in the sockaddr structure.
		In this example, the first IP address returned by the getaddrinfo function is used to specify
		the sockaddr structure passed to the connect. If the connect call fails to the first IP address,
		then try the next addrinfo structure in the linked list returned from the getaddrinfo function.*/

		// Sending and Receiving Data on the Client
		// Send an initial buffer
		iResult = send(ConnectSocket, sendText, (int) strlen(sendText), MSG_OOB);
		if (iResult == SOCKET_ERROR)
		{
			strcpy(errMsg, "Send failed: ");
			strcat(errMsg, strerror(WSAGetLastError()));
			closesocket(ConnectSocket);
			error = true;
			return false;
		}
	}
	return (!error);
}

bool Socket::ShutdownSocket() {
	// shutdown the connection for sending since no more data will be sent
	// the client can still use the ConnectSocket for receiving data
	if(!error) {
		int iResult = shutdown(ConnectSocket, SD_SEND);
		if (iResult == SOCKET_ERROR)
		{
			strcpy(errMsg, "Shutdown failed: ");
			strcat(errMsg, strerror(WSAGetLastError()));
			closesocket(ConnectSocket);
			error = true;
		}
	}
	return (!error);
}

bool Socket::ReceiveData() {
	char recvbuf[DEFAULT_BUFLEN];
	recvbufAll[0] = '\0';
	recvbuf[0] = '\0';
	int recvbuflen = DEFAULT_BUFLEN;
	int iResult = 0;
	if(!error) {
		// Receive until the peer closes the connection
		do {
			iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
			if ( iResult > 0 ) {
				strncat(recvbufAll, recvbuf, iResult);
				if(recvbufAll[strlen(recvbufAll)-1] == '\n' && recvbufAll[strlen(recvbufAll)-2] == '\r') {
					receivedAllData = true;
					break;
				}
			}
			else if ( iResult == 0 ) {
				strcpy(errMsg, "Connection closed");
				error = true;
			}
			else {
				strcpy(errMsg, "Recv failed with error: ");
				strcat(errMsg, strerror(WSAGetLastError()));
				error = true;
			}
		} while( iResult > 0 );

		closesocket(ConnectSocket);
	}
	return (!error);
}

bool Socket::IsError() {
	return error;
}

bool Socket::IsReceiveAll() {
	return receivedAllData;
}