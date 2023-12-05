#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {

    int arr[20];
    int sum_odd = 0;
    int sum_even = 0;

    srand(time(0));

    for (int i = 0; i < 20; i++) {
        arr[i] = rand();
        printf("%i ", arr[i]);

        if (arr[i] % 2 == 1) {
            sum_odd += arr[i];
        } else {
            sum_even += arr[i];
        }
    }

    printf("\n");
    printf("\nSumme ungerade: %i", sum_odd);
    printf("\nSumme gerade: %i", sum_even);

}