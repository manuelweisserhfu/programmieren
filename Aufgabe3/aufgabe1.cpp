#include <stdio.h>

int main(int argc, char* argv[]) {

    unsigned int jahr = 2024;

    if (jahr % 400 == 0 || jahr % 4 == 0 && jahr % 100 != 0) {
        printf("Das Jahr %u ist ein Schaltjahr", jahr);
    } else {
        printf("Das Jahr %u ist kein Schaltjahr", jahr);
    }

    return 0;
}