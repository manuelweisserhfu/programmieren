#include <stdio.h>
#include <cmath>


int main(int argc, char* argv[]) {

    int monat, jahr, tage;

    printf("\tMonat eingeben: ");
    scanf("%i", &monat);

    printf("\tJahr eingeben: ");
    scanf("%i", &jahr);

    switch(monat) {
        case 1: 
            tage = 31;
            break;
        case 2: 
            if (jahr % 400 == 0 || jahr % 4 == 0 && jahr % 100 != 0) {
                tage = 29;
            } else {
                tage = 28;
            }
            break;
        case 3: 
            tage = 31;
            break;
        case 4: 
            tage = 30;
            break;
        case 5: 
            tage = 31;
            break;
        case 6: 
            tage = 30;
            break;
        case 7: 
            tage = 31;
            break;
        case 8: 
            tage = 31;
            break;
        case 9: 
            tage = 30;
            break;
        case 10: 
            tage = 31;
            break;
        case 11: 
            tage = 30;
            break;
        case 12: 
            tage = 31;
            break;
        default:
            printf("Monat %i existiert nicht", monat);
            return 1;
    }

    printf("Monat %i in %i hat %i Tage", monat, jahr, tage);

    return 0;
}