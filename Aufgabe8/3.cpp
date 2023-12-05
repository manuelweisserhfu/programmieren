#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

enum Monat {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

struct Datum {
    int tag;
    Monat monat;
    int jahr;
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

void druckeDatum(Datum d) {
    printf("%i. %s %i\n", d.tag, month(d.monat), d.jahr);
}

void druckeDatum(Datum* d) {
    printf("%i. %s %i\n", d->tag, month(d->monat), d->jahr);
}

void druckeDatum2(Datum& d) {
    printf("%i. %s %i\n", d.tag, month(d.monat), d.jahr);
}


int main() {
    
    Datum date;

    date.tag = 7;
    date.monat = Dec;
    date.jahr = 2023;

    druckeDatum(date);
    druckeDatum(&date);
    druckeDatum2(date);

    return 0;
}