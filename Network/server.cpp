#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>

#include "server.h"

Server::Server(QObject *parent) :
    QObject(parent),
    m_pServer(NULL)
{
    m_pServer = new QTcpServer(this);
    connect(m_pServer, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
}

bool Server::listen(const QString &address, quint16 port)
{
    QHostAddress add = QHostAddress::Any;
    if(!address.trimmed().isEmpty())
        add = QHostAddress(address);
    return m_pServer->listen(add, port);
}

void Server::onNewConnection()
{
    QTcpSocket *pSocket = m_pServer->nextPendingConnection();
    if(pSocket == NULL)
        return;
    QString strAddress = pSocket->peerAddress().toString();
    qDebug() << "new connection:" << strAddress;
    m_mapClient.insert(strAddress, pSocket);
}
