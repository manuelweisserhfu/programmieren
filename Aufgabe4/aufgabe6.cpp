#include <stdio.h>
#include <cmath>
#include <string.h>

int main(int argc, char* argv[]) {

    int zahl;
    int max_exp = 1;

    printf("Zahl eingeben: ");
    scanf("%i", &zahl);

    while (zahl < 0) {
        printf("Zahl muss > 0 sein: ");
        scanf("%i", &zahl);
    }

    while (true) {
        if (pow(2, max_exp) > zahl) {
            max_exp--;
            break;
        };
        max_exp++;
    }

    char binary[32] = {0};

    for (int exp = max_exp; exp >= 0; exp--) {
        int curr_pos = pow(2, exp);
        if (zahl >= curr_pos) {
            binary[exp] = '1';
            zahl -= curr_pos;
        } else {
            binary[exp] = '0';
        }
    }
    
    for (int i = 0; i <= max_exp; i++) {
        printf("%c", binary[i]);
    }

    return 0;
}