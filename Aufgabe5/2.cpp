#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {

    int arr[100];
    int count[51] = { };

    srand(time(0));

    for (int i = 0; i < 100; i++) {
        // Anzahl aller möglichen Ergebnisse von rand() = 32768
        arr[i] = (rand() / 32768.0) * 51; // random int >= 0 && <= 50
        printf("%i ", arr[i]);
        count[arr[i]]++;
    }

    printf("\n\n");

    for (int i = 0; i < 51; i++) {
        printf("%i ", count[i]);
    }

}