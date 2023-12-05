#include <stdio.h>
#include <ctype.h>
#include <cstring>

void stat(char* str) {
    int len = strlen(str);
    int chars = 0;
    int chars_since_word = 0;
    int words = 0;
    for (int i = 0; i < len; i++) {
        if (isspace(str[i])) {
            if (chars_since_word != 0) {
                words++;
                chars_since_word = 0;
            }
        }
        else {
            chars++;
            chars_since_word++;
        }  
    }
    if (chars != 0) words++;
    printf("Anzahl Zeichen: %i\n", chars);
    printf("Anzahl Worte: %i\n", words);
}

int main() {

    char str[100];

    printf("String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    stat(str);

    return 0;
}