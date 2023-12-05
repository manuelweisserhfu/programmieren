#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int berechne(char op, int v1, int v2) {
    switch (op) {
        case '+':
            return v1 + v2;
        case '-':
            return v1 - v2;
        case 'x':
            return v1 * v2;
        case '/':
            return v1 / v2;
        default: 
            return -999;
    }
}

int main(int argc, char* argv[]) {

    int v1, v2;
    char* op;

    if (argc != 4) {
        printf("Anzahl Argumente ist falsch");
        return 1;
    }

    op = argv[1];

    if (strlen(op) != 1 || (op[0] != '+' && op[0] != '-' && op[0] != 'x' && op[0] != '/')) {
        printf("Ung\x81ltiger Operator '%s'", argv[1]);
        return 1;
    }

    v1 = atoi(argv[2]);
    v2 = atoi(argv[3]);

    if (op[0] == '/' && v2 == 0) {
        printf("Durch 0 teilen ist nicht definiert.");
        return 1;
    }

    int result = berechne(op[0], v1, v2);

    printf("Ergebnis: %i", result);

    return 0;
}