#include <stdio.h>

int main(int argc, char* argv[]) {

    int x = 8;
    int f;

    printf("\tZahl eingeben: ");
    scanf("%i", &x);

    if (x < 0) f = -1;
    else if (x == 0) f = 0;
    else f = 1;

    printf("f(%i)=%i\n", x, f);

    return 0;
}