#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include "network_global.h"

class QTcpSocket;

class NETWORKSHARED_EXPORT Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);

    void connectToServer(const QString &address, quint16 port);

private slots:
    void onConnected();

private:
    QTcpSocket *m_pSocket;
};

#endif // CLIENT_H
