#include <QTcpSocket>

#include "cmainwindow.h"
#include "ui_cmainwindow.h"

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMainWindow),
    m_pClient(NULL),
    m_bIsConnected(false)
{
    ui->setupUi(this);

    m_pClient = new QTcpSocket(this);
    connect(m_pClient, SIGNAL(disconnected()), this, SLOT(onDisconnected()));

    startTimer(3000);
}

CMainWindow::~CMainWindow()
{
    delete ui;
}

void CMainWindow::timerEvent(QTimerEvent *e)
{
    Q_UNUSED(e);
    if(!m_bIsConnected)
    {
        m_pClient->connectToHost("192.168.1.110", 6666);
        m_bIsConnected = m_pClient->waitForConnected();
        ui->textEdit->append(m_bIsConnected ? "connected" : "disconnected");
        qApp->processEvents();
    }
}

void CMainWindow::onDisconnected()
{
    m_bIsConnected = false;
    ui->textEdit->append(m_bIsConnected ? "connected" : "disconnected");
}
