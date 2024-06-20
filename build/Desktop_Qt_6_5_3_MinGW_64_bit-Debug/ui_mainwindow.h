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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
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
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *btn_addstu;
    QPushButton *btn_update;
    QPushButton *btn_del;
    QCheckBox *checkBox;
    QLabel *label_stunum;
    QPushButton *btn_cleanup;
    QPushButton *reflash;
    QLabel *label_2;
    QPushButton *pushButton;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(880, 600);
        MainWindow->setMinimumSize(QSize(880, 600));
        MainWindow->setMaximumSize(QSize(880, 600));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 241, 41));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(150, 70, 711, 481));
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
        tableWidget->setGeometry(QRect(0, 40, 691, 401));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 10, 251, 25));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 10, 61, 28));
        btn_addstu = new QPushButton(page_2);
        btn_addstu->setObjectName("btn_addstu");
        btn_addstu->setGeometry(QRect(460, 10, 61, 28));
        btn_update = new QPushButton(page_2);
        btn_update->setObjectName("btn_update");
        btn_update->setGeometry(QRect(530, 10, 61, 28));
        btn_del = new QPushButton(page_2);
        btn_del->setObjectName("btn_del");
        btn_del->setGeometry(QRect(600, 10, 61, 28));
        checkBox = new QCheckBox(page_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 10, 71, 31));
        label_stunum = new QLabel(page_2);
        label_stunum->setObjectName("label_stunum");
        label_stunum->setGeometry(QRect(0, 450, 91, 31));
        btn_cleanup = new QPushButton(page_2);
        btn_cleanup->setObjectName("btn_cleanup");
        btn_cleanup->setGeometry(QRect(620, 450, 71, 31));
        reflash = new QPushButton(page_2);
        reflash->setObjectName("reflash");
        reflash->setGeometry(QRect(560, 450, 51, 31));
        stackedWidget->addWidget(page_2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(640, 20, 81, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(740, 20, 93, 28));
        treeWidget = new QTreeWidget(centralwidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(10, 70, 131, 481));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(170, 20, 51, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 880, 25));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
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
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_addstu->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        btn_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        label_stunum->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\344\272\272\346\225\260</span></p></body></html>", nullptr));
        btn_cleanup->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        reflash->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "adimin", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\351\224\200", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\256\241\347\220\206", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        pushButton_6->setText(QCoreApplication::translate("MainWindow", "SIM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
