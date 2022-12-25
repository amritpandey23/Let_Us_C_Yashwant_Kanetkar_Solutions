#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    float r, theta;
    printf ("Enter (x, y): ");
    scanf("%d %d", &x, &y);
    r = sqrt(x * x + y * y);
    theta = tanh(y / x);
    printf("Polar Coordinates = %f, %f\n", r, theta);
    return 0;
}
