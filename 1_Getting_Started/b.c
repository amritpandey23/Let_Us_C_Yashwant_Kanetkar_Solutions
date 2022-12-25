#include <stdio.h>
#include <math.h>

int main() {
    int r, l, b, per, ar;
    float ar_c;
    printf("Breadth of rectangle: ");
    scanf("%d", &b);
    printf("\n");
    printf("Length of rectangle: ");
    scanf("%d", &l);
    printf("\n");
    printf("Radius of circle: ");
    scanf("%d", &r);
    printf("\n");
    per = 2 * (l + b);
    ar = l * b;
    ar_c = M_PI * r * r;
    printf("Perimeter of Rectangle = %d\n", per);
    printf("Area of Rectangle = %d\n", ar);
    printf("Area of Circle = %f\n", ar_c);
    return 0;
}