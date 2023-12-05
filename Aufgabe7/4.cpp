#include <stdio.h>
#include <cmath>

bool prim(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {

    int x;

    printf("Zahl: ");
    scanf("%i", &x);

    printf("%i ist %s Primzahl", x, prim(x) ? "eine" : "keine");

    return 0;
}