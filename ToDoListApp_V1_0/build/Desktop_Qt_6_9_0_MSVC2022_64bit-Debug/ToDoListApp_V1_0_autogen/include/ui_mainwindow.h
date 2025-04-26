/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_app_title;
    QListWidget *taskList;
    QPushButton *clearAllButton;
    QPushButton *addTaskButton;
    QLineEdit *taskInput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(20);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(20, 20, 20, 20);
        label_app_title = new QLabel(centralwidget);
        label_app_title->setObjectName("label_app_title");
        label_app_title->setMaximumSize(QSize(311, 31));
        QFont font;
        font.setPointSize(20);
        label_app_title->setFont(font);

        gridLayout->addWidget(label_app_title, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        taskList = new QListWidget(centralwidget);
        taskList->setObjectName("taskList");

        gridLayout->addWidget(taskList, 4, 0, 1, 1);

        clearAllButton = new QPushButton(centralwidget);
        clearAllButton->setObjectName("clearAllButton");
        QFont font1;
        font1.setPointSize(12);
        clearAllButton->setFont(font1);

        gridLayout->addWidget(clearAllButton, 5, 0, 1, 1);

        addTaskButton = new QPushButton(centralwidget);
        addTaskButton->setObjectName("addTaskButton");
        addTaskButton->setMinimumSize(QSize(200, 30));
        addTaskButton->setFont(font1);

        gridLayout->addWidget(addTaskButton, 3, 0, 1, 1);

        taskInput = new QLineEdit(centralwidget);
        taskInput->setObjectName("taskInput");
        taskInput->setFont(font1);

        gridLayout->addWidget(taskInput, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "To Do List App", nullptr));
        label_app_title->setText(QCoreApplication::translate("MainWindow", "Simple To-Do List App", nullptr));
        clearAllButton->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        addTaskButton->setText(QCoreApplication::translate("MainWindow", "Add Task", nullptr));
        taskInput->setText(QString());
        taskInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "\"Write your task here...\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
