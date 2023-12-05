#include <stdio.h>

int hoch2(int x) {
    return x * x;
}

int main() {

    for (int i = 0; i < 20; i++) {
        printf("hoch2(%i) = %i\n", i, hoch2(i));
    }

    return 0;

}