#include "stusql.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlError>
#include <QCoreApplication>
#include <QtTest/QTest>
stusql  * stusql::ptrstusql = nullptr;

stusql::stusql(QObject *parent)
    : QObject{parent}
{
    //QSqlQuery q("", db);
    initdb();
    // stuinfo s;
    // s.name="李天所";
    // s.number=114514;
    //  for(int i =0;i<10;i++){
    //      //addstu(s);
    //  }
    // get_StuNum();
    // getPageStu(2,3);
    // delstu(70);
    // stuinfo t;
    // t.id=137;
    // t.name="淳平";
    // updatestu(t);
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
#if 1
    auto str1 = QCoreApplication::applicationDirPath()+"/data.db";
    qDebug()<<str1;
#endif
    m_db.setDatabaseName(str1);
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

QList<stuinfo> stusql::getPageStu(quint32 page, quint32 page_num,QString tabelname)
{   QList<stuinfo> l;
    QSqlQuery sql("", m_db);
    QString strsql = QString("select * from %1 order by id limit %2 offset %3;").arg(tabelname).
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

quint32 stusql::get_uid(quint32  number)
{
    quint32 id;
    QSqlQuery sql("", m_db);
    sql.exec(QString("select * from student where number=%1;").arg(number));
    while(sql.next())
    {
        quint32 id = sql.value(0).toUInt();
        return id;
    }
}

bool stusql::addstu(stuinfo info)
{   QSqlQuery sql("", m_db);
    QString strsql = QString ("insert into student values(null,%1,'%2','%3','%4',%5,%6);").
                     arg(info.number).arg(info.name).arg(info.acd).arg(info.cla).arg(info.math).arg(info.program);
    qDebug()<<sql.exec(strsql);

}

bool stusql::delstu(int number)
{
    QSqlQuery sql("", m_db);
    quint32 id = get_uid(number);
    qDebug()<<sql.exec(QString("delete from student where id = %1;").arg(id));
    return 1;
}

void stusql::clean_stu()
{
    QSqlQuery sql("", m_db);
    qDebug()<<sql.exec(QString("delete from student;"));
    sql.exec("delete from sqlite_sequence  where name = 'student';");
}

void stusql::updatestu(stuinfo info)
{   info.id = stusql::get_uid(info.number);
    QSqlQuery sql("", m_db);
    QString strsql = QString ("update student set number =%1,name ='%2',acd ='%3',class ='%4', math =%5,program=%6 where id = %7;").
                     arg(info.number).arg(info.name).arg(info.acd).arg(info.cla).arg(info.math).arg(info.program).arg(info.id);
    qDebug()<<sql.exec(strsql);
    QSqlError e =sql.lastError();
    qDebug()<<e.text();
}

void stusql::math_sort()
{   QString dele = QString("DROP TABLE math_student;");
    QSqlQuery sql("", m_db);
    //sql.exec(dele);
    QString sort_math = QString("DROP TABLE math_student;");
    QString sort_math1 = QString("DROP TABLE temp_student;");
    QString sort_math2 = QString("CREATE TABLE math_student AS SELECT number , name ,acd ,class ,math , program FROM student ORDER BY math DESC;");
    QString sort_math3 = QString("CREATE TABLE temp_student (id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,number INTEGER,name TEXT,acd TEXT,class TEXT,math INTEGER,program INTEGER);");
    QString sort_math4 = QString("INSERT INTO temp_student (number, name, acd, class, math, program)SELECT number, name, acd, class, math, program FROM math_student;");
    QString sort_math5 = QString("DROP TABLE math_student;");
    QString sort_math6 = QString("ALTER TABLE temp_student RENAME TO math_student;");
    qDebug()<<sql.exec(sort_math);
    qDebug()<<sql.exec(sort_math1);
    qDebug()<<sql.exec(sort_math2);
    qDebug()<<sql.exec(sort_math3);
    qDebug()<<sql.exec(sort_math4);
    qDebug()<<sql.exec(sort_math5);
    qDebug()<<sql.exec(sort_math6);
}

void stusql::program_sort()
{
    QString dele = QString("DROP TABLE program_student;DROP TABLE temp_student;");
    QSqlQuery sql("", m_db);
    //sql.exec(dele);
    QString sort_pro = QString("DROP TABLE program_student;");
    QString sort_pro1 = QString("DROP TABLE temp_student;");
    QString sort_pro2 = QString("CREATE TABLE program_student AS SELECT number , name ,acd ,class ,math , program FROM student ORDER BY program DESC;");
    QString sort_pro3 = QString("CREATE TABLE temp_student (id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,number INTEGER,name TEXT,acd TEXT,class TEXT,math INTEGER,program INTEGER);");
    QString sort_pro4 = QString("INSERT INTO temp_student (number, name, acd, class, math, program)SELECT number, name, acd, class, math, program FROM program_student;");
    QString sort_pro5 = QString("DROP TABLE program_student;");
    QString sort_pro6 = QString("ALTER TABLE temp_student RENAME TO program_student;");
    qDebug()<<sql.exec(sort_pro);
    qDebug()<<sql.exec(sort_pro1);
    qDebug()<<sql.exec(sort_pro2);
    qDebug()<<sql.exec(sort_pro3);
    qDebug()<<sql.exec(sort_pro4);
    qDebug()<<sql.exec(sort_pro5);
    qDebug()<<sql.exec(sort_pro6);
}
