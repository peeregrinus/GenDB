#include "parser.h"

QSqlError initDb(QSqlDatabase &db, QString name /*="genealogy.db"*/)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(name);
    //qDebug() << "Nastaven nazev databaze " << name;
    //qDebug() << "Database name: " << db.connectionName();
    if(!db.open())
        return db.lastError();

    QSqlQuery dbQuery(db);
    if(!dbQuery.exec("CREATE TABLE IF NOT EXISTS people (id INTEGER PRIMARY KEY, sex BOOL, firstname VARCHAR, lastname VARCHAR, birth DATE, death DATE, famc INTEGER, fams INTEGER, fams2 INTEGER);")) // AUTOINCREMENT neni potreba
        return dbQuery.lastError();
    if(!dbQuery.exec("CREATE TABLE IF NOT EXISTS families (id INTEGER PRIMARY KEY, surname VARCHAR, husband INTEGER, wife INTEGER, marriage DATE, divorce DATE);"))
        return dbQuery.lastError();
    //qDebug() << "Vse OK";
    return QSqlError();
}

fileInfo initParser(QWidget* app)
{
    fileInfo tmp;
    tmp.filename = QFileDialog::getOpenFileName(app,"Vyberte soubor",".","GEDCOM file (*.ged)");
    //qDebug() << tmp.filename;
    if(tmp.filename.size()==0)  //filename nic neobsahuje
    {
        //qDebug() << "Soubor nebyl nahran";
        return tmp;
    }
    else
    {
        QFile file(tmp.filename);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return tmp;

        QTextStream input(&file);

        // Cyklus pro nacteni kodovani a zdroje dat
        for (int i = 0; i < 100, !input.atEnd(); i++)
        {
            QString line = input.readLine();
            QStringList split = line.split(QRegularExpression("\\s+"));
            if (split.length() == 3)
            {
                if (tmp.source.isEmpty() && split[0] == "1" && split[1] == "SOUR")
                {
                    tmp.source =     split[2];
                }
                else if (split[0] == "1" && (split[1] == "CHAR" || split[1] == "CHARACTER"))
                {
                    //qDebug() << line << " " << i;
                    tmp.encoding = split[2].toUpper();
                }
            }
            if (!tmp.source.isEmpty() && !tmp.encoding.isEmpty())
                break;
        }
        //qDebug() << tmp.encoding << tmp.source;
        file.close();
        return tmp;
    }
}

void parser(QSqlDatabase& db, fileInfo fInfo)
{
    QFile file(fInfo.filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream input(&file);
    // ^ oznacuje zacatek stringu, $ ozancuje konec stringu
    // \s = whitespace, \d = cislice, \w = word
    // [] - jakykoliv znak obsazeny v zavorce = match (^ vytvari negaci)
    // ? = kvantifikator pro znak, ktery se zde nachazi jednou nebo nenachazi
    // + = kvantifikator pro znak, ktery se zde nachazi jednou nebo vicekrat
    static QRegularExpression lineExpression("^\\s*(\\d)\\s+(@([^@ ]+)@\\s+)?(\\w+)(\\s+@([^@ ]+)@)?(\\s(.*))?$");

    Person tmpPerson;
    Family tmpFamily;

    QString lvlZeroTag;
    QString lvlTag;

    QSqlQuery dbQuery(db);

    while(!input.atEnd())
    {
        QString line = input.readLine();
        QRegularExpressionMatch match = lineExpression.match(line);
        if (match.isValid())
        {
            int lvl = match.captured(1).toInt();
            QString id = match.captured(3); // debuggging value
            QString tag = match.captured(4);
            QString xref = match.captured(6);
            QString value = match.captured(8);
            //qDebug() << lvl << " " << tag << " " << tag.at(0);

            if((lvl == 0)&&(tag == "INDI"))
            {
                lvlZeroTag = tag;
                //qDebug() << tmpPerson;
                if(tmpPerson.isEmpty() != true)
                {
                    if(dbQuery.prepare("INSERT INTO people(sex, firstname, lastname, birth, death, famc, fams, fams2)" "VALUES(:sex, :firstname, :lastname, :birth, :death, :famc, :fams, :fams2)") == false)
                    {
                        //qDebug() << "Error: " << dbQuery.lastError();
                        return;
                    }
                    tmpPerson.addPerson(dbQuery);
                    tmpPerson.clear();

                }
            }
            else if((lvl == 0)&&(tag == "FAM"))
            {
                lvlZeroTag = tag;
                //qDebug() << tmpFamily;
                if(tmpFamily.isEmpty() != true)
                {
                    if(dbQuery.prepare("INSERT INTO families(husband, wife, marriage, divorce)" "VALUES(:husband, :wife, :marriage, :divorce)") == false)
                    {
                        //qDebug() << "Error: " << dbQuery.lastError();
                        return;
                    }
                    tmpFamily.addFam(dbQuery);
                    tmpFamily.clear();
                }
            }
            else if(lvl == 0)
                lvlZeroTag = tag;

            if(lvlZeroTag == "INDI")
            {
                if(lvl == 1)
                    lvlTag = tag;
                if((lvlTag == "NAME")&&(tag == "NAME")&&(tmpPerson.isEmpty()))
                    tmpPerson.setName(value);
                else if((lvlTag == "BIRT")&&(tag == "DATE"))
                    tmpPerson.setBirth(value);
                else if((lvlTag == "DEAT")&&(tag == "DATE"))
                    tmpPerson.setDeath(value);
                else if(lvlTag == "SEX")
                    tmpPerson.setSex(value);
                else if(lvlTag == "FAMC")
                    tmpPerson.setFamc(xref);
                else if(lvlTag == "FAMS")
                    tmpPerson.setFams(xref);
                else
                {
                    //qDebug() << lvl << " " << id << " " << tag << " " << xref << " " << value;
                    //qDebug() << "This tag is not implemented yet " << tag;
                }
            }
            else if(lvlZeroTag == "FAM")
            {
                if(lvl == 1)
                    lvlTag = tag;                
                if(lvlTag == "HUSB")
                    tmpFamily.setHus(xref);
                else if(lvlTag == "WIFE")
                    tmpFamily.setWife(xref);
                else if((lvlTag == "MARR")&&(tag == "DATE"))
                    tmpFamily.setDateM(value);
                else if((lvlTag == "DIV")&&(tag == "DATE"))
                    tmpFamily.setDateD(value);
                else
                {
                    //qDebug() << "This tag is not implemented yet " << tag;
                    //qDebug() << lvl << " " << id << " " << tag << " " << xref << " " << value;
                }
            }
            else
            {
                //qDebug() << "This lvlZeroTag is not implemented yet " << lvlZeroTag;
                //qDebug() << lvl << " " << id << " " << tag << " " << xref << " " << value;
            }
        }
        else
        {
            //qDebug() << "Error: Unable to parse line \"" << line << "\"";
        }
    }
}

void fileInfo::clear()
{
    this->encoding = this->source = this->filename = "";
}

bool fileInfo::isEmpty()
{
    if((this->filename == "")&&(this->encoding == "")&&(this->source == ""))
        return true;
    else
        return false;
}
