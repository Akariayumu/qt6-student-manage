#ifndef DLG_ADDSTU_H
#define DLG_ADDSTU_H

#include <QDialog>

namespace Ui {
class Dlg_addstu;
}

class Dlg_addstu : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_addstu(QWidget *parent = nullptr);
    ~Dlg_addstu();

    void setType(bool isAdd,int = 0);
private slots:

    void on_btn_save_clicked();


    void on_btn_quit2_clicked();

private:
    Ui::Dlg_addstu *ui;
    bool m_isAdd;
    int m_id;
};

#endif // DLG_ADDSTU_H
