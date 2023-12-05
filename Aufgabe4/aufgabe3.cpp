#include <stdio.h>
#include <cmath>


int main(int argc, char* argv[]) {

    int k[20] = {1, 1};

    for (int i = 2; i < 20; i++) {
        k[i] = k[i - 1] + k[i - 2];
        printf("f_%-3i=%6i %.15f\n", i + 1, k[i], (double)k[i]/k[i - 1]);
    }

    return 0;
}