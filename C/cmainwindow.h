#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>

class Client;

namespace Ui {
class CMainWindow;
}

class CMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CMainWindow(QWidget *parent = 0);
    ~CMainWindow();

private:
    Ui::CMainWindow *ui;
    Client *m_pClient;
};

#endif // CMAINWINDOW_H
