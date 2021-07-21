#include <winsock2.h>
#include <iostream>
#define XSTR(x) STR(x)
#define STR(x)
// create a socket.
// connect to a server.
// send/recv - repeat until we have or receive data
// close to releases data.

using namespace std;
int main(int argument, char const * argv[]) {
    cout << "\n----TCP Client----\n" << endl;

    // khởi tạo Winsock
    WSADATA Winsockdata;
    int iWsaStartup = WSAStartup(MAKEWORD(2,2),&Winsockdata);
    if(iWsaStartup != 0){
        cout << "WSA startup failed" <<endl; // kiểm tra khởi tạo
    }

    // Tạo 1 Socket để kết nối với máy chủ
    SOCKET TCPClientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(TCPClientSocket == INVALID_SOCKET){
        cout << "TCP creat failed" << WSAGetLastError() << endl; // kiểm tra khởi tạo TCP
    }
//----------------------------------------------------------
    struct sockaddr_in TCPServerAdd;
    TCPServerAdd.sin_family = AF_INET;
    TCPServerAdd.sin_addr.s_addr = inet_addr("192.168.56.2"); // kết nối đến Server có địa chỉ IP 
    TCPServerAdd.sin_port = htons(5000);

    // Kết nối đến máy chủ 
    int iConnect = connect(TCPClientSocket, (SOCKADDR *) &TCPServerAdd, sizeof(TCPServerAdd));
    // Kiểm tra kết nối với máy chủ 
    if (iConnect == SOCKET_ERROR){
        cout << "Connect fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    cout << "Connected" << endl;
//----------------------------------------------------------
    // gửi data đến Server (1 gói tin)
    printf("[Client] << ");
    char* SenderBuffer = new char[2048];
    scanf("%[^\n]s",SenderBuffer);
    int iSenderBuffer = strlen(SenderBuffer)+1;
    int iSend = send(TCPClientSocket, SenderBuffer, iSenderBuffer, 0);
    // kiểm tra gửi data 
    if(iSend == SOCKET_ERROR){
        cout << "Send fail & ERROR no -> " << WSAGetLastError() << endl;
    }
//----------------------------------------------------------
    // nhận data từ Server 
    char* RecvBuffer = new char[2048];
    int iRecvBuffer = 2049;
    int iRecv = recv(TCPClientSocket, RecvBuffer, iRecvBuffer, 0);
    if(iRecv == SOCKET_ERROR){
        cout << "Receive fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    cout << "[Server] >> " << RecvBuffer << endl;
//----------------------------------------------------------
    // đóng Socket 
    int iCloseSocket = closesocket(TCPClientSocket);
    if(iCloseSocket == SOCKET_ERROR){
        cout << "Close fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    int iWsaCleanup = WSACleanup();
    if(iWsaCleanup == SOCKET_ERROR){
        cout << "Cleanup fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    system("PAUSE");
    return 0;
}