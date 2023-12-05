#include <stdio.h>
#include <cmath>


int main(int argc, char* argv[]) {

    unsigned int a = 2;
    unsigned int index = 1;
    double x = 1;
    double old = 0;

    //for (int i = 1; i <= 10; i++) {
    //    x = (x + (a/x)) / 2;
    //    printf("x%i: Wurzel %i ist naeherungsweise %.10f\n", i, a, x);
    //}

    do {
        old = x;
        x = (x + (a/x)) / 2;
        printf("x%i: Wurzel %i ist naeherungsweise %.10f\n", index++, a, x);
    } while (fabs(x - old) >= 0.000001);
    // fabs() gibt Betrag für floating points, abs() für int


    return 0;
}