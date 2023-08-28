
#ifndef FAMILY_H
#define FAMILY_H

#include <QDate>
#include <QtSql/QSqlQuery>

class Family
{
private:
    QString base = "I0";
    QString familyName;
    int husband;
    int wife;
    QDate marr;
    QDate div;
public:
    Family();
    Family(QString surname, int h, int w, QDate m, QDate d) : familyName(surname), husband(h), wife(w), marr(m), div(d) {}  // For debugging
    void addFam(QSqlQuery &dbQuery);    // Prida ziskane informace o rodine do databaze
    void setHus(QString &idh);  // Nastavi ID manzela
    void setWife(QString &idw); // Nastavi ID manzelky
    void setDateM(QString &marDate);    // Nastavi datum svatby
    void setDateD(QString &divDate);    // Nastavi datum rozvodu
    void clear();   // Vymaze veskera data
    bool isEmpty(); // Kontrola zda je promenna prazdna
    friend QDebug operator<<(QDebug stream, const Family &f);   // For debugging
};

#endif // FAMILY_H
