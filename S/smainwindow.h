#ifndef SMAINWINDOW_H
#define SMAINWINDOW_H

#include <QMap>
#include <QMainWindow>

class QTcpServer;
class QTcpSocket;

namespace Ui {
class SMainWindow;
}

class SMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SMainWindow(QWidget *parent = 0);
    ~SMainWindow();

private slots:
    void onNewConnection();

private:
    Ui::SMainWindow *ui;
    QTcpServer *m_pServer;
    QMap<QString, QTcpSocket *> m_lstClient;
};

#endif // SMAINWINDOW_H
