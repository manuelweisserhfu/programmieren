#include <stdio.h>

enum Monat {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

struct Datum {
    int tag;
    Monat monat;
    int jahr;
};

const int m_to_int(Monat m) {
    switch (m) {
        case Monat::Jan: return 1;
		case Monat::Feb: return 2;
		case Monat::Mar: return 3;
		case Monat::Apr: return 4;
		case Monat::May: return 5;
		case Monat::Jun: return 6;
		case Monat::Jul: return 7;
		case Monat::Aug: return 8;
		case Monat::Sep: return 9;
		case Monat::Oct: return 10;
		case Monat::Nov: return 11;
		case Monat::Dec: return 12;
		default: return -1;
    }
}

bool bevor(const Datum& a, const Datum& b) {
    if (a.jahr < b.jahr) return true;
    else if (m_to_int(a.monat) < m_to_int(b.monat)) return true;
    else if (a.tag < b.tag) return true;
    return false;
}

int main() {
    Datum date1, date2;

    date1 = {20, Jan, 1998};
    date2 = {20, Jan, 1998};

    printf("Datum 1 liegt %s Datum 2\n", bevor(date1, date2) ? "vor" : "nicht vor");

    date1 = {19, Jan, 1998};
    date2 = {20, Jan, 1998};

    printf("Datum 1 liegt %s Datum 2\n", bevor(date1, date2) ? "vor" : "nicht vor");

    date1 = {25, Aug, 1998};
    date2 = {20, Mar, 1998};

    printf("Datum 1 liegt %s Datum 2\n", bevor(date1, date2) ? "vor" : "nicht vor");

    date1 = {20, Jan, 1998};
    date2 = {20, Jan, 2010};

    printf("Datum 1 liegt %s Datum 2\n", bevor(date1, date2) ? "vor" : "nicht vor");

}