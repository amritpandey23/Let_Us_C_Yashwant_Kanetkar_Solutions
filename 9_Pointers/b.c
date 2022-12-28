#include <stdio.h>
#include <math.h>

float area(int, int, int);

int main() {
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Area of triangle = %lf\n", area(a, b, c));
    return 0;
}

float area(int a, int b, int c) {
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
