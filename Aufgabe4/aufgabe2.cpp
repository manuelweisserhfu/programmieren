#include <stdio.h>
#include <cmath>


int main(int argc, char* argv[]) {

        char code[14] = "9783446864704";
        int checksum = 0;

        for (int i = 0; i < 13; i++) {
            int num = code[i] - 48;
            if (i % 2 == 0) {
                checksum += num;
            } else {
                checksum += num * 3;
            }
        }

        if (checksum % 10 == 0) {
            printf("ISBN bzw. EAN %s mit Pruefnummer %i ist korrekt.", code, checksum);
        } else {
            printf("ISBN bzw. EAN %s mit Pruefnummer %i ist falsch.", code, checksum);
        }

    return 0;
}