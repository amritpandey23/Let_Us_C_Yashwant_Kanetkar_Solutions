#include <stdio.h>
#include <math.h>

float dist(int, int, int, int);

int main() {
    int x[10], y[10];
    float distance = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", x[i], y[i]);
        if (i > 0) {
            distance += dist(x[i], y[i], x[i - 1], y[i - 1]);
        }
    }
    printf("Distance = %f\n", distance);
    return 0;
}

float dist(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
