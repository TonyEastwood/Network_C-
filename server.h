#ifndef SERVER_H
#define SERVER_H
#include <QtNetwork>

class Server: QUdpSocket
{
public:
    Server();
    void CreateConnection(int _port);
};

#endif // SERVER_H
