#ifndef STUSQL_H
#define STUSQL_H

#include <QSqlDatabase>
#include <QObject>
//定义学生信息
struct stuinfo
{
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


    void initdb();
    //计算所有学生数量
    quint32 get_StuNum();

    //计算单页学生数
    QList<stuinfo> getPageStu(quint32 page,quint32 page_num);

    //增加学生
    bool addstu(stuinfo);

    //删除学生
    bool delstu(int id);

    //清空学生表
    void clean_stu();

    //修改学生信息
    void updatestu(stuinfo info);
    //查询用户
    QList<userinfo> get_UsrNum();
    //
    //
    bool isExit(QString strUser);
    //
    void changeaut(QString str);
    //
    void adduser();
    //
    void deluser(QString username);
signals:
private:
    QSqlDatabase m_db;
};

#endif // STUSQL_H
