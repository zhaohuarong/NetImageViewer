#ifndef SERVER_H
#define SERVER_H

#include <QMap>
#include <QObject>

#include "network_global.h"

class QTcpServer;
class QTcpSocket;

class NETWORKSHARED_EXPORT Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);

public:
    bool listen(const QString &address, quint16 port = 0);

private slots:
    void onNewConnection();

private:
    QTcpServer *m_pServer;
    QMap<QString, QTcpSocket *> m_mapClient;
};

#endif // SERVER_H
