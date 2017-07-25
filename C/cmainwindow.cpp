#include "client.h"
#include "cmainwindow.h"
#include "ui_cmainwindow.h"

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMainWindow),
    m_pClient(NULL)
{
    ui->setupUi(this);

    m_pClient = new Client(this);
    m_pClient->connectToServer("192.168.1.110", 6666);
}

CMainWindow::~CMainWindow()
{
    delete ui;
}
