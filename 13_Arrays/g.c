#include <stdio.h>
#include <limits.h>
#include <math.h>

#define MAX(a, b) (a > b ? a : b)

float largestArea = INT_MIN;

void calcArea(float[], int, float, float, float);

int main() {
    float Ans[6];
    calcArea(Ans, 1, 137.4, 80.9, 0.78);
    calcArea(Ans, 2, 155.2, 92.62, 0.89);
    calcArea(Ans, 3, 149.3, 97.93, 1.35);
    calcArea(Ans, 4, 160.0, 100.25, 9.00);
    calcArea(Ans, 5, 155.6, 68.95, 1.25);
    calcArea(Ans, 6, 149.7, 120.0, 1.75);
    printf("Largest Area = %f\n", largestArea);
    return 0;
}

void calcArea(float Ans[], int p, float a, float b, float ang) {
    Ans[p - 1] = 0.5 * a * a * sin(ang);
    largestArea = MAX(largestArea, Ans[p - 1]);
}
