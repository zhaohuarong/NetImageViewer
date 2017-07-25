#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>

class QTcpSocket;

namespace Ui {
class CMainWindow;
}

class CMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CMainWindow(QWidget *parent = 0);
    ~CMainWindow();

protected:
    void timerEvent(QTimerEvent *e);

private slots:
    void onDisconnected();

private:
    Ui::CMainWindow *ui;
    QTcpSocket *m_pClient;
    bool m_bIsConnected;
};

#endif // CMAINWINDOW_H
