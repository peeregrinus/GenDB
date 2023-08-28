
#ifndef PERSON_H
#define PERSON_H

#include <QDate>
#include <QtSql/QSqlQuery>
#include <QTextStream>

#include <QRegularExpression>
#include <QRegularExpressionMatch>

class Person
{
private:
    QString base = "F0";
    QString firstName;
    QString lastName;
    QDate birth;
    QDate death;
    bool sex;
    int famc;
    QVector<int> fams;
public:
    Person();
    Person(QString name, QString surname, QDate b, QDate d, bool s, int fc, int fs) : firstName(name), lastName(surname), birth(b), death(d), sex(s), famc(fc), fams(fs) {} // For debugging
    void addPerson(QSqlQuery &dbQuery); // Prida osobu do tabulky
    void setName(QString &name);    // Nastaveni jmena
    void setBirth(QString &bString);    // Nasatveni data narozeni
    void setDeath(QString &dString);    // Nastaveni data umrti
    void setSex(QString &sexString);    // Nastaveni pohlavi
    void setFamc(QString &cNum);    // Nastaveni FAMC - rodinne ID (dite)
    void setFams(QString &sNum);    // Nastaveni FAMS - rodinne ID (rodic)
    void clear();   // Vymaze veskera data
    bool isEmpty(); // Overeni zda je struktura prazdna
    friend QDebug operator<<(QDebug stream, const Person &p);   // For debugging
};

#endif // PERSON_H
