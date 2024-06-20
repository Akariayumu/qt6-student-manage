#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "page_login.h"
#include <QMainWindow>
#include "stusql.h"
#include "dlg_addstu.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void updateTable();
    int get_id();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_6_clicked();

    void on_btn_addstu_clicked();


    void on_btn_cleanup_clicked();

    void on_btn_del_clicked();

    void on_btn_update_clicked();


    void on_reflash_clicked();


    void on_btn_search_clicked();

    void on_btn_mathsort_clicked();

    void on_btn_prosort_clicked();

private:
private:
    Ui::MainWindow *ui;
    Page_Login m_dlgLogin;
    stusql *m_ptrstusql;
    Dlg_addstu m_dlgaddstu;
};


#endif // MAINWINDOW_H
