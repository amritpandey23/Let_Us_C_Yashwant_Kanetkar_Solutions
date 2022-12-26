#include <stdio.h>
#define MEAN(a, b) ((a + b) / 2.0)
#define ABS(a) (a > 0 ? a : -a)
#define TOLOWER(a) (a + 32)
#define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))

int main() {
    printf("mean of 2 and 3 = %f\n", MEAN(2, 3));
    printf("abs value of -2 = %d\n", ABS(-2));
    printf("lower of A = %c\n", TOLOWER('A'));
    printf("MAX of 1, 2, 3 = %d\n", MAX(1, 2, 3));
    return 0;
}
