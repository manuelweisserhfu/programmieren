#include <cmath>
#include <stdio.h>
#include <string.h>

int main() {

    char str[64];
    printf("Zeichenkette: ");
    scanf("%s", &str);
    //fgets(str, 64, stdin);

    int length = 0;
    int str_len = strlen(str);

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Stringlaenge: %i\n", length);
    printf("strlen: %i", str_len);

}