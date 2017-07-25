#include "server.h"

#include "smainwindow.h"
#include "ui_smainwindow.h"

SMainWindow::SMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SMainWindow),
    m_pServer(NULL)
{
    ui->setupUi(this);

    m_pServer = new Server(this);
    m_pServer->listen("", 6666);
}

SMainWindow::~SMainWindow()
{
    delete ui;
}
