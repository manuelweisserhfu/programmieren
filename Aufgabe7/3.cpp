#include <stdio.h>

long ggt_while(long x, long y) {
    while (x != y) {
        if (x > y) x -= y;
        else y -= x;
    }
    return x;
}

long ggt_recursive(long x, long y) {
    if (x == y) return x;
    else if (x > y) return ggt_recursive(x - y, y);
    else return ggt_recursive(x, y - x);
}

int main() {

    long v1, v2;

    printf("Zahl 1: ");
    scanf("%ld", &v1);
    printf("Zahl 2: ");
    scanf("%ld", &v2);

    long result_while = ggt_while(v1, v2);
    printf("Ergebnis while: %ld\n", result_while);

    long result_recursive = ggt_recursive(v1, v2);
    printf("Ergebnis recursive: %ld", result_recursive);

    return 0;
}