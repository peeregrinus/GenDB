
#include "person.h"

Person::Person()
{
    this->famc = -1;
}

void Person::addPerson(QSqlQuery &dbQuery)
{
    dbQuery.bindValue(":firstname",this->firstName);
    dbQuery.bindValue(":lastname",this->lastName);
    dbQuery.bindValue(":birth",this->birth);
    dbQuery.bindValue(":death",this->death);
    dbQuery.bindValue(":sex", this->sex);
    if(famc > 0)
        dbQuery.bindValue(":famc",this->famc);
    if(fams.size() != 0)
    {
        if(fams.size() == 2)
        {
            dbQuery.bindValue(":fams",this->fams.at(0));
            dbQuery.bindValue(":fams2",this->fams.at(1));
        }
        else
        {
            dbQuery.bindValue(":fams",this->fams.at(0));
        }
    }
    dbQuery.exec();
}

void Person::setName(QString &name)
{
    QStringList split = name.split(QRegularExpression("/"));    // hleda znak ´/´
    //qDebug() << name << " " << split.size() << " " << split.at(1);
    this->firstName = split.at(0);
    this->lastName = split.at(1);
}
void Person::setBirth(QString &string)
{
    this->birth = QDate::fromString(string,"d' 'MMM' 'yyyy");
    if(this->birth.isValid() != true)
        this->birth = QDate::fromString(string,"yyyy");
}
void Person::setDeath(QString &string)
{
    this->death = QDate::fromString(string,"d' 'MMM' 'yyyy");
    if(this->death.isValid() != true)
        this->death = QDate::fromString(string,"yyyy");
}
void Person::setSex(QString &sexString)
{
    // true == F, false == M
    if(sexString == "F")
        this->sex = true;
    else
        this->sex = false;
}
void Person::setFamc(QString &cNum)
{
    this->famc = ((cNum.remove(0,1)).toInt() + 1);
}
void Person::setFams(QString &sNum)
{
    this->fams.push_back(((sNum.remove(0,1)).toInt() + 1));
}
void Person::clear()
{
    QDate reset;
    this->firstName.clear();
    this->lastName.clear();
    this->birth = reset;
    this->death = reset;
    this->famc = 0;
    this->fams.clear();    
}

bool Person::isEmpty()
{
    //qDebug() << this->firstName << this->lastName << this->birth << this->death;
    if((this->firstName == "")&&(this->lastName == "")&&(this->birth.isNull())&&(this->death.isNull()))
        return true;
    else
        return false;
}

QDebug operator<<(QDebug stream, const Person &p)
{
    stream << p.firstName << " " << p.lastName << " " << p.birth << " " << p.death << " " << p.famc << " " << p.fams;
    return stream;
}
