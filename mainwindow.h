#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "page_login.h"
#include <QMainWindow>
#include "stusql.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    Page_Login m_dlgLogin;
    stusql *m_ptrstusql;
};
#endif // MAINWINDOW_H