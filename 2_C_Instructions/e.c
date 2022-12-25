#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter angle : ");
    scanf("%d", &a);
    printf("Sin = %f\n", sin(a));
    printf("Cos = %f\n", cos(a));
    printf("Tan = %f\n", tan(a));
    printf("Cot = %f\n", 1 / tan(a));
    printf("Sec = %f\n", 1 / cos(a));
    printf("Cosec = %f\n", 1 / sin(a));
    return 0;
}
