#include <winsock2.h>
#include <iostream>
#include <algorithm>

// create a socket - Get the file descriptor!
// bind to an address -What port am I on?
// listen on a port, and wait for a connection to be established.
// accept the connection from a client.
// send/recv - the same way we read and write for a file.
// close to releases data.

using namespace std;

int main(int argument, char const * argv[]) {
    cout << "\n----TCP Server----\n" << endl;
    //khởi tạo window socket
    WSADATA Winsockdata;
    // kiểm tra khởi tạo winsock
    int iWsaStartup = WSAStartup(MAKEWORD(2,2), &Winsockdata); // winsock phiên bản 2.2
    if(iWsaStartup != 0){
        cout << "WSA startup failed" <<endl;
    }
    // Tạo 1 socket chọn giao thức TCP
    SOCKET TCPServerSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    // AF_INET: TCP/IP -> dùng địa chỉ ip để truyền dữ liệu
    // SOCK_STREAM: socket hướng kết nối TCP
    // IPPROTO_TCP: protocol của SOCK_STREAM

    //kiểm tra khởi tạo TCP
    if(TCPServerSocket == INVALID_SOCKET){
        cout << "TCP creat failed" << WSAGetLastError() << endl;
        // WSACleanup();
    }
//----------------------------------------------------------
    // thiết lập IP
    struct sockaddr_in TCPServerAdd;
    TCPServerAdd.sin_family = AF_INET;
    TCPServerAdd.sin_addr.s_addr = inet_addr("192.168.56.2"); // IP chỉ định
    TCPServerAdd.sin_port = htons(5000); // port lắng nghe kết nối 

    // bind socket với IP và port
    int iBind = bind(TCPServerSocket, (SOCKADDR *) &TCPServerAdd, sizeof(TCPServerAdd));
    if (iBind == SOCKET_ERROR){
        cout << "Bind fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    // thiết lập TCP lắng nghe kết nối từ Client
    int iListen = listen(TCPServerSocket, 2);
    if (iListen == SOCKET_ERROR) {
        cout << "Listen fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    cout << "Client connecting..." << endl;
    struct sockaddr_in TCPClientAdd;
    int iTCPClientAdd = sizeof(TCPClientAdd);
    SOCKET sAcceptSocket = accept(TCPServerSocket, (SOCKADDR *)&TCPClientAdd, &iTCPClientAdd);
    if (sAcceptSocket == INVALID_SOCKET) {
        cout << "Accept fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    cout << "Client Accepted" << endl;
//----------------------------------------------------------
    // nhận gói tin từ Client
    char* RecvBuffer = new char[2048];
    int iRecvBuffer = 2049;
    int iRecv = recv(sAcceptSocket, RecvBuffer, iRecvBuffer, 0);
    if(iRecv == SOCKET_ERROR){
        cout << "Receive fail & ERROR no -> " << WSAGetLastError() << endl;
    }
    cout << "[Client] >> " << RecvBuffer << endl;
//----------------------------------------------------------
    // gửi gói tin đến Client
    char* SenderBuffer = new char[2049];
    fill(SenderBuffer, SenderBuffer+2049, 0);
    int iSenderBuffer = strlen(RecvBuffer);
    transform(RecvBuffer, RecvBuffer+iSenderBuffer, SenderBuffer, ::toupper);
    cout << "[Server] << " << SenderBuffer << endl;
    int iSend = send(sAcceptSocket, SenderBuffer, iSenderBuffer, 0);
    if(iSend == SOCKET_ERROR){
        cout << "Send fail & ERROR no -> " << WSAGetLastError() << endl;
    }
//----------------------------------------------------------
    // đóng socket
    int iCloseSocket = closesocket(TCPServerSocket);
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