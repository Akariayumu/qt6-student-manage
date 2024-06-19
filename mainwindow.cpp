#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_ptrstusql(nullptr)
{
    ui->setupUi(this);
    m_dlgLogin.show();
    auto f =[&](){
        this->show();
    };
    connect(&m_dlgLogin,&Page_Login::sendLoginsuccess,this,f);


    m_ptrstusql = stusql::getinstance();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_6_clicked()
{   ui->tableWidget->verticalHeader()->setHidden(true);
    //制作100条数据
    stuinfo  info;
    for(int i = 0; i<100;i++){
        //info.age=18;
        info.name=QString("张%1").arg(i);
        info.acd="计算机";
        info.cla="2399";
        info.math=i;
        info.program=i+1;
        info.number=i;
        m_ptrstusql->addstu(info);

    }
    updateTable();
}

void MainWindow::updateTable(){
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(8);
    QStringList l;
    l<<"序号"<<"学号"<<"姓名"<<"学院"<<"班级"<<"数学"<<"物理";

    ui->tableWidget->setHorizontalHeaderLabels(l);
    //
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    quint32 ssnum =  m_ptrstusql->get_StuNum();
    ui->label_stunum->setText(QString("人数统计：%1").arg(ssnum));
    QList<stuinfo> lstudent = m_ptrstusql->getPageStu(0,ssnum);
    //ui->tableWidget->clear();
    ui->tableWidget->setRowCount(ssnum);
    for (int i =0;i<lstudent.size();i++) {

        //ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(lstudent[i].id)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(lstudent[i].number)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(lstudent[i].name));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(lstudent[i].acd));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(lstudent[i].cla));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(lstudent[i].math)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(lstudent[i].program)));
    }
    ui->tableWidget->verticalHeader ()->setHidden (true);
}





void MainWindow::on_btn_cleanup_clicked()
{
    m_ptrstusql->clean_stu();
    updateTable();
}


void MainWindow::on_btn_del_clicked()
{
    int i = ui->tableWidget->currentRow();
    if (i>=0){
        int id = ui->tableWidget->item(i,1)->text().toUInt();
        m_ptrstusql->delstu(id);
        updateTable();
        QMessageBox::information(nullptr,"信息","删除成功");
    }

}

void MainWindow::on_btn_addstu_clicked()
{   m_dlgaddstu.setType(false);
    m_dlgaddstu.exec();
    updateTable();
}

void MainWindow::on_btn_update_clicked()
{   stuinfo info;
    int i = ui->tableWidget->currentRow();
    if (i>=0){
        //info.id = ui->tableWidget->item(i,1)->text().toUInt();
        info.number = ui->tableWidget->item(i,1)->text().toUInt();
        info.name = ui->tableWidget->item(i,2)->text();
        info.acd = ui->tableWidget->item(i,3)->text();
        info.cla = ui->tableWidget->item(i,4)->text();
        info.math= ui->tableWidget->item(i,5)->text().toUInt();
        info.program = ui->tableWidget->item(i,6)->text().toUInt();
        m_dlgaddstu.setType(false,info);
        m_dlgaddstu.exec();

    }
    updateTable();
}
