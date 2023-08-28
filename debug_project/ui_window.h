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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLabel *surnameLabel;
    QLabel *birthLabel;
    QLabel *deathLabel;
    QLabel *hwLabel;
    QLabel *hw2Label;
    QLabel *motherLabel;
    QLabel *fatherLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameEdit;
    QLineEdit *surnameEdit;
    QLineEdit *birthEdit;
    QLineEdit *deathEdit;
    QLineEdit *hwEdit;
    QLineEdit *hw2Edit;
    QLineEdit *parent1Edit;
    QLineEdit *parent2Edit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *PeopleView;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *sexSearchLine;
    QLineEdit *nameSearchLine;
    QLineEdit *surnameSearchLine;
    QLineEdit *birthSearchLine;
    QLineEdit *deathSearchLine;
    QTableView *personView;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *removeRowButton;
    QPushButton *insertRowButton;
    QWidget *Familyview;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *famSearchLine;
    QLineEdit *husSearchLine;
    QLineEdit *wifeSearchLine;
    QLineEdit *marrSearchLine;
    QLineEdit *divSearchLine;
    QTableView *familyView;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *removeRowButton_2;
    QPushButton *insertRowButton_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textLabel;
    QLabel *recNum;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *famNum;
    QHBoxLayout *horizontalLayout_14;
    QLabel *textLabel2;
    QLabel *sourceStat;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName("Window");
        Window->resize(1200, 700);
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
        actionAbout = new QAction(Window);
        actionAbout->setObjectName("actionAbout");
        centralWidget = new QWidget(Window);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        nameLabel = new QLabel(groupBox_2);
        nameLabel->setObjectName("nameLabel");

        verticalLayout_2->addWidget(nameLabel);

        surnameLabel = new QLabel(groupBox_2);
        surnameLabel->setObjectName("surnameLabel");

        verticalLayout_2->addWidget(surnameLabel);

        birthLabel = new QLabel(groupBox_2);
        birthLabel->setObjectName("birthLabel");

        verticalLayout_2->addWidget(birthLabel);

        deathLabel = new QLabel(groupBox_2);
        deathLabel->setObjectName("deathLabel");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deathLabel->sizePolicy().hasHeightForWidth());
        deathLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(deathLabel);

        hwLabel = new QLabel(groupBox_2);
        hwLabel->setObjectName("hwLabel");

        verticalLayout_2->addWidget(hwLabel);

        hw2Label = new QLabel(groupBox_2);
        hw2Label->setObjectName("hw2Label");

        verticalLayout_2->addWidget(hw2Label);

        motherLabel = new QLabel(groupBox_2);
        motherLabel->setObjectName("motherLabel");

        verticalLayout_2->addWidget(motherLabel);

        fatherLabel = new QLabel(groupBox_2);
        fatherLabel->setObjectName("fatherLabel");

        verticalLayout_2->addWidget(fatherLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        nameEdit = new QLineEdit(groupBox_2);
        nameEdit->setObjectName("nameEdit");

        verticalLayout->addWidget(nameEdit);

        surnameEdit = new QLineEdit(groupBox_2);
        surnameEdit->setObjectName("surnameEdit");

        verticalLayout->addWidget(surnameEdit);

        birthEdit = new QLineEdit(groupBox_2);
        birthEdit->setObjectName("birthEdit");

        verticalLayout->addWidget(birthEdit);

        deathEdit = new QLineEdit(groupBox_2);
        deathEdit->setObjectName("deathEdit");

        verticalLayout->addWidget(deathEdit);

        hwEdit = new QLineEdit(groupBox_2);
        hwEdit->setObjectName("hwEdit");
        hwEdit->setReadOnly(true);

        verticalLayout->addWidget(hwEdit);

        hw2Edit = new QLineEdit(groupBox_2);
        hw2Edit->setObjectName("hw2Edit");

        verticalLayout->addWidget(hw2Edit);

        parent1Edit = new QLineEdit(groupBox_2);
        parent1Edit->setObjectName("parent1Edit");
        parent1Edit->setReadOnly(true);

        verticalLayout->addWidget(parent1Edit);

        parent2Edit = new QLineEdit(groupBox_2);
        parent2Edit->setObjectName("parent2Edit");
        parent2Edit->setReadOnly(true);

        verticalLayout->addWidget(parent2Edit);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        PeopleView = new QWidget();
        PeopleView->setObjectName("PeopleView");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(PeopleView->sizePolicy().hasHeightForWidth());
        PeopleView->setSizePolicy(sizePolicy3);
        gridLayout_3 = new QGridLayout(PeopleView);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        sexSearchLine = new QLineEdit(PeopleView);
        sexSearchLine->setObjectName("sexSearchLine");

        horizontalLayout_7->addWidget(sexSearchLine);

        nameSearchLine = new QLineEdit(PeopleView);
        nameSearchLine->setObjectName("nameSearchLine");
        nameSearchLine->setAutoFillBackground(false);

        horizontalLayout_7->addWidget(nameSearchLine);

        surnameSearchLine = new QLineEdit(PeopleView);
        surnameSearchLine->setObjectName("surnameSearchLine");

        horizontalLayout_7->addWidget(surnameSearchLine);

        birthSearchLine = new QLineEdit(PeopleView);
        birthSearchLine->setObjectName("birthSearchLine");

        horizontalLayout_7->addWidget(birthSearchLine);

        deathSearchLine = new QLineEdit(PeopleView);
        deathSearchLine->setObjectName("deathSearchLine");

        horizontalLayout_7->addWidget(deathSearchLine);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        personView = new QTableView(PeopleView);
        personView->setObjectName("personView");
        sizePolicy3.setHeightForWidth(personView->sizePolicy().hasHeightForWidth());
        personView->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(personView, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        removeRowButton = new QPushButton(PeopleView);
        removeRowButton->setObjectName("removeRowButton");

        horizontalLayout_11->addWidget(removeRowButton);

        insertRowButton = new QPushButton(PeopleView);
        insertRowButton->setObjectName("insertRowButton");

        horizontalLayout_11->addWidget(insertRowButton);


        gridLayout_3->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        tabWidget->addTab(PeopleView, QString());
        Familyview = new QWidget();
        Familyview->setObjectName("Familyview");
        sizePolicy3.setHeightForWidth(Familyview->sizePolicy().hasHeightForWidth());
        Familyview->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(Familyview);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        famSearchLine = new QLineEdit(Familyview);
        famSearchLine->setObjectName("famSearchLine");
        famSearchLine->setAutoFillBackground(false);

        horizontalLayout_10->addWidget(famSearchLine);

        husSearchLine = new QLineEdit(Familyview);
        husSearchLine->setObjectName("husSearchLine");

        horizontalLayout_10->addWidget(husSearchLine);

        wifeSearchLine = new QLineEdit(Familyview);
        wifeSearchLine->setObjectName("wifeSearchLine");

        horizontalLayout_10->addWidget(wifeSearchLine);

        marrSearchLine = new QLineEdit(Familyview);
        marrSearchLine->setObjectName("marrSearchLine");

        horizontalLayout_10->addWidget(marrSearchLine);

        divSearchLine = new QLineEdit(Familyview);
        divSearchLine->setObjectName("divSearchLine");

        horizontalLayout_10->addWidget(divSearchLine);


        gridLayout_2->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        familyView = new QTableView(Familyview);
        familyView->setObjectName("familyView");
        sizePolicy3.setHeightForWidth(familyView->sizePolicy().hasHeightForWidth());
        familyView->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(familyView, 1, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        removeRowButton_2 = new QPushButton(Familyview);
        removeRowButton_2->setObjectName("removeRowButton_2");

        horizontalLayout_12->addWidget(removeRowButton_2);

        insertRowButton_2 = new QPushButton(Familyview);
        insertRowButton_2->setObjectName("insertRowButton_2");

        horizontalLayout_12->addWidget(insertRowButton_2);


        gridLayout_2->addLayout(horizontalLayout_12, 2, 0, 1, 1);

        tabWidget->addTab(Familyview, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMaximumSize(QSize(600, 400));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        textLabel = new QLabel(groupBox_3);
        textLabel->setObjectName("textLabel");
        textLabel->setMaximumSize(QSize(120, 25));
        textLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(textLabel);

        recNum = new QLabel(groupBox_3);
        recNum->setObjectName("recNum");
        recNum->setMaximumSize(QSize(600, 25));
        recNum->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(recNum);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(120, 25));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_7);

        famNum = new QLabel(groupBox_3);
        famNum->setObjectName("famNum");
        famNum->setMaximumSize(QSize(600, 25));
        famNum->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(famNum);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        textLabel2 = new QLabel(groupBox_3);
        textLabel2->setObjectName("textLabel2");
        textLabel2->setMaximumSize(QSize(50, 25));
        textLabel2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(textLabel2);

        sourceStat = new QLabel(groupBox_3);
        sourceStat->setObjectName("sourceStat");
        sourceStat->setMaximumSize(QSize(150, 25));
        sourceStat->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(sourceStat);


        verticalLayout_3->addLayout(horizontalLayout_14);


        gridLayout_6->addLayout(verticalLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 1, 1, 1);

        Window->setCentralWidget(centralWidget);
        menubar = new QMenuBar(Window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        Window->setMenuBar(menubar);
        statusbar = new QStatusBar(Window);
        statusbar->setObjectName("statusbar");
        Window->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
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
        menuHelp->addAction(actionAbout);

        retranslateUi(Window);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QCoreApplication::translate("Window", "GenDB", nullptr));
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
        actionOpen_soa_praha_ebadatelna->setText(QCoreApplication::translate("Window", "Open ebadatelna.soapraha", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_soa_praha_ebadatelna->setToolTip(QCoreApplication::translate("Window", "Open ebadatelna.soapraha", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("Window", "About", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Window", "Detail info", nullptr));
        nameLabel->setText(QCoreApplication::translate("Window", "Firstname", nullptr));
        surnameLabel->setText(QCoreApplication::translate("Window", "Surname", nullptr));
        birthLabel->setText(QCoreApplication::translate("Window", "Birthdate", nullptr));
        deathLabel->setText(QCoreApplication::translate("Window", "Date of death", nullptr));
        hwLabel->setText(QCoreApplication::translate("Window", "Husband/ wife", nullptr));
        hw2Label->setText(QCoreApplication::translate("Window", "2. husband/ wife", nullptr));
        motherLabel->setText(QCoreApplication::translate("Window", "Mother", nullptr));
        fatherLabel->setText(QCoreApplication::translate("Window", "Father", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Window", "View", nullptr));
#if QT_CONFIG(statustip)
        sexSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by gender", nullptr));
#endif // QT_CONFIG(statustip)
        sexSearchLine->setText(QString());
#if QT_CONFIG(statustip)
        nameSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by name", nullptr));
#endif // QT_CONFIG(statustip)
        nameSearchLine->setInputMask(QString());
        nameSearchLine->setText(QString());
#if QT_CONFIG(statustip)
        surnameSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by surname", nullptr));
#endif // QT_CONFIG(statustip)
        surnameSearchLine->setText(QString());
#if QT_CONFIG(statustip)
        birthSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by birthdate", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        deathSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by date of death", nullptr));
#endif // QT_CONFIG(statustip)
        deathSearchLine->setText(QString());
        removeRowButton->setText(QCoreApplication::translate("Window", "Remove row", nullptr));
        insertRowButton->setText(QCoreApplication::translate("Window", "Insert row", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(PeopleView), QCoreApplication::translate("Window", "Tab 1", nullptr));
#if QT_CONFIG(statustip)
        famSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by family name", nullptr));
#endif // QT_CONFIG(statustip)
        famSearchLine->setInputMask(QString());
        famSearchLine->setText(QString());
#if QT_CONFIG(statustip)
        husSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by husband name", nullptr));
#endif // QT_CONFIG(statustip)
        husSearchLine->setText(QString());
#if QT_CONFIG(statustip)
        wifeSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by wife name", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        marrSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by marriage date", nullptr));
#endif // QT_CONFIG(statustip)
        marrSearchLine->setText(QString());
#if QT_CONFIG(statustip)
        divSearchLine->setStatusTip(QCoreApplication::translate("Window", "Filter by divorce date", nullptr));
#endif // QT_CONFIG(statustip)
        divSearchLine->setText(QString());
        removeRowButton_2->setText(QCoreApplication::translate("Window", "Remove row", nullptr));
        insertRowButton_2->setText(QCoreApplication::translate("Window", "Insert row", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Familyview), QCoreApplication::translate("Window", "Tab 2", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Window", "Statistics", nullptr));
        textLabel->setText(QCoreApplication::translate("Window", "Number of people", nullptr));
        recNum->setText(QString());
        label_7->setText(QCoreApplication::translate("Window", "Number of families", nullptr));
        famNum->setText(QString());
        textLabel2->setText(QCoreApplication::translate("Window", "Source", nullptr));
        sourceStat->setText(QCoreApplication::translate("Window", "TextLabel", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Window", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("Window", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Window", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
