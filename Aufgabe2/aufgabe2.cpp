#include <stdio.h>

int main() {
    
    int x,y;
    printf("\n Etwas Arithmetik ...\n\n");
    printf("\t 1. Zahl eingeben: ");
    scanf("%i", &x);
    printf("\t 2. Zahl eingeben: ");
    scanf("%i", &y);
    printf("\n");
    printf("\t %i + %i ist %i\n", x, y, x+y);
    printf("\t %i - %i ist %i\n", x, y, x-y);
    printf("\t %i * %i ist %i\n", x, y, x*y);
    printf("\t %i / %i ist %f\n", x, y, (float)x/y);
    printf("\t %i %% %i ist %i\n", x, y, x%y);
    return 0;
}