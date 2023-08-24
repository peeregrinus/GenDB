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
    QAction *revertAction;
    QAction *saveAction;
    QAction *closeViewAction;
    QAction *exitAction;
    QAction *actionOpen_MyHeritage;
    QAction *actionOpen_FamilySearch;
    QAction *actionOpen_soa_praha_ebadatelna;
    QAction *actionManual;
    QWidget *centralWidget;
    QPushButton *loadButton;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *PeopleView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *nameSearchLine;
    QLineEdit *surnameSearchLine;
    QLineEdit *birthSearchLine;
    QLineEdit *deathSearchLine;
    QLineEdit *SearchLine;
    QTableView *personView;
    QWidget *Familyview;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *famSearchLine;
    QLineEdit *husSearchLine;
    QLineEdit *wifeSearchLine;
    QLineEdit *surnameSearchLine_5;
    QLineEdit *surnameSearchLine_6;
    QTableView *familyView;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *surnameLabel;
    QLineEdit *surnameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *birthLabel;
    QLineEdit *birthEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *deathLabel;
    QLineEdit *deathEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *parent1Edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *parent2Edit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *ageLabel;
    QLineEdit *ageEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *hwLabel;
    QLineEdit *hwEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName("Window");
        Window->resize(1041, 600);
        newAction = new QAction(Window);
        newAction->setObjectName("newAction");
        openAction = new QAction(Window);
        openAction->setObjectName("openAction");
        importAction = new QAction(Window);
        importAction->setObjectName("importAction");
        revertAction = new QAction(Window);
        revertAction->setObjectName("revertAction");
        saveAction = new QAction(Window);
        saveAction->setObjectName("saveAction");
        closeViewAction = new QAction(Window);
        closeViewAction->setObjectName("closeViewAction");
        exitAction = new QAction(Window);
        exitAction->setObjectName("exitAction");
        actionOpen_MyHeritage = new QAction(Window);
        actionOpen_MyHeritage->setObjectName("actionOpen_MyHeritage");
        actionOpen_FamilySearch = new QAction(Window);
        actionOpen_FamilySearch->setObjectName("actionOpen_FamilySearch");
        actionOpen_soa_praha_ebadatelna = new QAction(Window);
        actionOpen_soa_praha_ebadatelna->setObjectName("actionOpen_soa_praha_ebadatelna");
        actionManual = new QAction(Window);
        actionManual->setObjectName("actionManual");
        centralWidget = new QWidget(Window);
        centralWidget->setObjectName("centralWidget");
        loadButton = new QPushButton(centralWidget);
        loadButton->setObjectName("loadButton");
        loadButton->setGeometry(QRect(900, 0, 141, 61));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 741, 571));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 20, 721, 261));
        PeopleView = new QWidget();
        PeopleView->setObjectName("PeopleView");
        layoutWidget = new QWidget(PeopleView);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 5, 693, 224));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        nameSearchLine = new QLineEdit(layoutWidget);
        nameSearchLine->setObjectName("nameSearchLine");
        nameSearchLine->setAutoFillBackground(false);

        horizontalLayout_7->addWidget(nameSearchLine);

        surnameSearchLine = new QLineEdit(layoutWidget);
        surnameSearchLine->setObjectName("surnameSearchLine");

        horizontalLayout_7->addWidget(surnameSearchLine);

        birthSearchLine = new QLineEdit(layoutWidget);
        birthSearchLine->setObjectName("birthSearchLine");

        horizontalLayout_7->addWidget(birthSearchLine);

        deathSearchLine = new QLineEdit(layoutWidget);
        deathSearchLine->setObjectName("deathSearchLine");

        horizontalLayout_7->addWidget(deathSearchLine);

        SearchLine = new QLineEdit(layoutWidget);
        SearchLine->setObjectName("SearchLine");

        horizontalLayout_7->addWidget(SearchLine);


        verticalLayout_2->addLayout(horizontalLayout_7);

        personView = new QTableView(layoutWidget);
        personView->setObjectName("personView");

        verticalLayout_2->addWidget(personView);

        tabWidget->addTab(PeopleView, QString());
        Familyview = new QWidget();
        Familyview->setObjectName("Familyview");
        layoutWidget1 = new QWidget(Familyview);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 693, 221));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        famSearchLine = new QLineEdit(layoutWidget1);
        famSearchLine->setObjectName("famSearchLine");
        famSearchLine->setAutoFillBackground(false);

        horizontalLayout_10->addWidget(famSearchLine);

        husSearchLine = new QLineEdit(layoutWidget1);
        husSearchLine->setObjectName("husSearchLine");

        horizontalLayout_10->addWidget(husSearchLine);

        wifeSearchLine = new QLineEdit(layoutWidget1);
        wifeSearchLine->setObjectName("wifeSearchLine");

        horizontalLayout_10->addWidget(wifeSearchLine);

        surnameSearchLine_5 = new QLineEdit(layoutWidget1);
        surnameSearchLine_5->setObjectName("surnameSearchLine_5");

        horizontalLayout_10->addWidget(surnameSearchLine_5);

        surnameSearchLine_6 = new QLineEdit(layoutWidget1);
        surnameSearchLine_6->setObjectName("surnameSearchLine_6");

        horizontalLayout_10->addWidget(surnameSearchLine_6);


        verticalLayout_3->addLayout(horizontalLayout_10);

        familyView = new QTableView(layoutWidget1);
        familyView->setObjectName("familyView");

        verticalLayout_3->addWidget(familyView);

        tabWidget->addTab(Familyview, QString());
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 290, 701, 231));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 682, 229));
        layoutWidget2 = new QWidget(scrollAreaWidgetContents);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 3, 661, 221));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        nameLabel = new QLabel(layoutWidget2);
        nameLabel->setObjectName("nameLabel");

        horizontalLayout->addWidget(nameLabel);

        nameEdit = new QLineEdit(layoutWidget2);
        nameEdit->setObjectName("nameEdit");

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        surnameLabel = new QLabel(layoutWidget2);
        surnameLabel->setObjectName("surnameLabel");

        horizontalLayout_2->addWidget(surnameLabel);

        surnameEdit = new QLineEdit(layoutWidget2);
        surnameEdit->setObjectName("surnameEdit");

        horizontalLayout_2->addWidget(surnameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        birthLabel = new QLabel(layoutWidget2);
        birthLabel->setObjectName("birthLabel");

        horizontalLayout_3->addWidget(birthLabel);

        birthEdit = new QLineEdit(layoutWidget2);
        birthEdit->setObjectName("birthEdit");

        horizontalLayout_3->addWidget(birthEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        deathLabel = new QLabel(layoutWidget2);
        deathLabel->setObjectName("deathLabel");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deathLabel->sizePolicy().hasHeightForWidth());
        deathLabel->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(deathLabel);

        deathEdit = new QLineEdit(layoutWidget2);
        deathEdit->setObjectName("deathEdit");

        horizontalLayout_4->addWidget(deathEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        parent1Edit = new QLineEdit(layoutWidget2);
        parent1Edit->setObjectName("parent1Edit");

        horizontalLayout_6->addWidget(parent1Edit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        parent2Edit = new QLineEdit(layoutWidget2);
        parent2Edit->setObjectName("parent2Edit");

        horizontalLayout_5->addWidget(parent2Edit);


        verticalLayout->addLayout(horizontalLayout_5);

        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(420, 520, 162, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        ageLabel = new QLabel(layoutWidget3);
        ageLabel->setObjectName("ageLabel");

        horizontalLayout_8->addWidget(ageLabel);

        ageEdit = new QLineEdit(layoutWidget3);
        ageEdit->setObjectName("ageEdit");

        horizontalLayout_8->addWidget(ageEdit);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(150, 520, 219, 24));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        hwLabel = new QLabel(layoutWidget4);
        hwLabel->setObjectName("hwLabel");

        horizontalLayout_9->addWidget(hwLabel);

        hwEdit = new QLineEdit(layoutWidget4);
        hwEdit->setObjectName("hwEdit");

        horizontalLayout_9->addWidget(hwEdit);

        Window->setCentralWidget(centralWidget);
        menubar = new QMenuBar(Window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1041, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        Window->setMenuBar(menubar);
        statusbar = new QStatusBar(Window);
        statusbar->setObjectName("statusbar");
        Window->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(saveAction);
        menuFile->addAction(revertAction);
        menuFile->addSeparator();
        menuFile->addAction(newAction);
        menuFile->addAction(openAction);
        menuFile->addAction(closeViewAction);
        menuFile->addAction(importAction);
        menuFile->addSeparator();
        menuFile->addAction(exitAction);
        menuTools->addAction(actionOpen_MyHeritage);
        menuTools->addAction(actionOpen_FamilySearch);
        menuTools->addAction(actionOpen_soa_praha_ebadatelna);
        menuAbout->addAction(actionManual);

        retranslateUi(Window);

        tabWidget->setCurrentIndex(1);


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
        revertAction->setText(QCoreApplication::translate("Window", "Discard changes", nullptr));
#if QT_CONFIG(tooltip)
        revertAction->setToolTip(QCoreApplication::translate("Window", "Delete database", nullptr));
#endif // QT_CONFIG(tooltip)
        saveAction->setText(QCoreApplication::translate("Window", "Save changes", nullptr));
#if QT_CONFIG(shortcut)
        saveAction->setShortcut(QCoreApplication::translate("Window", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        closeViewAction->setText(QCoreApplication::translate("Window", "Close database", nullptr));
        exitAction->setText(QCoreApplication::translate("Window", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        exitAction->setShortcut(QCoreApplication::translate("Window", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_MyHeritage->setText(QCoreApplication::translate("Window", "Open MyHeritage", nullptr));
        actionOpen_FamilySearch->setText(QCoreApplication::translate("Window", "Open FamilySearch", nullptr));
        actionOpen_soa_praha_ebadatelna->setText(QCoreApplication::translate("Window", "Open soa.praha.ebadatelna", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_soa_praha_ebadatelna->setToolTip(QCoreApplication::translate("Window", "Open ebadatelna.soapraha", nullptr));
#endif // QT_CONFIG(tooltip)
        actionManual->setText(QCoreApplication::translate("Window", "Manual", nullptr));
        loadButton->setText(QCoreApplication::translate("Window", "Nahrat soubor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Window", "List", nullptr));
        nameSearchLine->setInputMask(QString());
        nameSearchLine->setText(QString());
        surnameSearchLine->setText(QString());
        deathSearchLine->setText(QString());
        SearchLine->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(PeopleView), QCoreApplication::translate("Window", "Tab 1", nullptr));
        famSearchLine->setInputMask(QString());
        famSearchLine->setText(QString());
        husSearchLine->setText(QString());
        surnameSearchLine_5->setText(QString());
        surnameSearchLine_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Familyview), QCoreApplication::translate("Window", "Tab 2", nullptr));
        nameLabel->setText(QCoreApplication::translate("Window", "Firstname:", nullptr));
        surnameLabel->setText(QCoreApplication::translate("Window", "Surname:", nullptr));
        birthLabel->setText(QCoreApplication::translate("Window", "Birthdate:", nullptr));
        deathLabel->setText(QCoreApplication::translate("Window", "Death:", nullptr));
        label_6->setText(QCoreApplication::translate("Window", "Mother:", nullptr));
        label_5->setText(QCoreApplication::translate("Window", "Father:", nullptr));
        ageLabel->setText(QCoreApplication::translate("Window", "Age", nullptr));
        hwLabel->setText(QCoreApplication::translate("Window", "Husband/ wife", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Window", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("Window", "Tools", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Window", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
