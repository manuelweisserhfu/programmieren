#include <stdio.h>
#include <string.h>
#include <cmath>

void zp(int a, int b) {
    int exp = 0;
    int pot = 0;
    while (pot <= b / 2) {
        pot = pow(2, exp++);
        if (pot < a) continue;
        printf("%i\n", pot);
    }
    return;
}

int main() {

    int min, max;
    printf("Min: ");
    scanf("%i", &min);
    printf("Max: ");
    scanf("%i", &max);

    zp(min, max);

    return 0;

}