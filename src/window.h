
#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlRelationalTableModel>
#include <QDataWidgetMapper>
//#include <QCloseEvent>

#include <QDesktopServices>
#include <QUrl>

#include <QMessageBox>
#include <QDebug>

#include "parser.h"
#include "setnamewin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow

{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();
    void showError(const QSqlError &err);
    void initModel();
    void closeView();
private:
    Ui::Window *ui;
    QSqlDatabase database;
    fileInfo info;
    setNameWin *nameDialog;
    QSqlRelationalTableModel *personModel = nullptr, *famModel = nullptr;
    QSortFilterProxyModel *proxyModel, *proxyModelF;
    QDataWidgetMapper *mapper;
    int husId = 0, wifeId = 0;
};




#endif // WINDOW_H
