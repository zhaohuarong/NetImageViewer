#ifndef SMAINWINDOW_H
#define SMAINWINDOW_H

#include <QMainWindow>

class Server;

namespace Ui {
class SMainWindow;
}

class SMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SMainWindow(QWidget *parent = 0);
    ~SMainWindow();

private:
    Ui::SMainWindow *ui;
    Server *m_pServer;
};

#endif // SMAINWINDOW_H
