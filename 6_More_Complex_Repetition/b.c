#include <stdio.h>

int main() {
    printf("Y\tX\tI\n");
    for (int y = 1; y <= 6; ++y) {
        for (float x = 5.5; x <= 12.5; x+=0.5) {
            printf("%d\t%f\t%f\n", y, x, 2 + y + 0.5 * x);
        }
    }
    return 0;
}
