#include "server.h"

Server::Server()
{

}
void Server::CreateConnection(int _port)
{
    QUdpSocket *_socket = new QUdpSocket(this);
}
