#include <cmath>
#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {

    char str1[64];
    char str2[64];
    printf("Zeichenkette 1: ");
    //scanf("%s", &str1);
    std::cin >> str1;
    printf("Zeichenkette 2: ");
    scanf("%s", &str2);

    char out1[128];
    char out2[128];

    strcat(out1, str1);
    strcat(out1, str2);
    printf("strcat: %s\n", out1);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("custom: ");

    for (int i = 0; i < len1; i++) {
        out2[i] = str1[i];
        printf("%c", str1[i]);
    }
    for (int i = 0; i < len2; i++) {
        out2[i + len1] = str2[i];
        printf("%c", str2[i]);
    }

    return 0;

}