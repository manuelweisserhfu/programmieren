#include <stdio.h>


int main() {

    int m = 9;
    int n = 10;

    int *pm = &m;
    int *pn = &n;

    int temp = *pm;

    *pm = *pn;
    *pn = temp;

    printf("m = %i, n = %i", m, n);
    return 0;

}