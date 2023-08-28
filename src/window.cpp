
#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);
    // Status tipy pro menu tlacitka -- lze prevest do window.ui
    ui->openAction->setStatusTip("Open existing database");
    ui->newAction->setStatusTip("Create new database");
    ui->importAction->setStatusTip("Import GEDCOM file");
    ui->saveAction->setStatusTip("Save opened database");
    ui->revertAction->setStatusTip("Delete opened database");

    ui->tabWidget->setTabText(0,"People"); ui->tabWidget->setTabText(1,"Families");
    ui->sourceStat->setText(""); ui->recNum->setText(""); ui->famNum->setText("");

    // Import databaze
    QAction::connect((ui->importAction),QAction::triggered,[&](){
        info = initParser(this);
        nameDialog = new setNameWin(this);  // Nove okno pro zadani jmena databaze
        nameDialog->setModal(true); //nelze pouzivat hlavni okno
        nameDialog->show();

        if(nameDialog->exec()==1)
        {
            //qDebug() << "Accepted " << nameDialog->enteredName();
            QSqlError err = initDb(database, nameDialog->enteredName() + ".db");
            if(err.type() != QSqlError::NoError)
            {
                showError(err);
            }
            parser(database, info);
            QMessageBox::information(this, "Database import", info.filename + " was succesfully imported. Encoding: " + info.encoding + "; source: " + info.source + ".");
            initModel();
            ui->sourceStat->setText(info.filename);
            delete nameDialog;
        }
        else /* nameDialog->exec() == 0 */
        {
            //qDebug() << "Cancelled";
            delete nameDialog;
        }
    });

    // Vytvoreni nove prazdne databaze
    QAction::connect((ui->newAction),QAction::triggered,[&](){
        nameDialog = new setNameWin(this);
        nameDialog->setModal(true); //nelze pouzivat hlavni okno
        nameDialog->show();

        if(nameDialog->exec()==1)
        {
            //qDebug() << "Accepted " << nameDialog->enteredName();
            QMessageBox::information(this, "New database", "Database " + nameDialog->enteredName() + ".db was created");
            QSqlError err = initDb(database, nameDialog->enteredName() + ".db");
            if(err.type() != QSqlError::NoError)
            {
               showError(err);
            }
            initModel();
            ui->sourceStat->setText(nameDialog->enteredName());
            personModel->insertRow(0);
            famModel->insertRow(0);
            delete nameDialog;
        }
        else /* nameDialog->exec() == 0 */
        {
            //qDebug() << "Cancelled";
            delete nameDialog;
        }
    });

    // Otevreni existujici databaze
    QAction::connect((ui->openAction),QAction::triggered,[&](){
        QString filename = QFileDialog::getOpenFileName(this,"Vyberte soubor",".","Database file (*.db)");
        //qDebug() << filename;
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(filename);
        if(!database.open())
        {
            //qDebug() << database.lastError();
            showError(database.lastError());
        }
        else
        {
            ui->sourceStat->setText(filename);
            //qDebug() << "Databaze nactena";
            initModel();
        }
    });

    QAction::connect((ui->closeViewAction),QAction::triggered,[&](){closeView();}); // Zavre aktualni zobrazeni

    QAction::connect((ui->revertAction),QAction::triggered,[&](){   // Vrati zmeny provedene v tabulkach
        personModel->revertAll();
        famModel->revertAll();
    });

    QAction::connect((ui->saveAction),QAction::triggered,[&](){ // Ulozi zmeny provedene v tabulkach
        personModel->submitAll();
        famModel->submitAll();
    });

    QAction::connect((ui->exitAction),QAction::triggered,[&](){QApplication::quit();}); // Zavre program

    QAction::connect((ui->actionOpen_MyHeritage),QAction::triggered,[&](){  // Otevre webovou stranku v prohlizeci
        QDesktopServices::openUrl(QUrl("https://www.myheritage.cz/"));
    });

    QAction::connect((ui->actionOpen_FamilySearch),QAction::triggered,[&](){    // Otevre webovou stranku v prohlizeci
        QDesktopServices::openUrl(QUrl("https://www.familysearch.org/tree/overview"));
    });

    QAction::connect((ui->actionOpen_soa_praha_ebadatelna),QAction::triggered,[&](){    // Otevre webovou stranku v prohlizeci
        QDesktopServices::openUrl(QUrl("https://ebadatelna.soapraha.cz/pages/SearchMatrikaPage?1"));
    });
    QAction::connect((ui->actionAbout),QAction::triggered,[&](){    // Informace o programu
        QMessageBox::about(this, "About application", "This application was created as a term project in the subject PPC. Other information and documentation could be find on Github: <a href='https://github.com/peeregrinus/ppc_project'>Github repo</a>");
    });
}

void Window::initModel()
{
    // Vytvoreni datovych modelu pro tabulku people
    proxyModel = new QSortFilterProxyModel;
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    personModel = new QSqlRelationalTableModel(ui->personView);
    personModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    personModel->setTable("People");

    // Nastaveni hlavicky tabulky
    personModel->setHeaderData(personModel->fieldIndex("id"), Qt::Horizontal, "ID");
    personModel->setHeaderData(personModel->fieldIndex("sex"), Qt::Horizontal, "Sex");
    personModel->setHeaderData(personModel->fieldIndex("firstname"), Qt::Horizontal, "Firstname");
    personModel->setHeaderData(personModel->fieldIndex("lastname"), Qt::Horizontal, "Lastname");
    personModel->setHeaderData(personModel->fieldIndex("birth"), Qt::Horizontal, "Birthdate");
    personModel->setHeaderData(personModel->fieldIndex("death"), Qt::Horizontal, "Date of death");

    if (!personModel->select()) {
        showError(personModel->lastError());
        return;
    }

    proxyModel->setSourceModel(personModel);    // Model pro moznost filtrovani

    connect(ui->sexSearchLine, &QLineEdit::textChanged,[&](){   // Filtrovani dle pohlavi
        proxyModel->setFilterKeyColumn(1);
        proxyModel->setFilterFixedString(ui->sexSearchLine->text());
        //qDebug() << ui->sexSearchLine->text();
    });

    connect(ui->nameSearchLine, &QLineEdit::textChanged,[&](){  // Filtrovani dle jmena
        proxyModel->setFilterKeyColumn(2);
        proxyModel->setFilterFixedString(ui->nameSearchLine->text());
        //qDebug() << ui->nameSearchLine->text();
    });

    connect(ui->surnameSearchLine, &QLineEdit::textChanged,[&](){   // Filtrovani dle prijmeni
        proxyModel->setFilterKeyColumn(3);
        proxyModel->setFilterFixedString(ui->surnameSearchLine->text());
        //qDebug() << ui->surnameSearchLine->text();
    });

    connect(ui->birthSearchLine, &QLineEdit::textChanged,[&](){     // Filtrovani dle data narozeni
        proxyModel->setFilterKeyColumn(4);
        proxyModel->setFilterFixedString(ui->birthSearchLine->text());
        //qDebug() << ui->birthSearchLine->text();
    });

    connect(ui->deathSearchLine, &QLineEdit::textChanged,[&](){     // Filtrovani dle data umrti
        proxyModel->setFilterKeyColumn(5);
        proxyModel->setFilterFixedString(ui->deathSearchLine->text());
        //qDebug() << ui->deathSearchLine->text();
    });

    // Nastaveni zobrazovanych dat z modelu a vzhledu tabulky
    ui->personView->setModel(proxyModel);
    ui->personView->setSortingEnabled(true);
    ui->personView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->personView->hideColumn(6); ui->personView->hideColumn(7); ui->personView->hideColumn(8);
    ui->personView->sortByColumn(0, Qt::AscendingOrder);
    ui->personView->setColumnWidth(0,25);
    ui->personView->setColumnWidth(1,5);
    for(int i = 2; i < 6; i++)
    {
        ui->personView->setColumnWidth(i,150);
    }

    // Vytvoreni modelu pro tabulku family
    famModel = new QSqlRelationalTableModel(ui->familyView);
    famModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    famModel->setTable("Families");
    proxyModelF = new QSortFilterProxyModel;
    proxyModelF->setFilterCaseSensitivity(Qt::CaseInsensitive);

    husId = famModel->fieldIndex("husband");
    wifeId = famModel->fieldIndex("wife");

    // Zapsani prijmeni rodiny do databaze dle manzelova prijmeni
    famModel->select();   
    for(int i = 0; i < famModel->rowCount(); ++i)
    {
        //qDebug() << "surname " << famModel->record(i).value("surname");
        if((famModel->record(i).value("surname")) == "")
        {
            QSqlRecord rec = famModel->record(i);
            int husName = rec.value("husband").toInt();
            QString famName = personModel->record(husName).value("lastname").toString();
            //qDebug() << "Jmeno " <<  famName << " cislo " << husName;
            rec.setValue("surname", famName);
            famModel->setRecord(i, rec);
        }
    }
    famModel->submitAll();

    // Nastaveni vztahu mezi tabulkami family a people
    famModel->setRelation(husId, QSqlRelation("people", "id","firstname"));
    famModel->setRelation(wifeId, QSqlRelation("people", "id","firstname"));
    famModel->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    famModel->setHeaderData(famModel->fieldIndex("surname"), Qt::Horizontal, "Family name");
    famModel->setHeaderData(famModel->fieldIndex("husband"), Qt::Horizontal, "Husband");
    famModel->setHeaderData(famModel->fieldIndex("wife"), Qt::Horizontal, "Wife");
    famModel->setHeaderData(famModel->fieldIndex("marriage"), Qt::Horizontal, "Marriage date");
    famModel->setHeaderData(famModel->fieldIndex("divorce"), Qt::Horizontal, "Divorce date");
    if (!famModel->select()) {
        showError(famModel->lastError());
        return;
    }

    proxyModelF->setSourceModel(famModel);

    connect(ui->famSearchLine, &QLineEdit::textChanged,[&](){   // Filtrovani dle prijmeni rodiny
        proxyModelF->setFilterKeyColumn(1);
        proxyModelF->setFilterFixedString(ui->famSearchLine->text());
        //qDebug() << ui->famSearchLine->text();
    });

    connect(ui->husSearchLine, &QLineEdit::textChanged,[&](){   // Filtrovani dle jmena manzela
        proxyModelF->setFilterKeyColumn(2);
        proxyModelF->setFilterFixedString(ui->husSearchLine->text());
        //qDebug() << ui->husSearchLine->text();
    });

    connect(ui->wifeSearchLine, &QLineEdit::textChanged,[&](){  // Filtrovani dle jmena manzelky
        proxyModelF->setFilterKeyColumn(3);
        proxyModelF->setFilterFixedString(ui->wifeSearchLine->text());
        //qDebug() << ui->wifeSearchLine->text();
    });
    connect(ui->marrSearchLine, &QLineEdit::textChanged,[&](){  // Filtrovani dle data svatby
        proxyModelF->setFilterKeyColumn(4);
        proxyModelF->setFilterFixedString(ui->marrSearchLine->text());
        //qDebug() << ui->marrSearchLine->text();
    });
    connect(ui->divSearchLine, &QLineEdit::textChanged,[&](){   // Filtrovani dle data rozvodu
        proxyModelF->setFilterKeyColumn(5);
        proxyModelF->setFilterFixedString(ui->divSearchLine->text());
        //qDebug() << ui->divSearchLine->text();
    });

    // Nastaveni tabulkoveho zobrazeni pro seznam rodin
    ui->familyView->setModel(proxyModelF);
    ui->familyView->setSortingEnabled(true);
    ui->familyView->setColumnHidden(famModel->fieldIndex("id"), true);
    ui->familyView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->familyView->sortByColumn(0, Qt::AscendingOrder);
    for(int i = 1; i < 6; i++)
    {
        ui->familyView->setColumnWidth(i,135);
    }

    // Mapper pro propojeni QLineEdit a dat v tabulce lidi
    mapper = new QDataWidgetMapper(this);
    mapper->setModel(proxyModel);
    mapper->addMapping(ui->nameEdit, personModel->fieldIndex("firstname"));
    mapper->addMapping(ui->surnameEdit, personModel->fieldIndex("lastname"));
    mapper->addMapping(ui->birthEdit, personModel->fieldIndex("birth"));
    mapper->addMapping(ui->deathEdit, personModel->fieldIndex("death"));
    connect(ui->personView->selectionModel(),&QItemSelectionModel::currentRowChanged,mapper,&QDataWidgetMapper::setCurrentModelIndex);

    // Propojeni dalsich QLineEdit s daty z tabulky rodin
    connect(ui->personView->selectionModel(),&QItemSelectionModel::currentRowChanged,[&](){
        int index = ui->personView->currentIndex().row();
        int famc = personModel->record(index).value("famc").toInt() - 1;
        int fams = personModel->record(index).value("fams").toInt() - 1;
        int fams2 = personModel->record(index).value("fams2").toInt() - 1;
        //qDebug() << index << " " << famc << " mother " << famModel->record(famc).value("firstname").toString();
        ui->parent1Edit->setText(famModel->record(famc).value("firstname").toString());
        ui->parent2Edit->setText(famModel->record(famc).value("people_firstname_2").toString());
        if(personModel->record(index).value("sex").toBool() == true) // sex == F
        {
            ui->hwEdit->setText(famModel->record(fams).value("people_firstname_2").toString());
            ui->hw2Edit->setText(famModel->record(fams2).value("people_firstname_2").toString());
        }
        else
        {
            ui->hwEdit->setText(famModel->record(fams).value("firstname").toString());
            ui->hw2Edit->setText(famModel->record(fams2).value("firstname").toString());
        }
    });

    QAction::connect((ui->insertRowButton),QPushButton::clicked,[&](){  // Vlozi novy radek na prvni pozici - person
        personModel->insertRow(1);
    });

    QAction::connect((ui->removeRowButton),QPushButton::clicked,[&](){  // Vymaze radek z aktualni pozice - person
        int index = ui->personView->currentIndex().row();
        qDebug() << "Row index removed " << index;
        personModel->removeRow(index);
        personModel->submitAll();
        QMessageBox::information(this, "Row removed", "Removed row: " + index);
    });

    QAction::connect((ui->insertRowButton_2),QPushButton::clicked,[&](){    // Vlozi novy radek na prvni pozici - family
        famModel->insertRow(1);
    });

    QAction::connect((ui->removeRowButton_2),QPushButton::clicked,[&](){    // Vymaze radek z aktualni pozice - family
        int index = ui->familyView->currentIndex().row();
        famModel->removeRow(index);
        famModel->submitAll();
        QMessageBox::information(this, "Row removed", "Removed row: " + index);
    });

    QAction::connect((personModel),QSqlRelationalTableModel::dataChanged,[&](){ // Pocet lidi ve statistikach
        ui->recNum->setText(QString::number(personModel->rowCount()));
    });

    QAction::connect((famModel),QSqlRelationalTableModel::dataChanged,[&](){    // Pocet rodin ve statistikach
        ui->famNum->setText(QString::number(famModel->rowCount()));
    });

    // Pocatecni zobrazeni
    ui->recNum->setText(QString::number(personModel->rowCount()));
    ui->famNum->setText(QString::number(famModel->rowCount()));
    ui->personView->setCurrentIndex(proxyModel->index(0, 0));
    ui->personView->selectRow(0);
}

void Window::showError(const QSqlError &err)
{
    QMessageBox::critical(this, "Initialization error", "Error: " + err.text());
}

// Funkce ktera se stara o veskere zavreni, ulozeni a vymazani zobrazovanych dat
void Window::closeView()
{
    if((info.isEmpty() == false)||(database.isOpen()))
    {
        personModel->submitAll(); famModel->submitAll();
        info.clear();
        personModel->clear();
        famModel->clear();
        delete famModel; delete personModel;
        delete proxyModel; delete proxyModelF;
        database.close();
        mapper->clearMapping();
        ui->nameEdit->clear(); ui->surnameEdit->clear(); ui->birthEdit->clear(); ui->deathEdit->clear();
        ui->parent1Edit->clear(); ui->parent2Edit->clear(); ui->hwEdit->clear(); ui->hw2Edit->clear();
        ui->recNum->clear(); ui->famNum->clear(); ui->sourceStat->clear();
        delete mapper;
    }
    else
    {
        //qDebug() << "Everything is closed";
    }
    //qDebug() << "Database after : " << database.isOpen();
    //qDebug() << "File info after: " << info.isEmpty();
}

Window::~Window()
{
    closeView();
    delete ui;
}


