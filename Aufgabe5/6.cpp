#include <cmath>
#include <stdio.h>
#include <string.h>

int main() {

    char str[64];
    printf("Zeichenkette: ");
    scanf("%s", &str);

    //printf("%s", strrev(str));

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    for (int i = 0; i < length; i++) {
        printf("%c", str[i]);
    }

    return 0;

}