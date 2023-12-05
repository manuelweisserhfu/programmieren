#include <cmath>
#include <stdio.h>

int main() {

    int input;
    int binary[32];
    printf("Ganzzahl: ");
    scanf("%i", &input);
    
    int num = std::abs(input);
    int exp = 0;

    while (pow(2, exp) <= num / 2) exp++;

    for (int i = exp; i >= 0; i--) {
        int bin_val = pow(2, i);
        if (num >= bin_val) {
            binary[exp - i] = 1;
            num -= bin_val;
        } else {
            binary[exp - i] = 0;
        }
    }   

    for (int i = 0; i <= exp; i++) {
        printf("%i", binary[i]);
    }

}