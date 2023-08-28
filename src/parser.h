
#ifndef PARSER_H
#define PARSER_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

#include <QFile>
#include <QFileDialog>
#include <QStringList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

#include <QDebug>

#include "person.h"
#include "family.h"


class fileInfo
{
public:
    QString filename;
    QString source;
    QString encoding;
    void clear();
    bool isEmpty();
};

QSqlError initDb(QSqlDatabase &db, QString name = "genealogy.db");  // Inicializace database se dvema tabulkami

fileInfo initParser(QWidget* app);  // Inicialiazace parseru - zjisteni kodovani

void parser(QSqlDatabase& db, fileInfo fInfo);
/* Parsovani GEDCOM souboru
 * -- fInfo nema zatim vyuziti, na zkusbenich souborech vse fungovalo i bez definovani kodovani
*/
#endif // PARSER_H
