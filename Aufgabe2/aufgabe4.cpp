#include <stdio.h>

int main() {
    
    printf("%i\n", 2 << 1 >> 1); // == 2 ^ 1
    printf("%i\n", 2 << 10 >> 6); // == 2 ^ 5
    printf("%i\n\n", 2 << 1 >> 2); // == 2 ^ 0

    printf("%i\n\n", 64 >> 3); // == 2 ^ 3

    return 0;
}