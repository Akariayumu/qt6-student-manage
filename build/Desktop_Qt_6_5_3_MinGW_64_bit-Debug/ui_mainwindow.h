/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QTableWidget *tableWidget;
    QLineEdit *le_search;
    QPushButton *btn_search;
    QPushButton *btn_addstu;
    QPushButton *btn_update;
    QPushButton *btn_del;
    QLabel *label_stunum;
    QPushButton *btn_cleanup;
    QPushButton *reflash;
    QPushButton *btn_prosort;
    QPushButton *btn_mathsort;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(780, 580);
        MainWindow->setMinimumSize(QSize(780, 580));
        MainWindow->setMaximumSize(QSize(780, 580));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resource/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 10, 241, 41));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 50, 841, 511));
        stackedWidget->setStyleSheet(QString::fromUtf8("background image(:/Resource/background.png)"));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(19, 50, 721, 400));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->horizontalHeader()->setDefaultSectionSize(102);
        le_search = new QLineEdit(page_2);
        le_search->setObjectName("le_search");
        le_search->setGeometry(QRect(490, 10, 171, 31));
        btn_search = new QPushButton(page_2);
        btn_search->setObjectName("btn_search");
        btn_search->setGeometry(QRect(670, 10, 71, 31));
        btn_addstu = new QPushButton(page_2);
        btn_addstu->setObjectName("btn_addstu");
        btn_addstu->setGeometry(QRect(20, 10, 71, 31));
        btn_update = new QPushButton(page_2);
        btn_update->setObjectName("btn_update");
        btn_update->setGeometry(QRect(100, 10, 71, 31));
        btn_del = new QPushButton(page_2);
        btn_del->setObjectName("btn_del");
        btn_del->setGeometry(QRect(180, 10, 71, 31));
        label_stunum = new QLabel(page_2);
        label_stunum->setObjectName("label_stunum");
        label_stunum->setGeometry(QRect(20, 450, 91, 31));
        btn_cleanup = new QPushButton(page_2);
        btn_cleanup->setObjectName("btn_cleanup");
        btn_cleanup->setGeometry(QRect(670, 450, 71, 31));
        reflash = new QPushButton(page_2);
        reflash->setObjectName("reflash");
        reflash->setGeometry(QRect(590, 450, 71, 31));
        btn_prosort = new QPushButton(page_2);
        btn_prosort->setObjectName("btn_prosort");
        btn_prosort->setGeometry(QRect(440, 450, 71, 31));
        btn_mathsort = new QPushButton(page_2);
        btn_mathsort->setObjectName("btn_mathsort");
        btn_mathsort->setGeometry(QRect(352, 450, 71, 31));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 780, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        action->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\345\255\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\347\274\226\347\250\213", nullptr));
        le_search->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        btn_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_addstu->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        btn_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        label_stunum->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\344\272\272\346\225\260</span></p></body></html>", nullptr));
        btn_cleanup->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        reflash->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        btn_prosort->setText(QCoreApplication::translate("MainWindow", "\347\274\226\347\250\213\346\216\222\345\272\217", nullptr));
        btn_mathsort->setText(QCoreApplication::translate("MainWindow", "\346\225\260\345\255\246\346\216\222\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
