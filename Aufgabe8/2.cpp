#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Punkt {
    int x;
    int y;
};

int main() {
    
    srand(time(NULL));

    Punkt arr[50];

    const int MAX_X = 2000;
    const int MAX_Y = 1000;

    for (int i = 0; i < 50; i++) {
        arr[i].x = rand() % MAX_X;
        arr[i].y = rand() % MAX_Y;
    }

    int min_x = MAX_X;
    int min_y = MAX_Y;
    int min_x_index, min_y_index;

    for (int i = 0; i < 50; i++) {
        if (arr[i].x < min_x) {
            min_x = arr[i].x;
            min_x_index = i;
        }
        if (arr[i].y < min_y) {
            min_y = arr[i].y;
            min_y_index = i;
        }
    }

    printf("Kleinster X-Wert ist %i bei Index %i\n", min_x, min_x_index);
    printf("Kleinster Y-Wert ist %i bei Index %i", min_y, min_y_index);

    return 0;
}