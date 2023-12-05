#include <stdio.h>

struct Punkt {
    int x;
    int y;
};

int main() {
    Punkt p1 = {100, 32};
    Punkt p2 = {44, 31};
    Punkt p3;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    return 0;
}