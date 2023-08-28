
#include "family.h"

Family::Family()
{
    this->husband = 0;
    this->wife = 0;
}

void Family::addFam(QSqlQuery &dbQuery)
{
    if(this->husband > 0)
        dbQuery.bindValue(":husband",this->husband);
    if(this->wife > 0)
        dbQuery.bindValue(":wife",this->wife);
    dbQuery.bindValue(":marriage",this->marr);
    dbQuery.bindValue(":divorce",this->div);
    dbQuery.exec();
}

void Family::setHus(QString &idh)
{
    this->husband = ((idh.remove(0,1)).toInt() + 1);
}

void Family::setWife(QString &idw)
{
    this->wife = ((idw.remove(0,1)).toInt() + 1);
}

void Family::setDateM(QString &marDate)
{
    // pridat podminku pro zadani jen yyyy/ yyyy+mm
    qDebug() << marDate;
    this->marr = QDate::fromString(marDate,"d' 'MMM' 'yyyy");
    if(this->marr.isValid() != true)
    {
        this->marr = QDate::fromString(marDate,"yyyy");
    }
}

void Family::setDateD(QString &divDate)
{
    // pridat podminku pro zadani jen yyyy/ yyyy+mm
    this->div = QDate::fromString(divDate,"d' 'MMM' 'yyyy");
    if(this->div.isValid() != true)
        this->div = QDate::fromString(divDate,"yyyy");
}

void Family::clear()
{
    QDate reset;
    this->husband = this->wife = 0;
    this->marr = reset; this->div = reset;
}

bool Family::isEmpty()
{
    if((this->husband == 0)&&(this->wife == 0))
        return true;
    else
        return false;
}
QDebug operator<<(QDebug stream, const Family &f)
{
    stream << f.husband << " " << f.wife << " " << f.marr << " " << f.div;
    return stream;
}
