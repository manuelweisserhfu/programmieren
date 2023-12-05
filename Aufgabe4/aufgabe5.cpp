#include <stdio.h>
#include <cmath>


int main(int argc, char* argv[]) {

    int zeile, spalte;

    for (zeile = 1; zeile <= 20; zeile++) {
        for (spalte = 20; spalte >= zeile; spalte--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}