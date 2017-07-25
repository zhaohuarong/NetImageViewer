#include <QTextEdit>
#include <QTcpServer>
#include <QTcpSocket>

#include "smainwindow.h"
#include "ui_smainwindow.h"

SMainWindow::SMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SMainWindow),
    m_pServer(NULL)
{
    ui->setupUi(this);

    m_pServer = new QTcpServer(this);
    connect(m_pServer, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    m_pServer->listen(QHostAddress::Any, 6666);
}

SMainWindow::~SMainWindow()
{
    delete ui;
}

void SMainWindow::onNewConnection()
{
    QTcpSocket *pSocket = m_pServer->nextPendingConnection();
    if(pSocket == NULL)
        return;
    QString strIp = pSocket->peerAddress().toString();
    m_lstClient.insert(strIp, pSocket);
    ui->textEdit->append(QString("%1 is connected").arg(strIp));
}
