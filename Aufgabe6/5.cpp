#include <stdio.h>
#include <string.h>

void dreh (const char *s) {
    int len = strlen(s);
    char reversed[len+1];
    reversed[len] = '\0';
    for (int i = 0; i < len; i++) {
        reversed[i] = s[len - i - 1];
    }
    printf("Reversed: %s", reversed);
    return;
}

int main() {

    char *in;
    printf("String: ");
    scanf("%s", in);

    dreh(in);

    return 0;

}