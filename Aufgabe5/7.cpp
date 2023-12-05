#include <cmath>
#include <stdio.h>
#include <string.h>
#include <cctype>


int main() {

    char str[64];
    printf("Zeichenkette: ");
    scanf("%s", &str);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        switch (tolower(str[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': break;
            default: printf("%c", str[i]);
        }
    }

    return 0;

}