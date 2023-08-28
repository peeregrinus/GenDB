# ppc_project
Genealogy research program

Tato aplikace vznikla jako semestrální projekt pro předmět PPC. 
Mým záměřem bylo vytvořit program, který (mi) bude sloužit jako pomocný nástroj v genealogickém výzkumu. Existující programy (např. MyHeritage, Ancestry) skvěle fungují pro stromové zobrazování členů rodiny. To však není ideální pro výzkum, spolu s velkým obsahem doplňujícíh (zbytečných) informací.

Program umí importovat soubor formátu GEDCOM, otevřít již existující databázi nebo vytvořit zcela novou. Data jsou zobrazena ve dvou tabulkách, kde první je pro zobrzení osob a druhá pro zobrazení rodin. Na pravém boku se nachází detailní informace o aktuálně zvolené osobě a zatím stručná statistika o záznamech v databázi.

Krátké informace o základních funkcích

Program pracuje s univerzálním formátem souboru pro databáze .db pomocí modulu SQLite. Při vytvoření nové databáze nebo importování z formátu GEDCOM se vytvoří databáze obsahující dvě tabulky - pro osoby a rodiny. Tabulka osob má devět sloupců - ID (int), SEX (bool), FIRSTNAME (varchar), LASTNAME (varchar), BIRTH (date), DEATH (date), FAMC (int), FAMS (int), FAMS2 (int). 
Tabulka rodin má šest sloupců - ID (int), SURNAME (varchar), HUSBAND (int), WIFE (int), MARRIAGE (date), DIVORCE (date). Otveřením nekompatabilního formátu databáze by nedošlo ke správnému načtení, proto je zde možnost vytvořit prázdnou databázi.
Během importování z genealogického formátu se data rozparsují a získají se z nich nejdůležitější informace (viz struktura databáze). Problematické je načítání datumů, které v GEDCOM souboru může být uloženo například jako neurčité, nebo zadané v určitém intervalu. Tuto možnost však tato aplikace zatím nepodporuje a vždy vytvoří plnohodnotné datum (i když je zadán jen rok 1971 = 1.1.1971).
Zobrazení dat probíhá pomocí QSqlRelationalTableModel, QSortFilterProxyModel a QTableView.

Nápady na vylepšení
- Protože je datum v SQLite uloženo jako textový řetězec, mohlo by se datum parsovat pomocí QRegExpression. Tím by vznikla možnost načítat a ukládat i datumy, které nejsou plnohodnotné.
- Místo filtrů datumů vytvořít rozevírací widgety kalendáře, které by filtrovali data v zadaném rozmezí. Bohužel s existujícím widgetem kalendáře toto nelze, které nešlo přenastavit na starší datum než 14.09.1752.
- Načítat více údajů do tabulek, které by mohli být potřebné (např. bydliště, zaměstnání).
