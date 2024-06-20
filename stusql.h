#ifndef STUSQL_H
#define STUSQL_H

#include <QSqlDatabase>
#include <QObject>
//定义学生信息
class stuinfo
{
public:
    //void get_id();
    int id;
    quint32 number;
    QString name;
    quint32 math;
    quint32 program;
    QString acd ;
    QString cla;
};
//定义管理用户信息
struct userinfo{
    QString username;
    QString password;
    QString aut;
};
class stusql : public QObject
{
    Q_OBJECT
public:
    static stusql *ptrstusql;
    static stusql *getinstance(){
        if (nullptr == ptrstusql){
            ptrstusql = new stusql;
        }
        return ptrstusql;
    }
    explicit stusql(QObject *parent = nullptr);

    //初始化SQLite数据库
    void initdb();

    //计算所有学生数量
    quint32 get_StuNum();

    //计算单页学生数
    QList<stuinfo> getPageStu(quint32 page,quint32 page_num,QString tabelname);

    //通过学号得到唯一id
    quint32 get_uid(quint32  number);

    //增加学生
    bool addstu(stuinfo);

    //删除学生
    bool delstu(int id);

    //清空学生表
    void clean_stu();

    //修改学生信息
    void updatestu(stuinfo info);

    //数学成绩排序
    void math_sort();

    //编程成绩排序
    void program_sort();

signals:
private:
    QSqlDatabase m_db;
};

#endif // STUSQL_H
