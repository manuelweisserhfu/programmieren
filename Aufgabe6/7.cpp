#include <stdio.h>
#include <string.h>
#include <cmath>
#include <string>

int strlength(const char *input) {
    int index = 0;
    int length = 0;

    while (input[index++] != 0) {
        length++;
    }

    return length;
}

int vorkommen(const char *s, const char *m) {
    int cnt = 0;
    int len, sublen;

    len = strlength(s);
    sublen = strlength(m);

    for (int i = 0; i < len - sublen + 1; i++) {
        for (int j = 0; j < sublen; j++) {
            if (s[i + j] != m[j]) break;
            else if (j == sublen - 1) cnt++;
        }
    }

    return cnt;
}

int main() {

    char string[100], substring[100];

    printf("String: ");
    fgets(string, sizeof(string), stdin);
    printf("Substring: ");
    fgets(substring, sizeof(substring), stdin);

    string[strlength(string) - 1] = '\0';
    substring[strlength(substring) - 1] = '\0';

    int occurences = vorkommen(string, substring);

    printf("%i", occurences);

    return 0;

}