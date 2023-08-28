#include "setnamewin.h"
#include "ui_setnamewin.h"

setNameWin::setNameWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setNameWin)
{
    ui->setupUi(this);
    ui->lineEdit->setMaxLength(20);
    ui->lineEdit->setDragEnabled(true);
    ui->lineEdit->setClearButtonEnabled(true);
    ui->lineEdit->setPlaceholderText("Enter database name");

    QObject::connect((ui->defaultButton),QPushButton::clicked, [&](){
        ui->lineEdit->setText("genealogy");
    });
    QObject::connect((ui->cancelButton),QPushButton::clicked, [&](){
        QDialog::reject();
    });
    QObject::connect((ui->enterButton),QPushButton::clicked, [&](){
        this->newName = ui->lineEdit->text();
        qDebug() << newName;
        QDialog::accept();
    });
}



setNameWin::~setNameWin()
{
    delete ui;
}

QString setNameWin::enteredName()
{
    return this->newName;
}
