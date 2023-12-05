#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int Liste[40];
    int Minimum;
    int i;

        for (i = 0; i < 40; i++) {
        Liste[i] = rand();
    }

    Minimum = Liste[0];

    for (i = 1; i < 40; i++) {
        if (Liste[i] > Minimum) {
            Minimum = Liste[i];
        }
    } // ÄÄÄÄÄ

    printf("Das Minimum von ");
    for (i = 0; i < 40; i++) {
        printf("%i ", Liste[i]);
    }

    printf(" ist:\n%i \n", Minimum);
    printf("\n\n%i", Liste[55]);
    return 0;

}