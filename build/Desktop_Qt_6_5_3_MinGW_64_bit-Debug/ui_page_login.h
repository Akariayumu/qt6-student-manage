/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Login
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *widget_2;
    QLabel *label;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Page_Login)
    {
        if (Page_Login->objectName().isEmpty())
            Page_Login->setObjectName("Page_Login");
        Page_Login->resize(400, 240);
        Page_Login->setMinimumSize(QSize(400, 240));
        Page_Login->setMaximumSize(QSize(400, 240));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resource/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Login->setWindowIcon(icon);
        lineEdit = new QLineEdit(Page_Login);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 100, 221, 25));
        lineEdit_2 = new QLineEdit(Page_Login);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(100, 140, 221, 25));
        widget_2 = new QWidget(Page_Login);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(30, 10, 378, 71));
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 0, 191, 61));
        label->setAlignment(Qt::AlignCenter);
        btn_login = new QPushButton(Page_Login);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(60, 190, 93, 28));
        btn_exit = new QPushButton(Page_Login);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(230, 190, 93, 28));
        label_3 = new QLabel(Page_Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 140, 41, 21));
        label_4 = new QLabel(Page_Login);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 100, 41, 21));

        retranslateUi(Page_Login);

        QMetaObject::connectSlotsByName(Page_Login);
    } // setupUi

    void retranslateUi(QWidget *Page_Login)
    {
        Page_Login->setWindowTitle(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Page_Login", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        btn_login->setText(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Page_Login", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("Page_Login", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("Page_Login", "\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Login: public Ui_Page_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
