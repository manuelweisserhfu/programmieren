#include <stdio.h>
#include <cmath>


int main(int argc, char* argv[]) {

    int p, q;
    double x1, x2;

    printf("\tZahl p eingeben: ");
    scanf("%i", &p);

    printf("\tZahl q eingeben: ");
    scanf("%i", &q);

    double root = pow(p/2.0, 2) - q;

    if (root < 0) {
        printf("Wert unter Wurzel ist < 0, somit keine relle Loesung");
        return 0;
    }

    root = sqrt(root);

    x1 = (-p/2.0) + root;
    x2 = (-p/2.0) - root;

    printf("\nx1 ist %f\n", x1);
    printf("x2 ist %f\n", x2);

    double x1_check = pow(x1, 2.0) + p * x1 + q;
    printf("Gleichung ergibt %f fuer x1 %f eingesetzt\n", x1_check, x1);

    double x2_check = pow(x2, 2.0) + p * x2 + q;
    printf("Gleichung ergibt %f fuer x2 %f eingesetzt", x2_check, x2);

    return 0;
}