#include <stdio.h>

int main() {
    
    int i;
    long ell;
    float f;
    double d;

    d = 100/3; f = d; ell = f; i = ell;
    printf("%lf\n%lf\n%i\n%i\n\n", d, f, ell, i);

    d = 100/3.0; f = d; ell = f; i = ell;
    printf("%lf\n%lf\n%i\n%i\n\n", d, f, ell, i);

    d = (float)100/3.0; f = d; ell = f; i = ell;
    printf("%lf\n%lf\n%i\n%i\n\n", d, f, ell, i);

    d = 0.1; f = d; ell = f; i = ell;
    printf("%lf\n%lf\n%i\n%i\n\n", d, f, ell, i);


    return 0;
}