#include <stdio.h>

int berechne(char op, int v1, int v2) {
    switch (op) {
        case '+':
            return v1 + v2;
        case '-':
            return v1 - v2;
        case '*':
            return v1 * v2;
        case '/':
            return v1 / v2;
        default: 
            return -999;
    }
}

int main() {

    int v1, v2;
    char* op;

    printf("Rechnung: ");
    scanf("%i %s %i", &v1, op, &v2);

    int result = berechne(op[0], v1, v2);

    printf("Ergebnis: %i", result);

    return 0;
}