#include <stdio.h>

int main(int argc, char* argv[]) {

    unsigned int x = 8;

    printf("\tZahl eingeben: ");
    scanf("%i", &x);

    if (x >= 128) {
        printf("%i", 1);
        x -= 128;
    } else {
        printf("%i", 0);
    }

    if (x >= 64) {
        printf("%i", 1);
        x -= 64;
    } else {
        printf("%i", 0);
    }

    if (x >= 32) {
        printf("%i", 1);
        x -= 32;
    } else {
        printf("%i", 0);
    }

    if (x >= 16) {
        printf("%i", 1);
        x -= 16;
    } else {
        printf("%i", 0);
    }

    if (x >= 8) {
        printf("%i", 1);
        x -= 8;
    } else {
        printf("%i", 0);
    }

    if (x >= 4) {
        printf("%i", 1);
        x -= 4;
    } else {
        printf("%i", 0);
    }

    if (x >= 2) {
        printf("%i", 1);
        x -= 2;
    } else {
        printf("%i", 0);
    }

    if (x >= 1) {
        printf("%i", 1);
        x -= 1;
    } else {
        printf("%i", 0);
    }

    

    return 0;
}