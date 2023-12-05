#include <stdio.h>
#include <string.h>
#include <iostream>

enum Monat {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

struct Datum {
    int tag;
    Monat monat;
    int jahr;
};

struct Person {
    char name[50];
    char vorname[50];
    Datum geburtsdatum;
};

const char* month(Monat m) {
    switch (m) {
        case Monat::Jan: return "Januar";
		case Monat::Feb: return "Februar";
		case Monat::Mar: return "Maerz";
		case Monat::Apr: return "April";
		case Monat::May: return "Mai";
		case Monat::Jun: return "Juni";
		case Monat::Jul: return "Juli";
		case Monat::Aug: return "August";
		case Monat::Sep: return "September";
		case Monat::Oct: return "Oktober";
		case Monat::Nov: return "November";
		case Monat::Dec: return "Dezember";
		default: return "falsch";
    }
}

void findeGeburtsdatum(const char* name, const char* vorname, Person* db, int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        if (!strcmp(name, db[i].name)) {
            printf("%s %s wurde am %i. %s %i geboren.\n", db[i].vorname, db[i].name, db[i].geburtsdatum.tag, month(db[i].geburtsdatum.monat), db[i].geburtsdatum.jahr);
            return;
        }
    }
    printf("Kein passenden Eintrag gefunden.");
    return;
} 

int main() {
    Person db[5] = {
        {"Newton", "Isaac", {4, Jan, 1643}},
        {"Leibniz", "Gottfried", {1, Jul, 1646}},
        {"Einstein", "Albert", {14, Mar, 1879}},
        {"Curie", "Marie", {7, Nov, 1867}},
        {"Gandhi", "Mahatma", {2, Oct, 1869}}
    };

    int personenzahl = 5;

    findeGeburtsdatum("Newwton", "Isaac", db, personenzahl);

};