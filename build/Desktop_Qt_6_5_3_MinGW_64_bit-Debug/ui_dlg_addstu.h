/********************************************************************************
** Form generated from reading UI file 'dlg_addstu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDSTU_H
#define UI_DLG_ADDSTU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_addstu
{
public:
    QLabel *label;
    QLabel *label2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btn_save;
    QPushButton *btn_quit2;
    QWidget *widget;
    QLineEdit *lb_name;
    QLineEdit *lb_acd;
    QLineEdit *lb_class;
    QLineEdit *lb_math;
    QLineEdit *lb_program;
    QLineEdit *lb_number;
    QLabel *lb_png;

    void setupUi(QDialog *Dlg_addstu)
    {
        if (Dlg_addstu->objectName().isEmpty())
            Dlg_addstu->setObjectName("Dlg_addstu");
        Dlg_addstu->resize(500, 400);
        Dlg_addstu->setMinimumSize(QSize(500, 400));
        Dlg_addstu->setMaximumSize(QSize(500, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resource/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dlg_addstu->setWindowIcon(icon);
        label = new QLabel(Dlg_addstu);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 41, 21));
        label2 = new QLabel(Dlg_addstu);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(20, 80, 41, 21));
        label_3 = new QLabel(Dlg_addstu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 130, 51, 31));
        label_4 = new QLabel(Dlg_addstu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 190, 41, 31));
        label_5 = new QLabel(Dlg_addstu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 250, 41, 21));
        label_6 = new QLabel(Dlg_addstu);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 310, 51, 21));
        btn_save = new QPushButton(Dlg_addstu);
        btn_save->setObjectName("btn_save");
        btn_save->setGeometry(QRect(240, 340, 101, 41));
        btn_quit2 = new QPushButton(Dlg_addstu);
        btn_quit2->setObjectName("btn_quit2");
        btn_quit2->setGeometry(QRect(370, 340, 101, 41));
        widget = new QWidget(Dlg_addstu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 191, 361));
        lb_name = new QLineEdit(Dlg_addstu);
        lb_name->setObjectName("lb_name");
        lb_name->setGeometry(QRect(20, 100, 171, 25));
        lb_acd = new QLineEdit(Dlg_addstu);
        lb_acd->setObjectName("lb_acd");
        lb_acd->setGeometry(QRect(20, 160, 171, 25));
        lb_class = new QLineEdit(Dlg_addstu);
        lb_class->setObjectName("lb_class");
        lb_class->setGeometry(QRect(20, 220, 171, 25));
        lb_math = new QLineEdit(Dlg_addstu);
        lb_math->setObjectName("lb_math");
        lb_math->setGeometry(QRect(20, 280, 171, 25));
        lb_program = new QLineEdit(Dlg_addstu);
        lb_program->setObjectName("lb_program");
        lb_program->setGeometry(QRect(20, 340, 171, 25));
        lb_number = new QLineEdit(Dlg_addstu);
        lb_number->setObjectName("lb_number");
        lb_number->setGeometry(QRect(20, 50, 171, 25));
        lb_png = new QLabel(Dlg_addstu);
        lb_png->setObjectName("lb_png");
        lb_png->setGeometry(QRect(260, 30, 191, 291));
        lb_png->setStyleSheet(QString::fromUtf8("border-image: url(:/Resource/slogon.jpg);"));
        QWidget::setTabOrder(lb_number, lb_name);
        QWidget::setTabOrder(lb_name, lb_acd);
        QWidget::setTabOrder(lb_acd, lb_class);
        QWidget::setTabOrder(lb_class, lb_math);
        QWidget::setTabOrder(lb_math, lb_program);
        QWidget::setTabOrder(lb_program, btn_save);
        QWidget::setTabOrder(btn_save, btn_quit2);

        retranslateUi(Dlg_addstu);

        QMetaObject::connectSlotsByName(Dlg_addstu);
    } // setupUi

    void retranslateUi(QDialog *Dlg_addstu)
    {
        Dlg_addstu->setWindowTitle(QCoreApplication::translate("Dlg_addstu", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("Dlg_addstu", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\255\246\345\217\267</span></p></body></html>", nullptr));
        label2->setText(QCoreApplication::translate("Dlg_addstu", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_addstu", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\255\246\351\231\242</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_addstu", "<html><head/><body><p><span style=\" font-size:10pt;\">\347\217\255\347\272\247</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Dlg_addstu", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\345\255\246</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_addstu", "<html><head/><body><p><span style=\" font-size:10pt;\">\347\274\226\347\250\213</span></p></body></html>", nullptr));
        btn_save->setText(QCoreApplication::translate("Dlg_addstu", "\347\241\256\350\256\244", nullptr));
        btn_quit2->setText(QCoreApplication::translate("Dlg_addstu", "\345\217\226\346\266\210", nullptr));
        lb_png->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dlg_addstu: public Ui_Dlg_addstu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDSTU_H
