#include <stdio.h>


int main() {

    char input[100];
    printf("String: ");
    scanf("%s", &input);

    char *p = &input[0];
    int length = 0;

    while (*p++ != 0) length++;

    printf("Stringlaenge: %i", length);

    return 0;

}