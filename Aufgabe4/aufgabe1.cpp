#include <stdio.h>
#include <cmath>


int main(int argc, char* argv[]) {

        for (int zaehler = 0; zaehler != 10; zaehler = zaehler + 1) {}
        // 10 Durchläufe
        // zaehler = 0 -> 9

        for (int n = 10; n > 0; n = n - 1) {}
        // 10 Durchläufe
        // n = 10 -> 1

        for (int x = 1; x <= 15; x = x + 3) {}
        // 5 Durchläufe
        // x = 1, 4, 7, 10, 13

        for (int x = 1; x != 15; x = x + 3) {}
        // endlos
        // x = 1 + 3*n

        for (int x = 1; x == 15; x = x + 3) {}
        // 0 Durchläufe
        // x = 1

        for (char c = '5'; c <= '9'; c = c + 2) {}
        // 3 Durchläufe
        // c = 53, 55, 57

    return 0;
}