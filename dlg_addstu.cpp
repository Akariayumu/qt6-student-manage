#include "dlg_addstu.h"
#include "ui_dlg_addstu.h"
#include "stusql.h"
#include <QMessageBox>

Dlg_addstu::Dlg_addstu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_addstu)
{
    ui->setupUi(this);
}

Dlg_addstu::~Dlg_addstu()
{
    delete ui;
}

void Dlg_addstu::setType(bool isAdd,stuinfo info)
{
    m_isAdd = isAdd;
    m_info = info;
    ui->lb_name->setText(info.name);
    ui->lb_number->setText(QString::number(info.number));
    ui->lb_acd->setText(info.acd);
    ui->lb_class->setText(info.cla);
    ui->lb_math->setText(QString::number(info.math));
    ui->lb_program->setText(QString::number(info.program));
}



void Dlg_addstu::on_btn_save_clicked()
{
    stuinfo info;
    auto ptr =stusql::getinstance();
    info.name = ui->lb_name->text();
    info.number = ui->lb_number->text().toUInt();
    info.acd = ui->lb_acd->text();
    info.cla = ui->lb_class->text();
    info.math = ui->lb_math->text().toUInt();
    info.program = ui->lb_program->text().toUInt();

    //修改复用
    if (m_isAdd){
        ptr->addstu(info);

    }
    else{
        //info.id = m_id;
        ptr->updatestu(m_info);
    }
    //ptr->addstu(info);
    QMessageBox::information(nullptr,"信息","存储成功");
    this->hide();
}





void Dlg_addstu::on_btn_quit2_clicked()
{
    this->hide();
}

