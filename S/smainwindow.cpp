#include "smainwindow.h"
#include "ui_smainwindow.h"

SMainWindow::SMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SMainWindow)
{
    ui->setupUi(this);
}

SMainWindow::~SMainWindow()
{
    delete ui;
}
