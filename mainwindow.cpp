#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTableWidget>
#include <QAbstractTableModel>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_ptrstusql(nullptr)
{
    ui->setupUi(this);
    //m_dlgLogin.show();

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

int MainWindow::get_id()
{   int i = ui->tableWidget->currentRow();
    return ui->tableWidget->item(i,0)->text().toUInt();
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
    ui->tableWidget->setColumnCount(7);
    QStringList l;
    l<<"序号"<<"学号"<<"姓名"<<"学院"<<"班级"<<"数学"<<"编程";
    ui->tableWidget->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    quint32 ssnum =  m_ptrstusql->get_StuNum();
    ui->label_stunum->setText(QString("人数统计：%1").arg(ssnum));
    QList<stuinfo> lstudent = m_ptrstusql->getPageStu(0,ssnum,QString("student"));
    //ui->tableWidget->clear();
    ui->tableWidget->setRowCount(ssnum);
    for (int i =0;i<lstudent.size();i++) {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i+1)));
        //ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(lstudent[i].id)));
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
        quint32 number = (ui->tableWidget->item(i,1)->text().toUInt());
        //quint32 id = (m_ptrstusql->get_uid(number));
        qDebug()<<m_ptrstusql->delstu((number));
        updateTable();
        QMessageBox::information(nullptr,"信息","删除成功");
    }
    updateTable();

}

void MainWindow::on_btn_addstu_clicked()
{   m_dlgaddstu.setType(true);
    m_dlgaddstu.exec();
    updateTable();
}

void MainWindow::on_btn_update_clicked()
{
    stuinfo info;
    int i = ui->tableWidget->currentRow();
    if (i>=0){
        QString str_id = ui->tableWidget->item(i,0)->text();
        info.id = str_id.toInt();
        QString str_num = ui->tableWidget->item(i,1)->text();
        info.number = str_num.toInt();
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





void MainWindow::on_reflash_clicked()
{
    updateTable();
}









void MainWindow::on_btn_search_clicked()
{   QString strfilter = ui->le_search->text();
    if (strfilter.isEmpty()){
        QMessageBox::information(nullptr,"警告","输入为空");
        return;
    }
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);
    QStringList l;
    l<<"序号"<<"学号"<<"姓名"<<"学院"<<"班级"<<"数学"<<"物理";
    //ui->tableWidget->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //
    // ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    // ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    // ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    quint32 ssnum =  m_ptrstusql->get_StuNum();
    ui->label_stunum->setText(QString("人数统计：%1").arg(ssnum));
    QList<stuinfo> lstudent = m_ptrstusql->getPageStu(0,ssnum,QString("student"));
    //ui->tableWidget->clear();





    int index =  0;
    for (int i =0;i<lstudent.size();i++) {
        if (!lstudent[i].name.contains(strfilter)){
            continue;
        }


        ui->tableWidget->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));
        //ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(lstudent[i].id)));
        ui->tableWidget->setItem(index,1,new QTableWidgetItem(QString::number(lstudent[i].number)));
        ui->tableWidget->setItem(index,2,new QTableWidgetItem(lstudent[i].name));
        ui->tableWidget->setItem(index,3,new QTableWidgetItem(lstudent[i].acd));
        ui->tableWidget->setItem(index,4,new QTableWidgetItem(lstudent[i].cla));
        ui->tableWidget->setItem(index,5,new QTableWidgetItem(QString::number(lstudent[i].math)));
        ui->tableWidget->setItem(index,6,new QTableWidgetItem(QString::number(lstudent[i].program)));
        index++;
    }
    ui->tableWidget->verticalHeader ()->setHidden (true);
    ui->tableWidget->setRowCount(index);
}


void MainWindow::on_btn_mathsort_clicked()
{
    m_ptrstusql->math_sort();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);
    QStringList l;
    l<<"序号"<<"学号"<<"姓名"<<"学院"<<"班级"<<"数学"<<"编程";
    ui->tableWidget->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    quint32 ssnum =  m_ptrstusql->get_StuNum();
    ui->label_stunum->setText(QString("人数统计：%1").arg(ssnum));
    QList<stuinfo> lstudent = m_ptrstusql->getPageStu(0,ssnum,QString("math_student"));
    //ui->tableWidget->clear();
    ui->tableWidget->setRowCount(ssnum);
    for (int i =0;i<lstudent.size();i++) {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i+1)));
        //ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(lstudent[i].id)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(lstudent[i].number)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(lstudent[i].name));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(lstudent[i].acd));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(lstudent[i].cla));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(lstudent[i].math)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(lstudent[i].program)));
    }
    ui->tableWidget->verticalHeader ()->setHidden (true);
}


void MainWindow::on_btn_prosort_clicked()
{
    m_ptrstusql->program_sort();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);
    QStringList l;
    l<<"序号"<<"学号"<<"姓名"<<"学院"<<"班级"<<"数学"<<"编程";
    ui->tableWidget->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    quint32 ssnum =  m_ptrstusql->get_StuNum();
    ui->label_stunum->setText(QString("人数统计：%1").arg(ssnum));
    QList<stuinfo> lstudent = m_ptrstusql->getPageStu(0,ssnum,QString("program_student"));
    //ui->tableWidget->clear();
    ui->tableWidget->setRowCount(ssnum);
    for (int i =0;i<lstudent.size();i++) {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i+1)));
        //ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(lstudent[i].id)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(lstudent[i].number)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(lstudent[i].name));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(lstudent[i].acd));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(lstudent[i].cla));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(lstudent[i].math)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(lstudent[i].program)));
    }
    ui->tableWidget->verticalHeader ()->setHidden (true);
}

