#include <stdio.h>


int main() {

    int fib[50] = {1, 1};
    int *p = &fib[0];

    printf("f(1) = %i\n", *p);
    printf("f(2) = %i\n", *(p+1));

    for (int i = 2; i < 50; i++) {
        *(p + i) = *(p + i - 1) + *(p+ + i - 2);
        printf("f(%i) = %i\n", i + 1, *(p + i));
    }

    return 0;

}