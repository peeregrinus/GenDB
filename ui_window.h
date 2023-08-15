/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *importAction;
    QAction *deleteAction;
    QAction *saveAction;
    QAction *openViewAction;
    QAction *closeViewAction;
    QWidget *centralwidget;
    QPushButton *loadButton;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName("Window");
        Window->resize(1079, 600);
        newAction = new QAction(Window);
        newAction->setObjectName("newAction");
        openAction = new QAction(Window);
        openAction->setObjectName("openAction");
        importAction = new QAction(Window);
        importAction->setObjectName("importAction");
        deleteAction = new QAction(Window);
        deleteAction->setObjectName("deleteAction");
        saveAction = new QAction(Window);
        saveAction->setObjectName("saveAction");
        openViewAction = new QAction(Window);
        openViewAction->setObjectName("openViewAction");
        closeViewAction = new QAction(Window);
        closeViewAction->setObjectName("closeViewAction");
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName("centralwidget");
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName("loadButton");
        loadButton->setGeometry(QRect(870, 60, 81, 24));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 40, 631, 511));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 20, 611, 261));
        tab = new QWidget();
        tab->setObjectName("tab");
        tableView = new QTableView(tab);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 0, 601, 231));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 290, 601, 211));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 582, 209));
        layoutWidget = new QWidget(scrollAreaWidgetContents);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 571, 176));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);

        scrollArea->setWidget(scrollAreaWidgetContents);
        Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1079, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        Window->setMenuBar(menubar);
        statusbar = new QStatusBar(Window);
        statusbar->setObjectName("statusbar");
        Window->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(openViewAction);
        menuFile->addAction(closeViewAction);
        menuFile->addAction(saveAction);
        menuFile->addAction(deleteAction);
        menuFile->addSeparator();
        menuFile->addAction(newAction);
        menuFile->addAction(openAction);
        menuFile->addAction(importAction);
        menuFile->addSeparator();

        retranslateUi(Window);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QCoreApplication::translate("Window", "Window", nullptr));
        newAction->setText(QCoreApplication::translate("Window", "New database", nullptr));
#if QT_CONFIG(tooltip)
        newAction->setToolTip(QCoreApplication::translate("Window", "Create new database", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        newAction->setShortcut(QCoreApplication::translate("Window", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        openAction->setText(QCoreApplication::translate("Window", "Open database", nullptr));
#if QT_CONFIG(shortcut)
        openAction->setShortcut(QCoreApplication::translate("Window", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        importAction->setText(QCoreApplication::translate("Window", "Import database", nullptr));
        deleteAction->setText(QCoreApplication::translate("Window", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        deleteAction->setToolTip(QCoreApplication::translate("Window", "Delete database", nullptr));
#endif // QT_CONFIG(tooltip)
        saveAction->setText(QCoreApplication::translate("Window", "Save", nullptr));
#if QT_CONFIG(shortcut)
        saveAction->setShortcut(QCoreApplication::translate("Window", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        openViewAction->setText(QCoreApplication::translate("Window", "Open", nullptr));
        closeViewAction->setText(QCoreApplication::translate("Window", "Close", nullptr));
        loadButton->setText(QCoreApplication::translate("Window", "Nahrat soubor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Window", "List", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Window", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Window", "Tab 2", nullptr));
        label->setText(QCoreApplication::translate("Window", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Window", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Window", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Window", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("Window", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Window", "TextLabel", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Window", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
