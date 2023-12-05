#include <stdio.h>
#include <limits>

int main() {
    
    printf("%i ", sizeof(char));
    printf("\n%i ", sizeof(short));
    printf("\n%i ", sizeof(int));
    printf("\n%i ", sizeof(long));
    printf("\n%i ", sizeof(long long));
    printf("\n%i ", sizeof(float));
    printf("\n%i ", sizeof(double));
    printf("\n%i ", sizeof(long double));
    printf("\n%i ", sizeof(bool));

    return 0;
}