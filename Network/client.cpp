#include <QDebug>
#include <QTcpSocket>
#include <QHostAddress>

#include "client.h"

Client::Client(QObject *parent) :
    QObject(parent),
    m_pSocket(NULL)
{
    m_pSocket = new QTcpSocket(this);

    connect(m_pSocket, SIGNAL(connected()), this, SLOT(onConnected()));
}

void Client::connectToServer(const QString &address, quint16 port)
{
    m_pSocket->connectToHost(QHostAddress(address), port);
}

void Client::onConnected()
{
    qDebug() << "connected to server";
}
