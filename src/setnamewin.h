#ifndef SETNAMEWIN_H
#define SETNAMEWIN_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class setNameWin;
}

class setNameWin : public QDialog
{
    Q_OBJECT

public:
    explicit setNameWin(QWidget *parent = nullptr);
    ~setNameWin();
    QString enteredName();

private:
    Ui::setNameWin *ui;
    QString newName;
};

#endif // SETNAMEWIN_H
