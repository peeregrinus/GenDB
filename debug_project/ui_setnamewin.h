/********************************************************************************
** Form generated from reading UI file 'setnamewin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETNAMEWIN_H
#define UI_SETNAMEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setNameWin
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *defaultButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QPushButton *enterButton;

    void setupUi(QDialog *setNameWin)
    {
        if (setNameWin->objectName().isEmpty())
            setNameWin->setObjectName("setNameWin");
        setNameWin->resize(347, 143);
        layoutWidget = new QWidget(setNameWin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 30, 271, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        defaultButton = new QPushButton(layoutWidget);
        defaultButton->setObjectName("defaultButton");
        defaultButton->setAutoDefault(true);

        horizontalLayout->addWidget(defaultButton);

        layoutWidget1 = new QWidget(setNameWin);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(150, 90, 158, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(layoutWidget1);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);

        enterButton = new QPushButton(layoutWidget1);
        enterButton->setObjectName("enterButton");

        horizontalLayout_2->addWidget(enterButton);


        retranslateUi(setNameWin);

        enterButton->setDefault(true);


        QMetaObject::connectSlotsByName(setNameWin);
    } // setupUi

    void retranslateUi(QDialog *setNameWin)
    {
        setNameWin->setWindowTitle(QCoreApplication::translate("setNameWin", "Dialog", nullptr));
        defaultButton->setText(QCoreApplication::translate("setNameWin", "Set default", nullptr));
        cancelButton->setText(QCoreApplication::translate("setNameWin", "Cancel", nullptr));
        enterButton->setText(QCoreApplication::translate("setNameWin", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setNameWin: public Ui_setNameWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETNAMEWIN_H
