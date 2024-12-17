/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtTask;
    QPushButton *add;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *remove;
    QPushButton *removeAll;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(590, 430);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txtTask = new QLineEdit(centralwidget);
        txtTask->setObjectName("txtTask");

        horizontalLayout->addWidget(txtTask);

        add = new QPushButton(centralwidget);
        add->setObjectName("add");

        horizontalLayout->addWidget(add);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;    /* Background color */\n"
"    color: white;                /* Text color */\n"
"    border: 2px solid #2c3e50;   /* Border style */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    padding: 5px ;         /* Padding */\n"
"    font-size: 12px;             /* Font size */\n"
"    font-weight: bold;           /* Font weight */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;   /* Background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1abc9c;   /* Background color when pressed */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton);

        remove = new QPushButton(centralwidget);
        remove->setObjectName("remove");

        horizontalLayout_2->addWidget(remove);

        removeAll = new QPushButton(centralwidget);
        removeAll->setObjectName("removeAll");

        horizontalLayout_2->addWidget(removeAll);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        txtTask->setText(QString());
        add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Open dialog", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        removeAll->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
