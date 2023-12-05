#include <cmath>
#include <stdio.h>
#include <string.h>

int main() {

    char str1[64];
    char str2[64];
    printf("Zeichenkette 1: ");
    scanf("%s", &str1);
    printf("Zeichenkette 2: ");
    scanf("%s", &str2);

    int len = strlen(str1);

    if (len != strlen(str2)) {
        printf("%s != %s", str1, str2);
        return 1;
    }

    for (int i = 0; i < len; i++) {
        if (str1[i] != str2[i]) {
            printf("%s != %s", str1, str2);
            return 1;
        }
    }
 
    printf("%s == %s", str1, str2);
    return 0;

}