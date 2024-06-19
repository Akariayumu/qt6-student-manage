#include "stusql.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlError>
#include <QCoreApplication>

stusql  * stusql::ptrstusql = nullptr;

stusql::stusql(QObject *parent)
    : QObject{parent}
{
    //QSqlQuery q("", db);
    initdb();
    stuinfo s;
    s.name="李天所";
    s.number=114514;
     for(int i =0;i<10;i++){
         //addstu(s);
     }
    get_StuNum();
    getPageStu(2,3);
    delstu(70);
    stuinfo t;
    t.id=137;
    t.name="淳平";
    updatestu(t);
    //clean_stu();
    // INTO student VALUES (NULL,3230630000,'张三','男',18,'计算机科学与网络工程学院','软件233')");

}


void stusql::initdb(){
    if (QSqlDatabase::drivers().isEmpty()){
        QMessageBox::information(NULL, tr("No database drivers found"),
                                 tr("This demo requires at least one Qt database driver. "
                                    "Please check the documentation how to build the "
                                    "Qt SQL plugins."));
        qDebug()<<"No database drivers found";}
    m_db = QSqlDatabase::addDatabase("QSQLITE");
#if 0
    auto str1 = QCoreApplication::applicationDirPath()+"data.db";
    qDebug()<<str1;
#endif
    m_db.setDatabaseName("F://acd/C/c/qt/data.db");
    if (!m_db.open())
        qDebug()<<"database not open";

}

quint32 stusql::get_StuNum()
{
    QSqlQuery sql("", m_db);
    sql.exec("select count(id) from student;");
    quint32 stu_num;
    while(sql.next()){
        stu_num = sql.value(0).toUInt();
    }
    return stu_num;
}

QList<stuinfo> stusql::getPageStu(quint32 page, quint32 page_num)
{   QList<stuinfo> l;
    QSqlQuery sql("", m_db);
    QString strsql = QString("select * from student order by id limit %1 offset %2;").
                     arg(page_num).arg(page*page_num);
    qDebug()<<sql.exec(strsql);

    stuinfo info;
    while(sql.next()){
        info.id = sql.value(0).toUInt();
        info.number = sql.value(1).toUInt();
        info.name = sql.value(2).toString();
        info.acd = sql.value(3).toString();
        info.cla = sql.value(4).toString();
        info.math = sql.value(5).toUInt();
        info.program = sql.value(6).toUInt();
        l.push_back(info);
    }
    return l;
}

bool stusql::addstu(stuinfo info)
{   QSqlQuery sql("", m_db);
    QString strsql = QString ("insert into student values(null,%1,'%2','%3','%4',%5,%6);").
                     arg(info.number).arg(info.name).arg(info.acd).arg(info.cla).arg(info.math).arg(info.program);
    qDebug()<<sql.exec(strsql);

}

bool stusql::delstu(int id)
{
    QSqlQuery sql("", m_db);

    return sql.exec(QString("delete from student where id = %1;").arg(id));
}

void stusql::clean_stu()
{
    QSqlQuery sql("", m_db);
    qDebug()<<sql.exec(QString("delete from student;"));
    sql.exec("delete from sqlite_sequence  where name = 'student';");
}

void stusql::updatestu(stuinfo info)
{
    QSqlQuery sql("", m_db);
    QString strsql = QString ("update student set number = %1,name = '%2',acd = '%3',class = '%4', math = '%5', program = '%6'where id = %7").
                     arg(info.number).arg(info.name).arg(info.acd).arg(info.cla).arg(info.math).arg(info.program).arg(info.id);
    qDebug()<<sql.exec(strsql);
    QSqlError e =sql.lastError();
    qDebug()<<e.text();
}
